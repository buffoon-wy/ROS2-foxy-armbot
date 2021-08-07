// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/MasterboardDataMsg.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/masterboard_data_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ur_msgs__msg__MasterboardDataMsg__init(ur_msgs__msg__MasterboardDataMsg * msg)
{
  if (!msg) {
    return false;
  }
  // digital_input_bits
  // digital_output_bits
  // analog_input_range0
  // analog_input_range1
  // analog_input0
  // analog_input1
  // analog_output_domain0
  // analog_output_domain1
  // analog_output0
  // analog_output1
  // masterboard_temperature
  // robot_current
  // master_io_current
  // master_safety_state
  // master_onoff_state
  return true;
}

void
ur_msgs__msg__MasterboardDataMsg__fini(ur_msgs__msg__MasterboardDataMsg * msg)
{
  if (!msg) {
    return;
  }
  // digital_input_bits
  // digital_output_bits
  // analog_input_range0
  // analog_input_range1
  // analog_input0
  // analog_input1
  // analog_output_domain0
  // analog_output_domain1
  // analog_output0
  // analog_output1
  // masterboard_temperature
  // robot_current
  // master_io_current
  // master_safety_state
  // master_onoff_state
}

ur_msgs__msg__MasterboardDataMsg *
ur_msgs__msg__MasterboardDataMsg__create()
{
  ur_msgs__msg__MasterboardDataMsg * msg = (ur_msgs__msg__MasterboardDataMsg *)malloc(sizeof(ur_msgs__msg__MasterboardDataMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__MasterboardDataMsg));
  bool success = ur_msgs__msg__MasterboardDataMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__MasterboardDataMsg__destroy(ur_msgs__msg__MasterboardDataMsg * msg)
{
  if (msg) {
    ur_msgs__msg__MasterboardDataMsg__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__msg__MasterboardDataMsg__Sequence__init(ur_msgs__msg__MasterboardDataMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__msg__MasterboardDataMsg * data = NULL;
  if (size) {
    data = (ur_msgs__msg__MasterboardDataMsg *)calloc(size, sizeof(ur_msgs__msg__MasterboardDataMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__MasterboardDataMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__MasterboardDataMsg__fini(&data[i - 1]);
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
ur_msgs__msg__MasterboardDataMsg__Sequence__fini(ur_msgs__msg__MasterboardDataMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__msg__MasterboardDataMsg__fini(&array->data[i]);
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

ur_msgs__msg__MasterboardDataMsg__Sequence *
ur_msgs__msg__MasterboardDataMsg__Sequence__create(size_t size)
{
  ur_msgs__msg__MasterboardDataMsg__Sequence * array = (ur_msgs__msg__MasterboardDataMsg__Sequence *)malloc(sizeof(ur_msgs__msg__MasterboardDataMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__MasterboardDataMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__MasterboardDataMsg__Sequence__destroy(ur_msgs__msg__MasterboardDataMsg__Sequence * array)
{
  if (array) {
    ur_msgs__msg__MasterboardDataMsg__Sequence__fini(array);
  }
  free(array);
}
