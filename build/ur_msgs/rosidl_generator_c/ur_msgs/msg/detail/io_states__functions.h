// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__MSG__DETAIL__IO_STATES__FUNCTIONS_H_
#define UR_MSGS__MSG__DETAIL__IO_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ur_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ur_msgs/msg/detail/io_states__struct.h"

/// Initialize msg/IOStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_msgs__msg__IOStates
 * )) before or use
 * ur_msgs__msg__IOStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__msg__IOStates__init(ur_msgs__msg__IOStates * msg);

/// Finalize msg/IOStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__IOStates__fini(ur_msgs__msg__IOStates * msg);

/// Create msg/IOStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_msgs__msg__IOStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__msg__IOStates *
ur_msgs__msg__IOStates__create();

/// Destroy msg/IOStates message.
/**
 * It calls
 * ur_msgs__msg__IOStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__IOStates__destroy(ur_msgs__msg__IOStates * msg);


/// Initialize array of msg/IOStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_msgs__msg__IOStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__msg__IOStates__Sequence__init(ur_msgs__msg__IOStates__Sequence * array, size_t size);

/// Finalize array of msg/IOStates messages.
/**
 * It calls
 * ur_msgs__msg__IOStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__IOStates__Sequence__fini(ur_msgs__msg__IOStates__Sequence * array);

/// Create array of msg/IOStates messages.
/**
 * It allocates the memory for the array and calls
 * ur_msgs__msg__IOStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__msg__IOStates__Sequence *
ur_msgs__msg__IOStates__Sequence__create(size_t size);

/// Destroy array of msg/IOStates messages.
/**
 * It calls
 * ur_msgs__msg__IOStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__IOStates__Sequence__destroy(ur_msgs__msg__IOStates__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__MSG__DETAIL__IO_STATES__FUNCTIONS_H_
