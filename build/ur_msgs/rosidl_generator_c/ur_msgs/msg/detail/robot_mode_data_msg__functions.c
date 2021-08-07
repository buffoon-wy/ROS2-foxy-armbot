// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/RobotModeDataMsg.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/robot_mode_data_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ur_msgs__msg__RobotModeDataMsg__init(ur_msgs__msg__RobotModeDataMsg * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // is_robot_connected
  // is_real_robot_enabled
  // is_power_on_robot
  // is_emergency_stopped
  // is_protective_stopped
  // is_program_running
  // is_program_paused
  return true;
}

void
ur_msgs__msg__RobotModeDataMsg__fini(ur_msgs__msg__RobotModeDataMsg * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // is_robot_connected
  // is_real_robot_enabled
  // is_power_on_robot
  // is_emergency_stopped
  // is_protective_stopped
  // is_program_running
  // is_program_paused
}

ur_msgs__msg__RobotModeDataMsg *
ur_msgs__msg__RobotModeDataMsg__create()
{
  ur_msgs__msg__RobotModeDataMsg * msg = (ur_msgs__msg__RobotModeDataMsg *)malloc(sizeof(ur_msgs__msg__RobotModeDataMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__RobotModeDataMsg));
  bool success = ur_msgs__msg__RobotModeDataMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__RobotModeDataMsg__destroy(ur_msgs__msg__RobotModeDataMsg * msg)
{
  if (msg) {
    ur_msgs__msg__RobotModeDataMsg__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__msg__RobotModeDataMsg__Sequence__init(ur_msgs__msg__RobotModeDataMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__msg__RobotModeDataMsg * data = NULL;
  if (size) {
    data = (ur_msgs__msg__RobotModeDataMsg *)calloc(size, sizeof(ur_msgs__msg__RobotModeDataMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__RobotModeDataMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__RobotModeDataMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_msgs__msg__RobotModeDataMsg__Sequence__fini(ur_msgs__msg__RobotModeDataMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__msg__RobotModeDataMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_msgs__msg__RobotModeDataMsg__Sequence *
ur_msgs__msg__RobotModeDataMsg__Sequence__create(size_t size)
{
  ur_msgs__msg__RobotModeDataMsg__Sequence * array = (ur_msgs__msg__RobotModeDataMsg__Sequence *)malloc(sizeof(ur_msgs__msg__RobotModeDataMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__RobotModeDataMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__RobotModeDataMsg__Sequence__destroy(ur_msgs__msg__RobotModeDataMsg__Sequence * array)
{
  if (array) {
    ur_msgs__msg__RobotModeDataMsg__Sequence__fini(array);
  }
  free(array);
}
