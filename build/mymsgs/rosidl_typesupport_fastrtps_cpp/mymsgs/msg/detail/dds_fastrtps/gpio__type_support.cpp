// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/gpio__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mymsgs/msg/detail/gpio__struct.hpp"

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
  const mymsgs::msg::Gpio & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_boot_ms
  cdr << ros_message.time_boot_ms;
  // Member: output
  cdr << ros_message.output;
  // Member: input
  cdr << ros_message.input;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Gpio & ros_message)
{
  // Member: time_boot_ms
  cdr >> ros_message.time_boot_ms;

  // Member: output
  cdr >> ros_message.output;

  // Member: input
  cdr >> ros_message.input;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Gpio & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time_boot_ms
  {
    size_t item_size = sizeof(ros_message.time_boot_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output
  {
    size_t item_size = sizeof(ros_message.output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input
  {
    size_t item_size = sizeof(ros_message.input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Gpio(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: time_boot_ms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Gpio__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Gpio *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gpio__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mymsgs::msg::Gpio *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gpio__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Gpio *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gpio__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Gpio(full_bounded, 0);
}

static message_type_support_callbacks_t _Gpio__callbacks = {
  "mymsgs::msg",
  "Gpio",
  _Gpio__cdr_serialize,
  _Gpio__cdr_deserialize,
  _Gpio__get_serialized_size,
  _Gpio__max_serialized_size
};

static rosidl_message_type_support_t _Gpio__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpio__callbacks,
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
get_message_type_support_handle<mymsgs::msg::Gpio>()
{
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Gpio__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Gpio)() {
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Gpio__handle;
}

#ifdef __cplusplus
}
#endif
