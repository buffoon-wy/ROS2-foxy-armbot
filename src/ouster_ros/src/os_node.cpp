/**
 * @file
 * @brief Example node to publish raw sensor output on ROS topics
 *
 * ROS Parameters
 * sensor_hostname: hostname or IP in dotted decimal form of the sensor
 * udp_dest: hostname or IP where the sensor will send data packets
 * lidar_port: port to which the sensor should send lidar data
 * imu_port: port to which the sensor should send imu data
 */

//#include <rclcpp/console.h>
#include "rclcpp/rclcpp.hpp"
#include <iostream>   
#include <fstream>
#include <sstream>
#include <string>

#include "ouster/build.h"
#include "ouster/types.h"
#include "mymsgs/srv/os_config_srv.hpp"
#include "mymsgs/msg/packet_msg.hpp"

#include "../include/ouster_ros/ros.h"
using namespace std;
using PacketMsg = mymsgs::msg::PacketMsg;
using OSConfigSrv = mymsgs::srv::OSConfigSrv;
namespace sensor = ouster::sensor;
rclcpp::Node::SharedPtr nh;
std::string published_metadata;


// fill in values that could not be parsed from metadata
void populate_metadata_defaults(sensor::sensor_info& info,
                                sensor::lidar_mode specified_lidar_mode) {
    if (!info.name.size()) info.name = "UNKNOWN";

    if (!info.sn.size()) info.sn = "UNKNOWN";

    ouster::util::version v = ouster::util::version_of_string(info.fw_rev);
    if (v == ouster::util::invalid_version)
        RCLCPP_WARN(nh->get_logger(),"Unknown sensor firmware version; output may not be reliable");
    else if (v < sensor::min_version)
        RCLCPP_WARN(nh->get_logger(),"Firmware < %s not supported; output may not be reliable",
                 to_string(sensor::min_version).c_str());

    if (!info.mode) {
        RCLCPP_WARN(nh->get_logger(),
            "Lidar mode not found in metadata; output may not be reliable");
        info.mode = specified_lidar_mode;
    }

    if (!info.prod_line.size()) info.prod_line = "UNKNOWN";

    if (info.beam_azimuth_angles.empty() || info.beam_altitude_angles.empty()) {
        RCLCPP_WARN(nh->get_logger(),"Beam angles not found in metadata; using design values");
        info.beam_azimuth_angles = sensor::gen1_azimuth_angles;
        info.beam_altitude_angles = sensor::gen1_altitude_angles;
    }
}

// try to write metadata file
bool write_metadata(const std::string& meta_file, const std::string& metadata) {
    std::ofstream ofs;
    ofs.open(meta_file);
    ofs << metadata << std::endl;
    ofs.close();
    if (ofs) {
        RCLCPP_INFO(nh->get_logger(),"Wrote metadata to %s", meta_file.c_str());
    } else {
        RCLCPP_WARN(nh->get_logger(),
            "Failed to write metadata to %s; check that the path is valid. If "
            "you provided a relative path, please note that the working "
            "directory of all ROS nodes is set by default to $ROS_HOME",
            meta_file.c_str());
        return false;
    }
    return true;
}

int connection_loop(sensor::client& cli,const sensor::sensor_info& info) 
{
	
	rclcpp::Publisher<mymsgs::msg::PacketMsg>::SharedPtr lidar_packet_pub = nh->create_publisher<mymsgs::msg::PacketMsg>("lidar_packets", 1280);
	rclcpp::Publisher<mymsgs::msg::PacketMsg>::SharedPtr imu_packet_pub = nh->create_publisher<mymsgs::msg::PacketMsg>("imu_packets", 100);

    auto pf = sensor::get_format(info);

    PacketMsg lidar_packet, imu_packet;
    lidar_packet.buf.resize(pf.lidar_packet_size + 1);
    imu_packet.buf.resize(pf.imu_packet_size + 1);

    while (rclcpp::ok()) {
        auto state = sensor::poll_client(cli);
        if (state == sensor::EXIT) {
            RCLCPP_INFO(nh->get_logger(),"poll_client: caught signal, exiting");
            return EXIT_SUCCESS;
        }
        if (state & sensor::CLIENT_ERROR) {
            RCLCPP_ERROR(nh->get_logger(),"poll_client: returned error");
            return EXIT_FAILURE;
        }
        if (state & sensor::LIDAR_DATA) {
            if (sensor::read_lidar_packet(cli, lidar_packet.buf.data(), pf))
                lidar_packet_pub->publish(lidar_packet);
        }
        if (state & sensor::IMU_DATA) {
            if (sensor::read_imu_packet(cli, imu_packet.buf.data(), pf))
                imu_packet_pub->publish(imu_packet);
        }
        rclcpp::spin_some(nh);
    }
    return EXIT_SUCCESS;
}


bool callback(const std::shared_ptr<OSConfigSrv::Request>,
          std::shared_ptr<OSConfigSrv::Response> res)
{
	if (published_metadata.size()) 
	{
		res->metadata = published_metadata;
		return true;
	} else
		return false;
}

          
          
int main(int argc, char** argv) {
	rclcpp::init(argc, argv);
 	nh = rclcpp::Node::make_shared("os_node") ;
    	nh->declare_parameter("sensor_hostname");
    	nh->declare_parameter("udp_dest");
    	nh->declare_parameter("lidar_port");
    	nh->declare_parameter("imu_port");
    	nh->declare_parameter("lidar_mode");
    	nh->declare_parameter("timestamp_mode");
   	bool replay = false;
	std::string lidar_mode_arg = "512x10";
	std::string hostname = "10.5.5.86";
	std::string udp_dest = "10.5.5.1";
	int lidar_port = 7502;
	int imu_port = 7503;
	std::string timestamp_mode_arg = "";
	std::string meta_file = "date";
	
	rclcpp::Service<OSConfigSrv>::SharedPtr srv =nh->create_service<OSConfigSrv>("os_config", &callback);
      
    // empty indicates "not set" since roslaunch xml can't optionally set params
    	nh->get_parameter("sensor_hostname",hostname);
   	nh->get_parameter("udp_dest",udp_dest);
   	nh->get_parameter("lidar_port",lidar_port);
   	nh->get_parameter("imu_port",imu_port);
    	nh->get_parameter("lidar_mode",lidar_mode_arg);
    	nh->get_parameter("timestamp_mode",timestamp_mode_arg);
	nh->get_parameter("metadata", meta_file);
	
    // set lidar mode from param
    sensor::lidar_mode lidar_mode = sensor::MODE_UNSPEC;
    if (lidar_mode_arg.size()) 
    {
        if (replay) 
			RCLCPP_WARN(nh->get_logger(),"Lidar mode set in replay mode. May be ignored");

        lidar_mode = sensor::lidar_mode_of_string(lidar_mode_arg);
        if (!lidar_mode) {
            RCLCPP_ERROR(nh->get_logger(),"Invalid lidar mode %s", lidar_mode_arg.c_str());
            return EXIT_FAILURE;
        }
    }

    // set timestamp mode from param
    sensor::timestamp_mode timestamp_mode = sensor::TIME_FROM_UNSPEC;
    if (timestamp_mode_arg.size()) 
    {
        if (replay)
            RCLCPP_WARN(nh->get_logger(),"Timestamp mode set in replay mode. Will be ignored");

        timestamp_mode = sensor::timestamp_mode_of_string(timestamp_mode_arg);
        if (!timestamp_mode) {
            RCLCPP_ERROR(nh->get_logger(),"Invalid timestamp mode %s", timestamp_mode_arg.c_str());
            return EXIT_FAILURE;
        }
    }
  
    if (!meta_file.size()) 
    {
        if (replay) {
            RCLCPP_ERROR(nh->get_logger(),"Must specify metadata file in replay mode");
        } else {
            RCLCPP_ERROR(nh->get_logger(),"Must specify path for metadata output");
        }
        return EXIT_FAILURE;
    }

    if (!replay && (!hostname.size() || !udp_dest.size())) 
    {
        RCLCPP_ERROR(nh->get_logger(),"Must specify both hostname and udp destination");
        return EXIT_FAILURE;
    }

    RCLCPP_INFO(nh->get_logger(),"Client version: %s", ouster::CLIENT_VERSION_FULL);

	RCLCPP_INFO(nh->get_logger(),"Connecting to %s; sending data to %s", hostname.c_str(), udp_dest.c_str());
	RCLCPP_INFO(nh->get_logger(),"Waiting for sensor to initialize ...");

	auto cli = sensor::init_client(hostname, udp_dest, lidar_mode,timestamp_mode, lidar_port, imu_port);

	if (!cli) 
	{
		RCLCPP_ERROR(nh->get_logger(),"Failed to initialize sensor at: %s", hostname.c_str());
		return EXIT_FAILURE;
	}
	RCLCPP_INFO(nh->get_logger(),"Sensor initialized successfully");

	// write metadata file to cwd (usually ~/.ros)
	auto metadata = sensor::get_metadata(*cli);
    	if (!write_metadata(meta_file, metadata)) {
		RCLCPP_ERROR(nh->get_logger(),"Exiting because of failure to write metadata path");
		return EXIT_FAILURE;
	}

	// populate sensor info
	auto info = sensor::parse_metadata(metadata);
	populate_metadata_defaults(info, sensor::MODE_UNSPEC);
	published_metadata = to_string(info);

	RCLCPP_INFO(nh->get_logger(),"Using lidar_mode: %s", sensor::to_string(info.mode).c_str());
	RCLCPP_INFO(nh->get_logger(),"%s sn: %s firmware rev: %s", info.prod_line.c_str(), info.sn.c_str(), info.fw_rev.c_str());

	// publish packet messages from the sensor
	return connection_loop(*cli, info);
    
}
