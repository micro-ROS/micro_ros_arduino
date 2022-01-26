// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__FUNCTIONS_H_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "shape_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "shape_msgs/msg/detail/plane__struct.h"

/// Initialize msg/Plane message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * shape_msgs__msg__Plane
 * )) before or use
 * shape_msgs__msg__Plane__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__init(shape_msgs__msg__Plane * msg);

/// Finalize msg/Plane message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__fini(shape_msgs__msg__Plane * msg);

/// Create msg/Plane message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * shape_msgs__msg__Plane__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__Plane *
shape_msgs__msg__Plane__create();

/// Destroy msg/Plane message.
/**
 * It calls
 * shape_msgs__msg__Plane__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__destroy(shape_msgs__msg__Plane * msg);

/// Check for msg/Plane message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__are_equal(const shape_msgs__msg__Plane * lhs, const shape_msgs__msg__Plane * rhs);

/// Copy a msg/Plane message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__copy(
  const shape_msgs__msg__Plane * input,
  shape_msgs__msg__Plane * output);

/// Initialize array of msg/Plane messages.
/**
 * It allocates the memory for the number of elements and calls
 * shape_msgs__msg__Plane__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__Sequence__init(shape_msgs__msg__Plane__Sequence * array, size_t size);

/// Finalize array of msg/Plane messages.
/**
 * It calls
 * shape_msgs__msg__Plane__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__Sequence__fini(shape_msgs__msg__Plane__Sequence * array);

/// Create array of msg/Plane messages.
/**
 * It allocates the memory for the array and calls
 * shape_msgs__msg__Plane__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__Plane__Sequence *
shape_msgs__msg__Plane__Sequence__create(size_t size);

/// Destroy array of msg/Plane messages.
/**
 * It calls
 * shape_msgs__msg__Plane__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__Sequence__destroy(shape_msgs__msg__Plane__Sequence * array);

/// Check for msg/Plane message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__Sequence__are_equal(const shape_msgs__msg__Plane__Sequence * lhs, const shape_msgs__msg__Plane__Sequence * rhs);

/// Copy an array of msg/Plane messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__Sequence__copy(
  const shape_msgs__msg__Plane__Sequence * input,
  shape_msgs__msg__Plane__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__FUNCTIONS_H_
