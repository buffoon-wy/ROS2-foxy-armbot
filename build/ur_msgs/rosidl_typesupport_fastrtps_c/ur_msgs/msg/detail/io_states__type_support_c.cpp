// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/io_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_msgs/msg/detail/io_states__struct.h"
#include "ur_msgs/msg/detail/io_states__functions.h"
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

#include "ur_msgs/msg/detail/analog__functions.h"  // analog_in_states, analog_out_states
#include "ur_msgs/msg/detail/digital__functions.h"  // digital_in_states, digital_out_states, flag_states

// forward declare type support functions
size_t get_serialized_size_ur_msgs__msg__Analog(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__msg__Analog(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog)();
size_t get_serialized_size_ur_msgs__msg__Digital(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__msg__Digital(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital)();


using _IOStates__ros_msg_type = ur_msgs__msg__IOStates;

static bool _IOStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IOStates__ros_msg_type * ros_message = static_cast<const _IOStates__ros_msg_type *>(untyped_ros_message);
  // Field name: digital_in_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: digital_out_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: flag_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: analog_in_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog
      )()->data);
    size_t size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: analog_out_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog
      )()->data);
    size_t size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _IOStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IOStates__ros_msg_type * ros_message = static_cast<_IOStates__ros_msg_type *>(untyped_ros_message);
  // Field name: digital_in_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->digital_in_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_in_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_in_states, size)) {
      return "failed to create array for field 'digital_in_states'";
    }
    auto array_ptr = ros_message->digital_in_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: digital_out_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->digital_out_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_out_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_out_states, size)) {
      return "failed to create array for field 'digital_out_states'";
    }
    auto array_ptr = ros_message->digital_out_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: flag_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->flag_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->flag_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->flag_states, size)) {
      return "failed to create array for field 'flag_states'";
    }
    auto array_ptr = ros_message->flag_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: analog_in_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->analog_in_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_in_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_in_states, size)) {
      return "failed to create array for field 'analog_in_states'";
    }
    auto array_ptr = ros_message->analog_in_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: analog_out_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->analog_out_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_out_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_out_states, size)) {
      return "failed to create array for field 'analog_out_states'";
    }
    auto array_ptr = ros_message->analog_out_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__msg__IOStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOStates__ros_msg_type * ros_message = static_cast<const _IOStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name digital_in_states
  {
    size_t array_size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name digital_out_states
  {
    size_t array_size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name flag_states
  {
    size_t array_size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name analog_in_states
  {
    size_t array_size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name analog_out_states
  {
    size_t array_size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IOStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__msg__IOStates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__msg__IOStates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: digital_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ur_msgs__msg__Digital(
        full_bounded, current_alignment);
    }
  }
  // member: digital_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ur_msgs__msg__Digital(
        full_bounded, current_alignment);
    }
  }
  // member: flag_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ur_msgs__msg__Digital(
        full_bounded, current_alignment);
    }
  }
  // member: analog_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ur_msgs__msg__Analog(
        full_bounded, current_alignment);
    }
  }
  // member: analog_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ur_msgs__msg__Analog(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _IOStates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ur_msgs__msg__IOStates(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IOStates = {
  "ur_msgs::msg",
  "IOStates",
  _IOStates__cdr_serialize,
  _IOStates__cdr_deserialize,
  _IOStates__get_serialized_size,
  _IOStates__max_serialized_size
};

static rosidl_message_type_support_t _IOStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOStates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, IOStates)() {
  return &_IOStates__type_support;
}

#if defined(__cplusplus)
}
#endif
