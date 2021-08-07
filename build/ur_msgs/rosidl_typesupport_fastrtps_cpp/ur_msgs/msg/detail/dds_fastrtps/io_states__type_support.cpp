// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/io_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ur_msgs/msg/detail/io_states__struct.hpp"

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
namespace ur_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ur_msgs::msg::Digital &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ur_msgs::msg::Digital &);
size_t get_serialized_size(
  const ur_msgs::msg::Digital &,
  size_t current_alignment);
size_t
max_serialized_size_Digital(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ur_msgs

namespace ur_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ur_msgs::msg::Digital &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ur_msgs::msg::Digital &);
size_t get_serialized_size(
  const ur_msgs::msg::Digital &,
  size_t current_alignment);
size_t
max_serialized_size_Digital(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ur_msgs

namespace ur_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ur_msgs::msg::Digital &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ur_msgs::msg::Digital &);
size_t get_serialized_size(
  const ur_msgs::msg::Digital &,
  size_t current_alignment);
size_t
max_serialized_size_Digital(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ur_msgs

namespace ur_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ur_msgs::msg::Analog &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ur_msgs::msg::Analog &);
size_t get_serialized_size(
  const ur_msgs::msg::Analog &,
  size_t current_alignment);
size_t
max_serialized_size_Analog(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ur_msgs

namespace ur_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ur_msgs::msg::Analog &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ur_msgs::msg::Analog &);
size_t get_serialized_size(
  const ur_msgs::msg::Analog &,
  size_t current_alignment);
size_t
max_serialized_size_Analog(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ur_msgs


namespace ur_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_serialize(
  const ur_msgs::msg::IOStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: digital_in_states
  {
    size_t size = ros_message.digital_in_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.digital_in_states[i],
        cdr);
    }
  }
  // Member: digital_out_states
  {
    size_t size = ros_message.digital_out_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.digital_out_states[i],
        cdr);
    }
  }
  // Member: flag_states
  {
    size_t size = ros_message.flag_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.flag_states[i],
        cdr);
    }
  }
  // Member: analog_in_states
  {
    size_t size = ros_message.analog_in_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.analog_in_states[i],
        cdr);
    }
  }
  // Member: analog_out_states
  {
    size_t size = ros_message.analog_out_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.analog_out_states[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs::msg::IOStates & ros_message)
{
  // Member: digital_in_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.digital_in_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.digital_in_states[i]);
    }
  }

  // Member: digital_out_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.digital_out_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.digital_out_states[i]);
    }
  }

  // Member: flag_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.flag_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.flag_states[i]);
    }
  }

  // Member: analog_in_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.analog_in_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.analog_in_states[i]);
    }
  }

  // Member: analog_out_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.analog_out_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.analog_out_states[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
get_serialized_size(
  const ur_msgs::msg::IOStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: digital_in_states
  {
    size_t array_size = ros_message.digital_in_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.digital_in_states[index], current_alignment);
    }
  }
  // Member: digital_out_states
  {
    size_t array_size = ros_message.digital_out_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.digital_out_states[index], current_alignment);
    }
  }
  // Member: flag_states
  {
    size_t array_size = ros_message.flag_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.flag_states[index], current_alignment);
    }
  }
  // Member: analog_in_states
  {
    size_t array_size = ros_message.analog_in_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.analog_in_states[index], current_alignment);
    }
  }
  // Member: analog_out_states
  {
    size_t array_size = ros_message.analog_out_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.analog_out_states[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
max_serialized_size_IOStates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: digital_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Digital(
        full_bounded, current_alignment);
    }
  }

  // Member: digital_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Digital(
        full_bounded, current_alignment);
    }
  }

  // Member: flag_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Digital(
        full_bounded, current_alignment);
    }
  }

  // Member: analog_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Analog(
        full_bounded, current_alignment);
    }
  }

  // Member: analog_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Analog(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _IOStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_msgs::msg::IOStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IOStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_msgs::msg::IOStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IOStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_msgs::msg::IOStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IOStates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IOStates(full_bounded, 0);
}

static message_type_support_callbacks_t _IOStates__callbacks = {
  "ur_msgs::msg",
  "IOStates",
  _IOStates__cdr_serialize,
  _IOStates__cdr_deserialize,
  _IOStates__get_serialized_size,
  _IOStates__max_serialized_size
};

static rosidl_message_type_support_t _IOStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IOStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ur_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::msg::IOStates>()
{
  return &ur_msgs::msg::typesupport_fastrtps_cpp::_IOStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, msg, IOStates)() {
  return &ur_msgs::msg::typesupport_fastrtps_cpp::_IOStates__handle;
}

#ifdef __cplusplus
}
#endif
