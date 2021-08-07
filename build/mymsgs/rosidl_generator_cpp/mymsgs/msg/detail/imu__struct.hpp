// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__IMU__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__IMU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Imu __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Imu __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Imu_
{
  using Type = Imu_<ContainerAllocator>;

  explicit Imu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->xacc = 0;
      this->yacc = 0;
      this->zacc = 0;
      this->xgyro = 0;
      this->ygyro = 0;
      this->zgyro = 0;
      this->xmag = 0;
      this->ymag = 0;
      this->zmag = 0;
    }
  }

  explicit Imu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->xacc = 0;
      this->yacc = 0;
      this->zacc = 0;
      this->xgyro = 0;
      this->ygyro = 0;
      this->zgyro = 0;
      this->xmag = 0;
      this->ymag = 0;
      this->zmag = 0;
    }
  }

  // field types and members
  using _time_boot_ms_type =
    uint32_t;
  _time_boot_ms_type time_boot_ms;
  using _xacc_type =
    int16_t;
  _xacc_type xacc;
  using _yacc_type =
    int16_t;
  _yacc_type yacc;
  using _zacc_type =
    int16_t;
  _zacc_type zacc;
  using _xgyro_type =
    int16_t;
  _xgyro_type xgyro;
  using _ygyro_type =
    int16_t;
  _ygyro_type ygyro;
  using _zgyro_type =
    int16_t;
  _zgyro_type zgyro;
  using _xmag_type =
    int16_t;
  _xmag_type xmag;
  using _ymag_type =
    int16_t;
  _ymag_type ymag;
  using _zmag_type =
    int16_t;
  _zmag_type zmag;

  // setters for named parameter idiom
  Type & set__time_boot_ms(
    const uint32_t & _arg)
  {
    this->time_boot_ms = _arg;
    return *this;
  }
  Type & set__xacc(
    const int16_t & _arg)
  {
    this->xacc = _arg;
    return *this;
  }
  Type & set__yacc(
    const int16_t & _arg)
  {
    this->yacc = _arg;
    return *this;
  }
  Type & set__zacc(
    const int16_t & _arg)
  {
    this->zacc = _arg;
    return *this;
  }
  Type & set__xgyro(
    const int16_t & _arg)
  {
    this->xgyro = _arg;
    return *this;
  }
  Type & set__ygyro(
    const int16_t & _arg)
  {
    this->ygyro = _arg;
    return *this;
  }
  Type & set__zgyro(
    const int16_t & _arg)
  {
    this->zgyro = _arg;
    return *this;
  }
  Type & set__xmag(
    const int16_t & _arg)
  {
    this->xmag = _arg;
    return *this;
  }
  Type & set__ymag(
    const int16_t & _arg)
  {
    this->ymag = _arg;
    return *this;
  }
  Type & set__zmag(
    const int16_t & _arg)
  {
    this->zmag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Imu_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Imu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Imu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Imu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Imu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Imu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Imu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Imu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Imu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Imu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Imu
    std::shared_ptr<mymsgs::msg::Imu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Imu
    std::shared_ptr<mymsgs::msg::Imu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_ & other) const
  {
    if (this->time_boot_ms != other.time_boot_ms) {
      return false;
    }
    if (this->xacc != other.xacc) {
      return false;
    }
    if (this->yacc != other.yacc) {
      return false;
    }
    if (this->zacc != other.zacc) {
      return false;
    }
    if (this->xgyro != other.xgyro) {
      return false;
    }
    if (this->ygyro != other.ygyro) {
      return false;
    }
    if (this->zgyro != other.zgyro) {
      return false;
    }
    if (this->xmag != other.xmag) {
      return false;
    }
    if (this->ymag != other.ymag) {
      return false;
    }
    if (this->zmag != other.zmag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_

// alias to use template instance with default allocator
using Imu =
  mymsgs::msg::Imu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__IMU__STRUCT_HPP_
