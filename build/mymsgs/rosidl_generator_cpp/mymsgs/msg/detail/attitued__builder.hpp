// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__ATTITUED__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__ATTITUED__BUILDER_HPP_

#include "mymsgs/msg/detail/attitued__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Attitued_yawspeed
{
public:
  explicit Init_Attitued_yawspeed(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Attitued yawspeed(::mymsgs::msg::Attitued::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_pitchspeed
{
public:
  explicit Init_Attitued_pitchspeed(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  Init_Attitued_yawspeed pitchspeed(::mymsgs::msg::Attitued::_pitchspeed_type arg)
  {
    msg_.pitchspeed = std::move(arg);
    return Init_Attitued_yawspeed(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_rollspeed
{
public:
  explicit Init_Attitued_rollspeed(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  Init_Attitued_pitchspeed rollspeed(::mymsgs::msg::Attitued::_rollspeed_type arg)
  {
    msg_.rollspeed = std::move(arg);
    return Init_Attitued_pitchspeed(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_yaw
{
public:
  explicit Init_Attitued_yaw(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  Init_Attitued_rollspeed yaw(::mymsgs::msg::Attitued::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Attitued_rollspeed(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_pitch
{
public:
  explicit Init_Attitued_pitch(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  Init_Attitued_yaw pitch(::mymsgs::msg::Attitued::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Attitued_yaw(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_roll
{
public:
  explicit Init_Attitued_roll(::mymsgs::msg::Attitued & msg)
  : msg_(msg)
  {}
  Init_Attitued_pitch roll(::mymsgs::msg::Attitued::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Attitued_pitch(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

class Init_Attitued_time_boot_ms
{
public:
  Init_Attitued_time_boot_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attitued_roll time_boot_ms(::mymsgs::msg::Attitued::_time_boot_ms_type arg)
  {
    msg_.time_boot_ms = std::move(arg);
    return Init_Attitued_roll(msg_);
  }

private:
  ::mymsgs::msg::Attitued msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Attitued>()
{
  return mymsgs::msg::builder::Init_Attitued_time_boot_ms();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__ATTITUED__BUILDER_HPP_
