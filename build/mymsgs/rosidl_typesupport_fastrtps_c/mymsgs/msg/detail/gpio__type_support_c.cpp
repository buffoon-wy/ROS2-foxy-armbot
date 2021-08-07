// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/gpio__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsgs/msg/detail/gpio__struct.h"
#include "mymsgs/msg/detail/gpio__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Gpio__ros_msg_type = mymsgs__msg__Gpio;

static bool _Gpio__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gpio__ros_msg_type * ros_message = static_cast<const _Gpio__ros_msg_type *>(untyped_ros_message);
  // Field name: time_boot_ms
  {
    cdr << ros_message->time_boot_ms;
  }

  // Field name: output
  {
    cdr << ros_message->output;
  }

  // Field name: input
  {
    cdr << ros_message->input;
  }

  return true;
}

static bool _Gpio__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gpio__ros_msg_type * ros_message = static_cast<_Gpio__ros_msg_type *>(untyped_ros_message);
  // Field name: time_boot_ms
  {
    cdr >> ros_message->time_boot_ms;
  }

  // Field name: output
  {
    cdr >> ros_message->output;
  }

  // Field name: input
  {
    cdr >> ros_message->input;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t get_serialized_size_mymsgs__msg__Gpio(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpio__ros_msg_type * ros_message = static_cast<const _Gpio__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_boot_ms
  {
    size_t item_size = sizeof(ros_message->time_boot_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output
  {
    size_t item_size = sizeof(ros_message->output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input
  {
    size_t item_size = sizeof(ros_message->input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Gpio__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsgs__msg__Gpio(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t max_serialized_size_mymsgs__msg__Gpio(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time_boot_ms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Gpio__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsgs__msg__Gpio(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Gpio = {
  "mymsgs::msg",
  "Gpio",
  _Gpio__cdr_serialize,
  _Gpio__cdr_deserialize,
  _Gpio__get_serialized_size,
  _Gpio__max_serialized_size
};

static rosidl_message_type_support_t _Gpio__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gpio,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, msg, Gpio)() {
  return &_Gpio__type_support;
}

#if defined(__cplusplus)
}
#endif
