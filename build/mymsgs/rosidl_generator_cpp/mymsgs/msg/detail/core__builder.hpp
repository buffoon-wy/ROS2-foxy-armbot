// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CORE__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__CORE__BUILDER_HPP_

#include "mymsgs/msg/detail/core__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Core_battery_remaining
{
public:
  explicit Init_Core_battery_remaining(::mymsgs::msg::Core & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Core battery_remaining(::mymsgs::msg::Core::_battery_remaining_type arg)
  {
    msg_.battery_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

class Init_Core_current_battery
{
public:
  explicit Init_Core_current_battery(::mymsgs::msg::Core & msg)
  : msg_(msg)
  {}
  Init_Core_battery_remaining current_battery(::mymsgs::msg::Core::_current_battery_type arg)
  {
    msg_.current_battery = std::move(arg);
    return Init_Core_battery_remaining(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

class Init_Core_voltage_battery
{
public:
  explicit Init_Core_voltage_battery(::mymsgs::msg::Core & msg)
  : msg_(msg)
  {}
  Init_Core_current_battery voltage_battery(::mymsgs::msg::Core::_voltage_battery_type arg)
  {
    msg_.voltage_battery = std::move(arg);
    return Init_Core_current_battery(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

class Init_Core_load
{
public:
  explicit Init_Core_load(::mymsgs::msg::Core & msg)
  : msg_(msg)
  {}
  Init_Core_voltage_battery load(::mymsgs::msg::Core::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_Core_voltage_battery(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

class Init_Core_onboard_control_sensors_health
{
public:
  explicit Init_Core_onboard_control_sensors_health(::mymsgs::msg::Core & msg)
  : msg_(msg)
  {}
  Init_Core_load onboard_control_sensors_health(::mymsgs::msg::Core::_onboard_control_sensors_health_type arg)
  {
    msg_.onboard_control_sensors_health = std::move(arg);
    return Init_Core_load(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

class Init_Core_time_boot_ms
{
public:
  Init_Core_time_boot_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Core_onboard_control_sensors_health time_boot_ms(::mymsgs::msg::Core::_time_boot_ms_type arg)
  {
    msg_.time_boot_ms = std::move(arg);
    return Init_Core_onboard_control_sensors_health(msg_);
  }

private:
  ::mymsgs::msg::Core msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Core>()
{
  return mymsgs::msg::builder::Init_Core_time_boot_ms();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__CORE__BUILDER_HPP_
