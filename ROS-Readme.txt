cd ~/catkin_ws
catkin_make

roscore

#Run the Publisher
rosrun my_robot_package robot_publisher

#Run the Subscriber
rosrun my_robot_package robot_subscriber



