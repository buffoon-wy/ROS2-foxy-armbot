// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__IMU__STRUCT_H_
#define MYMSGS__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Imu in the package mymsgs.
typedef struct mymsgs__msg__Imu
{
  uint32_t time_boot_ms;
  int16_t xacc;
  int16_t yacc;
  int16_t zacc;
  int16_t xgyro;
  int16_t ygyro;
  int16_t zgyro;
  int16_t xmag;
  int16_t ymag;
  int16_t zmag;
} mymsgs__msg__Imu;

// Struct for a sequence of mymsgs__msg__Imu.
typedef struct mymsgs__msg__Imu__Sequence
{
  mymsgs__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__IMU__STRUCT_H_
