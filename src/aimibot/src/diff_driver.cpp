#include "../include/aimibot/diff_driver.hpp"


namespace Aimi {

/*****************************************************************************
** Implementation
*****************************************************************************/
DiffDriver::DiffDriver():
  last_left(0.0),
  last_right(0.0),
  // v(0.0), w(0.0), // command velocities, in [m/s] and [rad/s]
  point_velocity(2,0.0), // command velocities, in [m/s] and [rad/s]
  bias(0.546), // wheelbase, wheel_to_wheel, in [m]
  wheel_radius(0.16), // radius of main wheel, in [m]
  diff_drive_kinematics(bias, wheel_radius)
{}


/**
 * @brief Updates the odometry from firmware stamps and encoders.
 *
 * Really horrible - could do with an overhaul.
 *
 * @param time_stamp
 * @param vx_int
 * @param wz_int
 * @param pose_update
 * @param pose_update_rates
 */
void DiffDriver::update(const uint16_t &time_stamp,
                       const float &vx_int,
                       const float &wz_int,
                       ecl::LegacyPose2D<double> &pose_update,
                       ecl::linear_algebra::Vector3d &pose_update_rates)
{
  //state_mutex.lock();
  static bool init_l = false;
  static bool init_r = false;
  unsigned short curr_timestamp = time_stamp;
  double vx, wz;

  //the current robot vx [m/s] and wz [rad/s]
  vx = static_cast<double>(vx_int);
  wz = static_cast<double>(wz_int);

  if(curr_timestamp != last_timestamp)
  {
    //convert the vx and wz to left and right wheel velocity in [rad/s]
   
    double right = (2*vx+wz*bias)/(2*wheel_radius);
	double left = 2*vx/wheel_radius - right;
    //calculate the wheel variation between the timestamp
    last_diff_time = ((double)(short)((curr_timestamp - last_timestamp) & 0xffff)) / 1000.0f;
    double left_wheel_var = (right + last_right) * last_diff_time / 2.0;
    double right_wheel_var = (left + last_left) * last_diff_time / 2.0;

    //robot pose update
	double ds = wheel_radius*(left_wheel_var+right_wheel_var)/2.0;
	double domega = wheel_radius*(right_wheel_var-left_wheel_var)/bias;
	pose_update.translation(ds, 0);
    pose_update.rotation(domega);
	
    //robot pose update rate
    pose_update_rates << pose_update.x()/last_diff_time,
                        pose_update.y()/last_diff_time,
                        pose_update.heading()/last_diff_time;

    //last wheel velocity
    last_left = left;
    last_right = right;
  }else
  {
    //we need to set the last_velocity_xxx to zero?
  }

  //last timestamp
  last_timestamp = curr_timestamp;
}


void DiffDriver::reset()
{
//   state_mutex.lock();
  last_left = 0.0;
  last_right = 0.0;
//   state_mutex.unlock();
}


void DiffDriver::getWheelJointStates(double &wheel_left_angle, double &wheel_left_angle_rate,
                                    double &wheel_right_angle, double &wheel_right_angle_rate)
{
//   state_mutex.lock();
  //~ wheel_left_angle = last_rad_left;
  //~ wheel_right_angle = last_rad_right;
  wheel_left_angle_rate = last_left;
  wheel_right_angle_rate = last_right;
//   state_mutex.unlock();
}


void DiffDriver::setVelocityCommands(const double &vx, const double &wz)
{
  // vx: in m/s
  // wz: in rad/s
  std::vector<double> cmd_vel;
  cmd_vel.push_back(vx);
  cmd_vel.push_back(wz);
  point_velocity = cmd_vel;
}


std::vector<double> DiffDriver::pointVelocity() const
{
  return point_velocity;
}


}
