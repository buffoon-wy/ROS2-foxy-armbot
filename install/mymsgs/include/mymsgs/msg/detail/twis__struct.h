// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Twis.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__TWIS__STRUCT_H_
#define MYMSGS__MSG__DETAIL__TWIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Twis in the package mymsgs.
typedef struct mymsgs__msg__Twis
{
  uint32_t time_boot_ms;
  double vx;
  double vy;
  double vz;
  double wx;
  double wy;
  double wz;
} mymsgs__msg__Twis;

// Struct for a sequence of mymsgs__msg__Twis.
typedef struct mymsgs__msg__Twis__Sequence
{
  mymsgs__msg__Twis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Twis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__TWIS__STRUCT_H_
