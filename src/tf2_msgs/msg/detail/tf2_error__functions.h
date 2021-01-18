// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF2_ERROR__FUNCTIONS_H_
#define TF2_MSGS__MSG__DETAIL__TF2_ERROR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tf2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tf2_msgs/msg/detail/tf2_error__struct.h"

/// Initialize msg/TF2Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__msg__TF2Error
 * )) before or use
 * tf2_msgs__msg__TF2Error__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__msg__TF2Error__init(tf2_msgs__msg__TF2Error * msg);

/// Finalize msg/TF2Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__msg__TF2Error__fini(tf2_msgs__msg__TF2Error * msg);

/// Create msg/TF2Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__msg__TF2Error__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__msg__TF2Error *
tf2_msgs__msg__TF2Error__create();

/// Destroy msg/TF2Error message.
/**
 * It calls
 * tf2_msgs__msg__TF2Error__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__msg__TF2Error__destroy(tf2_msgs__msg__TF2Error * msg);


/// Initialize array of msg/TF2Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__msg__TF2Error__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__msg__TF2Error__Sequence__init(tf2_msgs__msg__TF2Error__Sequence * array, size_t size);

/// Finalize array of msg/TF2Error messages.
/**
 * It calls
 * tf2_msgs__msg__TF2Error__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__msg__TF2Error__Sequence__fini(tf2_msgs__msg__TF2Error__Sequence * array);

/// Create array of msg/TF2Error messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__msg__TF2Error__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__msg__TF2Error__Sequence *
tf2_msgs__msg__TF2Error__Sequence__create(size_t size);

/// Destroy array of msg/TF2Error messages.
/**
 * It calls
 * tf2_msgs__msg__TF2Error__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__msg__TF2Error__Sequence__destroy(tf2_msgs__msg__TF2Error__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__DETAIL__TF2_ERROR__FUNCTIONS_H_
