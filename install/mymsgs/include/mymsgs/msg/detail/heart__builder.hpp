// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__HEART__BUILDER_HPP_

#include "mymsgs/msg/detail/heart__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Heart_system_status
{
public:
  explicit Init_Heart_system_status(::mymsgs::msg::Heart & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Heart system_status(::mymsgs::msg::Heart::_system_status_type arg)
  {
    msg_.system_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Heart msg_;
};

class Init_Heart_base_mode
{
public:
  explicit Init_Heart_base_mode(::mymsgs::msg::Heart & msg)
  : msg_(msg)
  {}
  Init_Heart_system_status base_mode(::mymsgs::msg::Heart::_base_mode_type arg)
  {
    msg_.base_mode = std::move(arg);
    return Init_Heart_system_status(msg_);
  }

private:
  ::mymsgs::msg::Heart msg_;
};

class Init_Heart_type
{
public:
  explicit Init_Heart_type(::mymsgs::msg::Heart & msg)
  : msg_(msg)
  {}
  Init_Heart_base_mode type(::mymsgs::msg::Heart::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Heart_base_mode(msg_);
  }

private:
  ::mymsgs::msg::Heart msg_;
};

class Init_Heart_error_code
{
public:
  Init_Heart_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Heart_type error_code(::mymsgs::msg::Heart::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Heart_type(msg_);
  }

private:
  ::mymsgs::msg::Heart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Heart>()
{
  return mymsgs::msg::builder::Init_Heart_error_code();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__HEART__BUILDER_HPP_
