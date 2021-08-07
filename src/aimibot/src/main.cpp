/*
 * Author: ZHOU XIDONG
 * Data:2021.4.8
*/
#include <iostream>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <pthread.h> // This uses POSIX Threads
#include <unistd.h>  // UNIX standard function definitions
#include <thread>
#include <chrono>
#include "legacy/mavlink_interface.h"      //51
#include "../include/aimibot/aimibot.hpp"      //51
#include "linux/serial.h"
#include <cstdlib>          //51

Mavlink_Msg_Register_t Mavlink_aimibot_Msg;

uint32_t global_cur_count;
uint32_t global_pre_count;
uint32_t global_sequency;
mavlink_message_t message;
	
namespace ecl 
{
	const double& wrap_angle(double &angle) {
		if ( (  angle <= pi ) && ( angle >= -pi ) ) {
			return angle; // nothing to do.
		}
		if ( angle < 0.0 ) {
			angle = fmod(angle-pi,2.0*pi)+pi;
		} else {
			angle = fmod(angle+pi,2.0*pi)-pi;
		}
		return angle;
	}
} // namespace ecl

	
aimibot::aimibot() 
{	
	core_publisher = nh->create_publisher<mymsgs::msg::Core>("/core",100); 
	version_publisher = nh->create_publisher<mymsgs::msg::Version>("/version",100); 
	gpio_publisher = nh->create_publisher<mymsgs::msg::Gpio>("/gpio",100); 
	twist_publisher = nh->create_publisher<mymsgs::msg::Twis>("/twist",100); 
	imu_publisher = nh->create_publisher<mymsgs::msg::Imu>("/imu",100); 
	heart_publisher = nh->create_publisher<mymsgs::msg::Heart>("/heart",100); 
	attitued_publisher = nh->create_publisher<mymsgs::msg::Attitued>("/attitued",100); 
	velocity_command_subscriber = nh->create_subscription<geometry_msgs::msg::Twist>("/aimibot/commands/velocity",10,std::bind(&aimibot::subscribeVelocityCommand, this, std::placeholders::_1));
    gpio_command_subscriber = nh->create_subscription<mymsgs::msg::Control>("/aimibot/commands/gpio",10,std::bind(&aimibot::subscribeGpioCommand, this, std::placeholders::_1));
	init();
}


//~ void aimibot::rostopic_pub()
//~ {
	//~ heart_pubdata.error_code = heart_data.error_code;
	//~ heart_pubdata.type = heart_data.type;
	//~ heart_pubdata.base_mode = heart_data.base_mode;
	//~ heart_pubdata.system_status = heart_data.system_status;
	
	//~ core_pubdata.time_boot_ms =  core_data.time_boot_ms;
	//~ core_pubdata.onboard_control_sensors_health =  core_data.onboard_control_sensors_health;
	//~ core_pubdata.load =  core_data.load;
	//~ core_pubdata.voltage_battery =  core_data.voltage_battery;
	//~ core_pubdata.current_battery =  core_data.current_battery; 
	//~ core_pubdata.battery_remaining =  core_data.battery_remaining; 

	//~ version_pubdata.hardware_ver = version_data.hardware_ver;
	//~ version_pubdata.software_ver = version_data.software_ver;
	//~ version_pubdata.uiud = version_data.uiud;
	
	//~ gpio_pubdata.time_boot_ms = gpio_data.time_boot_ms;
	//~ gpio_pubdata.output = gpio_data.output;
	//~ gpio_pubdata.input = gpio_data.input;
	
	//~ twis_pubdata.time_boot_ms = twis_data.time_boot_ms;
	//~ twis_pubdata.vx = twis_data.vx;
	//~ twis_pubdata.vy = twis_data.vy;
	//~ twis_pubdata.vz = twis_data.vz;
	//~ twis_pubdata.wx = twis_data.wx;
	//~ twis_pubdata.wy = twis_data.wy;
	//~ twis_pubdata.wz = twis_data.wz;
	
	//~ imu_pubdata.time_boot_ms = imu_data.time_boot_ms;
	//~ imu_pubdata.xacc = imu_data.xacc;
	//~ imu_pubdata.yacc = imu_data.yacc;
	//~ imu_pubdata.zacc = imu_data.zacc;
	//~ imu_pubdata.xgyro = imu_data.xgyro;
	//~ imu_pubdata.ygyro = imu_data.ygyro;
	//~ imu_pubdata.zgyro = imu_data.zgyro;
	//~ imu_pubdata.xmag = imu_data.xmag;
	//~ imu_pubdata.ymag = imu_data.ymag;
	//~ imu_pubdata.zmag = imu_data.zmag;
	
	//~ attitued_pubdata.roll = attitued_data.roll;
	//~ attitued_pubdata.pitch = attitued_data.pitch;
	//~ attitued_pubdata.yaw = attitued_data.yaw;
	//~ attitued_pubdata.rollspeed = attitued_data.rollspeed;
	//~ attitued_pubdata.pitchspeed = attitued_data.pitchspeed;
	//~ attitued_pubdata.yawspeed = attitued_data.yawspeed;
	
	//~ heart_publisher->publish(heart_pubdata);
	//~ core_publisher->publish(core_pubdata);
	//~ version_publisher->publish(version_pubdata);
	//~ gpio_publisher->publish(gpio_pubdata);
	//~ twist_publisher->publish(twis_pubdata);
	//~ imu_publisher->publish(imu_pubdata);
	//~ attitued_publisher->publish(attitued_pubdata);
//~ }


/**初始化 机器人头部朝向***/
double aimibot::init_head()
{
	
  return  static_cast<double>(attitued_pubdata.yaw);
}
/**返回 机器人偏航角***/
double aimibot::getHeading() 
{
  double heading;
  // raw data angles are in hundredths of a degree, convert to radians.
  
  heading = static_cast<double>(attitued_pubdata.yaw);
  
  return (heading - heading_offset);

}
void aimibot::reset_odometry()
{
  diff_drive.reset();
}
double aimibot::getAngularVelocity() 
{
  return static_cast<double>(attitued_pubdata.yawspeed);
}


void aimibot::check_heart()
{
	static int flag = 0;
	flag ++;
	if(flag == 5)
	{
		interface.Mav_Set_Heatbeat(0xff);
		flag = 0;
	}

}

void aimibot::init()
{
	odome_try.init(nh);
    reset_odometry();
    joint_states.name.push_back("leftwheel_joint");
    joint_states.name.push_back("rightwheel_joint");
	char *uart_name = (char *)"/dev/ttyUSB0";
	int baudrate = 921600;
	interface.Set_Serial(uart_name,baudrate);
    seial_get();
}


int aimibot::seial_get()
{

    //open the mavlink port
    int ret = interface.start();
    if(!ret)
    {
        cout << "open port success!" << endl;
    }
    else
    {
        cout << "open port failed! please check the port NAME or change the port permissions!" << endl;
        cout << ret << endl;
        return(0);
    }
    
	interface.Mav_Set_Cmd_Long_Frequency(1,2,50,50,50,0,50);
	cout << "start read thread!" <<endl;
    
    //read message
    while (rclcpp::ok())
	{
		
        //read message
        bool success = interface.read_message(message);
        
        //handle message
        if(success)
        {
           
            int ret = interface.Mav_Msg_Handler(&message,&Mavlink_aimibot_Msg);
			//cout << "read thread!"<< Mavlink_aimibot_Msg.Mav_SysStatus_Data.voltage_battery <<endl;
            if (ret)
            {
				if(ret == 1)
				{
					heart_pubdata.error_code = Mavlink_aimibot_Msg.Mav_Heartbeat_Data.error_code;
					heart_pubdata.type = Mavlink_aimibot_Msg.Mav_Heartbeat_Data.type;
					heart_pubdata.base_mode = Mavlink_aimibot_Msg.Mav_Heartbeat_Data.base_mode;
					heart_pubdata.system_status = Mavlink_aimibot_Msg.Mav_Heartbeat_Data.system_status;
					heart_publisher->publish(heart_pubdata);
				}
				
				if(ret == 2)
				{
					core_pubdata.time_boot_ms =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.time_boot_ms; 
					core_pubdata.onboard_control_sensors_health =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.onboard_control_sensors_health;
					core_pubdata.load =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.load;
					core_pubdata.voltage_battery =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.voltage_battery;
					core_pubdata.current_battery =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.current_battery; 
					core_pubdata.battery_remaining =  Mavlink_aimibot_Msg.Mav_SysStatus_Data.battery_remaining;
					core_publisher->publish(core_pubdata);
 
				}
				
				if(ret == 3)
				{
					version_pubdata.hardware_ver = Mavlink_aimibot_Msg.Mav_SysInfo_Data.hardware_ver;
					version_pubdata.software_ver = Mavlink_aimibot_Msg.Mav_SysInfo_Data.software_ver;
					version_pubdata.uiud = Mavlink_aimibot_Msg.Mav_SysInfo_Data.uiud;
					version_publisher->publish(version_pubdata);
				}

				if(ret == 4)
				{				
					gpio_pubdata.time_boot_ms = Mavlink_aimibot_Msg.Mav_GPIO_Data.time_boot_ms;
					gpio_pubdata.output = Mavlink_aimibot_Msg.Mav_GPIO_Data.Output;
					gpio_pubdata.input = Mavlink_aimibot_Msg.Mav_GPIO_Data.Input;
					gpio_publisher->publish(gpio_pubdata);
				}
				
				if(ret == 6)
				{					
					imu_pubdata.time_boot_ms = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.time_boot_ms;
					imu_pubdata.xacc = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.xacc;
					imu_pubdata.yacc = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.yacc;
					imu_pubdata.zacc = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.zacc;
					imu_pubdata.xgyro = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.xgyro;
					imu_pubdata.ygyro = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.ygyro;
					imu_pubdata.zgyro = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.zgyro;
					imu_pubdata.xmag = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.xmag;
					imu_pubdata.ymag = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.ymag;
					imu_pubdata.zmag = Mavlink_aimibot_Msg.Mav_ScaledIMU_Data.zmag;
					imu_publisher->publish(imu_pubdata);
				}
				
				if(ret == 7)
				{					
					attitued_pubdata.time_boot_ms = Mavlink_aimibot_Msg.Mav_Attitude_Data.time_boot_ms;
					attitued_pubdata.roll = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.roll) * 10000000)) / 10000000.0; 
					attitued_pubdata.pitch = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.pitch) * 10000000)) / 10000000.0;  
					attitued_pubdata.yaw = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.yaw) * 10000000)) / 10000000.0; 
					attitued_pubdata.rollspeed = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.rollspeed) * 10000000)) / 10000000.0; ; 
					attitued_pubdata.pitchspeed = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.pitchspeed) * 10000000)) / 10000000.0; ; 
					attitued_pubdata.yawspeed = (float)((int32_t)((Mavlink_aimibot_Msg.Mav_Attitude_Data.yawspeed) * 10000000)) / 10000000.0; 
					attitued_publisher->publish(attitued_pubdata);
					if(!head_init) { heading_offset = init_head(); head_init = true;}
				}
				
				
				if(ret == 5)
				{
					twis_pubdata.time_boot_ms = Mavlink_aimibot_Msg.Mav_Twist_Data.time_boot_ms;
					twis_pubdata.vx = Mavlink_aimibot_Msg.Mav_Twist_Data.Vx;
					twis_pubdata.vy = Mavlink_aimibot_Msg.Mav_Twist_Data.Vy;
					twis_pubdata.vz = Mavlink_aimibot_Msg.Mav_Twist_Data.Vz;
					twis_pubdata.wx = Mavlink_aimibot_Msg.Mav_Twist_Data.Wx;
					twis_pubdata.wy = Mavlink_aimibot_Msg.Mav_Twist_Data.Wy;
					twis_pubdata.wz = Mavlink_aimibot_Msg.Mav_Twist_Data.Wz;
					twist_publisher->publish(twis_pubdata);
					check_heart(); 
				
					joint_states.position.resize(2,0.0); joint_states.velocity.resize(2,0.0); joint_states.effort.resize(2,0.0);

					diff_drive.update(twis_pubdata.time_boot_ms, twis_pubdata.vx, twis_pubdata.wz, pose_update, pose_update_rates);

					diff_drive.getWheelJointStates(joint_states.position[0], joint_states.velocity[0], joint_states.position[1], joint_states.velocity[1]);
					odome_try.update(pose_update, pose_update_rates, getHeading(), getAngularVelocity());
				}



            }    
        }
         
        rclcpp::spin_some(nh);
        
		//this_thread::sleep_for(std::chrono::microseconds(100)); // look for components of batches at 10kHz
	}
    cout << "end read thread!" <<endl;
	interface.stop();
    
}
 

void shutdown(int sig)  
{  
	//~ interface.stop();
    rclcpp::shutdown();  
}

int main(int argc, char** argv)
{      
    rclcpp::init(argc, argv);
    
	signal(SIGINT, shutdown);
	
	aimibot aimibot_;

	return 0;
}
