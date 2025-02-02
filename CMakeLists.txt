add_executable(robot_publisher src/publisher.c)
target_link_libraries(robot_publisher ${catkin_LIBRARIES})

add_executable(robot_subscriber src/subscriber.c)
target_link_libraries(robot_subscriber ${catkin_LIBRARIES})
