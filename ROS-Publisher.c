// src/ros-publisher.c

#include "ros/ros.h"
#include "std_msgs/String.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    // Initialize ROS Node
    ros::init(argc, argv, "robot_publisher");
    ros::NodeHandle nh;

    // Create Publisher
    ros::Publisher pub = nh.advertise<std_msgs::String>("robot_topic", 10);
    ros::Rate loop_rate(1); // 1 Hz

    while (ros::ok())
    {
        std_msgs::String msg;
        msg.data = "Hello from ROS Publisher";

        ROS_INFO("Publishing: %s", msg.data.c_str());
        pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
