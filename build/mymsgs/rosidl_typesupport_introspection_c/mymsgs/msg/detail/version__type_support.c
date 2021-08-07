// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mymsgs/msg/detail/version__rosidl_typesupport_introspection_c.h"
#include "mymsgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mymsgs/msg/detail/version__functions.h"
#include "mymsgs/msg/detail/version__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Version__rosidl_typesupport_introspection_c__Version_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsgs__msg__Version__init(message_memory);
}

void Version__rosidl_typesupport_introspection_c__Version_fini_function(void * message_memory)
{
  mymsgs__msg__Version__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Version__rosidl_typesupport_introspection_c__Version_message_member_array[3] = {
  {
    "hardware_ver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Version, hardware_ver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "software_ver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Version, software_ver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uiud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__msg__Version, uiud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Version__rosidl_typesupport_introspection_c__Version_message_members = {
  "mymsgs__msg",  // message namespace
  "Version",  // message name
  3,  // number of fields
  sizeof(mymsgs__msg__Version),
  Version__rosidl_typesupport_introspection_c__Version_message_member_array,  // message members
  Version__rosidl_typesupport_introspection_c__Version_init_function,  // function to initialize message memory (memory has to be allocated)
  Version__rosidl_typesupport_introspection_c__Version_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Version__rosidl_typesupport_introspection_c__Version_message_type_support_handle = {
  0,
  &Version__rosidl_typesupport_introspection_c__Version_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, msg, Version)() {
  if (!Version__rosidl_typesupport_introspection_c__Version_message_type_support_handle.typesupport_identifier) {
    Version__rosidl_typesupport_introspection_c__Version_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Version__rosidl_typesupport_introspection_c__Version_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
