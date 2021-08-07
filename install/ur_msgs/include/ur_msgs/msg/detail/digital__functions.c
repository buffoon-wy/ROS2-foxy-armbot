// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/Digital.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/digital__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ur_msgs__msg__Digital__init(ur_msgs__msg__Digital * msg)
{
  if (!msg) {
    return false;
  }
  // pin
  // state
  return true;
}

void
ur_msgs__msg__Digital__fini(ur_msgs__msg__Digital * msg)
{
  if (!msg) {
    return;
  }
  // pin
  // state
}

ur_msgs__msg__Digital *
ur_msgs__msg__Digital__create()
{
  ur_msgs__msg__Digital * msg = (ur_msgs__msg__Digital *)malloc(sizeof(ur_msgs__msg__Digital));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__Digital));
  bool success = ur_msgs__msg__Digital__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__Digital__destroy(ur_msgs__msg__Digital * msg)
{
  if (msg) {
    ur_msgs__msg__Digital__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__msg__Digital__Sequence__init(ur_msgs__msg__Digital__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__msg__Digital * data = NULL;
  if (size) {
    data = (ur_msgs__msg__Digital *)calloc(size, sizeof(ur_msgs__msg__Digital));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__Digital__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__Digital__fini(&data[i - 1]);
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
ur_msgs__msg__Digital__Sequence__fini(ur_msgs__msg__Digital__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__msg__Digital__fini(&array->data[i]);
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

ur_msgs__msg__Digital__Sequence *
ur_msgs__msg__Digital__Sequence__create(size_t size)
{
  ur_msgs__msg__Digital__Sequence * array = (ur_msgs__msg__Digital__Sequence *)malloc(sizeof(ur_msgs__msg__Digital__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__Digital__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__Digital__Sequence__destroy(ur_msgs__msg__Digital__Sequence * array)
{
  if (array) {
    ur_msgs__msg__Digital__Sequence__fini(array);
  }
  free(array);
}
