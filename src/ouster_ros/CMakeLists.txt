cmake_minimum_required(VERSION 3.5)

# ==== Project Name ====
project(ouster_ros)
include_directories(${PROJECT_SOURCE_DIR} ~/ouster_client/include)
include_directories(${PROJECT_SOURCE_DIR} ~/ouster_client/include/optional-lite)
link_directories(${PROJECT_SOURCE_DIR} ~/ouster_client/build/lib)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ==== Requirements ====
find_package(ament_cmake REQUIRED)
find_package(PCL REQUIRED COMPONENTS common)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(mymsgs REQUIRED)
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS})
find_package(Boost 1.55.0 REQUIRED COMPONENTS system filesystem)
include_directories(untitled ${Boost_INCLUDE_DIRS})
# ==== Catkin ====


# ==== Libraries ====
# Build static libraries and bundle them into ouster_ros using the `--whole-archive` flag. This is
# necessary because catkin doesn't interoperate easily with target-based cmake builds. Object
# libraries are the recommended way to do this, but require >=3.13 to propagate usage requirements.

# catkin adds all include dirs to a single variable, don't try to use targets


add_executable(os_cloud_node src/os_cloud_node.cpp src/ros.cpp)
ament_target_dependencies(os_cloud_node rclcpp std_msgs tf2 tf2_ros geometry_msgs mymsgs pcl_conversions sensor_msgs PCL)
#add_executable(test src/test.cpp)
#ament_target_dependencies(test rclcpp std_msgs tf2 tf2_ros geometry_msgs mymsgs pcl_conversions sensor_msgs)
add_executable(os_node src/os_node.cpp src/ros.cpp)
ament_target_dependencies(os_node rclcpp std_msgs tf2 tf2_ros geometry_msgs mymsgs pcl_conversions sensor_msgs PCL) 

install(TARGETS
  os_node  
  os_cloud_node
  DESTINATION
  lib/${PROJECT_NAME})

target_link_libraries(os_cloud_node ${catkin_LIBRARIES} ${Boost_LIBRARIES} ouster_client)
target_link_libraries(os_node ${catkin_LIBRARIES} ${Boost_LIBRARIES} ouster_client)


install(
  DIRECTORY launch rviz 
  DESTINATION share/${PROJECT_NAME}
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

ament_package()
