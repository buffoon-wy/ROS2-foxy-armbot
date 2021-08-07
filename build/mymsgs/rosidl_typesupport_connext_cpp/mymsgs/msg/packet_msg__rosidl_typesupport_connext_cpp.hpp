// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice


#ifndef MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "mymsgs/msg/detail/packet_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mymsgs/msg/dds_connext/PacketMsg_Support.h"
#include "mymsgs/msg/dds_connext/PacketMsg_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace mymsgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PacketMsg();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_ros_message_to_dds(
  const mymsgs::msg::PacketMsg & ros_message,
  mymsgs::msg::dds_::PacketMsg_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_dds_message_to_ros(
  const mymsgs::msg::dds_::PacketMsg_ & dds_message,
  mymsgs::msg::PacketMsg & ros_message);

bool
to_cdr_stream__PacketMsg(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PacketMsg(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mymsgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsgs, msg,
  PacketMsg)();

#ifdef __cplusplus
}
#endif


#endif  // MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
