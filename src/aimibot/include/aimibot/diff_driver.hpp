#ifndef __DIFF_DRIVER_HPP__
#define __DIFF_DRIVER_HPP__

#include <vector>
#include <climits>
#include <stdint.h>
#include <ecl/geometry/legacy_pose2d.hpp>
#include <ecl/mobile_robot.hpp>
#include <ecl/config/macros.hpp>
#include <ecl/config/ecl.hpp>
#include <ecl/threads/mutex.hpp>
#include "rclcpp/rclcpp.hpp" 
namespace Aimi{
  
class  DiffDriver
{
public:
  DiffDriver();
  const ecl::DifferentialDrive::Kinematics& kinematics() { return diff_drive_kinematics; }

  void update(const uint16_t &time_stamp,
                        const float &vx_int,
                        const float &wz_int,
                        ecl::LegacyPose2D<double> &pose_update,
                        ecl::linear_algebra::Vector3d &pose_update_rates);
  void reset();
  void getWheelJointStates(double &wheel_left_angle, double &wheel_left_angle_rate,
                           double &wheel_right_angle, double &wheel_right_angle_rate);
  void setVelocityCommands(const double &vx, const double &wz);

  /*********************
  ** Command Accessors
  **********************/
  std::vector<double> pointVelocity() const; // (vx, wz), in [m/s] and [rad/s]

  /*********************
  ** Property Accessors
  **********************/
  double wheel_bias() const { return bias; }

private:
  unsigned short last_timestamp;
  double last_diff_time;
  double last_left, last_right;

  //double v, w; // in [m/s] and [rad/s]
  std::vector<double> point_velocity; // (vx, wz), in [m/s] and [rad/s]
  double bias; //wheelbase, wheel_to_wheel, in [m]
  double wheel_radius; // in [m]
  int imu_heading_offset;

  ecl::DifferentialDrive::Kinematics diff_drive_kinematics;
  
  //~ ecl::Mutex velocity_mutex, state_mutex;
};
 
}
#endif
