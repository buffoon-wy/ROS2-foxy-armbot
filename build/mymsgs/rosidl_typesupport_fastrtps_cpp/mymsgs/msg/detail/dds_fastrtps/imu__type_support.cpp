// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/imu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mymsgs/msg/detail/imu__struct.hpp"

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
  const mymsgs::msg::Imu & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_boot_ms
  cdr << ros_message.time_boot_ms;
  // Member: xacc
  cdr << ros_message.xacc;
  // Member: yacc
  cdr << ros_message.yacc;
  // Member: zacc
  cdr << ros_message.zacc;
  // Member: xgyro
  cdr << ros_message.xgyro;
  // Member: ygyro
  cdr << ros_message.ygyro;
  // Member: zgyro
  cdr << ros_message.zgyro;
  // Member: xmag
  cdr << ros_message.xmag;
  // Member: ymag
  cdr << ros_message.ymag;
  // Member: zmag
  cdr << ros_message.zmag;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Imu & ros_message)
{
  // Member: time_boot_ms
  cdr >> ros_message.time_boot_ms;

  // Member: xacc
  cdr >> ros_message.xacc;

  // Member: yacc
  cdr >> ros_message.yacc;

  // Member: zacc
  cdr >> ros_message.zacc;

  // Member: xgyro
  cdr >> ros_message.xgyro;

  // Member: ygyro
  cdr >> ros_message.ygyro;

  // Member: zgyro
  cdr >> ros_message.zgyro;

  // Member: xmag
  cdr >> ros_message.xmag;

  // Member: ymag
  cdr >> ros_message.ymag;

  // Member: zmag
  cdr >> ros_message.zmag;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Imu & ros_message,
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
  // Member: xacc
  {
    size_t item_size = sizeof(ros_message.xacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yacc
  {
    size_t item_size = sizeof(ros_message.yacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zacc
  {
    size_t item_size = sizeof(ros_message.zacc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xgyro
  {
    size_t item_size = sizeof(ros_message.xgyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ygyro
  {
    size_t item_size = sizeof(ros_message.ygyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zgyro
  {
    size_t item_size = sizeof(ros_message.zgyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xmag
  {
    size_t item_size = sizeof(ros_message.xmag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ymag
  {
    size_t item_size = sizeof(ros_message.ymag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zmag
  {
    size_t item_size = sizeof(ros_message.zmag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Imu(
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

  // Member: xacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: yacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: zacc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: xgyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ygyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: zgyro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: xmag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ymag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: zmag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Imu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Imu *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Imu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mymsgs::msg::Imu *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Imu__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Imu *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Imu__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Imu(full_bounded, 0);
}

static message_type_support_callbacks_t _Imu__callbacks = {
  "mymsgs::msg",
  "Imu",
  _Imu__cdr_serialize,
  _Imu__cdr_deserialize,
  _Imu__get_serialized_size,
  _Imu__max_serialized_size
};

static rosidl_message_type_support_t _Imu__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Imu__callbacks,
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
get_message_type_support_handle<mymsgs::msg::Imu>()
{
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Imu__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Imu)() {
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Imu__handle;
}

#ifdef __cplusplus
}
#endif
