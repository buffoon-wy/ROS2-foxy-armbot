// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mymsgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "mymsgs/srv/detail/os_config_srv__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mymsgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _OSConfigSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _OSConfigSrv_Request_type_support_ids_t;

static const _OSConfigSrv_Request_type_support_ids_t _OSConfigSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OSConfigSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _OSConfigSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OSConfigSrv_Request_type_support_symbol_names_t _OSConfigSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, mymsgs, srv, OSConfigSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, srv, OSConfigSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Request)),
  }
};

typedef struct _OSConfigSrv_Request_type_support_data_t
{
  void * data[3];
} _OSConfigSrv_Request_type_support_data_t;

static _OSConfigSrv_Request_type_support_data_t _OSConfigSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OSConfigSrv_Request_message_typesupport_map = {
  3,
  "mymsgs",
  &_OSConfigSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OSConfigSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OSConfigSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OSConfigSrv_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OSConfigSrv_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mymsgs, srv, OSConfigSrv_Request)() {
  return &::mymsgs::srv::rosidl_typesupport_c::OSConfigSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mymsgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _OSConfigSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _OSConfigSrv_Response_type_support_ids_t;

static const _OSConfigSrv_Response_type_support_ids_t _OSConfigSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OSConfigSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _OSConfigSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OSConfigSrv_Response_type_support_symbol_names_t _OSConfigSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, mymsgs, srv, OSConfigSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, srv, OSConfigSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv_Response)),
  }
};

typedef struct _OSConfigSrv_Response_type_support_data_t
{
  void * data[3];
} _OSConfigSrv_Response_type_support_data_t;

static _OSConfigSrv_Response_type_support_data_t _OSConfigSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OSConfigSrv_Response_message_typesupport_map = {
  3,
  "mymsgs",
  &_OSConfigSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OSConfigSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OSConfigSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OSConfigSrv_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OSConfigSrv_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_mymsgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mymsgs, srv, OSConfigSrv_Response)() {
  return &::mymsgs::srv::rosidl_typesupport_c::OSConfigSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mymsgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _OSConfigSrv_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _OSConfigSrv_type_support_ids_t;

static const _OSConfigSrv_type_support_ids_t _OSConfigSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OSConfigSrv_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _OSConfigSrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OSConfigSrv_type_support_symbol_names_t _OSConfigSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_c, mymsgs, srv, OSConfigSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsgs, srv, OSConfigSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgs, srv, OSConfigSrv)),
  }
};

typedef struct _OSConfigSrv_type_support_data_t
{
  void * data[3];
} _OSConfigSrv_type_support_data_t;

static _OSConfigSrv_type_support_data_t _OSConfigSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OSConfigSrv_service_typesupport_map = {
  3,
  "mymsgs",
  &_OSConfigSrv_service_typesupport_ids.typesupport_identifier[0],
  &_OSConfigSrv_service_typesupport_symbol_names.symbol_name[0],
  &_OSConfigSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OSConfigSrv_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OSConfigSrv_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_mymsgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mymsgs, srv, OSConfigSrv)() {
  return &::mymsgs::srv::rosidl_typesupport_c::OSConfigSrv_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
