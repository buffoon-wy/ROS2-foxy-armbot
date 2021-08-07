// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CORE__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__CORE__TRAITS_HPP_

#include "mymsgs/msg/detail/core__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::Core>()
{
  return "mymsgs::msg::Core";
}

template<>
inline const char * name<mymsgs::msg::Core>()
{
  return "mymsgs/msg/Core";
}

template<>
struct has_fixed_size<mymsgs::msg::Core>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::msg::Core>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::msg::Core>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__CORE__TRAITS_HPP_
