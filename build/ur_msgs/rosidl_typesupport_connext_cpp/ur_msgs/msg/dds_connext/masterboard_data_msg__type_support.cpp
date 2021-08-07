// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from ur_msgs:msg/MasterboardDataMsg.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "ur_msgs/msg/masterboard_data_msg__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__MasterboardDataMsg()
{
  return ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const ur_msgs::msg::MasterboardDataMsg & ros_message,
  ur_msgs::msg::dds_::MasterboardDataMsg_ & dds_message)
{
  // member.name digital_input_bits
  dds_message.digital_input_bits_ =
    ros_message.digital_input_bits;

  // member.name digital_output_bits
  dds_message.digital_output_bits_ =
    ros_message.digital_output_bits;

  // member.name analog_input_range0
  dds_message.analog_input_range0_ =
    ros_message.analog_input_range0;

  // member.name analog_input_range1
  dds_message.analog_input_range1_ =
    ros_message.analog_input_range1;

  // member.name analog_input0
  dds_message.analog_input0_ =
    ros_message.analog_input0;

  // member.name analog_input1
  dds_message.analog_input1_ =
    ros_message.analog_input1;

  // member.name analog_output_domain0
  dds_message.analog_output_domain0_ =
    ros_message.analog_output_domain0;

  // member.name analog_output_domain1
  dds_message.analog_output_domain1_ =
    ros_message.analog_output_domain1;

  // member.name analog_output0
  dds_message.analog_output0_ =
    ros_message.analog_output0;

  // member.name analog_output1
  dds_message.analog_output1_ =
    ros_message.analog_output1;

  // member.name masterboard_temperature
  dds_message.masterboard_temperature_ =
    ros_message.masterboard_temperature;

  // member.name robot_current
  dds_message.robot_current_ =
    ros_message.robot_current;

  // member.name master_io_current
  dds_message.master_io_current_ =
    ros_message.master_io_current;

  // member.name master_safety_state
  dds_message.master_safety_state_ =
    ros_message.master_safety_state;

  // member.name master_onoff_state
  dds_message.master_onoff_state_ =
    ros_message.master_onoff_state;

  return true;
}

bool
convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::MasterboardDataMsg_ & dds_message,
  ur_msgs::msg::MasterboardDataMsg & ros_message)
{
  // member.name digital_input_bits
  ros_message.digital_input_bits =
    dds_message.digital_input_bits_;

  // member.name digital_output_bits
  ros_message.digital_output_bits =
    dds_message.digital_output_bits_;

  // member.name analog_input_range0
  ros_message.analog_input_range0 =
    dds_message.analog_input_range0_;

  // member.name analog_input_range1
  ros_message.analog_input_range1 =
    dds_message.analog_input_range1_;

  // member.name analog_input0
  ros_message.analog_input0 =
    dds_message.analog_input0_;

  // member.name analog_input1
  ros_message.analog_input1 =
    dds_message.analog_input1_;

  // member.name analog_output_domain0
  ros_message.analog_output_domain0 =
    dds_message.analog_output_domain0_;

  // member.name analog_output_domain1
  ros_message.analog_output_domain1 =
    dds_message.analog_output_domain1_;

  // member.name analog_output0
  ros_message.analog_output0 =
    dds_message.analog_output0_;

  // member.name analog_output1
  ros_message.analog_output1 =
    dds_message.analog_output1_;

  // member.name masterboard_temperature
  ros_message.masterboard_temperature =
    dds_message.masterboard_temperature_;

  // member.name robot_current
  ros_message.robot_current =
    dds_message.robot_current_;

  // member.name master_io_current
  ros_message.master_io_current =
    dds_message.master_io_current_;

  // member.name master_safety_state
  ros_message.master_safety_state =
    dds_message.master_safety_state_;

  // member.name master_onoff_state
  ros_message.master_onoff_state =
    dds_message.master_onoff_state_;

  return true;
}

bool
to_cdr_stream__MasterboardDataMsg(
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
  const ur_msgs::msg::MasterboardDataMsg & ros_message =
    *(const ur_msgs::msg::MasterboardDataMsg *)untyped_ros_message;

  // create a respective connext dds type
  ur_msgs::msg::dds_::MasterboardDataMsg_ * dds_message = ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::MasterboardDataMsg_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__MasterboardDataMsg(
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

  ur_msgs::msg::MasterboardDataMsg & ros_message =
    *(ur_msgs::msg::MasterboardDataMsg *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (ur_msgs::msg::dds_::MasterboardDataMsg_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _MasterboardDataMsg__callbacks = {
  "ur_msgs::msg",
  "MasterboardDataMsg",
  &get_type_code__MasterboardDataMsg,
  nullptr,
  nullptr,
  &to_cdr_stream__MasterboardDataMsg,
  &to_message__MasterboardDataMsg
};

static rosidl_message_type_support_t _MasterboardDataMsg__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_MasterboardDataMsg__callbacks,
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
get_message_type_support_handle<ur_msgs::msg::MasterboardDataMsg>()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_MasterboardDataMsg__handle;
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
  MasterboardDataMsg)()
{
  return &ur_msgs::msg::typesupport_connext_cpp::_MasterboardDataMsg__handle;
}

#ifdef __cplusplus
}
#endif
