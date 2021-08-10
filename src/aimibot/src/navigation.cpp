#include "rclcpp/rclcpp.hpp"
#include <std_msgs/msg/int32.hpp>
#include <std_srvs/srv/empty.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>
using namespace std;


rclcpp::Node::SharedPtr nh; 
rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr path_pub;
bool flag_next = false;   
bool flag_new = true;
bool flag_stop = false;
int num = 0, i = 0;

float x[] = {1.0,2.0,3.0};
float y[] = {0.0,0.0,0.0};
float goal_x, goal_y;


void pathCallback(const nav_msgs::msg::Path::SharedPtr msg) 
{
    
    RCLCPP_INFO(nh->get_logger(), "%d",msg->poses.size());
    num = msg->poses.size();
    
    goal_x = msg->poses[i].pose.position.x;
    goal_y = msg->poses[i].pose.position.y;
    
    flag_new = true;
}

void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg) 
{
    float now_x = msg->pose.pose.position.x;
    float now_y = msg->pose.pose.position.y;
    //RCLCPP_INFO(nh->get_logger(), "now_x:%f,now_y:%f",now_x,now_y);
    static geometry_msgs::msg::PoseStamped goal;
    if(flag_new)
    {
    	goal_x = x[i];
    	goal_y = y[i];
    	flag_next = false;
    	
		
		goal.pose.position.x = goal_x;
		goal.pose.position.y = goal_y;
		goal.header.frame_id = "map";
		   
		path_pub->publish(goal);
		if((abs(goal_x - now_x) < 0.35) && (abs(goal_y - now_y) < 0.35))
		{
		RCLCPP_INFO(nh->get_logger(), "goal_x:%f,goal_y:%f",goal_x,goal_y);
			i = i+1;
    	    flag_new = false;
    	    flag_next = true;
    	}
    }
    
    else if(flag_next)
    {
    	goal_x = x[i];
    	goal_y = y[i];
    	flag_new = false;
    	flag_next = false;
    	
		RCLCPP_INFO(nh->get_logger(), "goal_x:%f,goal_y:%f",goal_x,goal_y);
		goal.pose.position.x = goal_x;
		goal.pose.position.y = goal_y;
		goal.header.frame_id = "map";
		path_pub->publish(goal);
    }    
    
    else if(!flag_new & !flag_next & !flag_stop)
    {
    	if((abs(x[i-1] - now_x) < 0.35 && abs(y[i-1] - now_y) < 0.35))
    	{
    	//RCLCPP_INFO(nh->get_logger(), "goal_x:%f,goal_y:%f",goal.pose.position.x,goal.pose.position.y);
	    	path_pub->publish(goal);
	    	}
	    if(abs(goal_x - now_x) < 0.35 && abs(goal_y - now_y) < 0.35)
		{
			RCLCPP_INFO(nh->get_logger(), "goal_x:%f,goal_y:%f",goal_x,goal_y);
			i = i+1;
    	    flag_new = false;
    	    flag_next = true;
    	    //flag_stop = false;
    	    if(i == num)
    	    {
			    flag_new = false;
			    flag_next = false;
			    flag_stop = true;    	    	
    	    }
    	}
    	
    	
    }
    
    

}

int main(int argc, char **argv) {

    rclcpp::init(argc, argv);
    nh = rclcpp::Node::make_shared("navigation") ;
    rclcpp::Clock clock;
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr path_sub;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub;
     
    path_pub = nh->create_publisher<geometry_msgs::msg::PoseStamped>("goal",100);
    
    odom_sub = nh->create_subscription<nav_msgs::msg::Odometry>("odom",1,odomCallback);
    path_sub = nh->create_subscription<nav_msgs::msg::Path>("shortest_path",1,pathCallback);
    num = sizeof(x) / sizeof(x[0]);
    while(rclcpp::ok())
    {
    
    	
	rclcpp::spin_some(nh);
    }

    return 0;
}
