// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/version__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsgs/msg/detail/version__struct.h"
#include "mymsgs/msg/detail/version__functions.h"
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


using _Version__ros_msg_type = mymsgs__msg__Version;

static bool _Version__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Version__ros_msg_type * ros_message = static_cast<const _Version__ros_msg_type *>(untyped_ros_message);
  // Field name: hardware_ver
  {
    cdr << ros_message->hardware_ver;
  }

  // Field name: software_ver
  {
    cdr << ros_message->software_ver;
  }

  // Field name: uiud
  {
    cdr << ros_message->uiud;
  }

  return true;
}

static bool _Version__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Version__ros_msg_type * ros_message = static_cast<_Version__ros_msg_type *>(untyped_ros_message);
  // Field name: hardware_ver
  {
    cdr >> ros_message->hardware_ver;
  }

  // Field name: software_ver
  {
    cdr >> ros_message->software_ver;
  }

  // Field name: uiud
  {
    cdr >> ros_message->uiud;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t get_serialized_size_mymsgs__msg__Version(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Version__ros_msg_type * ros_message = static_cast<const _Version__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hardware_ver
  {
    size_t item_size = sizeof(ros_message->hardware_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_ver
  {
    size_t item_size = sizeof(ros_message->software_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uiud
  {
    size_t item_size = sizeof(ros_message->uiud);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Version__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsgs__msg__Version(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t max_serialized_size_mymsgs__msg__Version(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: hardware_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: software_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uiud
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Version__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsgs__msg__Version(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Version = {
  "mymsgs::msg",
  "Version",
  _Version__cdr_serialize,
  _Version__cdr_deserialize,
  _Version__get_serialized_size,
  _Version__max_serialized_size
};

static rosidl_message_type_support_t _Version__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Version,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, msg, Version)() {
  return &_Version__type_support;
}

#if defined(__cplusplus)
}
#endif
