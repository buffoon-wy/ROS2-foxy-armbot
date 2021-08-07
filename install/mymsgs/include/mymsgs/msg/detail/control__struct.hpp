// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Control __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpio = 0;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpio = 0;
    }
  }

  // field types and members
  using _gpio_type =
    uint16_t;
  _gpio_type gpio;

  // setters for named parameter idiom
  Type & set__gpio(
    const uint16_t & _arg)
  {
    this->gpio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Control
    std::shared_ptr<mymsgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Control
    std::shared_ptr<mymsgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->gpio != other.gpio) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  mymsgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
