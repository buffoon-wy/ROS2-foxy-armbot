// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__VERSION__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__VERSION__BUILDER_HPP_

#include "mymsgs/msg/detail/version__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Version_uiud
{
public:
  explicit Init_Version_uiud(::mymsgs::msg::Version & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Version uiud(::mymsgs::msg::Version::_uiud_type arg)
  {
    msg_.uiud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Version msg_;
};

class Init_Version_software_ver
{
public:
  explicit Init_Version_software_ver(::mymsgs::msg::Version & msg)
  : msg_(msg)
  {}
  Init_Version_uiud software_ver(::mymsgs::msg::Version::_software_ver_type arg)
  {
    msg_.software_ver = std::move(arg);
    return Init_Version_uiud(msg_);
  }

private:
  ::mymsgs::msg::Version msg_;
};

class Init_Version_hardware_ver
{
public:
  Init_Version_hardware_ver()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Version_software_ver hardware_ver(::mymsgs::msg::Version::_hardware_ver_type arg)
  {
    msg_.hardware_ver = std::move(arg);
    return Init_Version_software_ver(msg_);
  }

private:
  ::mymsgs::msg::Version msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Version>()
{
  return mymsgs::msg::builder::Init_Version_hardware_ver();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__VERSION__BUILDER_HPP_
