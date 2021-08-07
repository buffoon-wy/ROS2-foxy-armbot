cmake_minimum_required(VERSION 3.5)
project(ur_msgs)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

set(FILES
 msg/Analog.msg
 msg/Digital.msg
 msg/IOStates.msg
 msg/RobotStateRTMsg.msg
 msg/MasterboardDataMsg.msg
 msg/RobotModeDataMsg.msg
 msg/ToolDataMsg.msg
 srv/SetPayload.srv
 srv/SetSpeedSliderFraction.srv
 srv/SetIO.srv
 )

rosidl_generate_interfaces(${PROJECT_NAME}
  ${FILES}
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
