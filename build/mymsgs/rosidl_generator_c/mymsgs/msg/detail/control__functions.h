// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__CONTROL__FUNCTIONS_H_
#define MYMSGS__MSG__DETAIL__CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsgs/msg/rosidl_generator_c__visibility_control.h"

#include "mymsgs/msg/detail/control__struct.h"

/// Initialize msg/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsgs__msg__Control
 * )) before or use
 * mymsgs__msg__Control__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Control__init(mymsgs__msg__Control * msg);

/// Finalize msg/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Control__fini(mymsgs__msg__Control * msg);

/// Create msg/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsgs__msg__Control__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Control *
mymsgs__msg__Control__create();

/// Destroy msg/Control message.
/**
 * It calls
 * mymsgs__msg__Control__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Control__destroy(mymsgs__msg__Control * msg);


/// Initialize array of msg/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsgs__msg__Control__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Control__Sequence__init(mymsgs__msg__Control__Sequence * array, size_t size);

/// Finalize array of msg/Control messages.
/**
 * It calls
 * mymsgs__msg__Control__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Control__Sequence__fini(mymsgs__msg__Control__Sequence * array);

/// Create array of msg/Control messages.
/**
 * It allocates the memory for the array and calls
 * mymsgs__msg__Control__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Control__Sequence *
mymsgs__msg__Control__Sequence__create(size_t size);

/// Destroy array of msg/Control messages.
/**
 * It calls
 * mymsgs__msg__Control__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Control__Sequence__destroy(mymsgs__msg__Control__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__CONTROL__FUNCTIONS_H_
