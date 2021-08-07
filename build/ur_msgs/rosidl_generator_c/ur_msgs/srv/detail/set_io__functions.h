// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__SRV__DETAIL__SET_IO__FUNCTIONS_H_
#define UR_MSGS__SRV__DETAIL__SET_IO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ur_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ur_msgs/srv/detail/set_io__struct.h"

/// Initialize srv/SetIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_msgs__srv__SetIO_Request
 * )) before or use
 * ur_msgs__srv__SetIO_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__srv__SetIO_Request__init(ur_msgs__srv__SetIO_Request * msg);

/// Finalize srv/SetIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Request__fini(ur_msgs__srv__SetIO_Request * msg);

/// Create srv/SetIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_msgs__srv__SetIO_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__srv__SetIO_Request *
ur_msgs__srv__SetIO_Request__create();

/// Destroy srv/SetIO message.
/**
 * It calls
 * ur_msgs__srv__SetIO_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Request__destroy(ur_msgs__srv__SetIO_Request * msg);


/// Initialize array of srv/SetIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_msgs__srv__SetIO_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__srv__SetIO_Request__Sequence__init(ur_msgs__srv__SetIO_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetIO messages.
/**
 * It calls
 * ur_msgs__srv__SetIO_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Request__Sequence__fini(ur_msgs__srv__SetIO_Request__Sequence * array);

/// Create array of srv/SetIO messages.
/**
 * It allocates the memory for the array and calls
 * ur_msgs__srv__SetIO_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__srv__SetIO_Request__Sequence *
ur_msgs__srv__SetIO_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetIO messages.
/**
 * It calls
 * ur_msgs__srv__SetIO_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Request__Sequence__destroy(ur_msgs__srv__SetIO_Request__Sequence * array);

/// Initialize srv/SetIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_msgs__srv__SetIO_Response
 * )) before or use
 * ur_msgs__srv__SetIO_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__srv__SetIO_Response__init(ur_msgs__srv__SetIO_Response * msg);

/// Finalize srv/SetIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Response__fini(ur_msgs__srv__SetIO_Response * msg);

/// Create srv/SetIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_msgs__srv__SetIO_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__srv__SetIO_Response *
ur_msgs__srv__SetIO_Response__create();

/// Destroy srv/SetIO message.
/**
 * It calls
 * ur_msgs__srv__SetIO_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Response__destroy(ur_msgs__srv__SetIO_Response * msg);


/// Initialize array of srv/SetIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_msgs__srv__SetIO_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
bool
ur_msgs__srv__SetIO_Response__Sequence__init(ur_msgs__srv__SetIO_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetIO messages.
/**
 * It calls
 * ur_msgs__srv__SetIO_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Response__Sequence__fini(ur_msgs__srv__SetIO_Response__Sequence * array);

/// Create array of srv/SetIO messages.
/**
 * It allocates the memory for the array and calls
 * ur_msgs__srv__SetIO_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
ur_msgs__srv__SetIO_Response__Sequence *
ur_msgs__srv__SetIO_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetIO messages.
/**
 * It calls
 * ur_msgs__srv__SetIO_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
void
ur_msgs__srv__SetIO_Response__Sequence__destroy(ur_msgs__srv__SetIO_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__SRV__DETAIL__SET_IO__FUNCTIONS_H_
