// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgs:msg/Core.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/core__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mymsgs__msg__Core__init(mymsgs__msg__Core * msg)
{
  if (!msg) {
    return false;
  }
  // time_boot_ms
  // onboard_control_sensors_health
  // load
  // voltage_battery
  // current_battery
  // battery_remaining
  return true;
}

void
mymsgs__msg__Core__fini(mymsgs__msg__Core * msg)
{
  if (!msg) {
    return;
  }
  // time_boot_ms
  // onboard_control_sensors_health
  // load
  // voltage_battery
  // current_battery
  // battery_remaining
}

mymsgs__msg__Core *
mymsgs__msg__Core__create()
{
  mymsgs__msg__Core * msg = (mymsgs__msg__Core *)malloc(sizeof(mymsgs__msg__Core));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgs__msg__Core));
  bool success = mymsgs__msg__Core__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgs__msg__Core__destroy(mymsgs__msg__Core * msg)
{
  if (msg) {
    mymsgs__msg__Core__fini(msg);
  }
  free(msg);
}


bool
mymsgs__msg__Core__Sequence__init(mymsgs__msg__Core__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgs__msg__Core * data = NULL;
  if (size) {
    data = (mymsgs__msg__Core *)calloc(size, sizeof(mymsgs__msg__Core));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgs__msg__Core__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgs__msg__Core__fini(&data[i - 1]);
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
mymsgs__msg__Core__Sequence__fini(mymsgs__msg__Core__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgs__msg__Core__fini(&array->data[i]);
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

mymsgs__msg__Core__Sequence *
mymsgs__msg__Core__Sequence__create(size_t size)
{
  mymsgs__msg__Core__Sequence * array = (mymsgs__msg__Core__Sequence *)malloc(sizeof(mymsgs__msg__Core__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgs__msg__Core__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgs__msg__Core__Sequence__destroy(mymsgs__msg__Core__Sequence * array)
{
  if (array) {
    mymsgs__msg__Core__Sequence__fini(array);
  }
  free(array);
}