// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/io_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `digital_in_states`
// Member `digital_out_states`
// Member `flag_states`
#include "ur_msgs/msg/detail/digital__functions.h"
// Member `analog_in_states`
// Member `analog_out_states`
#include "ur_msgs/msg/detail/analog__functions.h"

bool
ur_msgs__msg__IOStates__init(ur_msgs__msg__IOStates * msg)
{
  if (!msg) {
    return false;
  }
  // digital_in_states
  if (!ur_msgs__msg__Digital__Sequence__init(&msg->digital_in_states, 0)) {
    ur_msgs__msg__IOStates__fini(msg);
    return false;
  }
  // digital_out_states
  if (!ur_msgs__msg__Digital__Sequence__init(&msg->digital_out_states, 0)) {
    ur_msgs__msg__IOStates__fini(msg);
    return false;
  }
  // flag_states
  if (!ur_msgs__msg__Digital__Sequence__init(&msg->flag_states, 0)) {
    ur_msgs__msg__IOStates__fini(msg);
    return false;
  }
  // analog_in_states
  if (!ur_msgs__msg__Analog__Sequence__init(&msg->analog_in_states, 0)) {
    ur_msgs__msg__IOStates__fini(msg);
    return false;
  }
  // analog_out_states
  if (!ur_msgs__msg__Analog__Sequence__init(&msg->analog_out_states, 0)) {
    ur_msgs__msg__IOStates__fini(msg);
    return false;
  }
  return true;
}

void
ur_msgs__msg__IOStates__fini(ur_msgs__msg__IOStates * msg)
{
  if (!msg) {
    return;
  }
  // digital_in_states
  ur_msgs__msg__Digital__Sequence__fini(&msg->digital_in_states);
  // digital_out_states
  ur_msgs__msg__Digital__Sequence__fini(&msg->digital_out_states);
  // flag_states
  ur_msgs__msg__Digital__Sequence__fini(&msg->flag_states);
  // analog_in_states
  ur_msgs__msg__Analog__Sequence__fini(&msg->analog_in_states);
  // analog_out_states
  ur_msgs__msg__Analog__Sequence__fini(&msg->analog_out_states);
}

ur_msgs__msg__IOStates *
ur_msgs__msg__IOStates__create()
{
  ur_msgs__msg__IOStates * msg = (ur_msgs__msg__IOStates *)malloc(sizeof(ur_msgs__msg__IOStates));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__IOStates));
  bool success = ur_msgs__msg__IOStates__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__IOStates__destroy(ur_msgs__msg__IOStates * msg)
{
  if (msg) {
    ur_msgs__msg__IOStates__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__msg__IOStates__Sequence__init(ur_msgs__msg__IOStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__msg__IOStates * data = NULL;
  if (size) {
    data = (ur_msgs__msg__IOStates *)calloc(size, sizeof(ur_msgs__msg__IOStates));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__IOStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__IOStates__fini(&data[i - 1]);
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
ur_msgs__msg__IOStates__Sequence__fini(ur_msgs__msg__IOStates__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__msg__IOStates__fini(&array->data[i]);
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

ur_msgs__msg__IOStates__Sequence *
ur_msgs__msg__IOStates__Sequence__create(size_t size)
{
  ur_msgs__msg__IOStates__Sequence * array = (ur_msgs__msg__IOStates__Sequence *)malloc(sizeof(ur_msgs__msg__IOStates__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__IOStates__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__IOStates__Sequence__destroy(ur_msgs__msg__IOStates__Sequence * array)
{
  if (array) {
    ur_msgs__msg__IOStates__Sequence__fini(array);
  }
  free(array);
}
