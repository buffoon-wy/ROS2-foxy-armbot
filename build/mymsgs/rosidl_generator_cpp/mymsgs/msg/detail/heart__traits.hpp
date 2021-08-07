// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__HEART__TRAITS_HPP_

#include "mymsgs/msg/detail/heart__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::Heart>()
{
  return "mymsgs::msg::Heart";
}

template<>
inline const char * name<mymsgs::msg::Heart>()
{
  return "mymsgs/msg/Heart";
}

template<>
struct has_fixed_size<mymsgs::msg::Heart>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::msg::Heart>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::msg::Heart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__HEART__TRAITS_HPP_
