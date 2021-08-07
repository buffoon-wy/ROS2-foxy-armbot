#ifndef __MESSAGE_CALLBACK__H
#define __MESSAGE_CALLBACK__H
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "data_struct.hpp"
class Mavlink_Interface;
void subscribeVelocityCommand(const geometry_msgs::msg::Twist::SharedPtr msg);

#endif
