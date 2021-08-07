// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mymsgs/msg/detail/core__rosidl_typesupport_introspection_c.h"
#include "mymsgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mymsgs/msg/detail/core__functions.h"
#include "mymsgs/msg/detail/core__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Core__rosidl_typesupport_introspection_c__Core_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsgs__msg__Core__init(message_memory);
}

void Core__rosidl_typesupport_introspection_c__Core_fini_function(void * message_memory)
{
  mymsgs__msg__Core__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Core__rosidl_typesupport_introspection_c__Core_message_member_array[6] = {
  {
    "time_boot_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, time_boot_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "onboard_control_sensors_health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, onboard_control_sensors_health),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, voltage_battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, current_battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Core, battery_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Core__rosidl_typesupport_introspection_c__Core_message_members = {
  "mymsgs__msg",  // message namespace
  "Core",  // message name
  6,  // number of fields
  sizeof(mymsgs__msg__Core),
  Core__rosidl_typesupport_introspection_c__Core_message_member_array,  // message members
  Core__rosidl_typesupport_introspection_c__Core_init_function,  // function to initialize message memory (memory has to be allocated)
  Core__rosidl_typesupport_introspection_c__Core_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Core__rosidl_typesupport_introspection_c__Core_message_type_support_handle = {
  0,
  &Core__rosidl_typesupport_introspection_c__Core_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, msg, Core)() {
  if (!Core__rosidl_typesupport_introspection_c__Core_message_type_support_handle.typesupport_identifier) {
    Core__rosidl_typesupport_introspection_c__Core_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Core__rosidl_typesupport_introspection_c__Core_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
