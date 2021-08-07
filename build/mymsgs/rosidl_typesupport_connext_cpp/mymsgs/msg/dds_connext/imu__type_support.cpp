// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mymsgs/msg/imu__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__Imu()
{
  return mymsgs::msg::dds_::Imu_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mymsgs::msg::Imu & ros_message,
  mymsgs::msg::dds_::Imu_ & dds_message)
{
  // member.name time_boot_ms
  dds_message.time_boot_ms_ =
    ros_message.time_boot_ms;

  // member.name xacc
  dds_message.xacc_ =
    ros_message.xacc;

  // member.name yacc
  dds_message.yacc_ =
    ros_message.yacc;

  // member.name zacc
  dds_message.zacc_ =
    ros_message.zacc;

  // member.name xgyro
  dds_message.xgyro_ =
    ros_message.xgyro;

  // member.name ygyro
  dds_message.ygyro_ =
    ros_message.ygyro;

  // member.name zgyro
  dds_message.zgyro_ =
    ros_message.zgyro;

  // member.name xmag
  dds_message.xmag_ =
    ros_message.xmag;

  // member.name ymag
  dds_message.ymag_ =
    ros_message.ymag;

  // member.name zmag
  dds_message.zmag_ =
    ros_message.zmag;

  return true;
}

bool
convert_dds_message_to_ros(
  const mymsgs::msg::dds_::Imu_ & dds_message,
  mymsgs::msg::Imu & ros_message)
{
  // member.name time_boot_ms
  ros_message.time_boot_ms =
    dds_message.time_boot_ms_;

  // member.name xacc
  ros_message.xacc =
    dds_message.xacc_;

  // member.name yacc
  ros_message.yacc =
    dds_message.yacc_;

  // member.name zacc
  ros_message.zacc =
    dds_message.zacc_;

  // member.name xgyro
  ros_message.xgyro =
    dds_message.xgyro_;

  // member.name ygyro
  ros_message.ygyro =
    dds_message.ygyro_;

  // member.name zgyro
  ros_message.zgyro =
    dds_message.zgyro_;

  // member.name xmag
  ros_message.xmag =
    dds_message.xmag_;

  // member.name ymag
  ros_message.ymag =
    dds_message.ymag_;

  // member.name zmag
  ros_message.zmag =
    dds_message.zmag_;

  return true;
}

bool
to_cdr_stream__Imu(
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
  const mymsgs::msg::Imu & ros_message =
    *(const mymsgs::msg::Imu *)untyped_ros_message;

  // create a respective connext dds type
  mymsgs::msg::dds_::Imu_ * dds_message = mymsgs::msg::dds_::Imu_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsgs::msg::dds_::Imu_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsgs::msg::dds_::Imu_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mymsgs::msg::dds_::Imu_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mymsgs::msg::dds_::Imu_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Imu(
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

  mymsgs::msg::dds_::Imu_ * dds_message =
    mymsgs::msg::dds_::Imu_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsgs::msg::dds_::Imu_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mymsgs::msg::Imu & ros_message =
    *(mymsgs::msg::Imu *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mymsgs::msg::dds_::Imu_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Imu__callbacks = {
  "mymsgs::msg",
  "Imu",
  &get_type_code__Imu,
  nullptr,
  nullptr,
  &to_cdr_stream__Imu,
  &to_message__Imu
};

static rosidl_message_type_support_t _Imu__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Imu__callbacks,
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
get_message_type_support_handle<mymsgs::msg::Imu>()
{
  return &mymsgs::msg::typesupport_connext_cpp::_Imu__handle;
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
  Imu)()
{
  return &mymsgs::msg::typesupport_connext_cpp::_Imu__handle;
}

#ifdef __cplusplus
}
#endif
