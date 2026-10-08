cmake_minimum_required(VERSION 3.8)
project(chem_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Collision.msg"
  "srv/Explode.srv"
  "action/React.action"
  DEPENDENCIES action_msgs
)

ament_package()
