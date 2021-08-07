// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__GPIO__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__GPIO__BUILDER_HPP_

#include "mymsgs/msg/detail/gpio__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Gpio_input
{
public:
  explicit Init_Gpio_input(::mymsgs::msg::Gpio & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Gpio input(::mymsgs::msg::Gpio::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Gpio msg_;
};

class Init_Gpio_output
{
public:
  explicit Init_Gpio_output(::mymsgs::msg::Gpio & msg)
  : msg_(msg)
  {}
  Init_Gpio_input output(::mymsgs::msg::Gpio::_output_type arg)
  {
    msg_.output = std::move(arg);
    return Init_Gpio_input(msg_);
  }

private:
  ::mymsgs::msg::Gpio msg_;
};

class Init_Gpio_time_boot_ms
{
public:
  Init_Gpio_time_boot_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpio_output time_boot_ms(::mymsgs::msg::Gpio::_time_boot_ms_type arg)
  {
    msg_.time_boot_ms = std::move(arg);
    return Init_Gpio_output(msg_);
  }

private:
  ::mymsgs::msg::Gpio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Gpio>()
{
  return mymsgs::msg::builder::Init_Gpio_time_boot_ms();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__GPIO__BUILDER_HPP_
