cmake_minimum_required(VERSION 3.5)
project(ls01b)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(MSVC)
  add_compile_definitions(
    _USE_MATH_DEFINES
  )
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Boost REQUIRED system thread)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
include_directories(
  include
  ${Boost_INCLUDE_DIRS}
)
add_executable(ls01b_v2 src/lsiosr.cpp src/ls01b.cpp src/ls01b_node.cpp)
target_link_libraries(ls01b_v2 ${Boost_LIBRARIES} )
ament_target_dependencies(ls01b_v2
  rclcpp
  std_msgs
  sensor_msgs
)
install(TARGETS
  ls01b_v2
  DESTINATION
  lib/${PROJECT_NAME})

install(DIRECTORY launch 
  DESTINATION share/${PROJECT_NAME}/
)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_export_dependencies(rclcpp)
ament_export_dependencies(std_msgs)
ament_export_dependencies(sensor_msgs)
ament_export_include_directories(include)
ament_package()
