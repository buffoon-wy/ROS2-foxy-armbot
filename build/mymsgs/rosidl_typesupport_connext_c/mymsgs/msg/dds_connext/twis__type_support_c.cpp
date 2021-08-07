// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mymsgs:msg/Twis.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mymsgs/msg/twis__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mymsgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mymsgs/msg/detail/twis__struct.h"
#include "mymsgs/msg/detail/twis__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mymsgs/msg/dds_connext/Twis_Support.h"
#include "mymsgs/msg/dds_connext/Twis_Plugin.h"

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
_Twis__get_type_code()
{
  return mymsgs::msg::dds_::Twis_TypeSupport::get_typecode();
}

static bool
_Twis__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs__msg__Twis * ros_message =
    static_cast<const mymsgs__msg__Twis *>(untyped_ros_message);
  mymsgs::msg::dds_::Twis_ * dds_message =
    static_cast<mymsgs::msg::dds_::Twis_ *>(untyped_dds_message);
  // Member name: time_boot_ms
  {
    dds_message->time_boot_ms_ = ros_message->time_boot_ms;
  }
  // Member name: vx
  {
    dds_message->vx_ = ros_message->vx;
  }
  // Member name: vy
  {
    dds_message->vy_ = ros_message->vy;
  }
  // Member name: vz
  {
    dds_message->vz_ = ros_message->vz;
  }
  // Member name: wx
  {
    dds_message->wx_ = ros_message->wx;
  }
  // Member name: wy
  {
    dds_message->wy_ = ros_message->wy;
  }
  // Member name: wz
  {
    dds_message->wz_ = ros_message->wz;
  }
  return true;
}

static bool
_Twis__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs::msg::dds_::Twis_ * dds_message =
    static_cast<const mymsgs::msg::dds_::Twis_ *>(untyped_dds_message);
  mymsgs__msg__Twis * ros_message =
    static_cast<mymsgs__msg__Twis *>(untyped_ros_message);
  // Member name: time_boot_ms
  {
    ros_message->time_boot_ms = dds_message->time_boot_ms_;
  }
  // Member name: vx
  {
    ros_message->vx = dds_message->vx_;
  }
  // Member name: vy
  {
    ros_message->vy = dds_message->vy_;
  }
  // Member name: vz
  {
    ros_message->vz = dds_message->vz_;
  }
  // Member name: wx
  {
    ros_message->wx = dds_message->wx_;
  }
  // Member name: wy
  {
    ros_message->wy = dds_message->wy_;
  }
  // Member name: wz
  {
    ros_message->wz = dds_message->wz_;
  }
  return true;
}


static bool
_Twis__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mymsgs__msg__Twis * ros_message =
    static_cast<const mymsgs__msg__Twis *>(untyped_ros_message);
  mymsgs::msg::dds_::Twis_ dds_message;
  if (!_Twis__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsgs::msg::dds_::Twis_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsgs::msg::dds_::Twis_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mymsgs::msg::dds_::Twis_Plugin_serialize_to_cdr_buffer(
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
_Twis__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mymsgs::msg::dds_::Twis_ * dds_message =
    mymsgs::msg::dds_::Twis_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsgs::msg::dds_::Twis_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Twis__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mymsgs::msg::dds_::Twis_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Twis__callbacks = {
  "mymsgs::msg",  // message_namespace
  "Twis",  // message_name
  _Twis__get_type_code,  // get_type_code
  _Twis__convert_ros_to_dds,  // convert_ros_to_dds
  _Twis__convert_dds_to_ros,  // convert_dds_to_ros
  _Twis__to_cdr_stream,  // to_cdr_stream
  _Twis__to_message  // to_message
};

static rosidl_message_type_support_t _Twis__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Twis__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mymsgs, msg,
  Twis)()
{
  return &_Twis__type_support;
}

#if defined(__cplusplus)
}
#endif
