// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:msg/ToolDataMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/msg/detail/tool_data_msg__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/msg/detail/tool_data_msg__functions.h"
#include "ur_msgs/msg/detail/tool_data_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__msg__ToolDataMsg__init(message_memory);
}

void ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_fini_function(void * message_memory)
{
  ur_msgs__msg__ToolDataMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_member_array[8] = {
  {
    "analog_input_range2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, analog_input_range2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_input_range3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, analog_input_range3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_input2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, analog_input2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_input3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, analog_input3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_output_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, tool_output_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, tool_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, tool_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__ToolDataMsg, tool_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_members = {
  "ur_msgs__msg",  // message namespace
  "ToolDataMsg",  // message name
  8,  // number of fields
  sizeof(ur_msgs__msg__ToolDataMsg),
  ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_member_array,  // message members
  ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_type_support_handle = {
  0,
  &ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, ToolDataMsg)() {
  if (!ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_type_support_handle.typesupport_identifier) {
    ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolDataMsg__rosidl_typesupport_introspection_c__ToolDataMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
