// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetSpeedSliderFraction_Request__init(message_memory);
}

void SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_fini_function(void * message_memory)
{
  ur_msgs__srv__SetSpeedSliderFraction_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_member_array[1] = {
  {
    "speed_slider_fraction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Request, speed_slider_fraction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetSpeedSliderFraction_Request",  // message name
  1,  // number of fields
  sizeof(ur_msgs__srv__SetSpeedSliderFraction_Request),
  SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_member_array,  // message members
  SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle = {
  0,
  &SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)() {
  if (!SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle.typesupport_identifier) {
    SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetSpeedSliderFraction_Response__init(message_memory);
}

void SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_fini_function(void * message_memory)
{
  ur_msgs__srv__SetSpeedSliderFraction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetSpeedSliderFraction_Response",  // message name
  1,  // number of fields
  sizeof(ur_msgs__srv__SetSpeedSliderFraction_Response),
  SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_member_array,  // message members
  SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle = {
  0,
  &SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)() {
  if (!SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle.typesupport_identifier) {
    SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_members = {
  "ur_msgs__srv",  // service namespace
  "SetSpeedSliderFraction",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle,
  NULL  // response message
  // ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle = {
  0,
  &ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction)() {
  if (!ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)()->data;
  }

  return &ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle;
}
