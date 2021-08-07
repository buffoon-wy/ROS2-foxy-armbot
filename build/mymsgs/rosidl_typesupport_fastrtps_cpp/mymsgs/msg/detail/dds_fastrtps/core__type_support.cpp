// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/core__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mymsgs/msg/detail/core__struct.hpp"

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
  const mymsgs::msg::Core & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_boot_ms
  cdr << ros_message.time_boot_ms;
  // Member: onboard_control_sensors_health
  cdr << ros_message.onboard_control_sensors_health;
  // Member: load
  cdr << ros_message.load;
  // Member: voltage_battery
  cdr << ros_message.voltage_battery;
  // Member: current_battery
  cdr << ros_message.current_battery;
  // Member: battery_remaining
  cdr << ros_message.battery_remaining;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsgs::msg::Core & ros_message)
{
  // Member: time_boot_ms
  cdr >> ros_message.time_boot_ms;

  // Member: onboard_control_sensors_health
  cdr >> ros_message.onboard_control_sensors_health;

  // Member: load
  cdr >> ros_message.load;

  // Member: voltage_battery
  cdr >> ros_message.voltage_battery;

  // Member: current_battery
  cdr >> ros_message.current_battery;

  // Member: battery_remaining
  cdr >> ros_message.battery_remaining;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
get_serialized_size(
  const mymsgs::msg::Core & ros_message,
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
  // Member: onboard_control_sensors_health
  {
    size_t item_size = sizeof(ros_message.onboard_control_sensors_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load
  {
    size_t item_size = sizeof(ros_message.load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_battery
  {
    size_t item_size = sizeof(ros_message.voltage_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_battery
  {
    size_t item_size = sizeof(ros_message.current_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_remaining
  {
    size_t item_size = sizeof(ros_message.battery_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsgs
max_serialized_size_Core(
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

  // Member: onboard_control_sensors_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: voltage_battery
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: current_battery
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: battery_remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Core__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Core *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Core__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mymsgs::msg::Core *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Core__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mymsgs::msg::Core *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Core__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Core(full_bounded, 0);
}

static message_type_support_callbacks_t _Core__callbacks = {
  "mymsgs::msg",
  "Core",
  _Core__cdr_serialize,
  _Core__cdr_deserialize,
  _Core__get_serialized_size,
  _Core__max_serialized_size
};

static rosidl_message_type_support_t _Core__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Core__callbacks,
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
get_message_type_support_handle<mymsgs::msg::Core>()
{
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Core__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Core)() {
  return &mymsgs::msg::typesupport_fastrtps_cpp::_Core__handle;
}

#ifdef __cplusplus
}
#endif
