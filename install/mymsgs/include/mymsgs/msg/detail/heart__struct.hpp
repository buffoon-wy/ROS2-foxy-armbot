// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__HEART__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Heart __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Heart __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Heart_
{
  using Type = Heart_<ContainerAllocator>;

  explicit Heart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
      this->type = 0;
      this->base_mode = 0;
      this->system_status = 0;
    }
  }

  explicit Heart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
      this->type = 0;
      this->base_mode = 0;
      this->system_status = 0;
    }
  }

  // field types and members
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;
  using _type_type =
    uint8_t;
  _type_type type;
  using _base_mode_type =
    uint8_t;
  _base_mode_type base_mode;
  using _system_status_type =
    uint8_t;
  _system_status_type system_status;

  // setters for named parameter idiom
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__base_mode(
    const uint8_t & _arg)
  {
    this->base_mode = _arg;
    return *this;
  }
  Type & set__system_status(
    const uint8_t & _arg)
  {
    this->system_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Heart_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Heart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Heart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Heart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Heart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Heart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Heart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Heart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Heart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Heart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Heart
    std::shared_ptr<mymsgs::msg::Heart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Heart
    std::shared_ptr<mymsgs::msg::Heart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Heart_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->base_mode != other.base_mode) {
      return false;
    }
    if (this->system_status != other.system_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Heart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Heart_

// alias to use template instance with default allocator
using Heart =
  mymsgs::msg::Heart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__HEART__STRUCT_HPP_
