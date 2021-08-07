// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice


#ifndef MYMSGS__SRV__OS_CONFIG_SRV__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MYMSGS__SRV__OS_CONFIG_SRV__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "mymsgs/srv/detail/os_config_srv__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mymsgs/srv/dds_connext/OSConfigSrv_Support.h"
#include "mymsgs/srv/dds_connext/OSConfigSrv_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace mymsgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__OSConfigSrv_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_ros_message_to_dds(
  const mymsgs::srv::OSConfigSrv_Request & ros_message,
  mymsgs::srv::dds_::OSConfigSrv_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_dds_message_to_ros(
  const mymsgs::srv::dds_::OSConfigSrv_Request_ & dds_message,
  mymsgs::srv::OSConfigSrv_Request & ros_message);

bool
to_cdr_stream__OSConfigSrv_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__OSConfigSrv_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mymsgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsgs, srv,
  OSConfigSrv_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "mymsgs/srv/dds_connext/OSConfigSrv_Support.h"
// already included above
// #include "mymsgs/srv/dds_connext/OSConfigSrv_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace mymsgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__OSConfigSrv_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_ros_message_to_dds(
  const mymsgs::srv::OSConfigSrv_Response & ros_message,
  mymsgs::srv::dds_::OSConfigSrv_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
convert_dds_message_to_ros(
  const mymsgs::srv::dds_::OSConfigSrv_Response_ & dds_message,
  mymsgs::srv::OSConfigSrv_Response & ros_message);

bool
to_cdr_stream__OSConfigSrv_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__OSConfigSrv_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mymsgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsgs, srv,
  OSConfigSrv_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace mymsgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
create_requester__OSConfigSrv(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const char *
destroy_requester__OSConfigSrv(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
int64_t
send_request__OSConfigSrv(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
create_replier__OSConfigSrv(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const char *
destroy_replier__OSConfigSrv(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
bool
take_request__OSConfigSrv(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
bool
take_response__OSConfigSrv(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
bool
send_response__OSConfigSrv(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
get_request_datawriter__OSConfigSrv(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
get_reply_datareader__OSConfigSrv(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
get_request_datareader__OSConfigSrv(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
void *
get_reply_datawriter__OSConfigSrv(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsgs, srv,
  OSConfigSrv)();

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__SRV__OS_CONFIG_SRV__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
