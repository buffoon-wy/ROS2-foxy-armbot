// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from ur_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "ur_msgs/msg/digital__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "ur_msgs/msg/detail/digital__struct.h"
#include "ur_msgs/msg/detail/digital__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ur_msgs/msg/dds_connext/Digital_Support.h"
#include "ur_msgs/msg/dds_connext/Digital_Plugin.h"

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
_Digital__get_type_code()
{
  return ur_msgs::msg::dds_::Digital_TypeSupport::get_typecode();
}

static bool
_Digital__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs__msg__Digital * ros_message =
    static_cast<const ur_msgs__msg__Digital *>(untyped_ros_message);
  ur_msgs::msg::dds_::Digital_ * dds_message =
    static_cast<ur_msgs::msg::dds_::Digital_ *>(untyped_dds_message);
  // Member name: pin
  {
    dds_message->pin_ = ros_message->pin;
  }
  // Member name: state
  {
    dds_message->state_ = ros_message->state;
  }
  return true;
}

static bool
_Digital__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs::msg::dds_::Digital_ * dds_message =
    static_cast<const ur_msgs::msg::dds_::Digital_ *>(untyped_dds_message);
  ur_msgs__msg__Digital * ros_message =
    static_cast<ur_msgs__msg__Digital *>(untyped_ros_message);
  // Member name: pin
  {
    ros_message->pin = dds_message->pin_;
  }
  // Member name: state
  {
    ros_message->state = dds_message->state_ == static_cast<DDS_Boolean>(true);
  }
  return true;
}


static bool
_Digital__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const ur_msgs__msg__Digital * ros_message =
    static_cast<const ur_msgs__msg__Digital *>(untyped_ros_message);
  ur_msgs::msg::dds_::Digital_ dds_message;
  if (!_Digital__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::Digital_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::Digital_Plugin_serialize_to_cdr_buffer()\n");
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
  if (ur_msgs::msg::dds_::Digital_Plugin_serialize_to_cdr_buffer(
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
_Digital__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  ur_msgs::msg::dds_::Digital_ * dds_message =
    ur_msgs::msg::dds_::Digital_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::Digital_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Digital__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (ur_msgs::msg::dds_::Digital_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Digital__callbacks = {
  "ur_msgs::msg",  // message_namespace
  "Digital",  // message_name
  _Digital__get_type_code,  // get_type_code
  _Digital__convert_ros_to_dds,  // convert_ros_to_dds
  _Digital__convert_dds_to_ros,  // convert_dds_to_ros
  _Digital__to_cdr_stream,  // to_cdr_stream
  _Digital__to_message  // to_message
};

static rosidl_message_type_support_t _Digital__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Digital__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  Digital)()
{
  return &_Digital__type_support;
}

#if defined(__cplusplus)
}
#endif
