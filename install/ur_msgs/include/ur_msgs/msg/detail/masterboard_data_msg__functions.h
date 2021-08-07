// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur_msgs:msg/MasterboardDataMsg.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__MSG__DETAIL__MASTERBOARD_DATA_MSG__FUNCTIONS_H_
#define UR_MSGS__MSG__DETAIL__MASTERBOARD_DATA_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ur_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ur_msgs/msg/detail/masterboard_data_msg__struct.h"

/// Initialize msg/MasterboardDataMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_msgs__msg__MasterboardDataMsg
 * )) before or use
 * ur_msgs__msg__MasterboardDataMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__msg__MasterboardDataMsg__init(ur_msgs__msg__MasterboardDataMsg * msg);

/// Finalize msg/MasterboardDataMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__MasterboardDataMsg__fini(ur_msgs__msg__MasterboardDataMsg * msg);

/// Create msg/MasterboardDataMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_msgs__msg__MasterboardDataMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__msg__MasterboardDataMsg *
ur_msgs__msg__MasterboardDataMsg__create();

/// Destroy msg/MasterboardDataMsg message.
/**
 * It calls
 * ur_msgs__msg__MasterboardDataMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__MasterboardDataMsg__destroy(ur_msgs__msg__MasterboardDataMsg * msg);


/// Initialize array of msg/MasterboardDataMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_msgs__msg__MasterboardDataMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__msg__MasterboardDataMsg__Sequence__init(ur_msgs__msg__MasterboardDataMsg__Sequence * array, size_t size);

/// Finalize array of msg/MasterboardDataMsg messages.
/**
 * It calls
 * ur_msgs__msg__MasterboardDataMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__MasterboardDataMsg__Sequence__fini(ur_msgs__msg__MasterboardDataMsg__Sequence * array);

/// Create array of msg/MasterboardDataMsg messages.
/**
 * It allocates the memory for the array and calls
 * ur_msgs__msg__MasterboardDataMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__msg__MasterboardDataMsg__Sequence *
ur_msgs__msg__MasterboardDataMsg__Sequence__create(size_t size);

/// Destroy array of msg/MasterboardDataMsg messages.
/**
 * It calls
 * ur_msgs__msg__MasterboardDataMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__msg__MasterboardDataMsg__Sequence__destroy(ur_msgs__msg__MasterboardDataMsg__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__MSG__DETAIL__MASTERBOARD_DATA_MSG__FUNCTIONS_H_
