// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Twis.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__TWIS__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__TWIS__BUILDER_HPP_

#include "mymsgs/msg/detail/twis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Twis_wz
{
public:
  explicit Init_Twis_wz(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Twis wz(::mymsgs::msg::Twis::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_wy
{
public:
  explicit Init_Twis_wy(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  Init_Twis_wz wy(::mymsgs::msg::Twis::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_Twis_wz(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_wx
{
public:
  explicit Init_Twis_wx(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  Init_Twis_wy wx(::mymsgs::msg::Twis::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_Twis_wy(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_vz
{
public:
  explicit Init_Twis_vz(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  Init_Twis_wx vz(::mymsgs::msg::Twis::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_Twis_wx(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_vy
{
public:
  explicit Init_Twis_vy(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  Init_Twis_vz vy(::mymsgs::msg::Twis::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Twis_vz(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_vx
{
public:
  explicit Init_Twis_vx(::mymsgs::msg::Twis & msg)
  : msg_(msg)
  {}
  Init_Twis_vy vx(::mymsgs::msg::Twis::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Twis_vy(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

class Init_Twis_time_boot_ms
{
public:
  Init_Twis_time_boot_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twis_vx time_boot_ms(::mymsgs::msg::Twis::_time_boot_ms_type arg)
  {
    msg_.time_boot_ms = std::move(arg);
    return Init_Twis_vx(msg_);
  }

private:
  ::mymsgs::msg::Twis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Twis>()
{
  return mymsgs::msg::builder::Init_Twis_time_boot_ms();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__TWIS__BUILDER_HPP_
