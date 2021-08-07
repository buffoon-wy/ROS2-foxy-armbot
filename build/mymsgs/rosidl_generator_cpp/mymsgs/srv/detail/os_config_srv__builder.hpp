// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__BUILDER_HPP_
#define MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__BUILDER_HPP_

#include "mymsgs/srv/detail/os_config_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::srv::OSConfigSrv_Request>()
{
  return ::mymsgs::srv::OSConfigSrv_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mymsgs


namespace mymsgs
{

namespace srv
{

namespace builder
{

class Init_OSConfigSrv_Response_metadata
{
public:
  Init_OSConfigSrv_Response_metadata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsgs::srv::OSConfigSrv_Response metadata(::mymsgs::srv::OSConfigSrv_Response::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::srv::OSConfigSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::srv::OSConfigSrv_Response>()
{
  return mymsgs::srv::builder::Init_OSConfigSrv_Response_metadata();
}

}  // namespace mymsgs

#endif  // MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__BUILDER_HPP_
