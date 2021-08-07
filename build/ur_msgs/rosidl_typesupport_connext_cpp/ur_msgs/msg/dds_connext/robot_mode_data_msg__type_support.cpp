// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from ur_msgs:msg/RobotModeDataMsg.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "ur_msgs/msg/robot_mode_data_msg__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__RobotModeDataMsg()
{
  return ur_msgs::msg::dds_::RobotModeDataMsg_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const ur_msgs::msg::RobotModeDataMsg & ros_message,
  ur_msgs::msg::dds_::RobotModeDataMsg_ & dds_message)
{
  // member.name timestamp
  dds_message.timestamp_ =
    ros_message.timestamp;

  // member.name is_robot_connected
  dds_message.is_robot_connected_ =
    ros_message.is_robot_connected;

  // member.name is_real_robot_enabled
  dds_message.is_real_robot_enabled_ =
    ros_message.is_real_robot_enabled;

  // member.name is_power_on_robot
  dds_message.is_power_on_robot_ =
    ros_message.is_power_on_robot;

  // member.name is_emergency_stopped
  dds_message.is_emergency_stopped_ =
    ros_message.is_emergency_stopped;

  // member.name is_protective_stopped
  dds_message.is_protective_stopped_ =
    ros_message.is_protective_stopped;

  // member.name is_program_running
  dds_message.is_program_running_ =
    ros_message.is_program_running;

  // member.name is_program_paused
  dds_message.is_program_paused_ =
    ros_message.is_program_paused;

  return true;
}

bool
convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::RobotModeDataMsg_ & dds_message,
  ur_msgs::msg::RobotModeDataMsg & ros_message)
{
  // member.name timestamp
  ros_message.timestamp =
    dds_message.timestamp_;

  // member.name is_robot_connected
  ros_message.is_robot_connected =
    dds_message.is_robot_connected_ == DDS_BOOLEAN_TRUE;

  // member.name is_real_robot_enabled
  ros_message.is_real_robot_enabled =
    dds_message.is_real_robot_enabled_ == DDS_BOOLEAN_TRUE;

  // member.name is_power_on_robot
  ros_message.is_power_on_robot =
    dds_message.is_power_on_robot_ == DDS_BOOLEAN_TRUE;

  // member.name is_emergency_stopped
  ros_message.is_emergency_stopped =
    dds_message.is_emergency_stopped_ == DDS_BOOLEAN_TRUE;

  // member.name is_protective_stopped
  ros_message.is_protective_stopped =
    dds_message.is_protective_stopped_ == DDS_BOOLEAN_TRUE;

  // member.name is_program_running
  ros_message.is_program_running =
    dds_message.is_program_running_ == DDS_BOOLEAN_TRUE;

  // member.name is_program_paused
  ros_message.is_program_paused =
    dds_message.is_program_paused_ == DDS_BOOLEAN_TRUE;

  return true;
}

bool
to_cdr_stream__RobotModeDataMsg(
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
  const ur_msgs::msg::RobotModeDataMsg & ros_message =
    *(const ur_msgs::msg::RobotModeDataMsg *)untyped_ros_message;

  // create a respective connext dds type
  ur_msgs::msg::dds_::RobotModeDataMsg_ * dds_message = ur_msgs::msg::dds_::RobotModeDataMsg_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_serialize_to_cdr_buffer()\n");
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
  if (ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (ur_msgs::msg::dds_::RobotModeDataMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__RobotModeDataMsg(
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

  ur_msgs::msg::dds_::RobotModeDataMsg_ * dds_message =
    ur_msgs::msg::dds_::RobotModeDataMsg_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  ur_msgs::msg::RobotModeDataMsg & ros_message =
    *(ur_msgs::msg::RobotModeDataMsg *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (ur_msgs::msg::dds_::RobotModeDataMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RobotModeDataMsg__callbacks = {
  "ur_msgs::msg",
  "RobotModeDataMsg",
  &get_type_code__RobotModeDataMsg,
  nullptr,
  nullptr,
  &to_cdr_stream__RobotModeDataMsg,
  &to_message__RobotModeDataMsg
};

static rosidl_message_type_support_t _RobotModeDataMsg__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_RobotModeDataMsg__callbacks,
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
get_message_type_support_handle<ur_msgs::msg::RobotModeDataMsg>()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_RobotModeDataMsg__handle;
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
  RobotModeDataMsg)()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_RobotModeDataMsg__handle;
}

#ifdef __cplusplus
}
#endif
