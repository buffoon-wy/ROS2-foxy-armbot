// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgs:msg/Twis.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/twis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mymsgs__msg__Twis__init(mymsgs__msg__Twis * msg)
{
  if (!msg) {
    return false;
  }
  // time_boot_ms
  // vx
  // vy
  // vz
  // wx
  // wy
  // wz
  return true;
}

void
mymsgs__msg__Twis__fini(mymsgs__msg__Twis * msg)
{
  if (!msg) {
    return;
  }
  // time_boot_ms
  // vx
  // vy
  // vz
  // wx
  // wy
  // wz
}

mymsgs__msg__Twis *
mymsgs__msg__Twis__create()
{
  mymsgs__msg__Twis * msg = (mymsgs__msg__Twis *)malloc(sizeof(mymsgs__msg__Twis));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgs__msg__Twis));
  bool success = mymsgs__msg__Twis__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgs__msg__Twis__destroy(mymsgs__msg__Twis * msg)
{
  if (msg) {
    mymsgs__msg__Twis__fini(msg);
  }
  free(msg);
}


bool
mymsgs__msg__Twis__Sequence__init(mymsgs__msg__Twis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgs__msg__Twis * data = NULL;
  if (size) {
    data = (mymsgs__msg__Twis *)calloc(size, sizeof(mymsgs__msg__Twis));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgs__msg__Twis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgs__msg__Twis__fini(&data[i - 1]);
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
mymsgs__msg__Twis__Sequence__fini(mymsgs__msg__Twis__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgs__msg__Twis__fini(&array->data[i]);
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

mymsgs__msg__Twis__Sequence *
mymsgs__msg__Twis__Sequence__create(size_t size)
{
  mymsgs__msg__Twis__Sequence * array = (mymsgs__msg__Twis__Sequence *)malloc(sizeof(mymsgs__msg__Twis__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgs__msg__Twis__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgs__msg__Twis__Sequence__destroy(mymsgs__msg__Twis__Sequence * array)
{
  if (array) {
    mymsgs__msg__Twis__Sequence__fini(array);
  }
  free(array);
}
