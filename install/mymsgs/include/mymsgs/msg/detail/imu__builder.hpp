// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define MYMSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include "mymsgs/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgs
{

namespace msg
{

namespace builder
{

class Init_Imu_zmag
{
public:
  explicit Init_Imu_zmag(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  ::mymsgs::msg::Imu zmag(::mymsgs::msg::Imu::_zmag_type arg)
  {
    msg_.zmag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_ymag
{
public:
  explicit Init_Imu_ymag(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_zmag ymag(::mymsgs::msg::Imu::_ymag_type arg)
  {
    msg_.ymag = std::move(arg);
    return Init_Imu_zmag(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_xmag
{
public:
  explicit Init_Imu_xmag(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_ymag xmag(::mymsgs::msg::Imu::_xmag_type arg)
  {
    msg_.xmag = std::move(arg);
    return Init_Imu_ymag(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_zgyro
{
public:
  explicit Init_Imu_zgyro(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_xmag zgyro(::mymsgs::msg::Imu::_zgyro_type arg)
  {
    msg_.zgyro = std::move(arg);
    return Init_Imu_xmag(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_ygyro
{
public:
  explicit Init_Imu_ygyro(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_zgyro ygyro(::mymsgs::msg::Imu::_ygyro_type arg)
  {
    msg_.ygyro = std::move(arg);
    return Init_Imu_zgyro(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_xgyro
{
public:
  explicit Init_Imu_xgyro(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_ygyro xgyro(::mymsgs::msg::Imu::_xgyro_type arg)
  {
    msg_.xgyro = std::move(arg);
    return Init_Imu_ygyro(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_zacc
{
public:
  explicit Init_Imu_zacc(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_xgyro zacc(::mymsgs::msg::Imu::_zacc_type arg)
  {
    msg_.zacc = std::move(arg);
    return Init_Imu_xgyro(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_yacc
{
public:
  explicit Init_Imu_yacc(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_zacc yacc(::mymsgs::msg::Imu::_yacc_type arg)
  {
    msg_.yacc = std::move(arg);
    return Init_Imu_zacc(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_xacc
{
public:
  explicit Init_Imu_xacc(::mymsgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_yacc xacc(::mymsgs::msg::Imu::_xacc_type arg)
  {
    msg_.xacc = std::move(arg);
    return Init_Imu_yacc(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

class Init_Imu_time_boot_ms
{
public:
  Init_Imu_time_boot_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_xacc time_boot_ms(::mymsgs::msg::Imu::_time_boot_ms_type arg)
  {
    msg_.time_boot_ms = std::move(arg);
    return Init_Imu_xacc(msg_);
  }

private:
  ::mymsgs::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgs::msg::Imu>()
{
  return mymsgs::msg::builder::Init_Imu_time_boot_ms();
}

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__IMU__BUILDER_HPP_
