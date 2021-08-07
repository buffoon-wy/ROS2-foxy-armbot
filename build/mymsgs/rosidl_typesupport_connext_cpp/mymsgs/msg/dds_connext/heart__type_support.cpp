// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mymsgs/msg/heart__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace mymsgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Heart()
{
  return mymsgs::msg::dds_::Heart_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mymsgs::msg::Heart & ros_message,
  mymsgs::msg::dds_::Heart_ & dds_message)
{
  // member.name error_code
  dds_message.error_code_ =
    ros_message.error_code;

  // member.name type
  dds_message.type_ =
    ros_message.type;

  // member.name base_mode
  dds_message.base_mode_ =
    ros_message.base_mode;

  // member.name system_status
  dds_message.system_status_ =
    ros_message.system_status;

  return true;
}

bool
convert_dds_message_to_ros(
  const mymsgs::msg::dds_::Heart_ & dds_message,
  mymsgs::msg::Heart & ros_message)
{
  // member.name error_code
  ros_message.error_code =
    dds_message.error_code_;

  // member.name type
  ros_message.type =
    dds_message.type_;

  // member.name base_mode
  ros_message.base_mode =
    dds_message.base_mode_;

  // member.name system_status
  ros_message.system_status =
    dds_message.system_status_;

  return true;
}

bool
to_cdr_stream__Heart(
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
  const mymsgs::msg::Heart & ros_message =
    *(const mymsgs::msg::Heart *)untyped_ros_message;

  // create a respective connext dds type
  mymsgs::msg::dds_::Heart_ * dds_message = mymsgs::msg::dds_::Heart_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsgs::msg::dds_::Heart_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsgs::msg::dds_::Heart_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mymsgs::msg::dds_::Heart_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mymsgs::msg::dds_::Heart_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Heart(
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

  mymsgs::msg::dds_::Heart_ * dds_message =
    mymsgs::msg::dds_::Heart_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsgs::msg::dds_::Heart_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mymsgs::msg::Heart & ros_message =
    *(mymsgs::msg::Heart *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mymsgs::msg::dds_::Heart_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Heart__callbacks = {
  "mymsgs::msg",
  "Heart",
  &get_type_code__Heart,
  nullptr,
  nullptr,
  &to_cdr_stream__Heart,
  &to_message__Heart
};

static rosidl_message_type_support_t _Heart__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Heart__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mymsgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mymsgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsgs::msg::Heart>()
{
  return &mymsgs::msg::typesupport_connext_cpp::_Heart__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsgs, msg,
  Heart)()
{
  return &mymsgs::msg::typesupport_connext_cpp::_Heart__handle;
}

#ifdef __cplusplus
}
#endif
