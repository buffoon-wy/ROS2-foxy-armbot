cmake_minimum_required(VERSION 3.5)
project(aimibot)

include_directories(${PROJECT_SOURCE_DIR} ~/mavlink/include)
link_directories(${PROJECT_SOURCE_DIR} ~/mavlink/build/lib)

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

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(mymsgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2_ros REQUIRED)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS})
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
add_executable(aimibot src/main.cpp src/message_callback.cpp src/odometry src/diff_driver)
ament_target_dependencies(aimibot rclcpp std_msgs mymsgs sensor_msgs geometry_msgs nav_msgs tf2_ros tf2  )

add_executable(nav_test src/test.cpp)
ament_target_dependencies(nav_test rclcpp std_msgs nav_msgs geometry_msgs tf2_ros)

install(TARGETS
  aimibot
  DESTINATION
  lib/${PROJECT_NAME})
target_link_libraries(aimibot ${catkin_LIBRARIES} aimilink)



install(
  DIRECTORY launch 
  DESTINATION share/${PROJECT_NAME}
)

install(TARGETS
  nav_test
  DESTINATION
  lib/${PROJECT_NAME})
ament_export_include_directories(include)

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
