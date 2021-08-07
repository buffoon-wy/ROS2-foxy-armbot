// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CORE__STRUCT_HPP_
#define MYMSGS__MSG__DETAIL__CORE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__msg__Core __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__msg__Core __declspec(deprecated)
#endif

namespace mymsgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Core_
{
  using Type = Core_<ContainerAllocator>;

  explicit Core_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->onboard_control_sensors_health = 0ul;
      this->load = 0;
      this->voltage_battery = 0;
      this->current_battery = 0;
      this->battery_remaining = 0;
    }
  }

  explicit Core_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_boot_ms = 0ul;
      this->onboard_control_sensors_health = 0ul;
      this->load = 0;
      this->voltage_battery = 0;
      this->current_battery = 0;
      this->battery_remaining = 0;
    }
  }

  // field types and members
  using _time_boot_ms_type =
    uint32_t;
  _time_boot_ms_type time_boot_ms;
  using _onboard_control_sensors_health_type =
    uint32_t;
  _onboard_control_sensors_health_type onboard_control_sensors_health;
  using _load_type =
    uint16_t;
  _load_type load;
  using _voltage_battery_type =
    uint16_t;
  _voltage_battery_type voltage_battery;
  using _current_battery_type =
    int16_t;
  _current_battery_type current_battery;
  using _battery_remaining_type =
    int8_t;
  _battery_remaining_type battery_remaining;

  // setters for named parameter idiom
  Type & set__time_boot_ms(
    const uint32_t & _arg)
  {
    this->time_boot_ms = _arg;
    return *this;
  }
  Type & set__onboard_control_sensors_health(
    const uint32_t & _arg)
  {
    this->onboard_control_sensors_health = _arg;
    return *this;
  }
  Type & set__load(
    const uint16_t & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__voltage_battery(
    const uint16_t & _arg)
  {
    this->voltage_battery = _arg;
    return *this;
  }
  Type & set__current_battery(
    const int16_t & _arg)
  {
    this->current_battery = _arg;
    return *this;
  }
  Type & set__battery_remaining(
    const int8_t & _arg)
  {
    this->battery_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::msg::Core_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::msg::Core_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::msg::Core_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::msg::Core_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Core_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Core_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::msg::Core_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::msg::Core_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::msg::Core_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::msg::Core_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__msg__Core
    std::shared_ptr<mymsgs::msg::Core_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__msg__Core
    std::shared_ptr<mymsgs::msg::Core_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Core_ & other) const
  {
    if (this->time_boot_ms != other.time_boot_ms) {
      return false;
    }
    if (this->onboard_control_sensors_health != other.onboard_control_sensors_health) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->voltage_battery != other.voltage_battery) {
      return false;
    }
    if (this->current_battery != other.current_battery) {
      return false;
    }
    if (this->battery_remaining != other.battery_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const Core_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Core_

// alias to use template instance with default allocator
using Core =
  mymsgs::msg::Core_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgs

#endif  // MYMSGS__MSG__DETAIL__CORE__STRUCT_HPP_
