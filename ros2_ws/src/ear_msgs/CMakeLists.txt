cmake_minimum_required(VERSION 3.10)
project(ear_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/SegmentEar.srv"
  "srv/Centerline.srv"
  "srv/Register.srv"
  "action/PlanPath.action"
  DEPENDENCIES builtin_interfaces geometry_msgs nav_msgs
)

ament_export_dependencies(rosidl_default_runtime)
install(FILES package.xml DESTINATION share/${PROJECT_NAME})

install(DIRECTORY resource/ DESTINATION share/ament_index/resource_index/packages)
ament_package()
