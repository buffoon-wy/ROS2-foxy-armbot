// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_msgs:msg/Analog.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/analog__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_msgs/msg/detail/analog__struct.h"
#include "ur_msgs/msg/detail/analog__functions.h"
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


using _Analog__ros_msg_type = ur_msgs__msg__Analog;

static bool _Analog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Analog__ros_msg_type * ros_message = static_cast<const _Analog__ros_msg_type *>(untyped_ros_message);
  // Field name: pin
  {
    cdr << ros_message->pin;
  }

  // Field name: domain
  {
    cdr << ros_message->domain;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

static bool _Analog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Analog__ros_msg_type * ros_message = static_cast<_Analog__ros_msg_type *>(untyped_ros_message);
  // Field name: pin
  {
    cdr >> ros_message->pin;
  }

  // Field name: domain
  {
    cdr >> ros_message->domain;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__msg__Analog(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Analog__ros_msg_type * ros_message = static_cast<const _Analog__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pin
  {
    size_t item_size = sizeof(ros_message->pin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name domain
  {
    size_t item_size = sizeof(ros_message->domain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Analog__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__msg__Analog(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__msg__Analog(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: domain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Analog__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ur_msgs__msg__Analog(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Analog = {
  "ur_msgs::msg",
  "Analog",
  _Analog__cdr_serialize,
  _Analog__cdr_deserialize,
  _Analog__get_serialized_size,
  _Analog__max_serialized_size
};

static rosidl_message_type_support_t _Analog__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Analog,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog)() {
  return &_Analog__type_support;
}

#if defined(__cplusplus)
}
#endif
