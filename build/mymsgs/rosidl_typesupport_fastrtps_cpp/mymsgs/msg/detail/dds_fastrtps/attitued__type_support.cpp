// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/attitued__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mymsgs/msg/detail/attitued__struct.hpp"

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
  const mymsgs::msg::Attitued & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_boot_ms
  cdr << ros_message.time_boot_ms;
  // Member: roll
  cdr << ros_message.roll;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: rollspeed
  cdr << ros_message.rollspeed;
  // Member: pitchspeed
  cdr << ros_message.pitchspeed;
  // Member: yawspeed
  cdr << ros_message.yawspeed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Attitued & ros_message)
{
  // Member: time_boot_ms
  cdr >> ros_message.time_boot_ms;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: rollspeed
  cdr >> ros_message.rollspeed;

  // Member: pitchspeed
  cdr >> ros_message.pitchspeed;

  // Member: yawspeed
  cdr >> ros_message.yawspeed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Attitued & ros_message,
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
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rollspeed
  {
    size_t item_size = sizeof(ros_message.rollspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitchspeed
  {
    size_t item_size = sizeof(ros_message.pitchspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yawspeed
  {
    size_t item_size = sizeof(ros_message.yawspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Attitued(
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

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rollspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitchspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yawspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Attitued__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Attitued *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attitued__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mymsgs::msg::Attitued *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attitued__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Attitued *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attitued__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Attitued(full_bounded, 0);
}

static message_type_support_callbacks_t _Attitued__callbacks = {
  "mymsgs::msg",
  "Attitued",
  _Attitued__cdr_serialize,
  _Attitued__cdr_deserialize,
  _Attitued__get_serialized_size,
  _Attitued__max_serialized_size
};

static rosidl_message_type_support_t _Attitued__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attitued__callbacks,
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
get_message_type_support_handle<mymsgs::msg::Attitued>()
{
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Attitued__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Attitued)() {
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Attitued__handle;
}

#ifdef __cplusplus
}
#endif
