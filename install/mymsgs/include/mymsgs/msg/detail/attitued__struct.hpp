// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Attitued __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Attitued __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Attitued_
{
  using Type = Attitued_<ContainerAllocator>;

  explicit Attitued_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->rollspeed = 0.0f;
      this->pitchspeed = 0.0f;
      this->yawspeed = 0.0f;
    }
  }

  explicit Attitued_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->rollspeed = 0.0f;
      this->pitchspeed = 0.0f;
      this->yawspeed = 0.0f;
    }
  }

  // field types and members
  using _time_boot_ms_type =
    uint32_t;
  _time_boot_ms_type time_boot_ms;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _rollspeed_type =
    float;
  _rollspeed_type rollspeed;
  using _pitchspeed_type =
    float;
  _pitchspeed_type pitchspeed;
  using _yawspeed_type =
    float;
  _yawspeed_type yawspeed;

  // setters for named parameter idiom
  Type & set__time_boot_ms(
    const uint32_t & _arg)
  {
    this->time_boot_ms = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__rollspeed(
    const float & _arg)
  {
    this->rollspeed = _arg;
    return *this;
  }
  Type & set__pitchspeed(
    const float & _arg)
  {
    this->pitchspeed = _arg;
    return *this;
  }
  Type & set__yawspeed(
    const float & _arg)
  {
    this->yawspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Attitued_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Attitued_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Attitued_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Attitued_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Attitued_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Attitued_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Attitued_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Attitued_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Attitued_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Attitued_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Attitued
    std::shared_ptr<mymsgs::msg::Attitued_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Attitued
    std::shared_ptr<mymsgs::msg::Attitued_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attitued_ & other) const
  {
    if (this->time_boot_ms != other.time_boot_ms) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->rollspeed != other.rollspeed) {
      return false;
    }
    if (this->pitchspeed != other.pitchspeed) {
      return false;
    }
    if (this->yawspeed != other.yawspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attitued_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attitued_

// alias to use template instance with default allocator
using Attitued =
  mymsgs::msg::Attitued_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_HPP_
