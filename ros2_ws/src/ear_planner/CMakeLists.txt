cmake_minimum_required(VERSION 3.10)
project(ear_planner)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(ear_msgs REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  ${PROJECT_NAME}/planner_action_server.py
  ${PROJECT_NAME}/csv_path_publisher.py
  DESTINATION lib/${PROJECT_NAME}
)


install(DIRECTORY launch/ DESTINATION share/${PROJECT_NAME}/launch)

install(FILES package.xml DESTINATION share/${PROJECT_NAME})
install(DIRECTORY resource/ DESTINATION share/ament_index/resource_index/packages)

ament_package()
