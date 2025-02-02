#include "ros/ros.h"
#include "std_msgs/String.h"
#include <stdio.h>

// Callback function when a message is received
void messageCallback(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("Received: %s", msg->data.c_str());
}

int main(int argc, char **argv)
{
    // Initialize ROS Node
    ros::init(argc, argv, "robot_subscriber");
    ros::NodeHandle nh;

    // Create Subscriber
    ros::Subscriber sub = nh.subscribe("robot_topic", 10, messageCallback);

    ros::spin(); // Keep running and processing incoming messages
    return 0;
}
