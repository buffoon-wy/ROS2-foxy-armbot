// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice
#include "mymsgs/srv/detail/os_config_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
mymsgs__srv__OSConfigSrv_Request__init(mymsgs__srv__OSConfigSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mymsgs__srv__OSConfigSrv_Request__fini(mymsgs__srv__OSConfigSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

mymsgs__srv__OSConfigSrv_Request *
mymsgs__srv__OSConfigSrv_Request__create()
{
  mymsgs__srv__OSConfigSrv_Request * msg = (mymsgs__srv__OSConfigSrv_Request *)malloc(sizeof(mymsgs__srv__OSConfigSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgs__srv__OSConfigSrv_Request));
  bool success = mymsgs__srv__OSConfigSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgs__srv__OSConfigSrv_Request__destroy(mymsgs__srv__OSConfigSrv_Request * msg)
{
  if (msg) {
    mymsgs__srv__OSConfigSrv_Request__fini(msg);
  }
  free(msg);
}


bool
mymsgs__srv__OSConfigSrv_Request__Sequence__init(mymsgs__srv__OSConfigSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgs__srv__OSConfigSrv_Request * data = NULL;
  if (size) {
    data = (mymsgs__srv__OSConfigSrv_Request *)calloc(size, sizeof(mymsgs__srv__OSConfigSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgs__srv__OSConfigSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgs__srv__OSConfigSrv_Request__fini(&data[i - 1]);
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
mymsgs__srv__OSConfigSrv_Request__Sequence__fini(mymsgs__srv__OSConfigSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgs__srv__OSConfigSrv_Request__fini(&array->data[i]);
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

mymsgs__srv__OSConfigSrv_Request__Sequence *
mymsgs__srv__OSConfigSrv_Request__Sequence__create(size_t size)
{
  mymsgs__srv__OSConfigSrv_Request__Sequence * array = (mymsgs__srv__OSConfigSrv_Request__Sequence *)malloc(sizeof(mymsgs__srv__OSConfigSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgs__srv__OSConfigSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgs__srv__OSConfigSrv_Request__Sequence__destroy(mymsgs__srv__OSConfigSrv_Request__Sequence * array)
{
  if (array) {
    mymsgs__srv__OSConfigSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `metadata`
#include "rosidl_runtime_c/string_functions.h"

bool
mymsgs__srv__OSConfigSrv_Response__init(mymsgs__srv__OSConfigSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // metadata
  if (!rosidl_runtime_c__String__init(&msg->metadata)) {
    mymsgs__srv__OSConfigSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
mymsgs__srv__OSConfigSrv_Response__fini(mymsgs__srv__OSConfigSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // metadata
  rosidl_runtime_c__String__fini(&msg->metadata);
}

mymsgs__srv__OSConfigSrv_Response *
mymsgs__srv__OSConfigSrv_Response__create()
{
  mymsgs__srv__OSConfigSrv_Response * msg = (mymsgs__srv__OSConfigSrv_Response *)malloc(sizeof(mymsgs__srv__OSConfigSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgs__srv__OSConfigSrv_Response));
  bool success = mymsgs__srv__OSConfigSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgs__srv__OSConfigSrv_Response__destroy(mymsgs__srv__OSConfigSrv_Response * msg)
{
  if (msg) {
    mymsgs__srv__OSConfigSrv_Response__fini(msg);
  }
  free(msg);
}


bool
mymsgs__srv__OSConfigSrv_Response__Sequence__init(mymsgs__srv__OSConfigSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgs__srv__OSConfigSrv_Response * data = NULL;
  if (size) {
    data = (mymsgs__srv__OSConfigSrv_Response *)calloc(size, sizeof(mymsgs__srv__OSConfigSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgs__srv__OSConfigSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgs__srv__OSConfigSrv_Response__fini(&data[i - 1]);
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
mymsgs__srv__OSConfigSrv_Response__Sequence__fini(mymsgs__srv__OSConfigSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgs__srv__OSConfigSrv_Response__fini(&array->data[i]);
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

mymsgs__srv__OSConfigSrv_Response__Sequence *
mymsgs__srv__OSConfigSrv_Response__Sequence__create(size_t size)
{
  mymsgs__srv__OSConfigSrv_Response__Sequence * array = (mymsgs__srv__OSConfigSrv_Response__Sequence *)malloc(sizeof(mymsgs__srv__OSConfigSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgs__srv__OSConfigSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgs__srv__OSConfigSrv_Response__Sequence__destroy(mymsgs__srv__OSConfigSrv_Response__Sequence * array)
{
  if (array) {
    mymsgs__srv__OSConfigSrv_Response__Sequence__fini(array);
  }
  free(array);
}
