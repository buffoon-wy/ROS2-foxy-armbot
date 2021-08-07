// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define MYMSGS__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Control in the package mymsgs.
typedef struct mymsgs__msg__Control
{
  uint16_t gpio;
} mymsgs__msg__Control;

// Struct for a sequence of mymsgs__msg__Control.
typedef struct mymsgs__msg__Control__Sequence
{
  mymsgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__CONTROL__STRUCT_H_
