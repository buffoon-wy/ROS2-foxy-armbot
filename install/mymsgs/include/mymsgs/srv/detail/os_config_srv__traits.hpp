// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__TRAITS_HPP_
#define MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__TRAITS_HPP_

#include "mymsgs/srv/detail/os_config_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv_Request>()
{
  return "mymsgs::srv::OSConfigSrv_Request";
}

template<>
inline const char * name<mymsgs::srv::OSConfigSrv_Request>()
{
  return "mymsgs/srv/OSConfigSrv_Request";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgs::srv::OSConfigSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv_Response>()
{
  return "mymsgs::srv::OSConfigSrv_Response";
}

template<>
inline const char * name<mymsgs::srv::OSConfigSrv_Response>()
{
  return "mymsgs/srv/OSConfigSrv_Response";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsgs::srv::OSConfigSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv>()
{
  return "mymsgs::srv::OSConfigSrv";
}

template<>
inline const char * name<mymsgs::srv::OSConfigSrv>()
{
  return "mymsgs/srv/OSConfigSrv";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsgs::srv::OSConfigSrv_Request>::value &&
    has_fixed_size<mymsgs::srv::OSConfigSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsgs::srv::OSConfigSrv_Request>::value &&
    has_bounded_size<mymsgs::srv::OSConfigSrv_Response>::value
  >
{
};

template<>
struct is_service<mymsgs::srv::OSConfigSrv>
  : std::true_type
{
};

template<>
struct is_service_request<mymsgs::srv::OSConfigSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mymsgs::srv::OSConfigSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__TRAITS_HPP_
