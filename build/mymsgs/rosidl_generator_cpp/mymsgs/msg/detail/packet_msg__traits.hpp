// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__PACKET_MSG__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__PACKET_MSG__TRAITS_HPP_

#include "mymsgs/msg/detail/packet_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::PacketMsg>()
{
  return "mymsgs::msg::PacketMsg";
}

template<>
inline const char * name<mymsgs::msg::PacketMsg>()
{
  return "mymsgs/msg/PacketMsg";
}

template<>
struct has_fixed_size<mymsgs::msg::PacketMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsgs::msg::PacketMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsgs::msg::PacketMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__PACKET_MSG__TRAITS_HPP_
