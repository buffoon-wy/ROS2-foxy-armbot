#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <tf2_ros/transform_broadcaster.h>
using namespace std::chrono_literals;
 
/* This example creates a subclass of Node and uses std::bind() to register a* member function as a callback from the timer. */
 
class MinimalPublisher : public rclcpp::Node{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), count_(0)
    {
      publisher_odom = this->create_publisher<nav_msgs::msg::Odometry>("/odom", 10);
      
      timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
    }
    
    //tf2_ros::TransformBroadcaster odom_broadcaster(this);
   
 
  private:
    
    void timer_callback()
    {
      geometry_msgs::msg::TransformStamped odom_trans;
      auto message_odom = nav_msgs::msg::Odometry();
      message_odom.header.stamp = clock.now();
      odom_trans.header.frame_id = "odom";
      odom_trans.child_frame_id = "base_footprint";
      message_odom.header.frame_id = "odom";
      //odom_broadcaster.sendTransform(odom_trans);
      publisher_odom->publish(message_odom);
      
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr publisher_odom;
    rclcpp::Clock clock;
    size_t count_;
  };
 
 
  int main(int argc, char * argv[])
  {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalPublisher>());
    rclcpp::shutdown();
    return 0;
  }
