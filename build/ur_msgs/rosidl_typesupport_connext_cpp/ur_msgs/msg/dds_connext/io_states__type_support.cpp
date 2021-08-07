// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "ur_msgs/msg/io_states__rosidl_typesupport_connext_cpp.hpp"
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
namespace dds_
{
class Digital_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const ur_msgs::msg::Digital &,
  ur_msgs::msg::dds_::Digital_ &);
bool convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Digital_ &,
  ur_msgs::msg::Digital &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace ur_msgs
namespace ur_msgs
{
namespace msg
{
namespace dds_
{
class Digital_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const ur_msgs::msg::Digital &,
  ur_msgs::msg::dds_::Digital_ &);
bool convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Digital_ &,
  ur_msgs::msg::Digital &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace ur_msgs
namespace ur_msgs
{
namespace msg
{
namespace dds_
{
class Digital_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const ur_msgs::msg::Digital &,
  ur_msgs::msg::dds_::Digital_ &);
bool convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Digital_ &,
  ur_msgs::msg::Digital &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace ur_msgs
namespace ur_msgs
{
namespace msg
{
namespace dds_
{
class Analog_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const ur_msgs::msg::Analog &,
  ur_msgs::msg::dds_::Analog_ &);
bool convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Analog_ &,
  ur_msgs::msg::Analog &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace ur_msgs
namespace ur_msgs
{
namespace msg
{
namespace dds_
{
class Analog_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const ur_msgs::msg::Analog &,
  ur_msgs::msg::dds_::Analog_ &);
bool convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Analog_ &,
  ur_msgs::msg::Analog &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace ur_msgs


namespace ur_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__IOStates()
{
  return ur_msgs::msg::dds_::IOStates_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const ur_msgs::msg::IOStates & ros_message,
  ur_msgs::msg::dds_::IOStates_ & dds_message)
{
  // member.name digital_in_states
  {
    size_t size = ros_message.digital_in_states.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.digital_in_states_.maximum()) {
      if (!dds_message.digital_in_states_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.digital_in_states_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.digital_in_states[i],
          dds_message.digital_in_states_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name digital_out_states
  {
    size_t size = ros_message.digital_out_states.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.digital_out_states_.maximum()) {
      if (!dds_message.digital_out_states_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.digital_out_states_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.digital_out_states[i],
          dds_message.digital_out_states_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name flag_states
  {
    size_t size = ros_message.flag_states.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.flag_states_.maximum()) {
      if (!dds_message.flag_states_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.flag_states_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.flag_states[i],
          dds_message.flag_states_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name analog_in_states
  {
    size_t size = ros_message.analog_in_states.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.analog_in_states_.maximum()) {
      if (!dds_message.analog_in_states_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.analog_in_states_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.analog_in_states[i],
          dds_message.analog_in_states_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name analog_out_states
  {
    size_t size = ros_message.analog_out_states.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.analog_out_states_.maximum()) {
      if (!dds_message.analog_out_states_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.analog_out_states_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.analog_out_states[i],
          dds_message.analog_out_states_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::IOStates_ & dds_message,
  ur_msgs::msg::IOStates & ros_message)
{
  // member.name digital_in_states
  {
    size_t size = dds_message.digital_in_states_.length();
    ros_message.digital_in_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.digital_in_states_[static_cast<DDS_Long>(i)],
          ros_message.digital_in_states[i]))
      {
        return false;
      }
    }
  }

  // member.name digital_out_states
  {
    size_t size = dds_message.digital_out_states_.length();
    ros_message.digital_out_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.digital_out_states_[static_cast<DDS_Long>(i)],
          ros_message.digital_out_states[i]))
      {
        return false;
      }
    }
  }

  // member.name flag_states
  {
    size_t size = dds_message.flag_states_.length();
    ros_message.flag_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.flag_states_[static_cast<DDS_Long>(i)],
          ros_message.flag_states[i]))
      {
        return false;
      }
    }
  }

  // member.name analog_in_states
  {
    size_t size = dds_message.analog_in_states_.length();
    ros_message.analog_in_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.analog_in_states_[static_cast<DDS_Long>(i)],
          ros_message.analog_in_states[i]))
      {
        return false;
      }
    }
  }

  // member.name analog_out_states
  {
    size_t size = dds_message.analog_out_states_.length();
    ros_message.analog_out_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !ur_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.analog_out_states_[static_cast<DDS_Long>(i)],
          ros_message.analog_out_states[i]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
to_cdr_stream__IOStates(
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
  const ur_msgs::msg::IOStates & ros_message =
    *(const ur_msgs::msg::IOStates *)untyped_ros_message;

  // create a respective connext dds type
  ur_msgs::msg::dds_::IOStates_ * dds_message = ur_msgs::msg::dds_::IOStates_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer()\n");
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
  if (ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (ur_msgs::msg::dds_::IOStates_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__IOStates(
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

  ur_msgs::msg::dds_::IOStates_ * dds_message =
    ur_msgs::msg::dds_::IOStates_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::IOStates_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  ur_msgs::msg::IOStates & ros_message =
    *(ur_msgs::msg::IOStates *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (ur_msgs::msg::dds_::IOStates_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _IOStates__callbacks = {
  "ur_msgs::msg",
  "IOStates",
  &get_type_code__IOStates,
  nullptr,
  nullptr,
  &to_cdr_stream__IOStates,
  &to_message__IOStates
};

static rosidl_message_type_support_t _IOStates__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_IOStates__callbacks,
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
get_message_type_support_handle<ur_msgs::msg::IOStates>()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_IOStates__handle;
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
  IOStates)()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_IOStates__handle;
}

#ifdef __cplusplus
}
#endif
