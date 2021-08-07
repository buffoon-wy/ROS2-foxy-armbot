// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__VERSION__STRUCT_H_
#define MYMSGS__MSG__DETAIL__VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Version in the package mymsgs.
typedef struct mymsgs__msg__Version
{
  uint32_t hardware_ver;
  uint32_t software_ver;
  uint32_t uiud;
} mymsgs__msg__Version;

// Struct for a sequence of mymsgs__msg__Version.
typedef struct mymsgs__msg__Version__Sequence
{
  mymsgs__msg__Version * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Version__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__VERSION__STRUCT_H_
