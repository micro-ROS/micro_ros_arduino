// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RANGE__FUNCTIONS_H_
#define SENSOR_MSGS__MSG__DETAIL__RANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_msgs/msg/detail/range__struct.h"

/// Initialize msg/Range message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_msgs__msg__Range
 * )) before or use
 * sensor_msgs__msg__Range__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__init(sensor_msgs__msg__Range * msg);

/// Finalize msg/Range message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Range__fini(sensor_msgs__msg__Range * msg);

/// Create msg/Range message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_msgs__msg__Range__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__Range *
sensor_msgs__msg__Range__create();

/// Destroy msg/Range message.
/**
 * It calls
 * sensor_msgs__msg__Range__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Range__destroy(sensor_msgs__msg__Range * msg);

/// Check for msg/Range message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__are_equal(const sensor_msgs__msg__Range * lhs, const sensor_msgs__msg__Range * rhs);

/// Copy a msg/Range message.
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
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__copy(
  const sensor_msgs__msg__Range * input,
  sensor_msgs__msg__Range * output);

/// Initialize array of msg/Range messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_msgs__msg__Range__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__Sequence__init(sensor_msgs__msg__Range__Sequence * array, size_t size);

/// Finalize array of msg/Range messages.
/**
 * It calls
 * sensor_msgs__msg__Range__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Range__Sequence__fini(sensor_msgs__msg__Range__Sequence * array);

/// Create array of msg/Range messages.
/**
 * It allocates the memory for the array and calls
 * sensor_msgs__msg__Range__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__Range__Sequence *
sensor_msgs__msg__Range__Sequence__create(size_t size);

/// Destroy array of msg/Range messages.
/**
 * It calls
 * sensor_msgs__msg__Range__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Range__Sequence__destroy(sensor_msgs__msg__Range__Sequence * array);

/// Check for msg/Range message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__Sequence__are_equal(const sensor_msgs__msg__Range__Sequence * lhs, const sensor_msgs__msg__Range__Sequence * rhs);

/// Copy an array of msg/Range messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Range__Sequence__copy(
  const sensor_msgs__msg__Range__Sequence * input,
  sensor_msgs__msg__Range__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__RANGE__FUNCTIONS_H_
