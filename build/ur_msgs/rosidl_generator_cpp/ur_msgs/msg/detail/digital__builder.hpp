// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_
#define UR_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_

#include "ur_msgs/msg/detail/digital__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ur_msgs
{

namespace msg
{

namespace builder
{

class Init_Digital_state
{
public:
  explicit Init_Digital_state(::ur_msgs::msg::Digital & msg)
  : msg_(msg)
  {}
  ::ur_msgs::msg::Digital state(::ur_msgs::msg::Digital::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::msg::Digital msg_;
};

class Init_Digital_pin
{
public:
  Init_Digital_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Digital_state pin(::ur_msgs::msg::Digital::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_Digital_state(msg_);
  }

private:
  ::ur_msgs::msg::Digital msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::msg::Digital>()
{
  return ur_msgs::msg::builder::Init_Digital_pin();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_
