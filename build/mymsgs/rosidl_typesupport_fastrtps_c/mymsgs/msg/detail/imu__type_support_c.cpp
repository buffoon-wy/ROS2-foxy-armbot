// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/imu__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsgs/msg/detail/imu__struct.h"
#include "mymsgs/msg/detail/imu__functions.h"
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


using _Imu__ros_msg_type = mymsgs__msg__Imu;

static bool _Imu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Imu__ros_msg_type * ros_message = static_cast<const _Imu__ros_msg_type *>(untyped_ros_message);
  // Field name: time_boot_ms
  {
    cdr << ros_message->time_boot_ms;
  }

  // Field name: xacc
  {
    cdr << ros_message->xacc;
  }

  // Field name: yacc
  {
    cdr << ros_message->yacc;
  }

  // Field name: zacc
  {
    cdr << ros_message->zacc;
  }

  // Field name: xgyro
  {
    cdr << ros_message->xgyro;
  }

  // Field name: ygyro
  {
    cdr << ros_message->ygyro;
  }

  // Field name: zgyro
  {
    cdr << ros_message->zgyro;
  }

  // Field name: xmag
  {
    cdr << ros_message->xmag;
  }

  // Field name: ymag
  {
    cdr << ros_message->ymag;
  }

  // Field name: zmag
  {
    cdr << ros_message->zmag;
  }

  return true;
}

static bool _Imu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Imu__ros_msg_type * ros_message = static_cast<_Imu__ros_msg_type *>(untyped_ros_message);
  // Field name: time_boot_ms
  {
    cdr >> ros_message->time_boot_ms;
  }

  // Field name: xacc
  {
    cdr >> ros_message->xacc;
  }

  // Field name: yacc
  {
    cdr >> ros_message->yacc;
  }

  // Field name: zacc
  {
    cdr >> ros_message->zacc;
  }

  // Field name: xgyro
  {
    cdr >> ros_message->xgyro;
  }

  // Field name: ygyro
  {
    cdr >> ros_message->ygyro;
  }

  // Field name: zgyro
  {
    cdr >> ros_message->zgyro;
  }

  // Field name: xmag
  {
    cdr >> ros_message->xmag;
  }

  // Field name: ymag
  {
    cdr >> ros_message->ymag;
  }

  // Field name: zmag
  {
    cdr >> ros_message->zmag;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t get_serialized_size_mymsgs__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Imu__ros_msg_type * ros_message = static_cast<const _Imu__ros_msg_type *>(untyped_ros_message);
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
  // field.name xacc
  {
    size_t item_size = sizeof(ros_message->xacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yacc
  {
    size_t item_size = sizeof(ros_message->yacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zacc
  {
    size_t item_size = sizeof(ros_message->zacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xgyro
  {
    size_t item_size = sizeof(ros_message->xgyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ygyro
  {
    size_t item_size = sizeof(ros_message->ygyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zgyro
  {
    size_t item_size = sizeof(ros_message->zgyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xmag
  {
    size_t item_size = sizeof(ros_message->xmag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ymag
  {
    size_t item_size = sizeof(ros_message->ymag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zmag
  {
    size_t item_size = sizeof(ros_message->zmag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Imu__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsgs__msg__Imu(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsgs
size_t max_serialized_size_mymsgs__msg__Imu(
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
  // member: xacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: yacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: zacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: xgyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ygyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: zgyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: xmag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ymag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: zmag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Imu__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsgs__msg__Imu(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Imu = {
  "mymsgs::msg",
  "Imu",
  _Imu__cdr_serialize,
  _Imu__cdr_deserialize,
  _Imu__get_serialized_size,
  _Imu__max_serialized_size
};

static rosidl_message_type_support_t _Imu__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Imu,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, msg, Imu)() {
  return &_Imu__type_support;
}

#if defined(__cplusplus)
}
#endif
