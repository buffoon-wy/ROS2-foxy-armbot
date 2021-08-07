// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_H_
#define MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Attitued in the package mymsgs.
typedef struct mymsgs__msg__Attitued
{
  uint32_t time_boot_ms;
  float roll;
  float pitch;
  float yaw;
  float rollspeed;
  float pitchspeed;
  float yawspeed;
} mymsgs__msg__Attitued;

// Struct for a sequence of mymsgs__msg__Attitued.
typedef struct mymsgs__msg__Attitued__Sequence
{
  mymsgs__msg__Attitued * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Attitued__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__ATTITUED__STRUCT_H_
