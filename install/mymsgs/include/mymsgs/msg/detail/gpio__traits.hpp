// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__GPIO__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__GPIO__TRAITS_HPP_

#include "mymsgs/msg/detail/gpio__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::Gpio>()
{
  return "mymsgs::msg::Gpio";
}

template<>
inline const char * name<mymsgs::msg::Gpio>()
{
  return "mymsgs/msg/Gpio";
}

template<>
struct has_fixed_size<mymsgs::msg::Gpio>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::msg::Gpio>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::msg::Gpio>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__GPIO__TRAITS_HPP_
