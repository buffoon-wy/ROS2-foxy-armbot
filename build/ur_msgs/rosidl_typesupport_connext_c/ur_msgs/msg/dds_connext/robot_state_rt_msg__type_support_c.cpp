// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from ur_msgs:msg/RobotStateRTMsg.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "ur_msgs/msg/robot_state_rt_msg__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "ur_msgs/msg/detail/robot_state_rt_msg__struct.h"
#include "ur_msgs/msg/detail/robot_state_rt_msg__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ur_msgs/msg/dds_connext/RobotStateRTMsg_Support.h"
#include "ur_msgs/msg/dds_connext/RobotStateRTMsg_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'q_target'
// Member 'qd_target'
// Member 'qdd_target'
// Member 'i_target'
// Member 'm_target'
// Member 'q_actual'
// Member 'qd_actual'
// Member 'i_actual'
// Member 'tool_acc_values'
// Member 'tcp_force'
// Member 'tool_vector'
// Member 'tcp_speed'
// Member 'motor_temperatures'
// Member 'joint_modes'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'q_target'
// Member 'qd_target'
// Member 'qdd_target'
// Member 'i_target'
// Member 'm_target'
// Member 'q_actual'
// Member 'qd_actual'
// Member 'i_actual'
// Member 'tool_acc_values'
// Member 'tcp_force'
// Member 'tool_vector'
// Member 'tcp_speed'
// Member 'motor_temperatures'
// Member 'joint_modes'
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_RobotStateRTMsg__get_type_code()
{
  return ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::get_typecode();
}

static bool
_RobotStateRTMsg__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs__msg__RobotStateRTMsg * ros_message =
    static_cast<const ur_msgs__msg__RobotStateRTMsg *>(untyped_ros_message);
  ur_msgs::msg::dds_::RobotStateRTMsg_ * dds_message =
    static_cast<ur_msgs::msg::dds_::RobotStateRTMsg_ *>(untyped_dds_message);
  // Member name: time
  {
    dds_message->time_ = ros_message->time;
  }
  // Member name: q_target
  {
    size_t size = ros_message->q_target.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->q_target_.maximum()) {
      if (!dds_message->q_target_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->q_target_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->q_target.data[i];
      dds_message->q_target_[i] = ros_i;
    }
  }
  // Member name: qd_target
  {
    size_t size = ros_message->qd_target.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->qd_target_.maximum()) {
      if (!dds_message->qd_target_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->qd_target_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->qd_target.data[i];
      dds_message->qd_target_[i] = ros_i;
    }
  }
  // Member name: qdd_target
  {
    size_t size = ros_message->qdd_target.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->qdd_target_.maximum()) {
      if (!dds_message->qdd_target_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->qdd_target_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->qdd_target.data[i];
      dds_message->qdd_target_[i] = ros_i;
    }
  }
  // Member name: i_target
  {
    size_t size = ros_message->i_target.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->i_target_.maximum()) {
      if (!dds_message->i_target_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->i_target_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->i_target.data[i];
      dds_message->i_target_[i] = ros_i;
    }
  }
  // Member name: m_target
  {
    size_t size = ros_message->m_target.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->m_target_.maximum()) {
      if (!dds_message->m_target_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->m_target_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->m_target.data[i];
      dds_message->m_target_[i] = ros_i;
    }
  }
  // Member name: q_actual
  {
    size_t size = ros_message->q_actual.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->q_actual_.maximum()) {
      if (!dds_message->q_actual_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->q_actual_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->q_actual.data[i];
      dds_message->q_actual_[i] = ros_i;
    }
  }
  // Member name: qd_actual
  {
    size_t size = ros_message->qd_actual.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->qd_actual_.maximum()) {
      if (!dds_message->qd_actual_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->qd_actual_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->qd_actual.data[i];
      dds_message->qd_actual_[i] = ros_i;
    }
  }
  // Member name: i_actual
  {
    size_t size = ros_message->i_actual.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->i_actual_.maximum()) {
      if (!dds_message->i_actual_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->i_actual_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->i_actual.data[i];
      dds_message->i_actual_[i] = ros_i;
    }
  }
  // Member name: tool_acc_values
  {
    size_t size = ros_message->tool_acc_values.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->tool_acc_values_.maximum()) {
      if (!dds_message->tool_acc_values_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->tool_acc_values_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->tool_acc_values.data[i];
      dds_message->tool_acc_values_[i] = ros_i;
    }
  }
  // Member name: tcp_force
  {
    size_t size = ros_message->tcp_force.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->tcp_force_.maximum()) {
      if (!dds_message->tcp_force_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->tcp_force_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->tcp_force.data[i];
      dds_message->tcp_force_[i] = ros_i;
    }
  }
  // Member name: tool_vector
  {
    size_t size = ros_message->tool_vector.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->tool_vector_.maximum()) {
      if (!dds_message->tool_vector_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->tool_vector_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->tool_vector.data[i];
      dds_message->tool_vector_[i] = ros_i;
    }
  }
  // Member name: tcp_speed
  {
    size_t size = ros_message->tcp_speed.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->tcp_speed_.maximum()) {
      if (!dds_message->tcp_speed_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->tcp_speed_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->tcp_speed.data[i];
      dds_message->tcp_speed_[i] = ros_i;
    }
  }
  // Member name: digital_input_bits
  {
    dds_message->digital_input_bits_ = ros_message->digital_input_bits;
  }
  // Member name: motor_temperatures
  {
    size_t size = ros_message->motor_temperatures.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->motor_temperatures_.maximum()) {
      if (!dds_message->motor_temperatures_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->motor_temperatures_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->motor_temperatures.data[i];
      dds_message->motor_temperatures_[i] = ros_i;
    }
  }
  // Member name: controller_timer
  {
    dds_message->controller_timer_ = ros_message->controller_timer;
  }
  // Member name: test_value
  {
    dds_message->test_value_ = ros_message->test_value;
  }
  // Member name: robot_mode
  {
    dds_message->robot_mode_ = ros_message->robot_mode;
  }
  // Member name: joint_modes
  {
    size_t size = ros_message->joint_modes.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->joint_modes_.maximum()) {
      if (!dds_message->joint_modes_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->joint_modes_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->joint_modes.data[i];
      dds_message->joint_modes_[i] = ros_i;
    }
  }
  return true;
}

static bool
_RobotStateRTMsg__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs::msg::dds_::RobotStateRTMsg_ * dds_message =
    static_cast<const ur_msgs::msg::dds_::RobotStateRTMsg_ *>(untyped_dds_message);
  ur_msgs__msg__RobotStateRTMsg * ros_message =
    static_cast<ur_msgs__msg__RobotStateRTMsg *>(untyped_ros_message);
  // Member name: time
  {
    ros_message->time = dds_message->time_;
  }
  // Member name: q_target
  {
    DDS_Long size = dds_message->q_target_.length();
    if (ros_message->q_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->q_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->q_target, size)) {
      return "failed to create array for field 'q_target'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->q_target.data[i];
      ros_i = dds_message->q_target_[i];
    }
  }
  // Member name: qd_target
  {
    DDS_Long size = dds_message->qd_target_.length();
    if (ros_message->qd_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->qd_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->qd_target, size)) {
      return "failed to create array for field 'qd_target'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->qd_target.data[i];
      ros_i = dds_message->qd_target_[i];
    }
  }
  // Member name: qdd_target
  {
    DDS_Long size = dds_message->qdd_target_.length();
    if (ros_message->qdd_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->qdd_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->qdd_target, size)) {
      return "failed to create array for field 'qdd_target'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->qdd_target.data[i];
      ros_i = dds_message->qdd_target_[i];
    }
  }
  // Member name: i_target
  {
    DDS_Long size = dds_message->i_target_.length();
    if (ros_message->i_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->i_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->i_target, size)) {
      return "failed to create array for field 'i_target'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->i_target.data[i];
      ros_i = dds_message->i_target_[i];
    }
  }
  // Member name: m_target
  {
    DDS_Long size = dds_message->m_target_.length();
    if (ros_message->m_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->m_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->m_target, size)) {
      return "failed to create array for field 'm_target'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->m_target.data[i];
      ros_i = dds_message->m_target_[i];
    }
  }
  // Member name: q_actual
  {
    DDS_Long size = dds_message->q_actual_.length();
    if (ros_message->q_actual.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->q_actual);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->q_actual, size)) {
      return "failed to create array for field 'q_actual'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->q_actual.data[i];
      ros_i = dds_message->q_actual_[i];
    }
  }
  // Member name: qd_actual
  {
    DDS_Long size = dds_message->qd_actual_.length();
    if (ros_message->qd_actual.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->qd_actual);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->qd_actual, size)) {
      return "failed to create array for field 'qd_actual'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->qd_actual.data[i];
      ros_i = dds_message->qd_actual_[i];
    }
  }
  // Member name: i_actual
  {
    DDS_Long size = dds_message->i_actual_.length();
    if (ros_message->i_actual.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->i_actual);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->i_actual, size)) {
      return "failed to create array for field 'i_actual'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->i_actual.data[i];
      ros_i = dds_message->i_actual_[i];
    }
  }
  // Member name: tool_acc_values
  {
    DDS_Long size = dds_message->tool_acc_values_.length();
    if (ros_message->tool_acc_values.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tool_acc_values);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tool_acc_values, size)) {
      return "failed to create array for field 'tool_acc_values'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->tool_acc_values.data[i];
      ros_i = dds_message->tool_acc_values_[i];
    }
  }
  // Member name: tcp_force
  {
    DDS_Long size = dds_message->tcp_force_.length();
    if (ros_message->tcp_force.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tcp_force);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tcp_force, size)) {
      return "failed to create array for field 'tcp_force'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->tcp_force.data[i];
      ros_i = dds_message->tcp_force_[i];
    }
  }
  // Member name: tool_vector
  {
    DDS_Long size = dds_message->tool_vector_.length();
    if (ros_message->tool_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tool_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tool_vector, size)) {
      return "failed to create array for field 'tool_vector'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->tool_vector.data[i];
      ros_i = dds_message->tool_vector_[i];
    }
  }
  // Member name: tcp_speed
  {
    DDS_Long size = dds_message->tcp_speed_.length();
    if (ros_message->tcp_speed.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tcp_speed);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tcp_speed, size)) {
      return "failed to create array for field 'tcp_speed'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->tcp_speed.data[i];
      ros_i = dds_message->tcp_speed_[i];
    }
  }
  // Member name: digital_input_bits
  {
    ros_message->digital_input_bits = dds_message->digital_input_bits_;
  }
  // Member name: motor_temperatures
  {
    DDS_Long size = dds_message->motor_temperatures_.length();
    if (ros_message->motor_temperatures.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->motor_temperatures);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->motor_temperatures, size)) {
      return "failed to create array for field 'motor_temperatures'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->motor_temperatures.data[i];
      ros_i = dds_message->motor_temperatures_[i];
    }
  }
  // Member name: controller_timer
  {
    ros_message->controller_timer = dds_message->controller_timer_;
  }
  // Member name: test_value
  {
    ros_message->test_value = dds_message->test_value_;
  }
  // Member name: robot_mode
  {
    ros_message->robot_mode = dds_message->robot_mode_;
  }
  // Member name: joint_modes
  {
    DDS_Long size = dds_message->joint_modes_.length();
    if (ros_message->joint_modes.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_modes);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_modes, size)) {
      return "failed to create array for field 'joint_modes'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->joint_modes.data[i];
      ros_i = dds_message->joint_modes_[i];
    }
  }
  return true;
}


static bool
_RobotStateRTMsg__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const ur_msgs__msg__RobotStateRTMsg * ros_message =
    static_cast<const ur_msgs__msg__RobotStateRTMsg *>(untyped_ros_message);
  ur_msgs::msg::dds_::RobotStateRTMsg_ dds_message;
  if (!_RobotStateRTMsg__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::RobotStateRTMsg_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::RobotStateRTMsg_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (ur_msgs::msg::dds_::RobotStateRTMsg_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_RobotStateRTMsg__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  ur_msgs::msg::dds_::RobotStateRTMsg_ * dds_message =
    ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::RobotStateRTMsg_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _RobotStateRTMsg__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RobotStateRTMsg__callbacks = {
  "ur_msgs::msg",  // message_namespace
  "RobotStateRTMsg",  // message_name
  _RobotStateRTMsg__get_type_code,  // get_type_code
  _RobotStateRTMsg__convert_ros_to_dds,  // convert_ros_to_dds
  _RobotStateRTMsg__convert_dds_to_ros,  // convert_dds_to_ros
  _RobotStateRTMsg__to_cdr_stream,  // to_cdr_stream
  _RobotStateRTMsg__to_message  // to_message
};

static rosidl_message_type_support_t _RobotStateRTMsg__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_RobotStateRTMsg__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  RobotStateRTMsg)()
{
  return &_RobotStateRTMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
