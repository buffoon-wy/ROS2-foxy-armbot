// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__PACKET_MSG__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__PACKET_MSG__BUILDER_HPP_

#include "mymsgs/msg/detail/packet_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_PacketMsg_buf
{
public:
  Init_PacketMsg_buf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsgs::msg::PacketMsg buf(::mymsgs::msg::PacketMsg::_buf_type arg)
  {
    msg_.buf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::PacketMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::PacketMsg>()
{
  return mymsgs::msg::builder::Init_PacketMsg_buf();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__PACKET_MSG__BUILDER_HPP_
