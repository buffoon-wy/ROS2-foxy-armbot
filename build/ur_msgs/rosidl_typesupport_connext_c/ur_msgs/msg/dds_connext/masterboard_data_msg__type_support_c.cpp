// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from ur_msgs:msg/MasterboardDataMsg.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "ur_msgs/msg/masterboard_data_msg__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "ur_msgs/msg/detail/masterboard_data_msg__struct.h"
#include "ur_msgs/msg/detail/masterboard_data_msg__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ur_msgs/msg/dds_connext/MasterboardDataMsg_Support.h"
#include "ur_msgs/msg/dds_connext/MasterboardDataMsg_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_MasterboardDataMsg__get_type_code()
{
  return ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::get_typecode();
}

static bool
_MasterboardDataMsg__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs__msg__MasterboardDataMsg * ros_message =
    static_cast<const ur_msgs__msg__MasterboardDataMsg *>(untyped_ros_message);
  ur_msgs::msg::dds_::MasterboardDataMsg_ * dds_message =
    static_cast<ur_msgs::msg::dds_::MasterboardDataMsg_ *>(untyped_dds_message);
  // Member name: digital_input_bits
  {
    dds_message->digital_input_bits_ = ros_message->digital_input_bits;
  }
  // Member name: digital_output_bits
  {
    dds_message->digital_output_bits_ = ros_message->digital_output_bits;
  }
  // Member name: analog_input_range0
  {
    dds_message->analog_input_range0_ = ros_message->analog_input_range0;
  }
  // Member name: analog_input_range1
  {
    dds_message->analog_input_range1_ = ros_message->analog_input_range1;
  }
  // Member name: analog_input0
  {
    dds_message->analog_input0_ = ros_message->analog_input0;
  }
  // Member name: analog_input1
  {
    dds_message->analog_input1_ = ros_message->analog_input1;
  }
  // Member name: analog_output_domain0
  {
    dds_message->analog_output_domain0_ = ros_message->analog_output_domain0;
  }
  // Member name: analog_output_domain1
  {
    dds_message->analog_output_domain1_ = ros_message->analog_output_domain1;
  }
  // Member name: analog_output0
  {
    dds_message->analog_output0_ = ros_message->analog_output0;
  }
  // Member name: analog_output1
  {
    dds_message->analog_output1_ = ros_message->analog_output1;
  }
  // Member name: masterboard_temperature
  {
    dds_message->masterboard_temperature_ = ros_message->masterboard_temperature;
  }
  // Member name: robot_current
  {
    dds_message->robot_current_ = ros_message->robot_current;
  }
  // Member name: master_io_current
  {
    dds_message->master_io_current_ = ros_message->master_io_current;
  }
  // Member name: master_safety_state
  {
    dds_message->master_safety_state_ = ros_message->master_safety_state;
  }
  // Member name: master_onoff_state
  {
    dds_message->master_onoff_state_ = ros_message->master_onoff_state;
  }
  return true;
}

static bool
_MasterboardDataMsg__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs::msg::dds_::MasterboardDataMsg_ * dds_message =
    static_cast<const ur_msgs::msg::dds_::MasterboardDataMsg_ *>(untyped_dds_message);
  ur_msgs__msg__MasterboardDataMsg * ros_message =
    static_cast<ur_msgs__msg__MasterboardDataMsg *>(untyped_ros_message);
  // Member name: digital_input_bits
  {
    ros_message->digital_input_bits = dds_message->digital_input_bits_;
  }
  // Member name: digital_output_bits
  {
    ros_message->digital_output_bits = dds_message->digital_output_bits_;
  }
  // Member name: analog_input_range0
  {
    ros_message->analog_input_range0 = dds_message->analog_input_range0_;
  }
  // Member name: analog_input_range1
  {
    ros_message->analog_input_range1 = dds_message->analog_input_range1_;
  }
  // Member name: analog_input0
  {
    ros_message->analog_input0 = dds_message->analog_input0_;
  }
  // Member name: analog_input1
  {
    ros_message->analog_input1 = dds_message->analog_input1_;
  }
  // Member name: analog_output_domain0
  {
    ros_message->analog_output_domain0 = dds_message->analog_output_domain0_;
  }
  // Member name: analog_output_domain1
  {
    ros_message->analog_output_domain1 = dds_message->analog_output_domain1_;
  }
  // Member name: analog_output0
  {
    ros_message->analog_output0 = dds_message->analog_output0_;
  }
  // Member name: analog_output1
  {
    ros_message->analog_output1 = dds_message->analog_output1_;
  }
  // Member name: masterboard_temperature
  {
    ros_message->masterboard_temperature = dds_message->masterboard_temperature_;
  }
  // Member name: robot_current
  {
    ros_message->robot_current = dds_message->robot_current_;
  }
  // Member name: master_io_current
  {
    ros_message->master_io_current = dds_message->master_io_current_;
  }
  // Member name: master_safety_state
  {
    ros_message->master_safety_state = dds_message->master_safety_state_;
  }
  // Member name: master_onoff_state
  {
    ros_message->master_onoff_state = dds_message->master_onoff_state_;
  }
  return true;
}


static bool
_MasterboardDataMsg__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const ur_msgs__msg__MasterboardDataMsg * ros_message =
    static_cast<const ur_msgs__msg__MasterboardDataMsg *>(untyped_ros_message);
  ur_msgs::msg::dds_::MasterboardDataMsg_ dds_message;
  if (!_MasterboardDataMsg__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::MasterboardDataMsg_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::MasterboardDataMsg_Plugin_serialize_to_cdr_buffer()\n");
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
  if (ur_msgs::msg::dds_::MasterboardDataMsg_Plugin_serialize_to_cdr_buffer(
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
_MasterboardDataMsg__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  ur_msgs::msg::dds_::MasterboardDataMsg_ * dds_message =
    ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::MasterboardDataMsg_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _MasterboardDataMsg__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _MasterboardDataMsg__callbacks = {
  "ur_msgs::msg",  // message_namespace
  "MasterboardDataMsg",  // message_name
  _MasterboardDataMsg__get_type_code,  // get_type_code
  _MasterboardDataMsg__convert_ros_to_dds,  // convert_ros_to_dds
  _MasterboardDataMsg__convert_dds_to_ros,  // convert_dds_to_ros
  _MasterboardDataMsg__to_cdr_stream,  // to_cdr_stream
  _MasterboardDataMsg__to_message  // to_message
};

static rosidl_message_type_support_t _MasterboardDataMsg__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_MasterboardDataMsg__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  MasterboardDataMsg)()
{
  return &_MasterboardDataMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
