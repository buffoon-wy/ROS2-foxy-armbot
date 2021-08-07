// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "mymsgs/srv/os_config_srv__rosidl_typesupport_connext_c.h"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rmw/rmw.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "mymsgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mymsgs/srv/dds_connext/OSConfigSrv_Support.h"
#include "mymsgs/srv/os_config_srv.h"
#include "mymsgs/srv/os_config_srv__rosidl_typesupport_connext_cpp.hpp"

// already included above
// #include "mymsgs/srv/os_config_srv__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mymsgs/srv/detail/os_config_srv__struct.h"
#include "mymsgs/srv/detail/os_config_srv__functions.h"

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
#include "mymsgs/srv/dds_connext/OSConfigSrv_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_OSConfigSrv_Request__get_type_code()
{
  return mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupport::get_typecode();
}

static bool
_OSConfigSrv_Request__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs__srv__OSConfigSrv_Request * ros_message =
    static_cast<const mymsgs__srv__OSConfigSrv_Request *>(untyped_ros_message);
  mymsgs::srv::dds_::OSConfigSrv_Request_ * dds_message =
    static_cast<mymsgs::srv::dds_::OSConfigSrv_Request_ *>(untyped_dds_message);
  // Member name: structure_needs_at_least_one_member
  {
    dds_message->structure_needs_at_least_one_member_ = ros_message->structure_needs_at_least_one_member;
  }
  return true;
}

static bool
_OSConfigSrv_Request__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs::srv::dds_::OSConfigSrv_Request_ * dds_message =
    static_cast<const mymsgs::srv::dds_::OSConfigSrv_Request_ *>(untyped_dds_message);
  mymsgs__srv__OSConfigSrv_Request * ros_message =
    static_cast<mymsgs__srv__OSConfigSrv_Request *>(untyped_ros_message);
  // Member name: structure_needs_at_least_one_member
  {
    ros_message->structure_needs_at_least_one_member = dds_message->structure_needs_at_least_one_member_;
  }
  return true;
}


static bool
_OSConfigSrv_Request__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mymsgs__srv__OSConfigSrv_Request * ros_message =
    static_cast<const mymsgs__srv__OSConfigSrv_Request *>(untyped_ros_message);
  mymsgs::srv::dds_::OSConfigSrv_Request_ dds_message;
  if (!_OSConfigSrv_Request__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsgs::srv::dds_::OSConfigSrv_Request_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsgs::srv::dds_::OSConfigSrv_Request_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mymsgs::srv::dds_::OSConfigSrv_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_OSConfigSrv_Request__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mymsgs::srv::dds_::OSConfigSrv_Request_ * dds_message =
    mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsgs::srv::dds_::OSConfigSrv_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _OSConfigSrv_Request__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _OSConfigSrv_Request__callbacks = {
  "mymsgs::srv",  // message_namespace
  "OSConfigSrv_Request",  // message_name
  _OSConfigSrv_Request__get_type_code,  // get_type_code
  _OSConfigSrv_Request__convert_ros_to_dds,  // convert_ros_to_dds
  _OSConfigSrv_Request__convert_dds_to_ros,  // convert_dds_to_ros
  _OSConfigSrv_Request__to_cdr_stream,  // to_cdr_stream
  _OSConfigSrv_Request__to_message  // to_message
};

static rosidl_message_type_support_t _OSConfigSrv_Request__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_OSConfigSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mymsgs, srv,
  OSConfigSrv_Request)()
{
  return &_OSConfigSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "mymsgs/srv/os_config_srv__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "mymsgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__struct.h"
// already included above
// #include "mymsgs/srv/detail/os_config_srv__functions.h"

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

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'metadata'
#include "rosidl_runtime_c/string.h"
// Member 'metadata'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_OSConfigSrv_Response__get_type_code()
{
  return mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupport::get_typecode();
}

static bool
_OSConfigSrv_Response__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs__srv__OSConfigSrv_Response * ros_message =
    static_cast<const mymsgs__srv__OSConfigSrv_Response *>(untyped_ros_message);
  mymsgs::srv::dds_::OSConfigSrv_Response_ * dds_message =
    static_cast<mymsgs::srv::dds_::OSConfigSrv_Response_ *>(untyped_dds_message);
  // Member name: metadata
  {
    const rosidl_runtime_c__String * str = &ros_message->metadata;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->metadata_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_OSConfigSrv_Response__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsgs::srv::dds_::OSConfigSrv_Response_ * dds_message =
    static_cast<const mymsgs::srv::dds_::OSConfigSrv_Response_ *>(untyped_dds_message);
  mymsgs__srv__OSConfigSrv_Response * ros_message =
    static_cast<mymsgs__srv__OSConfigSrv_Response *>(untyped_ros_message);
  // Member name: metadata
  {
    if (!ros_message->metadata.data) {
      rosidl_runtime_c__String__init(&ros_message->metadata);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->metadata,
      dds_message->metadata_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'metadata'\n");
      return false;
    }
  }
  return true;
}


static bool
_OSConfigSrv_Response__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mymsgs__srv__OSConfigSrv_Response * ros_message =
    static_cast<const mymsgs__srv__OSConfigSrv_Response *>(untyped_ros_message);
  mymsgs::srv::dds_::OSConfigSrv_Response_ dds_message;
  if (!_OSConfigSrv_Response__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsgs::srv::dds_::OSConfigSrv_Response_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsgs::srv::dds_::OSConfigSrv_Response_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mymsgs::srv::dds_::OSConfigSrv_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_OSConfigSrv_Response__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mymsgs::srv::dds_::OSConfigSrv_Response_ * dds_message =
    mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsgs::srv::dds_::OSConfigSrv_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _OSConfigSrv_Response__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _OSConfigSrv_Response__callbacks = {
  "mymsgs::srv",  // message_namespace
  "OSConfigSrv_Response",  // message_name
  _OSConfigSrv_Response__get_type_code,  // get_type_code
  _OSConfigSrv_Response__convert_ros_to_dds,  // convert_ros_to_dds
  _OSConfigSrv_Response__convert_dds_to_ros,  // convert_dds_to_ros
  _OSConfigSrv_Response__to_cdr_stream,  // to_cdr_stream
  _OSConfigSrv_Response__to_message  // to_message
};

static rosidl_message_type_support_t _OSConfigSrv_Response__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_OSConfigSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mymsgs, srv,
  OSConfigSrv_Response)()
{
  return &_OSConfigSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;

#if defined(__cplusplus)
extern "C"
{
#endif

static void * create_requester__OSConfigSrv(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return mymsgs::srv::typesupport_connext_cpp::create_requester__OSConfigSrv(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}
static const char * destroy_requester__OSConfigSrv(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  return mymsgs::srv::typesupport_connext_cpp::destroy_requester__OSConfigSrv(
    untyped_requester, deallocator);
}

static int64_t send_request__OSConfigSrv(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using RequesterType = connext::Requester<
    mymsgs::srv::dds_::OSConfigSrv_Request_,
    mymsgs::srv::dds_::OSConfigSrv_Response_
  >;
  connext::WriteSample<mymsgs::srv::dds_::OSConfigSrv_Request_> request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    mymsgs, srv,
    OSConfigSrv_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_request, static_cast<void *>(&request.data()));
  if (!converted) {
    fprintf(stderr, "Unable to convert request!\n");
    return -1;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

static void * create_replier__OSConfigSrv(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return mymsgs::srv::typesupport_connext_cpp::create_replier__OSConfigSrv(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}

static const char * destroy_replier__OSConfigSrv(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  return mymsgs::srv::typesupport_connext_cpp::destroy_replier__OSConfigSrv(
    untyped_replier, deallocator);
}

static bool take_request__OSConfigSrv(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    mymsgs::srv::dds_::OSConfigSrv_Request_,
    mymsgs::srv::dds_::OSConfigSrv_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  connext::Sample<mymsgs::srv::dds_::OSConfigSrv_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    mymsgs, srv,
    OSConfigSrv_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&request.data()), untyped_ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

static bool take_response__OSConfigSrv(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    mymsgs::srv::dds_::OSConfigSrv_Request_,
    mymsgs::srv::dds_::OSConfigSrv_Response_
  >;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  connext::Sample<mymsgs::srv::dds_::OSConfigSrv_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    mymsgs, srv,
    OSConfigSrv_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&response.data()), untyped_ros_response);
  return converted;
}

bool send_response__OSConfigSrv(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ReplierType = connext::Replier<
    mymsgs::srv::dds_::OSConfigSrv_Request_,
    mymsgs::srv::dds_::OSConfigSrv_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<mymsgs::srv::dds_::OSConfigSrv_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    mymsgs, srv,
    OSConfigSrv_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_response, static_cast<void *>(&response.data()));
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

static void *
get_request_datawriter__OSConfigSrv(void * untyped_requester)
{
  return mymsgs::srv::typesupport_connext_cpp::get_request_datawriter__OSConfigSrv(
    untyped_requester);
}

static void *
get_reply_datareader__OSConfigSrv(void * untyped_requester)
{
  return mymsgs::srv::typesupport_connext_cpp::get_reply_datareader__OSConfigSrv(
    untyped_requester);
}

static void *
get_request_datareader__OSConfigSrv(void * untyped_replier)
{
  return mymsgs::srv::typesupport_connext_cpp::get_request_datareader__OSConfigSrv(
    untyped_replier);
}

static void *
get_reply_datawriter__OSConfigSrv(void * untyped_replier)
{
  return mymsgs::srv::typesupport_connext_cpp::get_reply_datawriter__OSConfigSrv(
    untyped_replier);
}

static service_type_support_callbacks_t _OSConfigSrv__callbacks = {
  "mymsgs::srv",  // service_namespace
  "OSConfigSrv",
  &create_requester__OSConfigSrv,
  &destroy_requester__OSConfigSrv,
  &create_replier__OSConfigSrv,
  &destroy_replier__OSConfigSrv,
  &send_request__OSConfigSrv,
  &take_request__OSConfigSrv,
  &send_response__OSConfigSrv,
  &take_response__OSConfigSrv,
  &get_request_datawriter__OSConfigSrv,
  &get_reply_datareader__OSConfigSrv,
  &get_request_datareader__OSConfigSrv,
  &get_reply_datawriter__OSConfigSrv
};

static rosidl_service_type_support_t _OSConfigSrv__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_OSConfigSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mymsgs, srv,
  OSConfigSrv)()
{
  return &_OSConfigSrv__type_support;
}

#if defined(__cplusplus)
}
#endif
