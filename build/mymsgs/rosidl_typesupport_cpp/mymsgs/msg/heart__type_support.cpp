// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mymsgs/msg/detail/heart__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mymsgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Heart_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Heart_type_support_ids_t;

static const _Heart_type_support_ids_t _Heart_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Heart_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Heart_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Heart_type_support_symbol_names_t _Heart_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, mymsgs, msg, Heart)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsgs, msg, Heart)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mymsgs, msg, Heart)),
  }
};

typedef struct _Heart_type_support_data_t
{
  void * data[3];
} _Heart_type_support_data_t;

static _Heart_type_support_data_t _Heart_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Heart_message_typesupport_map = {
  3,
  "mymsgs",
  &_Heart_message_typesupport_ids.typesupport_identifier[0],
  &_Heart_message_typesupport_symbol_names.symbol_name[0],
  &_Heart_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Heart_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Heart_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace mymsgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsgs::msg::Heart>()
{
  return &::mymsgs::msg::rosidl_typesupport_cpp::Heart_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mymsgs, msg, Heart)() {
  return get_message_type_support_handle<mymsgs::msg::Heart>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
