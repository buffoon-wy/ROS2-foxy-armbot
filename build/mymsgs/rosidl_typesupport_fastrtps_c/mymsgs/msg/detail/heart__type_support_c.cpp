// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/heart__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsgs/msg/detail/heart__struct.h"
#include "mymsgs/msg/detail/heart__functions.h"
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


using _Heart__ros_msg_type = mymsgs__msg__Heart;

static bool _Heart__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Heart__ros_msg_type * ros_message = static_cast<const _Heart__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: base_mode
  {
    cdr << ros_message->base_mode;
  }

  // Field name: system_status
  {
    cdr << ros_message->system_status;
  }

  return true;
}

static bool _Heart__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Heart__ros_msg_type * ros_message = static_cast<_Heart__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: base_mode
  {
    cdr >> ros_message->base_mode;
  }

  // Field name: system_status
  {
    cdr >> ros_message->system_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t get_serialized_size_mymsgs__msg__Heart(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Heart__ros_msg_type * ros_message = static_cast<const _Heart__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_mode
  {
    size_t item_size = sizeof(ros_message->base_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_status
  {
    size_t item_size = sizeof(ros_message->system_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Heart__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsgs__msg__Heart(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t max_serialized_size_mymsgs__msg__Heart(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: base_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Heart__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsgs__msg__Heart(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Heart = {
  "mymsgs::msg",
  "Heart",
  _Heart__cdr_serialize,
  _Heart__cdr_deserialize,
  _Heart__get_serialized_size,
  _Heart__max_serialized_size
};

static rosidl_message_type_support_t _Heart__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Heart,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, msg, Heart)() {
  return &_Heart__type_support;
}

#if defined(__cplusplus)
}
#endif
