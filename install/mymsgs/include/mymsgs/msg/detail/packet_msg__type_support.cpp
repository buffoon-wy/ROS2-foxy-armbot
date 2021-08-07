// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsgs/msg/detail/packet_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mymsgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PacketMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mymsgs::msg::PacketMsg(_init);
}

void PacketMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mymsgs::msg::PacketMsg *>(message_memory);
  typed_message->~PacketMsg();
}

size_t size_function__PacketMsg__buf(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PacketMsg__buf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PacketMsg__buf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__PacketMsg__buf(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PacketMsg_message_member_array[1] = {
  {
    "buf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs::msg::PacketMsg, buf),  // bytes offset in struct
    nullptr,  // default value
    size_function__PacketMsg__buf,  // size() function pointer
    get_const_function__PacketMsg__buf,  // get_const(index) function pointer
    get_function__PacketMsg__buf,  // get(index) function pointer
    resize_function__PacketMsg__buf  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PacketMsg_message_members = {
  "mymsgs::msg",  // message namespace
  "PacketMsg",  // message name
  1,  // number of fields
  sizeof(mymsgs::msg::PacketMsg),
  PacketMsg_message_member_array,  // message members
  PacketMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PacketMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PacketMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PacketMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mymsgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsgs::msg::PacketMsg>()
{
  return &::mymsgs::msg::rosidl_typesupport_introspection_cpp::PacketMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mymsgs, msg, PacketMsg)() {
  return &::mymsgs::msg::rosidl_typesupport_introspection_cpp::PacketMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
