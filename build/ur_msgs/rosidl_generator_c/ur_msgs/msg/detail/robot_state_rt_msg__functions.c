// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/RobotStateRTMsg.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/robot_state_rt_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `q_target`
// Member `qd_target`
// Member `qdd_target`
// Member `i_target`
// Member `m_target`
// Member `q_actual`
// Member `qd_actual`
// Member `i_actual`
// Member `tool_acc_values`
// Member `tcp_force`
// Member `tool_vector`
// Member `tcp_speed`
// Member `motor_temperatures`
// Member `joint_modes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ur_msgs__msg__RobotStateRTMsg__init(ur_msgs__msg__RobotStateRTMsg * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // q_target
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_target, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // qd_target
  if (!rosidl_runtime_c__double__Sequence__init(&msg->qd_target, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // qdd_target
  if (!rosidl_runtime_c__double__Sequence__init(&msg->qdd_target, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // i_target
  if (!rosidl_runtime_c__double__Sequence__init(&msg->i_target, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // m_target
  if (!rosidl_runtime_c__double__Sequence__init(&msg->m_target, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // q_actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_actual, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // qd_actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->qd_actual, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // i_actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->i_actual, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // tool_acc_values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tool_acc_values, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // tcp_force
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tcp_force, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // tool_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tool_vector, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // tcp_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tcp_speed, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // digital_input_bits
  // motor_temperatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->motor_temperatures, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  // controller_timer
  // test_value
  // robot_mode
  // joint_modes
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_modes, 0)) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
    return false;
  }
  return true;
}

void
ur_msgs__msg__RobotStateRTMsg__fini(ur_msgs__msg__RobotStateRTMsg * msg)
{
  if (!msg) {
    return;
  }
  // time
  // q_target
  rosidl_runtime_c__double__Sequence__fini(&msg->q_target);
  // qd_target
  rosidl_runtime_c__double__Sequence__fini(&msg->qd_target);
  // qdd_target
  rosidl_runtime_c__double__Sequence__fini(&msg->qdd_target);
  // i_target
  rosidl_runtime_c__double__Sequence__fini(&msg->i_target);
  // m_target
  rosidl_runtime_c__double__Sequence__fini(&msg->m_target);
  // q_actual
  rosidl_runtime_c__double__Sequence__fini(&msg->q_actual);
  // qd_actual
  rosidl_runtime_c__double__Sequence__fini(&msg->qd_actual);
  // i_actual
  rosidl_runtime_c__double__Sequence__fini(&msg->i_actual);
  // tool_acc_values
  rosidl_runtime_c__double__Sequence__fini(&msg->tool_acc_values);
  // tcp_force
  rosidl_runtime_c__double__Sequence__fini(&msg->tcp_force);
  // tool_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->tool_vector);
  // tcp_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->tcp_speed);
  // digital_input_bits
  // motor_temperatures
  rosidl_runtime_c__double__Sequence__fini(&msg->motor_temperatures);
  // controller_timer
  // test_value
  // robot_mode
  // joint_modes
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_modes);
}

ur_msgs__msg__RobotStateRTMsg *
ur_msgs__msg__RobotStateRTMsg__create()
{
  ur_msgs__msg__RobotStateRTMsg * msg = (ur_msgs__msg__RobotStateRTMsg *)malloc(sizeof(ur_msgs__msg__RobotStateRTMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__RobotStateRTMsg));
  bool success = ur_msgs__msg__RobotStateRTMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__RobotStateRTMsg__destroy(ur_msgs__msg__RobotStateRTMsg * msg)
{
  if (msg) {
    ur_msgs__msg__RobotStateRTMsg__fini(msg);
  }
  free(msg);
}


bool
ur_msgs__msg__RobotStateRTMsg__Sequence__init(ur_msgs__msg__RobotStateRTMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_msgs__msg__RobotStateRTMsg * data = NULL;
  if (size) {
    data = (ur_msgs__msg__RobotStateRTMsg *)calloc(size, sizeof(ur_msgs__msg__RobotStateRTMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__RobotStateRTMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__RobotStateRTMsg__fini(&data[i - 1]);
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
ur_msgs__msg__RobotStateRTMsg__Sequence__fini(ur_msgs__msg__RobotStateRTMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_msgs__msg__RobotStateRTMsg__fini(&array->data[i]);
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

ur_msgs__msg__RobotStateRTMsg__Sequence *
ur_msgs__msg__RobotStateRTMsg__Sequence__create(size_t size)
{
  ur_msgs__msg__RobotStateRTMsg__Sequence * array = (ur_msgs__msg__RobotStateRTMsg__Sequence *)malloc(sizeof(ur_msgs__msg__RobotStateRTMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__RobotStateRTMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__RobotStateRTMsg__Sequence__destroy(ur_msgs__msg__RobotStateRTMsg__Sequence * array)
{
  if (array) {
    ur_msgs__msg__RobotStateRTMsg__Sequence__fini(array);
  }
  free(array);
}
