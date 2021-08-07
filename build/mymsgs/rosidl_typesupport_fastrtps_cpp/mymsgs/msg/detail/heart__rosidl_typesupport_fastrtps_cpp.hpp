// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MYMSGS__MSG__DETAIL__HEART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mymsgs/msg/detail/heart__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mymsgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_serialize(
  const mymsgs::msg::Heart & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Heart & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Heart & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Heart(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Heart)();

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__HEART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
