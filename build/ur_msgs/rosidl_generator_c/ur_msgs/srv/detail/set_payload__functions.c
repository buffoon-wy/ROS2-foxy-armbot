// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:srv/SetPayload.idl
// generated code does not contain a copyright notice
#include "ur_msgs/srv/detail/set_payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `center_of_gravity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
ur_msgs__srv__SetPayload_Request__init(ur_msgs__srv__SetPayload_Request * msg)
{
  if (!msg) {
    return false;
  }
  // payload
  // center_of_gravity
  if (!geometry_msgs__msg__Vector3__init(&msg->center_of_gravity)) {
    ur_msgs__srv__SetPayload_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_msgs__srv__SetPayload_Request__fini(ur_msgs__srv__SetPayload_Request * msg)
{
  if (!msg) {
    return;
  }
  // payload
  // center_of_gravity
  geometry_msgs__msg__Vector3__fini(&msg->center_of_gravity);
}

ur_msgs__srv__SetPayload_Request *
ur_msgs__srv__SetPayload_Request__create()
{
  ur_msgs__srv__SetPayload_Request * msg = (ur_msgs__srv__SetPayload_Request *)malloc(sizeof(ur_msgs__srv__SetPayload_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__srv__SetPayload_Request));
  bool success = ur_msgs__srv__SetPayload_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__srv__SetPayload_Request__destroy(ur_msgs__srv__SetPayload_Request * msg)
{
  if (msg) {
    ur_msgs__srv__SetPayload_Request__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__srv__SetPayload_Request__Sequence__init(ur_msgs__srv__SetPayload_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__srv__SetPayload_Request * data = NULL;
  if (size) {
    data = (ur_msgs__srv__SetPayload_Request *)calloc(size, sizeof(ur_msgs__srv__SetPayload_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__srv__SetPayload_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__srv__SetPayload_Request__fini(&data[i - 1]);
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
ur_msgs__srv__SetPayload_Request__Sequence__fini(ur_msgs__srv__SetPayload_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__srv__SetPayload_Request__fini(&array->data[i]);
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

ur_msgs__srv__SetPayload_Request__Sequence *
ur_msgs__srv__SetPayload_Request__Sequence__create(size_t size)
{
  ur_msgs__srv__SetPayload_Request__Sequence * array = (ur_msgs__srv__SetPayload_Request__Sequence *)malloc(sizeof(ur_msgs__srv__SetPayload_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__srv__SetPayload_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__srv__SetPayload_Request__Sequence__destroy(ur_msgs__srv__SetPayload_Request__Sequence * array)
{
  if (array) {
    ur_msgs__srv__SetPayload_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ur_msgs__srv__SetPayload_Response__init(ur_msgs__srv__SetPayload_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
ur_msgs__srv__SetPayload_Response__fini(ur_msgs__srv__SetPayload_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

ur_msgs__srv__SetPayload_Response *
ur_msgs__srv__SetPayload_Response__create()
{
  ur_msgs__srv__SetPayload_Response * msg = (ur_msgs__srv__SetPayload_Response *)malloc(sizeof(ur_msgs__srv__SetPayload_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__srv__SetPayload_Response));
  bool success = ur_msgs__srv__SetPayload_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__srv__SetPayload_Response__destroy(ur_msgs__srv__SetPayload_Response * msg)
{
  if (msg) {
    ur_msgs__srv__SetPayload_Response__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__srv__SetPayload_Response__Sequence__init(ur_msgs__srv__SetPayload_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__srv__SetPayload_Response * data = NULL;
  if (size) {
    data = (ur_msgs__srv__SetPayload_Response *)calloc(size, sizeof(ur_msgs__srv__SetPayload_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__srv__SetPayload_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__srv__SetPayload_Response__fini(&data[i - 1]);
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
ur_msgs__srv__SetPayload_Response__Sequence__fini(ur_msgs__srv__SetPayload_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__srv__SetPayload_Response__fini(&array->data[i]);
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

ur_msgs__srv__SetPayload_Response__Sequence *
ur_msgs__srv__SetPayload_Response__Sequence__create(size_t size)
{
  ur_msgs__srv__SetPayload_Response__Sequence * array = (ur_msgs__srv__SetPayload_Response__Sequence *)malloc(sizeof(ur_msgs__srv__SetPayload_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__srv__SetPayload_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__srv__SetPayload_Response__Sequence__destroy(ur_msgs__srv__SetPayload_Response__Sequence * array)
{
  if (array) {
    ur_msgs__srv__SetPayload_Response__Sequence__fini(array);
  }
  free(array);
}
