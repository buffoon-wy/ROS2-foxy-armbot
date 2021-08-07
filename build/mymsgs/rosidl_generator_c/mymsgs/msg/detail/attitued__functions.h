// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsgs:msg/Attitued.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__ATTITUED__FUNCTIONS_H_
#define MYMSGS__MSG__DETAIL__ATTITUED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsgs/msg/rosidl_generator_c__visibility_control.h"

#include "mymsgs/msg/detail/attitued__struct.h"

/// Initialize msg/Attitued message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsgs__msg__Attitued
 * )) before or use
 * mymsgs__msg__Attitued__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Attitued__init(mymsgs__msg__Attitued * msg);

/// Finalize msg/Attitued message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Attitued__fini(mymsgs__msg__Attitued * msg);

/// Create msg/Attitued message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsgs__msg__Attitued__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Attitued *
mymsgs__msg__Attitued__create();

/// Destroy msg/Attitued message.
/**
 * It calls
 * mymsgs__msg__Attitued__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Attitued__destroy(mymsgs__msg__Attitued * msg);


/// Initialize array of msg/Attitued messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsgs__msg__Attitued__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Attitued__Sequence__init(mymsgs__msg__Attitued__Sequence * array, size_t size);

/// Finalize array of msg/Attitued messages.
/**
 * It calls
 * mymsgs__msg__Attitued__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Attitued__Sequence__fini(mymsgs__msg__Attitued__Sequence * array);

/// Create array of msg/Attitued messages.
/**
 * It allocates the memory for the array and calls
 * mymsgs__msg__Attitued__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Attitued__Sequence *
mymsgs__msg__Attitued__Sequence__create(size_t size);

/// Destroy array of msg/Attitued messages.
/**
 * It calls
 * mymsgs__msg__Attitued__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Attitued__Sequence__destroy(mymsgs__msg__Attitued__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__ATTITUED__FUNCTIONS_H_
