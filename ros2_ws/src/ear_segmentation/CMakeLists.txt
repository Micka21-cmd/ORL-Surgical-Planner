cmake_minimum_required(VERSION 3.10)
project(ear_segmentation)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  ${PROJECT_NAME}/segment_node.py
  DESTINATION lib/${PROJECT_NAME}
)

# Enregistre le paquet dans l'index ament
install(FILES package.xml DESTINATION share/${PROJECT_NAME})
install(DIRECTORY resource/ DESTINATION share/ament_index/resource_index/packages)

ament_package()
