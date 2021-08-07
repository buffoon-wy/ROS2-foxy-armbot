// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_H_
#define MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/OSConfigSrv in the package mymsgs.
typedef struct mymsgs__srv__OSConfigSrv_Request
{
  uint8_t structure_needs_at_least_one_member;
} mymsgs__srv__OSConfigSrv_Request;

// Struct for a sequence of mymsgs__srv__OSConfigSrv_Request.
typedef struct mymsgs__srv__OSConfigSrv_Request__Sequence
{
  mymsgs__srv__OSConfigSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__srv__OSConfigSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'metadata'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OSConfigSrv in the package mymsgs.
typedef struct mymsgs__srv__OSConfigSrv_Response
{
  rosidl_runtime_c__String metadata;
} mymsgs__srv__OSConfigSrv_Response;

// Struct for a sequence of mymsgs__srv__OSConfigSrv_Response.
typedef struct mymsgs__srv__OSConfigSrv_Response__Sequence
{
  mymsgs__srv__OSConfigSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__srv__OSConfigSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__SRV__DETAIL__OS_CONFIG_SRV__STRUCT_H_
