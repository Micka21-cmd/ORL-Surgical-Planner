cmake_minimum_required(VERSION 3.10)
project(ear_centerline)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(geometry_msgs REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  ${PROJECT_NAME}/centerline_node.py
  DESTINATION lib/${PROJECT_NAME}
)

install(FILES package.xml DESTINATION share/${PROJECT_NAME})
install(DIRECTORY resource/ DESTINATION share/ament_index/resource_index/packages)

ament_package()
