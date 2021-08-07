// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from ur_msgs:msg/Analog.idl
// generated code does not contain a copyright notice


#ifndef UR_MSGS__MSG__ANALOG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define UR_MSGS__MSG__ANALOG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "ur_msgs/msg/detail/analog__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ur_msgs/msg/dds_connext/Analog_Support.h"
#include "ur_msgs/msg/dds_connext/Analog_Plugin.h"
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


namespace ur_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Analog();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ur_msgs
convert_ros_message_to_dds(
  const ur_msgs::msg::Analog & ros_message,
  ur_msgs::msg::dds_::Analog_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ur_msgs
convert_dds_message_to_ros(
  const ur_msgs::msg::dds_::Analog_ & dds_message,
  ur_msgs::msg::Analog & ros_message);

bool
to_cdr_stream__Analog(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Analog(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace ur_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ur_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ur_msgs, msg,
  Analog)();

#ifdef __cplusplus
}
#endif


#endif  // UR_MSGS__MSG__ANALOG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
