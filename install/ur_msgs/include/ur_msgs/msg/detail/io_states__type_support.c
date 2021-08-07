// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/msg/detail/io_states__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/msg/detail/io_states__functions.h"
#include "ur_msgs/msg/detail/io_states__struct.h"


// Include directives for member types
// Member `digital_in_states`
// Member `digital_out_states`
// Member `flag_states`
#include "ur_msgs/msg/digital.h"
// Member `digital_in_states`
// Member `digital_out_states`
// Member `flag_states`
#include "ur_msgs/msg/detail/digital__rosidl_typesupport_introspection_c.h"
// Member `analog_in_states`
// Member `analog_out_states`
#include "ur_msgs/msg/analog.h"
// Member `analog_in_states`
// Member `analog_out_states`
#include "ur_msgs/msg/detail/analog__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IOStates__rosidl_typesupport_introspection_c__IOStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__msg__IOStates__init(message_memory);
}

void IOStates__rosidl_typesupport_introspection_c__IOStates_fini_function(void * message_memory)
{
  ur_msgs__msg__IOStates__fini(message_memory);
}

size_t IOStates__rosidl_typesupport_introspection_c__size_function__Digital__digital_in_states(
  const void * untyped_member)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return member->size;
}

const void * IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__digital_in_states(
  const void * untyped_member, size_t index)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IOStates__rosidl_typesupport_introspection_c__get_function__Digital__digital_in_states(
  void * untyped_member, size_t index)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__digital_in_states(
  void * untyped_member, size_t size)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  ur_msgs__msg__Digital__Sequence__fini(member);
  return ur_msgs__msg__Digital__Sequence__init(member, size);
}

size_t IOStates__rosidl_typesupport_introspection_c__size_function__Digital__digital_out_states(
  const void * untyped_member)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return member->size;
}

const void * IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__digital_out_states(
  const void * untyped_member, size_t index)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IOStates__rosidl_typesupport_introspection_c__get_function__Digital__digital_out_states(
  void * untyped_member, size_t index)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__digital_out_states(
  void * untyped_member, size_t size)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  ur_msgs__msg__Digital__Sequence__fini(member);
  return ur_msgs__msg__Digital__Sequence__init(member, size);
}

size_t IOStates__rosidl_typesupport_introspection_c__size_function__Digital__flag_states(
  const void * untyped_member)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return member->size;
}

const void * IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__flag_states(
  const void * untyped_member, size_t index)
{
  const ur_msgs__msg__Digital__Sequence * member =
    (const ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IOStates__rosidl_typesupport_introspection_c__get_function__Digital__flag_states(
  void * untyped_member, size_t index)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__flag_states(
  void * untyped_member, size_t size)
{
  ur_msgs__msg__Digital__Sequence * member =
    (ur_msgs__msg__Digital__Sequence *)(untyped_member);
  ur_msgs__msg__Digital__Sequence__fini(member);
  return ur_msgs__msg__Digital__Sequence__init(member, size);
}

size_t IOStates__rosidl_typesupport_introspection_c__size_function__Analog__analog_in_states(
  const void * untyped_member)
{
  const ur_msgs__msg__Analog__Sequence * member =
    (const ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return member->size;
}

const void * IOStates__rosidl_typesupport_introspection_c__get_const_function__Analog__analog_in_states(
  const void * untyped_member, size_t index)
{
  const ur_msgs__msg__Analog__Sequence * member =
    (const ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IOStates__rosidl_typesupport_introspection_c__get_function__Analog__analog_in_states(
  void * untyped_member, size_t index)
{
  ur_msgs__msg__Analog__Sequence * member =
    (ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IOStates__rosidl_typesupport_introspection_c__resize_function__Analog__analog_in_states(
  void * untyped_member, size_t size)
{
  ur_msgs__msg__Analog__Sequence * member =
    (ur_msgs__msg__Analog__Sequence *)(untyped_member);
  ur_msgs__msg__Analog__Sequence__fini(member);
  return ur_msgs__msg__Analog__Sequence__init(member, size);
}

size_t IOStates__rosidl_typesupport_introspection_c__size_function__Analog__analog_out_states(
  const void * untyped_member)
{
  const ur_msgs__msg__Analog__Sequence * member =
    (const ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return member->size;
}

const void * IOStates__rosidl_typesupport_introspection_c__get_const_function__Analog__analog_out_states(
  const void * untyped_member, size_t index)
{
  const ur_msgs__msg__Analog__Sequence * member =
    (const ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IOStates__rosidl_typesupport_introspection_c__get_function__Analog__analog_out_states(
  void * untyped_member, size_t index)
{
  ur_msgs__msg__Analog__Sequence * member =
    (ur_msgs__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IOStates__rosidl_typesupport_introspection_c__resize_function__Analog__analog_out_states(
  void * untyped_member, size_t size)
{
  ur_msgs__msg__Analog__Sequence * member =
    (ur_msgs__msg__Analog__Sequence *)(untyped_member);
  ur_msgs__msg__Analog__Sequence__fini(member);
  return ur_msgs__msg__Analog__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[5] = {
  {
    "digital_in_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__IOStates, digital_in_states),  // bytes offset in struct
    NULL,  // default value
    IOStates__rosidl_typesupport_introspection_c__size_function__Digital__digital_in_states,  // size() function pointer
    IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__digital_in_states,  // get_const(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__get_function__Digital__digital_in_states,  // get(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__digital_in_states  // resize(index) function pointer
  },
  {
    "digital_out_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__IOStates, digital_out_states),  // bytes offset in struct
    NULL,  // default value
    IOStates__rosidl_typesupport_introspection_c__size_function__Digital__digital_out_states,  // size() function pointer
    IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__digital_out_states,  // get_const(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__get_function__Digital__digital_out_states,  // get(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__digital_out_states  // resize(index) function pointer
  },
  {
    "flag_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__IOStates, flag_states),  // bytes offset in struct
    NULL,  // default value
    IOStates__rosidl_typesupport_introspection_c__size_function__Digital__flag_states,  // size() function pointer
    IOStates__rosidl_typesupport_introspection_c__get_const_function__Digital__flag_states,  // get_const(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__get_function__Digital__flag_states,  // get(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__resize_function__Digital__flag_states  // resize(index) function pointer
  },
  {
    "analog_in_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__IOStates, analog_in_states),  // bytes offset in struct
    NULL,  // default value
    IOStates__rosidl_typesupport_introspection_c__size_function__Analog__analog_in_states,  // size() function pointer
    IOStates__rosidl_typesupport_introspection_c__get_const_function__Analog__analog_in_states,  // get_const(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__get_function__Analog__analog_in_states,  // get(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__resize_function__Analog__analog_in_states  // resize(index) function pointer
  },
  {
    "analog_out_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__IOStates, analog_out_states),  // bytes offset in struct
    NULL,  // default value
    IOStates__rosidl_typesupport_introspection_c__size_function__Analog__analog_out_states,  // size() function pointer
    IOStates__rosidl_typesupport_introspection_c__get_const_function__Analog__analog_out_states,  // get_const(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__get_function__Analog__analog_out_states,  // get(index) function pointer
    IOStates__rosidl_typesupport_introspection_c__resize_function__Analog__analog_out_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IOStates__rosidl_typesupport_introspection_c__IOStates_message_members = {
  "ur_msgs__msg",  // message namespace
  "IOStates",  // message name
  5,  // number of fields
  sizeof(ur_msgs__msg__IOStates),
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array,  // message members
  IOStates__rosidl_typesupport_introspection_c__IOStates_init_function,  // function to initialize message memory (memory has to be allocated)
  IOStates__rosidl_typesupport_introspection_c__IOStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IOStates__rosidl_typesupport_introspection_c__IOStates_message_type_support_handle = {
  0,
  &IOStates__rosidl_typesupport_introspection_c__IOStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, IOStates)() {
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, Digital)();
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, Digital)();
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, Digital)();
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, Analog)();
  IOStates__rosidl_typesupport_introspection_c__IOStates_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, Analog)();
  if (!IOStates__rosidl_typesupport_introspection_c__IOStates_message_type_support_handle.typesupport_identifier) {
    IOStates__rosidl_typesupport_introspection_c__IOStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IOStates__rosidl_typesupport_introspection_c__IOStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
