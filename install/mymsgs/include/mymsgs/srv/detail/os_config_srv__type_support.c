// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mymsgs/srv/detail/os_config_srv__rosidl_typesupport_introspection_c.h"
#include "mymsgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mymsgs/srv/detail/os_config_srv__functions.h"
#include "mymsgs/srv/detail/os_config_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsgs__srv__OSConfigSrv_Request__init(message_memory);
}

void OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_fini_function(void * message_memory)
{
  mymsgs__srv__OSConfigSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__srv__OSConfigSrv_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_members = {
  "mymsgs__srv",  // message namespace
  "OSConfigSrv_Request",  // message name
  1,  // number of fields
  sizeof(mymsgs__srv__OSConfigSrv_Request),
  OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_member_array,  // message members
  OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_type_support_handle = {
  0,
  &OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Request)() {
  if (!OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_type_support_handle.typesupport_identifier) {
    OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OSConfigSrv_Request__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mymsgs/srv/detail/os_config_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__functions.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__struct.h"


// Include directives for member types
// Member `metadata`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsgs__srv__OSConfigSrv_Response__init(message_memory);
}

void OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_fini_function(void * message_memory)
{
  mymsgs__srv__OSConfigSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_member_array[1] = {
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgs__srv__OSConfigSrv_Response, metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_members = {
  "mymsgs__srv",  // message namespace
  "OSConfigSrv_Response",  // message name
  1,  // number of fields
  sizeof(mymsgs__srv__OSConfigSrv_Response),
  OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_member_array,  // message members
  OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_type_support_handle = {
  0,
  &OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Response)() {
  if (!OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_type_support_handle.typesupport_identifier) {
    OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OSConfigSrv_Response__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_members = {
  "mymsgs__srv",  // service namespace
  "OSConfigSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_Request_message_type_support_handle,
  NULL  // response message
  // mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_type_support_handle = {
  0,
  &mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv)() {
  if (!mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_type_support_handle.typesupport_identifier) {
    mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Response)()->data;
  }

  return &mymsgs__srv__detail__os_config_srv__rosidl_typesupport_introspection_c__OSConfigSrv_service_type_support_handle;
}
