// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice
#include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ur_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_serialize(
  const ur_msgs::srv::SetSpeedSliderFraction_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: speed_slider_fraction
  cdr << ros_message.speed_slider_fraction;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs::srv::SetSpeedSliderFraction_Request & ros_message)
{
  // Member: speed_slider_fraction
  cdr >> ros_message.speed_slider_fraction;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
get_serialized_size(
  const ur_msgs::srv::SetSpeedSliderFraction_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: speed_slider_fraction
  {
    size_t item_size = sizeof(ros_message.speed_slider_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
max_serialized_size_SetSpeedSliderFraction_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: speed_slider_fraction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetSpeedSliderFraction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_msgs::srv::SetSpeedSliderFraction_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetSpeedSliderFraction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_msgs::srv::SetSpeedSliderFraction_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetSpeedSliderFraction_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_msgs::srv::SetSpeedSliderFraction_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetSpeedSliderFraction_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetSpeedSliderFraction_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetSpeedSliderFraction_Request__callbacks = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction_Request",
  _SetSpeedSliderFraction_Request__cdr_serialize,
  _SetSpeedSliderFraction_Request__cdr_deserialize,
  _SetSpeedSliderFraction_Request__get_serialized_size,
  _SetSpeedSliderFraction_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeedSliderFraction_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetSpeedSliderFraction_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::srv::SetSpeedSliderFraction_Request>()
{
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, SetSpeedSliderFraction_Request)() {
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ur_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_serialize(
  const ur_msgs::srv::SetSpeedSliderFraction_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs::srv::SetSpeedSliderFraction_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
get_serialized_size(
  const ur_msgs::srv::SetSpeedSliderFraction_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_msgs
max_serialized_size_SetSpeedSliderFraction_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetSpeedSliderFraction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_msgs::srv::SetSpeedSliderFraction_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetSpeedSliderFraction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_msgs::srv::SetSpeedSliderFraction_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetSpeedSliderFraction_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_msgs::srv::SetSpeedSliderFraction_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetSpeedSliderFraction_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetSpeedSliderFraction_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetSpeedSliderFraction_Response__callbacks = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction_Response",
  _SetSpeedSliderFraction_Response__cdr_serialize,
  _SetSpeedSliderFraction_Response__cdr_deserialize,
  _SetSpeedSliderFraction_Response__get_serialized_size,
  _SetSpeedSliderFraction_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeedSliderFraction_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetSpeedSliderFraction_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::srv::SetSpeedSliderFraction_Response>()
{
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, SetSpeedSliderFraction_Response)() {
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ur_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetSpeedSliderFraction__callbacks = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, SetSpeedSliderFraction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, SetSpeedSliderFraction_Response)(),
};

static rosidl_service_type_support_t _SetSpeedSliderFraction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetSpeedSliderFraction__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_msgs::srv::SetSpeedSliderFraction>()
{
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, SetSpeedSliderFraction)() {
  return &ur_msgs::srv::typesupport_fastrtps_cpp::_SetSpeedSliderFraction__handle;
}

#ifdef __cplusplus
}
#endif
