// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from ur_msgs:msg/RobotStateRTMsg.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "ur_msgs/msg/robot_state_rt_msg__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace ur_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__RobotStateRTMsg()
{
  return ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const ur_msgs::msg::RobotStateRTMsg & ros_message,
  ur_msgs::msg::dds_::RobotStateRTMsg_ & dds_message)
{
  // member.name time
  dds_message.time_ =
    ros_message.time;

  // member.name q_target
  {
    size_t size = ros_message.q_target.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.q_target_.maximum()) {
      if (!dds_message.q_target_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.q_target_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.q_target_[static_cast<DDS_Long>(i)] =
        ros_message.q_target[i];
    }
  }

  // member.name qd_target
  {
    size_t size = ros_message.qd_target.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.qd_target_.maximum()) {
      if (!dds_message.qd_target_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.qd_target_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.qd_target_[static_cast<DDS_Long>(i)] =
        ros_message.qd_target[i];
    }
  }

  // member.name qdd_target
  {
    size_t size = ros_message.qdd_target.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.qdd_target_.maximum()) {
      if (!dds_message.qdd_target_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.qdd_target_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.qdd_target_[static_cast<DDS_Long>(i)] =
        ros_message.qdd_target[i];
    }
  }

  // member.name i_target
  {
    size_t size = ros_message.i_target.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.i_target_.maximum()) {
      if (!dds_message.i_target_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.i_target_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.i_target_[static_cast<DDS_Long>(i)] =
        ros_message.i_target[i];
    }
  }

  // member.name m_target
  {
    size_t size = ros_message.m_target.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.m_target_.maximum()) {
      if (!dds_message.m_target_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.m_target_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.m_target_[static_cast<DDS_Long>(i)] =
        ros_message.m_target[i];
    }
  }

  // member.name q_actual
  {
    size_t size = ros_message.q_actual.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.q_actual_.maximum()) {
      if (!dds_message.q_actual_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.q_actual_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.q_actual_[static_cast<DDS_Long>(i)] =
        ros_message.q_actual[i];
    }
  }

  // member.name qd_actual
  {
    size_t size = ros_message.qd_actual.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.qd_actual_.maximum()) {
      if (!dds_message.qd_actual_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.qd_actual_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.qd_actual_[static_cast<DDS_Long>(i)] =
        ros_message.qd_actual[i];
    }
  }

  // member.name i_actual
  {
    size_t size = ros_message.i_actual.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.i_actual_.maximum()) {
      if (!dds_message.i_actual_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.i_actual_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.i_actual_[static_cast<DDS_Long>(i)] =
        ros_message.i_actual[i];
    }
  }

  // member.name tool_acc_values
  {
    size_t size = ros_message.tool_acc_values.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.tool_acc_values_.maximum()) {
      if (!dds_message.tool_acc_values_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.tool_acc_values_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.tool_acc_values_[static_cast<DDS_Long>(i)] =
        ros_message.tool_acc_values[i];
    }
  }

  // member.name tcp_force
  {
    size_t size = ros_message.tcp_force.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.tcp_force_.maximum()) {
      if (!dds_message.tcp_force_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.tcp_force_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.tcp_force_[static_cast<DDS_Long>(i)] =
        ros_message.tcp_force[i];
    }
  }

  // member.name tool_vector
  {
    size_t size = ros_message.tool_vector.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.tool_vector_.maximum()) {
      if (!dds_message.tool_vector_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.tool_vector_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.tool_vector_[static_cast<DDS_Long>(i)] =
        ros_message.tool_vector[i];
    }
  }

  // member.name tcp_speed
  {
    size_t size = ros_message.tcp_speed.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.tcp_speed_.maximum()) {
      if (!dds_message.tcp_speed_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.tcp_speed_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.tcp_speed_[static_cast<DDS_Long>(i)] =
        ros_message.tcp_speed[i];
    }
  }

  // member.name digital_input_bits
  dds_message.digital_input_bits_ =
    ros_message.digital_input_bits;

  // member.name motor_temperatures
  {
    size_t size = ros_message.motor_temperatures.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.motor_temperatures_.maximum()) {
      if (!dds_message.motor_temperatures_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.motor_temperatures_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.motor_temperatures_[static_cast<DDS_Long>(i)] =
        ros_message.motor_temperatures[i];
    }
  }

  // member.name controller_timer
  dds_message.controller_timer_ =
    ros_message.controller_timer;

  // member.name test_value
  dds_message.test_value_ =
    ros_message.test_value;

  // member.name robot_mode
  dds_message.robot_mode_ =
    ros_message.robot_mode;

  // member.name joint_modes
  {
    size_t size = ros_message.joint_modes.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.joint_modes_.maximum()) {
      if (!dds_message.joint_modes_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.joint_modes_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.joint_modes_[static_cast<DDS_Long>(i)] =
        ros_message.joint_modes[i];
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::RobotStateRTMsg_ & dds_message,
  ur_msgs::msg::RobotStateRTMsg & ros_message)
{
  // member.name time
  ros_message.time =
    dds_message.time_;

  // member.name q_target
  {
    size_t size = dds_message.q_target_.length();
    ros_message.q_target.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.q_target[i] =
        dds_message.q_target_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name qd_target
  {
    size_t size = dds_message.qd_target_.length();
    ros_message.qd_target.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.qd_target[i] =
        dds_message.qd_target_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name qdd_target
  {
    size_t size = dds_message.qdd_target_.length();
    ros_message.qdd_target.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.qdd_target[i] =
        dds_message.qdd_target_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name i_target
  {
    size_t size = dds_message.i_target_.length();
    ros_message.i_target.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.i_target[i] =
        dds_message.i_target_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name m_target
  {
    size_t size = dds_message.m_target_.length();
    ros_message.m_target.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.m_target[i] =
        dds_message.m_target_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name q_actual
  {
    size_t size = dds_message.q_actual_.length();
    ros_message.q_actual.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.q_actual[i] =
        dds_message.q_actual_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name qd_actual
  {
    size_t size = dds_message.qd_actual_.length();
    ros_message.qd_actual.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.qd_actual[i] =
        dds_message.qd_actual_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name i_actual
  {
    size_t size = dds_message.i_actual_.length();
    ros_message.i_actual.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.i_actual[i] =
        dds_message.i_actual_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name tool_acc_values
  {
    size_t size = dds_message.tool_acc_values_.length();
    ros_message.tool_acc_values.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.tool_acc_values[i] =
        dds_message.tool_acc_values_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name tcp_force
  {
    size_t size = dds_message.tcp_force_.length();
    ros_message.tcp_force.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.tcp_force[i] =
        dds_message.tcp_force_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name tool_vector
  {
    size_t size = dds_message.tool_vector_.length();
    ros_message.tool_vector.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.tool_vector[i] =
        dds_message.tool_vector_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name tcp_speed
  {
    size_t size = dds_message.tcp_speed_.length();
    ros_message.tcp_speed.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.tcp_speed[i] =
        dds_message.tcp_speed_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name digital_input_bits
  ros_message.digital_input_bits =
    dds_message.digital_input_bits_;

  // member.name motor_temperatures
  {
    size_t size = dds_message.motor_temperatures_.length();
    ros_message.motor_temperatures.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.motor_temperatures[i] =
        dds_message.motor_temperatures_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name controller_timer
  ros_message.controller_timer =
    dds_message.controller_timer_;

  // member.name test_value
  ros_message.test_value =
    dds_message.test_value_;

  // member.name robot_mode
  ros_message.robot_mode =
    dds_message.robot_mode_;

  // member.name joint_modes
  {
    size_t size = dds_message.joint_modes_.length();
    ros_message.joint_modes.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.joint_modes[i] =
        dds_message.joint_modes_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__RobotStateRTMsg(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const ur_msgs::msg::RobotStateRTMsg & ros_message =
    *(const ur_msgs::msg::RobotStateRTMsg *)untyped_ros_message;

  // create a respective connext dds type
  ur_msgs::msg::dds_::RobotStateRTMsg_ * dds_message = ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::RobotStateRTMsg_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__RobotStateRTMsg(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
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

  ur_msgs::msg::RobotStateRTMsg & ros_message =
    *(ur_msgs::msg::RobotStateRTMsg *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (ur_msgs::msg::dds_::RobotStateRTMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RobotStateRTMsg__callbacks = {
  "ur_msgs::msg",
  "RobotStateRTMsg",
  &get_type_code__RobotStateRTMsg,
  nullptr,
  nullptr,
  &to_cdr_stream__RobotStateRTMsg,
  &to_message__RobotStateRTMsg
};

static rosidl_message_type_support_t _RobotStateRTMsg__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_RobotStateRTMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace ur_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_ur_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::msg::RobotStateRTMsg>()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_RobotStateRTMsg__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ur_msgs, msg,
  RobotStateRTMsg)()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_RobotStateRTMsg__handle;
}

#ifdef __cplusplus
}
#endif
