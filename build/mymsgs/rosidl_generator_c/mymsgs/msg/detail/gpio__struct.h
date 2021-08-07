// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__GPIO__STRUCT_H_
#define MYMSGS__MSG__DETAIL__GPIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Gpio in the package mymsgs.
typedef struct mymsgs__msg__Gpio
{
  uint32_t time_boot_ms;
  uint32_t output;
  uint32_t input;
} mymsgs__msg__Gpio;

// Struct for a sequence of mymsgs__msg__Gpio.
typedef struct mymsgs__msg__Gpio__Sequence
{
  mymsgs__msg__Gpio * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Gpio__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__GPIO__STRUCT_H_
