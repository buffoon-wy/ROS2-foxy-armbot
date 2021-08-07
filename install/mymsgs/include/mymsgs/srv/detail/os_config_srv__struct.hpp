// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_HPP_
#define MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgs__srv__OSConfigSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__srv__OSConfigSrv_Request __declspec(deprecated)
#endif

namespace mymsgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OSConfigSrv_Request_
{
  using Type = OSConfigSrv_Request_<ContainerAllocator>;

  explicit OSConfigSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit OSConfigSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__srv__OSConfigSrv_Request
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__srv__OSConfigSrv_Request
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OSConfigSrv_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const OSConfigSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OSConfigSrv_Request_

// alias to use template instance with default allocator
using OSConfigSrv_Request =
  mymsgs::srv::OSConfigSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsgs


#ifndef _WIN32
# define DEPRECATED__mymsgs__srv__OSConfigSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__mymsgs__srv__OSConfigSrv_Response __declspec(deprecated)
#endif

namespace mymsgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OSConfigSrv_Response_
{
  using Type = OSConfigSrv_Response_<ContainerAllocator>;

  explicit OSConfigSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->metadata = "";
    }
  }

  explicit OSConfigSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->metadata = "";
    }
  }

  // field types and members
  using _metadata_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _metadata_type metadata;

  // setters for named parameter idiom
  Type & set__metadata(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgs__srv__OSConfigSrv_Response
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgs__srv__OSConfigSrv_Response
    std::shared_ptr<mymsgs::srv::OSConfigSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OSConfigSrv_Response_ & other) const
  {
    if (this->metadata != other.metadata) {
      return false;
    }
    return true;
  }
  bool operator!=(const OSConfigSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OSConfigSrv_Response_

// alias to use template instance with default allocator
using OSConfigSrv_Response =
  mymsgs::srv::OSConfigSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsgs

namespace mymsgs
{

namespace srv
{

struct OSConfigSrv
{
  using Request = mymsgs::srv::OSConfigSrv_Request;
  using Response = mymsgs::srv::OSConfigSrv_Response;
};

}  // namespace srv

}  // namespace mymsgs

#endif  // MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_HPP_
