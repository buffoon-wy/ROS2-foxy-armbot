// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_msgs:srv/SetPayload.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__SRV__DETAIL__SET_PAYLOAD__TRAITS_HPP_
#define UR_MSGS__SRV__DETAIL__SET_PAYLOAD__TRAITS_HPP_

#include "ur_msgs/srv/detail/set_payload__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'center_of_gravity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::srv::SetPayload_Request>()
{
  return "ur_msgs::srv::SetPayload_Request";
}

template<>
inline const char * name<ur_msgs::srv::SetPayload_Request>()
{
  return "ur_msgs/srv/SetPayload_Request";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetPayload_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<ur_msgs::srv::SetPayload_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<ur_msgs::srv::SetPayload_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::srv::SetPayload_Response>()
{
  return "ur_msgs::srv::SetPayload_Response";
}

template<>
inline const char * name<ur_msgs::srv::SetPayload_Response>()
{
  return "ur_msgs/srv/SetPayload_Response";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetPayload_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_msgs::srv::SetPayload_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_msgs::srv::SetPayload_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::srv::SetPayload>()
{
  return "ur_msgs::srv::SetPayload";
}

template<>
inline const char * name<ur_msgs::srv::SetPayload>()
{
  return "ur_msgs/srv/SetPayload";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetPayload>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_msgs::srv::SetPayload_Request>::value &&
    has_fixed_size<ur_msgs::srv::SetPayload_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_msgs::srv::SetPayload>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_msgs::srv::SetPayload_Request>::value &&
    has_bounded_size<ur_msgs::srv::SetPayload_Response>::value
  >
{
};

template<>
struct is_service<ur_msgs::srv::SetPayload>
  : std::true_type
{
};

template<>
struct is_service_request<ur_msgs::srv::SetPayload_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_msgs::srv::SetPayload_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_MSGS__SRV__DETAIL__SET_PAYLOAD__TRAITS_HPP_
