// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsgs:msg/Heart.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__MSG__DETAIL__HEART__FUNCTIONS_H_
#define MYMSGS__MSG__DETAIL__HEART__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsgs/msg/rosidl_generator_c__visibility_control.h"

#include "mymsgs/msg/detail/heart__struct.h"

/// Initialize msg/Heart message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsgs__msg__Heart
 * )) before or use
 * mymsgs__msg__Heart__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Heart__init(mymsgs__msg__Heart * msg);

/// Finalize msg/Heart message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Heart__fini(mymsgs__msg__Heart * msg);

/// Create msg/Heart message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsgs__msg__Heart__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Heart *
mymsgs__msg__Heart__create();

/// Destroy msg/Heart message.
/**
 * It calls
 * mymsgs__msg__Heart__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Heart__destroy(mymsgs__msg__Heart * msg);


/// Initialize array of msg/Heart messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsgs__msg__Heart__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
bool
mymsgs__msg__Heart__Sequence__init(mymsgs__msg__Heart__Sequence * array, size_t size);

/// Finalize array of msg/Heart messages.
/**
 * It calls
 * mymsgs__msg__Heart__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Heart__Sequence__fini(mymsgs__msg__Heart__Sequence * array);

/// Create array of msg/Heart messages.
/**
 * It allocates the memory for the array and calls
 * mymsgs__msg__Heart__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
mymsgs__msg__Heart__Sequence *
mymsgs__msg__Heart__Sequence__create(size_t size);

/// Destroy array of msg/Heart messages.
/**
 * It calls
 * mymsgs__msg__Heart__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgs
void
mymsgs__msg__Heart__Sequence__destroy(mymsgs__msg__Heart__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MYMSGS__MSG__DETAIL__HEART__FUNCTIONS_H_