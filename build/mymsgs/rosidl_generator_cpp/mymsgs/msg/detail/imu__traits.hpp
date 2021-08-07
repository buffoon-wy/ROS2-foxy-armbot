// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__IMU__TRAITS_HPP_
#define MYMSGS__MSG__DETAIL__IMU__TRAITS_HPP_

#include "mymsgs/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::msg::Imu>()
{
  return "mymsgs::msg::Imu";
}

template<>
inline const char * name<mymsgs::msg::Imu>()
{
  return "mymsgs/msg/Imu";
}

template<>
struct has_fixed_size<mymsgs::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__MSG__DETAIL__IMU__TRAITS_HPP_
