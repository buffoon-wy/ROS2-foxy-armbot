// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__GPIO__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__GPIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Gpio __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Gpio __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpio_
{
  using Type = Gpio_<ContainerAllocator>;

  explicit Gpio_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->output = 0ul;
      this->input = 0ul;
    }
  }

  explicit Gpio_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->output = 0ul;
      this->input = 0ul;
    }
  }

  // field types and members
  using _time_boot_ms_type =
    uint32_t;
  _time_boot_ms_type time_boot_ms;
  using _output_type =
    uint32_t;
  _output_type output;
  using _input_type =
    uint32_t;
  _input_type input;

  // setters for named parameter idiom
  Type & set__time_boot_ms(
    const uint32_t & _arg)
  {
    this->time_boot_ms = _arg;
    return *this;
  }
  Type & set__output(
    const uint32_t & _arg)
  {
    this->output = _arg;
    return *this;
  }
  Type & set__input(
    const uint32_t & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Gpio_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Gpio_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Gpio_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Gpio_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Gpio_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Gpio_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Gpio_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Gpio_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Gpio_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Gpio_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Gpio
    std::shared_ptr<mymsgs::msg::Gpio_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Gpio
    std::shared_ptr<mymsgs::msg::Gpio_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpio_ & other) const
  {
    if (this->time_boot_ms != other.time_boot_ms) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpio_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpio_

// alias to use template instance with default allocator
using Gpio =
  mymsgs::msg::Gpio_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__GPIO__STRUCT_HPP_
