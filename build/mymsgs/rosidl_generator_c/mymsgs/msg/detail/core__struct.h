// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CORE__STRUCT_H_
#define MYMSGS__MSG__DETAIL__CORE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Core in the package mymsgs.
typedef struct mymsgs__msg__Core
{
  uint32_t time_boot_ms;
  uint32_t onboard_control_sensors_health;
  uint16_t load;
  uint16_t voltage_battery;
  int16_t current_battery;
  int8_t battery_remaining;
} mymsgs__msg__Core;

// Struct for a sequence of mymsgs__msg__Core.
typedef struct mymsgs__msg__Core__Sequence
{
  mymsgs__msg__Core * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgs__msg__Core__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__CORE__STRUCT_H_
