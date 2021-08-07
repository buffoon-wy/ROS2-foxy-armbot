// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "ur_msgs/msg/io_states__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "ur_msgs/msg/detail/io_states__struct.h"
#include "ur_msgs/msg/detail/io_states__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ur_msgs/msg/dds_connext/IOStates_Support.h"
#include "ur_msgs/msg/dds_connext/IOStates_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'digital_in_states'
// Member 'digital_out_states'
// Member 'flag_states'
#include "ur_msgs/msg/detail/digital__struct.h"
// Member 'digital_in_states'
// Member 'digital_out_states'
// Member 'flag_states'
#include "ur_msgs/msg/detail/digital__functions.h"
// Member 'analog_in_states'
// Member 'analog_out_states'
#include "ur_msgs/msg/detail/analog__struct.h"
// Member 'analog_in_states'
// Member 'analog_out_states'
#include "ur_msgs/msg/detail/analog__functions.h"

// forward declare type support functions
// Member 'digital_in_states'
// Member 'digital_out_states'
// Member 'flag_states'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  Digital)();
// Member 'analog_in_states'
// Member 'analog_out_states'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  Analog)();

static DDS_TypeCode *
_IOStates__get_type_code()
{
  return ur_msgs::msg::dds_::IOStates_TypeSupport::get_typecode();
}

static bool
_IOStates__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs__msg__IOStates * ros_message =
    static_cast<const ur_msgs__msg__IOStates *>(untyped_ros_message);
  ur_msgs::msg::dds_::IOStates_ * dds_message =
    static_cast<ur_msgs::msg::dds_::IOStates_ *>(untyped_dds_message);
  // Member name: digital_in_states
  {
    const message_type_support_callbacks_t * ur_msgs__msg__Digital__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->digital_in_states.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->digital_in_states_.maximum()) {
      if (!dds_message->digital_in_states_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->digital_in_states_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->digital_in_states.data[i];
      if (!ur_msgs__msg__Digital__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->digital_in_states_[i]))
      {
        return false;
      }
    }
  }
  // Member name: digital_out_states
  {
    const message_type_support_callbacks_t * ur_msgs__msg__Digital__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->digital_out_states.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->digital_out_states_.maximum()) {
      if (!dds_message->digital_out_states_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->digital_out_states_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->digital_out_states.data[i];
      if (!ur_msgs__msg__Digital__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->digital_out_states_[i]))
      {
        return false;
      }
    }
  }
  // Member name: flag_states
  {
    const message_type_support_callbacks_t * ur_msgs__msg__Digital__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, ur_msgs, msg, Digital
      )()->data);
    size_t size = ros_message->flag_states.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->flag_states_.maximum()) {
      if (!dds_message->flag_states_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->flag_states_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->flag_states.data[i];
      if (!ur_msgs__msg__Digital__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->flag_states_[i]))
      {
        return false;
      }
    }
  }
  // Member name: analog_in_states
  {
    const message_type_support_callbacks_t * ur_msgs__msg__Analog__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, ur_msgs, msg, Analog
      )()->data);
    size_t size = ros_message->analog_in_states.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->analog_in_states_.maximum()) {
      if (!dds_message->analog_in_states_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->analog_in_states_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->analog_in_states.data[i];
      if (!ur_msgs__msg__Analog__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->analog_in_states_[i]))
      {
        return false;
      }
    }
  }
  // Member name: analog_out_states
  {
    const message_type_support_callbacks_t * ur_msgs__msg__Analog__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, ur_msgs, msg, Analog
      )()->data);
    size_t size = ros_message->analog_out_states.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->analog_out_states_.maximum()) {
      if (!dds_message->analog_out_states_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->analog_out_states_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->analog_out_states.data[i];
      if (!ur_msgs__msg__Analog__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->analog_out_states_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_IOStates__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ur_msgs::msg::dds_::IOStates_ * dds_message =
    static_cast<const ur_msgs::msg::dds_::IOStates_ *>(untyped_dds_message);
  ur_msgs__msg__IOStates * ros_message =
    static_cast<ur_msgs__msg__IOStates *>(untyped_ros_message);
  // Member name: digital_in_states
  {
    DDS_Long size = dds_message->digital_in_states_.length();
    if (ros_message->digital_in_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_in_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_in_states, size)) {
      return "failed to create array for field 'digital_in_states'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->digital_in_states.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        ur_msgs, msg,
        Digital)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->digital_in_states_[i], &ros_i);
    }
  }
  // Member name: digital_out_states
  {
    DDS_Long size = dds_message->digital_out_states_.length();
    if (ros_message->digital_out_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_out_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_out_states, size)) {
      return "failed to create array for field 'digital_out_states'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->digital_out_states.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        ur_msgs, msg,
        Digital)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->digital_out_states_[i], &ros_i);
    }
  }
  // Member name: flag_states
  {
    DDS_Long size = dds_message->flag_states_.length();
    if (ros_message->flag_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->flag_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->flag_states, size)) {
      return "failed to create array for field 'flag_states'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->flag_states.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        ur_msgs, msg,
        Digital)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->flag_states_[i], &ros_i);
    }
  }
  // Member name: analog_in_states
  {
    DDS_Long size = dds_message->analog_in_states_.length();
    if (ros_message->analog_in_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_in_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_in_states, size)) {
      return "failed to create array for field 'analog_in_states'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->analog_in_states.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        ur_msgs, msg,
        Analog)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->analog_in_states_[i], &ros_i);
    }
  }
  // Member name: analog_out_states
  {
    DDS_Long size = dds_message->analog_out_states_.length();
    if (ros_message->analog_out_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_out_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_out_states, size)) {
      return "failed to create array for field 'analog_out_states'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->analog_out_states.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        ur_msgs, msg,
        Analog)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->analog_out_states_[i], &ros_i);
    }
  }
  return true;
}


static bool
_IOStates__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const ur_msgs__msg__IOStates * ros_message =
    static_cast<const ur_msgs__msg__IOStates *>(untyped_ros_message);
  ur_msgs::msg::dds_::IOStates_ dds_message;
  if (!_IOStates__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (ur_msgs::msg::dds_::IOStates_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_IOStates__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  ur_msgs::msg::dds_::IOStates_ * dds_message =
    ur_msgs::msg::dds_::IOStates_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ur_msgs::msg::dds_::IOStates_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _IOStates__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (ur_msgs::msg::dds_::IOStates_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _IOStates__callbacks = {
  "ur_msgs::msg",  // message_namespace
  "IOStates",  // message_name
  _IOStates__get_type_code,  // get_type_code
  _IOStates__convert_ros_to_dds,  // convert_ros_to_dds
  _IOStates__convert_dds_to_ros,  // convert_dds_to_ros
  _IOStates__to_cdr_stream,  // to_cdr_stream
  _IOStates__to_message  // to_message
};

static rosidl_message_type_support_t _IOStates__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_IOStates__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ur_msgs, msg,
  IOStates)()
{
  return &_IOStates__type_support;
}

#if defined(__cplusplus)
}
#endif
