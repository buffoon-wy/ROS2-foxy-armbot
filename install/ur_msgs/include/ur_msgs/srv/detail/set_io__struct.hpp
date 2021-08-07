// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__SRV__DETAIL__SET_IO__STRUCT_HPP_
#define UR_MSGS__SRV__DETAIL__SET_IO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ur_msgs__srv__SetIO_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur_msgs__srv__SetIO_Request __declspec(deprecated)
#endif

namespace ur_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetIO_Request_
{
  using Type = SetIO_Request_<ContainerAllocator>;

  explicit SetIO_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fun = 0;
      this->pin = 0;
      this->state = 0.0f;
    }
  }

  explicit SetIO_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fun = 0;
      this->pin = 0;
      this->state = 0.0f;
    }
  }

  // field types and members
  using _fun_type =
    int8_t;
  _fun_type fun;
  using _pin_type =
    int8_t;
  _pin_type pin;
  using _state_type =
    float;
  _state_type state;

  // setters for named parameter idiom
  Type & set__fun(
    const int8_t & _arg)
  {
    this->fun = _arg;
    return *this;
  }
  Type & set__pin(
    const int8_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__state(
    const float & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t FUN_SET_DIGITAL_OUT =
    1;
  static constexpr int8_t FUN_SET_FLAG =
    2;
  static constexpr int8_t FUN_SET_ANALOG_OUT =
    3;
  static constexpr int8_t FUN_SET_TOOL_VOLTAGE =
    4;
  static constexpr int8_t STATE_OFF =
    0;
  static constexpr int8_t STATE_ON =
    1;
  static constexpr int8_t STATE_TOOL_VOLTAGE_0V =
    0;
  static constexpr int8_t STATE_TOOL_VOLTAGE_12V =
    12;
  static constexpr int8_t STATE_TOOL_VOLTAGE_24V =
    24;

  // pointer types
  using RawPtr =
    ur_msgs::srv::SetIO_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_msgs::srv::SetIO_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_msgs::srv::SetIO_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_msgs::srv::SetIO_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_msgs__srv__SetIO_Request
    std::shared_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_msgs__srv__SetIO_Request
    std::shared_ptr<ur_msgs::srv::SetIO_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetIO_Request_ & other) const
  {
    if (this->fun != other.fun) {
      return false;
    }
    if (this->pin != other.pin) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetIO_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetIO_Request_

// alias to use template instance with default allocator
using SetIO_Request =
  ur_msgs::srv::SetIO_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::FUN_SET_DIGITAL_OUT;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::FUN_SET_FLAG;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::FUN_SET_ANALOG_OUT;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::FUN_SET_TOOL_VOLTAGE;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::STATE_OFF;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::STATE_ON;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::STATE_TOOL_VOLTAGE_0V;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::STATE_TOOL_VOLTAGE_12V;
template<typename ContainerAllocator>
constexpr int8_t SetIO_Request_<ContainerAllocator>::STATE_TOOL_VOLTAGE_24V;

}  // namespace srv

}  // namespace ur_msgs


#ifndef _WIN32
# define DEPRECATED__ur_msgs__srv__SetIO_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur_msgs__srv__SetIO_Response __declspec(deprecated)
#endif

namespace ur_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetIO_Response_
{
  using Type = SetIO_Response_<ContainerAllocator>;

  explicit SetIO_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetIO_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_msgs::srv::SetIO_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_msgs::srv::SetIO_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_msgs::srv::SetIO_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_msgs::srv::SetIO_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_msgs__srv__SetIO_Response
    std::shared_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_msgs__srv__SetIO_Response
    std::shared_ptr<ur_msgs::srv::SetIO_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetIO_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetIO_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetIO_Response_

// alias to use template instance with default allocator
using SetIO_Response =
  ur_msgs::srv::SetIO_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_msgs

namespace ur_msgs
{

namespace srv
{

struct SetIO
{
  using Request = ur_msgs::srv::SetIO_Request;
  using Response = ur_msgs::srv::SetIO_Response;
};

}  // namespace srv

}  // namespace ur_msgs

#endif  // UR_MSGS__SRV__DETAIL__SET_IO__STRUCT_HPP_
