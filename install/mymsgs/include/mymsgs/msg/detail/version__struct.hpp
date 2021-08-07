// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__VERSION__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__VERSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Version __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Version __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Version_
{
  using Type = Version_<ContainerAllocator>;

  explicit Version_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hardware_ver = 0ul;
      this->software_ver = 0ul;
      this->uiud = 0ul;
    }
  }

  explicit Version_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hardware_ver = 0ul;
      this->software_ver = 0ul;
      this->uiud = 0ul;
    }
  }

  // field types and members
  using _hardware_ver_type =
    uint32_t;
  _hardware_ver_type hardware_ver;
  using _software_ver_type =
    uint32_t;
  _software_ver_type software_ver;
  using _uiud_type =
    uint32_t;
  _uiud_type uiud;

  // setters for named parameter idiom
  Type & set__hardware_ver(
    const uint32_t & _arg)
  {
    this->hardware_ver = _arg;
    return *this;
  }
  Type & set__software_ver(
    const uint32_t & _arg)
  {
    this->software_ver = _arg;
    return *this;
  }
  Type & set__uiud(
    const uint32_t & _arg)
  {
    this->uiud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Version_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Version_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Version_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Version_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Version_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Version_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Version_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Version_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Version_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Version_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Version
    std::shared_ptr<mymsgs::msg::Version_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Version
    std::shared_ptr<mymsgs::msg::Version_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Version_ & other) const
  {
    if (this->hardware_ver != other.hardware_ver) {
      return false;
    }
    if (this->software_ver != other.software_ver) {
      return false;
    }
    if (this->uiud != other.uiud) {
      return false;
    }
    return true;
  }
  bool operator!=(const Version_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Version_

// alias to use template instance with default allocator
using Version =
  mymsgs::msg::Version_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__VERSION__STRUCT_HPP_
