// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/version__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mymsgs/msg/detail/version__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mymsgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_serialize(
  const mymsgs::msg::Version & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hardware_ver
  cdr << ros_message.hardware_ver;
  // Member: software_ver
  cdr << ros_message.software_ver;
  // Member: uiud
  cdr << ros_message.uiud;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Version & ros_message)
{
  // Member: hardware_ver
  cdr >> ros_message.hardware_ver;

  // Member: software_ver
  cdr >> ros_message.software_ver;

  // Member: uiud
  cdr >> ros_message.uiud;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Version & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hardware_ver
  {
    size_t item_size = sizeof(ros_message.hardware_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: software_ver
  {
    size_t item_size = sizeof(ros_message.software_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uiud
  {
    size_t item_size = sizeof(ros_message.uiud);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Version(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: hardware_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: software_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uiud
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Version__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Version *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Version__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mymsgs::msg::Version *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Version__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Version *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Version__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Version(full_bounded, 0);
}

static message_type_support_callbacks_t _Version__callbacks = {
  "mymsgs::msg",
  "Version",
  _Version__cdr_serialize,
  _Version__cdr_deserialize,
  _Version__get_serialized_size,
  _Version__max_serialized_size
};

static rosidl_message_type_support_t _Version__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Version__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mymsgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mymsgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsgs::msg::Version>()
{
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Version__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Version)() {
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Version__handle;
}

#ifdef __cplusplus
}
#endif
