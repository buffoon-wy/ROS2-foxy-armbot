// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsgs:msg/Version.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_
#define MYMSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsgs/msg/rosidl_generator_c__visibility_control.h"

#include "mymsgs/msg/detail/version__struct.h"

/// Initialize msg/Version message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsgs__msg__Version
 * )) before or use
 * mymsgs__msg__Version__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Version__init(mymsgs__msg__Version * msg);

/// Finalize msg/Version message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Version__fini(mymsgs__msg__Version * msg);

/// Create msg/Version message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsgs__msg__Version__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Version *
mymsgs__msg__Version__create();

/// Destroy msg/Version message.
/**
 * It calls
 * mymsgs__msg__Version__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Version__destroy(mymsgs__msg__Version * msg);


/// Initialize array of msg/Version messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsgs__msg__Version__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Version__Sequence__init(mymsgs__msg__Version__Sequence * array, size_t size);

/// Finalize array of msg/Version messages.
/**
 * It calls
 * mymsgs__msg__Version__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Version__Sequence__fini(mymsgs__msg__Version__Sequence * array);

/// Create array of msg/Version messages.
/**
 * It allocates the memory for the array and calls
 * mymsgs__msg__Version__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Version__Sequence *
mymsgs__msg__Version__Sequence__create(size_t size);

/// Destroy array of msg/Version messages.
/**
 * It calls
 * mymsgs__msg__Version__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Version__Sequence__destroy(mymsgs__msg__Version__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_