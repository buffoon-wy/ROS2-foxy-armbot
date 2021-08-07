// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__ATTITUED__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__ATTITUED__TRAITS_HPP_

#include "mymsgs/msg/detail/attitued__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::Attitued>()
{
  return "mymsgs::msg::Attitued";
}

template<>
inline const char * name<mymsgs::msg::Attitued>()
{
  return "mymsgs/msg/Attitued";
}

template<>
struct has_fixed_size<mymsgs::msg::Attitued>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::msg::Attitued>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::msg::Attitued>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__ATTITUED__TRAITS_HPP_
