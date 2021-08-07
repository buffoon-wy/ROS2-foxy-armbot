// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Twis.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__TWIS__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__TWIS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Twis __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Twis __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Twis_
{
  using Type = Twis_<ContainerAllocator>;

  explicit Twis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->wx = 0.0;
      this->wy = 0.0;
      this->wz = 0.0;
    }
  }

  explicit Twis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->wx = 0.0;
      this->wy = 0.0;
      this->wz = 0.0;
    }
  }

  // field types and members
  using _time_boot_ms_type =
    uint32_t;
  _time_boot_ms_type time_boot_ms;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _wx_type =
    double;
  _wx_type wx;
  using _wy_type =
    double;
  _wy_type wy;
  using _wz_type =
    double;
  _wz_type wz;

  // setters for named parameter idiom
  Type & set__time_boot_ms(
    const uint32_t & _arg)
  {
    this->time_boot_ms = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__wx(
    const double & _arg)
  {
    this->wx = _arg;
    return *this;
  }
  Type & set__wy(
    const double & _arg)
  {
    this->wy = _arg;
    return *this;
  }
  Type & set__wz(
    const double & _arg)
  {
    this->wz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Twis_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Twis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Twis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Twis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Twis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Twis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Twis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Twis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Twis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Twis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Twis
    std::shared_ptr<mymsgs::msg::Twis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Twis
    std::shared_ptr<mymsgs::msg::Twis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Twis_ & other) const
  {
    if (this->time_boot_ms != other.time_boot_ms) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->wx != other.wx) {
      return false;
    }
    if (this->wy != other.wy) {
      return false;
    }
    if (this->wz != other.wz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Twis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Twis_

// alias to use template instance with default allocator
using Twis =
  mymsgs::msg::Twis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__TWIS__STRUCT_HPP_
