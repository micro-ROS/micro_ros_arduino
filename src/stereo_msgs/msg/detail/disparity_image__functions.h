// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__FUNCTIONS_H_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stereo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stereo_msgs/msg/detail/disparity_image__struct.h"

/// Initialize msg/DisparityImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stereo_msgs__msg__DisparityImage
 * )) before or use
 * stereo_msgs__msg__DisparityImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__init(stereo_msgs__msg__DisparityImage * msg);

/// Finalize msg/DisparityImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__fini(stereo_msgs__msg__DisparityImage * msg);

/// Create msg/DisparityImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stereo_msgs__msg__DisparityImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
stereo_msgs__msg__DisparityImage *
stereo_msgs__msg__DisparityImage__create();

/// Destroy msg/DisparityImage message.
/**
 * It calls
 * stereo_msgs__msg__DisparityImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__destroy(stereo_msgs__msg__DisparityImage * msg);

/// Check for msg/DisparityImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__are_equal(const stereo_msgs__msg__DisparityImage * lhs, const stereo_msgs__msg__DisparityImage * rhs);

/// Copy a msg/DisparityImage message.
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
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__copy(
  const stereo_msgs__msg__DisparityImage * input,
  stereo_msgs__msg__DisparityImage * output);

/// Initialize array of msg/DisparityImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * stereo_msgs__msg__DisparityImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__Sequence__init(stereo_msgs__msg__DisparityImage__Sequence * array, size_t size);

/// Finalize array of msg/DisparityImage messages.
/**
 * It calls
 * stereo_msgs__msg__DisparityImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__Sequence__fini(stereo_msgs__msg__DisparityImage__Sequence * array);

/// Create array of msg/DisparityImage messages.
/**
 * It allocates the memory for the array and calls
 * stereo_msgs__msg__DisparityImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
stereo_msgs__msg__DisparityImage__Sequence *
stereo_msgs__msg__DisparityImage__Sequence__create(size_t size);

/// Destroy array of msg/DisparityImage messages.
/**
 * It calls
 * stereo_msgs__msg__DisparityImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
void
stereo_msgs__msg__DisparityImage__Sequence__destroy(stereo_msgs__msg__DisparityImage__Sequence * array);

/// Check for msg/DisparityImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__Sequence__are_equal(const stereo_msgs__msg__DisparityImage__Sequence * lhs, const stereo_msgs__msg__DisparityImage__Sequence * rhs);

/// Copy an array of msg/DisparityImage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stereo_msgs
bool
stereo_msgs__msg__DisparityImage__Sequence__copy(
  const stereo_msgs__msg__DisparityImage__Sequence * input,
  stereo_msgs__msg__DisparityImage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__FUNCTIONS_H_
