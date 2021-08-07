#ifndef __AIMIBOT__H
#define __AIMIBOT__H

#include "rclcpp/rclcpp.hpp" 
//~ #include "rosconsole/macros_generated.h"
#include <std_msgs/msg/string.hpp> 
#include <std_msgs/msg/empty.hpp> 
//#include "message_callback.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "data_struct.hpp"
#include <sensor_msgs/msg/joint_state.hpp>
#include "diff_driver.hpp"
#include "odometry.hpp"
#include <std_msgs/msg/string.hpp> 
#include <std_msgs/msg/empty.hpp> 
#include <ecl/math.hpp>
#include <ecl/geometry.hpp>
#include "mymsgs/msg/control.hpp"	

#define pi 3.1415926

using namespace std;

using ecl::Angle;
using ecl::wrap_angle;


class aimibot  {
	Mavlink_Interface interface;
 public:
    aimibot() ;
    mymsgs::msg::Core core_pubdata;
	mymsgs::msg::Version version_pubdata;
	mymsgs::msg::Gpio gpio_pubdata;
	mymsgs::msg::Twis twis_pubdata;
	mymsgs::msg::Imu imu_pubdata;
	mymsgs::msg::Heart heart_pubdata;
	mymsgs::msg::Attitued attitued_pubdata;
    sensor_msgs::msg::JointState joint_states;
    
	//~ Heart_data heart_data;
	//~ Core_data core_data;
	//~ Version_data version_data;
	//~ Gpio_data gpio_data;
	//~ Twis_data twis_data;
	//~ Imu_data imu_data;
	//~ Attitued_data attitued_data;
	
	rclcpp::Node::SharedPtr nh = rclcpp::Node::make_shared("aimibot") ;    
 private: 
	Aimi::Odom odome_try;
	Aimi::DiffDriver diff_drive;
    void subscribeVelocityCommand(const geometry_msgs::msg::Twist::SharedPtr msg);
	void subscribeGpioCommand(const mymsgs::msg::Control::SharedPtr msg);
	
	rclcpp::Publisher<mymsgs::msg::Core>::SharedPtr core_publisher;
	rclcpp::Publisher<mymsgs::msg::Version>::SharedPtr version_publisher;
	rclcpp::Publisher<mymsgs::msg::Gpio>::SharedPtr gpio_publisher;
	rclcpp::Publisher<mymsgs::msg::Twis>::SharedPtr twist_publisher;
	rclcpp::Publisher<mymsgs::msg::Imu>::SharedPtr imu_publisher;
	rclcpp::Publisher<mymsgs::msg::Heart>::SharedPtr heart_publisher;
	rclcpp::Publisher<mymsgs::msg::Attitued>::SharedPtr attitued_publisher;
  
	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr velocity_command_subscriber;
	rclcpp::Subscription<mymsgs::msg::Control>::SharedPtr gpio_command_subscriber;
	double heading_offset=0.0;
    ecl::LegacyPose2D<double> pose_update;
    ecl::linear_algebra::Vector3d pose_update_rates;
    bool head_init = false;
	
    double getAngularVelocity() ;
    double init_head();
	double getHeading(); 
	void check_heart();
	void reset_odometry();
    void shutdown(int sig);  
    void init();
    int seial_get(); 
	void rostopic_pub();
	

	
};







#endif
