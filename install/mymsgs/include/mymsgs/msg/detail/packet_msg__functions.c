// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice
#include "mymsgs/msg/detail/packet_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `buf`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mymsgs__msg__PacketMsg__init(mymsgs__msg__PacketMsg * msg)
{
  if (!msg) {
    return false;
  }
  // buf
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->buf, 0)) {
    mymsgs__msg__PacketMsg__fini(msg);
    return false;
  }
  return true;
}

void
mymsgs__msg__PacketMsg__fini(mymsgs__msg__PacketMsg * msg)
{
  if (!msg) {
    return;
  }
  // buf
  rosidl_runtime_c__uint8__Sequence__fini(&msg->buf);
}

mymsgs__msg__PacketMsg *
mymsgs__msg__PacketMsg__create()
{
  mymsgs__msg__PacketMsg * msg = (mymsgs__msg__PacketMsg *)malloc(sizeof(mymsgs__msg__PacketMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgs__msg__PacketMsg));
  bool success = mymsgs__msg__PacketMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgs__msg__PacketMsg__destroy(mymsgs__msg__PacketMsg * msg)
{
  if (msg) {
    mymsgs__msg__PacketMsg__fini(msg);
  }
  free(msg);
}


bool
mymsgs__msg__PacketMsg__Sequence__init(mymsgs__msg__PacketMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgs__msg__PacketMsg * data = NULL;
  if (size) {
    data = (mymsgs__msg__PacketMsg *)calloc(size, sizeof(mymsgs__msg__PacketMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgs__msg__PacketMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgs__msg__PacketMsg__fini(&data[i - 1]);
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
mymsgs__msg__PacketMsg__Sequence__fini(mymsgs__msg__PacketMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgs__msg__PacketMsg__fini(&array->data[i]);
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

mymsgs__msg__PacketMsg__Sequence *
mymsgs__msg__PacketMsg__Sequence__create(size_t size)
{
  mymsgs__msg__PacketMsg__Sequence * array = (mymsgs__msg__PacketMsg__Sequence *)malloc(sizeof(mymsgs__msg__PacketMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgs__msg__PacketMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgs__msg__PacketMsg__Sequence__destroy(mymsgs__msg__PacketMsg__Sequence * array)
{
  if (array) {
    mymsgs__msg__PacketMsg__Sequence__fini(array);
  }
  free(array);
}
