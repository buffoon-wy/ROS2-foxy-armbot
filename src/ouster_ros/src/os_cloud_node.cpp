/**
 * @file
 * @brief Example node to publish point clouds and imu topics
 */

#include "rclcpp/rclcpp.hpp"
#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <tf2_ros/static_transform_broadcaster.h>

#include <algorithm>
#include <chrono>
#include <memory>

#include "ouster/lidar_scan.h"
#include "ouster/types.h"
#include "mymsgs/srv/os_config_srv.hpp"
#include "mymsgs/msg/packet_msg.hpp"
#include "./include/ouster_ros/ros.h"
#include "ouster/impl/parsing.h"

using PacketMsg = mymsgs::msg::PacketMsg;
using Cloud = ouster_ros::Cloud;
using Point = ouster_ros::Point;
namespace sensor = ouster::sensor;
using namespace std::chrono_literals;
using namespace std;
uint32_t H;
uint32_t W;
ouster::XYZLut xyz_lut;
sensor::sensor_info info;
std::string sensor_frame;
std::string imu_frame;
std::string lidar_frame;
rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr lidar_pub;
rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub; 
bool flag = true;


void lidar_handler(const PacketMsg::SharedPtr pm)                
{	

	
		static auto pf = sensor::get_format(info);
		static Cloud cloud{W,H};
		static ouster::LidarScan ls{W, H};
    	static ouster::ScanBatcher batch(W, pf);

		flag  = false;
	
	
	if (batch(pm->buf.data(), ls)) 
	{
		auto h = std::find_if(
			ls.headers.begin(), ls.headers.end(), [](const auto& h) {
				return h.timestamp != std::chrono::nanoseconds{0};
			});
		if (h != ls.headers.end()) {

			scan_to_cloud(xyz_lut, h->timestamp, ls, cloud);
			lidar_pub->publish(ouster_ros::cloud_to_cloud_msg(
				cloud, h->timestamp, sensor_frame));
		}
	}
}

void imu_handler(const PacketMsg::SharedPtr p)                   
{
	static auto pf = sensor::get_format(info);
	imu_pub->publish(ouster_ros::packet_to_imu_msg(*p, imu_frame, pf));
}

    
    
int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::Node::SharedPtr nh = rclcpp::Node::make_shared("os_cloud_node") ;


    sensor_frame =  "base_scan";
    imu_frame = "os_imu";
    lidar_frame = "os_lidar";

    //mymsgs::srv::OSConfigSrv cfg{};
    mymsgs::srv::OSConfigSrv_Response res{};
    
    rclcpp::Client<mymsgs::srv::OSConfigSrv>::SharedPtr client =nh->create_client<mymsgs::srv::OSConfigSrv>("os_config");
	
    /*client->wait_for_existence();
    if (!client->call(cfg)) {
        RCLCPP_ERROR(nh->get_logger(),"Calling config service failed");
        return EXIT_FAILURE;
    }*/

    while (!client->wait_for_service(1s)) {
      if (!rclcpp::ok()) 
      {
         RCLCPP_ERROR(nh->get_logger(), "Interrupted while waiting for the service. Exiting.");
         return 0;
      }
      RCLCPP_INFO(nh->get_logger(), "service not available, waiting again...");
    }

    auto request = std::make_shared<mymsgs::srv::OSConfigSrv::Request>();
	
    auto result = client->async_send_request(request);
    rclcpp::spin_until_future_complete(nh, result );

    info = sensor::parse_metadata(result.get()->metadata);

    H = info.format.pixels_per_column;
    W = info.format.columns_per_frame;

    

	lidar_pub = nh->create_publisher<sensor_msgs::msg::PointCloud2>("points", 10);
	imu_pub = nh->create_publisher<sensor_msgs::msg::Imu>("imu", 100);

    
    xyz_lut = ouster::make_xyz_lut(info);
    


	rclcpp::Subscription<PacketMsg>::SharedPtr lidar_packet_sub = 
		nh->create_subscription<PacketMsg>("lidar_packets", 2048, lidar_handler);
	rclcpp::Subscription<PacketMsg>::SharedPtr imu_packet_sub = nh->create_subscription<PacketMsg>("imu_packets", 100, imu_handler);


    // publish transforms
    tf2_ros::TransformBroadcaster tf_bcast(nh);

    //tf_bcast.sendTransform(ouster_ros::transform_to_tf_msg(info.imu_to_sensor_transform, sensor_frame, imu_frame));

    //tf_bcast.sendTransform(ouster_ros::transform_to_tf_msg(
        //info.lidar_to_sensor_transform, sensor_frame, lidar_frame));

    rclcpp::spin(nh);

    return EXIT_SUCCESS;

}
