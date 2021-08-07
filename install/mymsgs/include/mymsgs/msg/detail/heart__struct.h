// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__STRUCT_H_
#define MYMSGS__MSG__DETAIL__HEART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Heart in the package mymsgs.
typedef struct mymsgs__msg__Heart
{
  uint32_t error_code;
  uint8_t type;
  uint8_t base_mode;
  uint8_t system_status;
} mymsgs__msg__Heart;

// Struct for a sequence of mymsgs__msg__Heart.
typedef struct mymsgs__msg__Heart__Sequence
{
  mymsgs__msg__Heart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Heart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__HEART__STRUCT_H_
