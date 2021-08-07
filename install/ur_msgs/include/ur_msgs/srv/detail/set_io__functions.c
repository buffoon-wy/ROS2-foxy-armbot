// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice
#include "ur_msgs/srv/detail/set_io__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ur_msgs__srv__SetIO_Request__init(ur_msgs__srv__SetIO_Request * msg)
{
  if (!msg) {
    return false;
  }
  // fun
  // pin
  // state
  return true;
}

void
ur_msgs__srv__SetIO_Request__fini(ur_msgs__srv__SetIO_Request * msg)
{
  if (!msg) {
    return;
  }
  // fun
  // pin
  // state
}

ur_msgs__srv__SetIO_Request *
ur_msgs__srv__SetIO_Request__create()
{
  ur_msgs__srv__SetIO_Request * msg = (ur_msgs__srv__SetIO_Request *)malloc(sizeof(ur_msgs__srv__SetIO_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__srv__SetIO_Request));
  bool success = ur_msgs__srv__SetIO_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__srv__SetIO_Request__destroy(ur_msgs__srv__SetIO_Request * msg)
{
  if (msg) {
    ur_msgs__srv__SetIO_Request__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__srv__SetIO_Request__Sequence__init(ur_msgs__srv__SetIO_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__srv__SetIO_Request * data = NULL;
  if (size) {
    data = (ur_msgs__srv__SetIO_Request *)calloc(size, sizeof(ur_msgs__srv__SetIO_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__srv__SetIO_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__srv__SetIO_Request__fini(&data[i - 1]);
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
ur_msgs__srv__SetIO_Request__Sequence__fini(ur_msgs__srv__SetIO_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__srv__SetIO_Request__fini(&array->data[i]);
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

ur_msgs__srv__SetIO_Request__Sequence *
ur_msgs__srv__SetIO_Request__Sequence__create(size_t size)
{
  ur_msgs__srv__SetIO_Request__Sequence * array = (ur_msgs__srv__SetIO_Request__Sequence *)malloc(sizeof(ur_msgs__srv__SetIO_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__srv__SetIO_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__srv__SetIO_Request__Sequence__destroy(ur_msgs__srv__SetIO_Request__Sequence * array)
{
  if (array) {
    ur_msgs__srv__SetIO_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ur_msgs__srv__SetIO_Response__init(ur_msgs__srv__SetIO_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
ur_msgs__srv__SetIO_Response__fini(ur_msgs__srv__SetIO_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

ur_msgs__srv__SetIO_Response *
ur_msgs__srv__SetIO_Response__create()
{
  ur_msgs__srv__SetIO_Response * msg = (ur_msgs__srv__SetIO_Response *)malloc(sizeof(ur_msgs__srv__SetIO_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__srv__SetIO_Response));
  bool success = ur_msgs__srv__SetIO_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__srv__SetIO_Response__destroy(ur_msgs__srv__SetIO_Response * msg)
{
  if (msg) {
    ur_msgs__srv__SetIO_Response__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__srv__SetIO_Response__Sequence__init(ur_msgs__srv__SetIO_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__srv__SetIO_Response * data = NULL;
  if (size) {
    data = (ur_msgs__srv__SetIO_Response *)calloc(size, sizeof(ur_msgs__srv__SetIO_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__srv__SetIO_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__srv__SetIO_Response__fini(&data[i - 1]);
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
ur_msgs__srv__SetIO_Response__Sequence__fini(ur_msgs__srv__SetIO_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__srv__SetIO_Response__fini(&array->data[i]);
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

ur_msgs__srv__SetIO_Response__Sequence *
ur_msgs__srv__SetIO_Response__Sequence__create(size_t size)
{
  ur_msgs__srv__SetIO_Response__Sequence * array = (ur_msgs__srv__SetIO_Response__Sequence *)malloc(sizeof(ur_msgs__srv__SetIO_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__srv__SetIO_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__srv__SetIO_Response__Sequence__destroy(ur_msgs__srv__SetIO_Response__Sequence * array)
{
  if (array) {
    ur_msgs__srv__SetIO_Response__Sequence__fini(array);
  }
  free(array);
}
