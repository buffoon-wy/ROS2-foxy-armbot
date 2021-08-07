#include "../include/aimibot/odometry.hpp"
namespace Aimi {

/*****************************************************************************
** Implementation
*****************************************************************************/
float x,y;
using ecl::wrap_angle;
using ecl::Angle;

Odom::Odom()
{
	
  odom_frame = "odom";
  base_frame = "base_footprint";
  use_imu_heading = true;
}

void Odom::init(rclcpp::Node::SharedPtr& node ) 
{
  double timeout;
  nh_o = node;
  //~ nh_p.param("cmd_vel_timeout", timeout, 0.6);
  //~ cmd_vel_timeout.fromSec(timeout);

  odom_trans.header.frame_id = "odom";
  odom_trans.child_frame_id = "base_footprint";
  odom_publisher = node->create_publisher<nav_msgs::msg::Odometry>("/odom", 50);
  pose.setIdentity();

  
}

void Odom::update(const ecl::LegacyPose2D<double> &pose_update_, ecl::linear_algebra::Vector3d &pose_update_rates,double imu_heading, double imu_angular_velocity) 
{
	pose *= pose_update_;

	if (use_imu_heading == true) 
	{
		// Overwite with gyro heading data
		pose.heading(imu_heading);
		pose_update_rates[2] = imu_angular_velocity;
	}
	
	//since all ros tf odometry is 6DOF we'll need a quaternion created from yaw
	geometry_msgs::msg::Quaternion odom_quat ;
	
	tf2::Quaternion quaternion;
    quaternion.setRPY(0,0,pose.heading());
	odom_quat = tf2::toMsg(quaternion);
	
	if (rclcpp::ok()) 
	{
		publishTransform(odom_quat);
		publishOdometry(odom_quat,pose_update_rates);
	}
}

void Odom::publishTransform(geometry_msgs::msg::Quaternion& odom_quat)
{
	static tf2_ros::TransformBroadcaster odom_broadcaster(nh_o);
	tf2::Quaternion quaternion;
	odom_trans.header.stamp = clock.now();
	odom_trans.header.frame_id = "odom";
    	odom_trans.child_frame_id = "base_footprint";
	odom_trans.transform.translation.x = pose.x();
	odom_trans.transform.translation.y = pose.y();
	odom_trans.transform.translation.z = 0.0;
	odom_trans.transform.rotation = odom_quat;
	odom_broadcaster.sendTransform(odom_trans);
}

void Odom::publishOdometry(geometry_msgs::msg::Quaternion& odom_quat, const ecl::linear_algebra::Vector3d &pose_update_rates)
{
	nav_msgs::msg::Odometry odom;
		
	// Header
	odom.header.stamp = clock.now();
	odom.header.frame_id = odom_frame;
	odom.child_frame_id = base_frame;
	
	// Position
	odom.pose.pose.position.x = pose.x();
	odom.pose.pose.position.y = pose.y();
	odom.pose.pose.position.z = 0.0;
	odom.pose.pose.orientation = odom_quat;
	
	// Velocity
	odom.twist.twist.linear.x = pose_update_rates[0];
	odom.twist.twist.linear.y = pose_update_rates[1];
	odom.twist.twist.angular.z = pose_update_rates[2];
	
	// Pose covariance (required by robot_pose_ekf) TODO: publish realistic values
	// Odometry yaw covariance must be much bigger than the covariance provided
	// by the imu, as the later takes much better measures
	odom.pose.covariance[0]  = 0.1;
	odom.pose.covariance[7]  = 0.1;
	odom.pose.covariance[35] = use_imu_heading ? 0.05 : 0.2;
	
	odom.pose.covariance[14] = 1e10; // set a non-zero covariance on unused
	odom.pose.covariance[21] = 1e10; // dimensions (z, pitch and roll); this
	odom.pose.covariance[28] = 1e10; // is a requirement of robot_pose_ekf
	
	odom_publisher->publish(odom);
}



}
