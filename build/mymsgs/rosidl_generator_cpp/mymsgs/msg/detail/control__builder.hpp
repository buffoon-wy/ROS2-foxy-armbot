// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include "mymsgs/msg/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Control_gpio
{
public:
  Init_Control_gpio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsgs::msg::Control gpio(::mymsgs::msg::Control::_gpio_type arg)
  {
    msg_.gpio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Control>()
{
  return mymsgs::msg::builder::Init_Control_gpio();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
