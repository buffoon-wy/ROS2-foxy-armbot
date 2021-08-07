// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__PACKET_MSG__STRUCT_H_
#define MYMSGS__MSG__DETAIL__PACKET_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'buf'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/PacketMsg in the package mymsgs.
typedef struct mymsgs__msg__PacketMsg
{
  rosidl_runtime_c__uint8__Sequence buf;
} mymsgs__msg__PacketMsg;

// Struct for a sequence of mymsgs__msg__PacketMsg.
typedef struct mymsgs__msg__PacketMsg__Sequence
{
  mymsgs__msg__PacketMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__PacketMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__PACKET_MSG__STRUCT_H_
