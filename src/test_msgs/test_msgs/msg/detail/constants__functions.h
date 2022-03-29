// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_msgs:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__CONSTANTS__FUNCTIONS_H_
#define TEST_MSGS__MSG__DETAIL__CONSTANTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "test_msgs/msg/detail/constants__struct.h"

/// Initialize msg/Constants message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__msg__Constants
 * )) before or use
 * test_msgs__msg__Constants__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__init(test_msgs__msg__Constants * msg);

/// Finalize msg/Constants message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Constants__fini(test_msgs__msg__Constants * msg);

/// Create msg/Constants message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__msg__Constants__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__Constants *
test_msgs__msg__Constants__create();

/// Destroy msg/Constants message.
/**
 * It calls
 * test_msgs__msg__Constants__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Constants__destroy(test_msgs__msg__Constants * msg);

/// Check for msg/Constants message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__are_equal(const test_msgs__msg__Constants * lhs, const test_msgs__msg__Constants * rhs);

/// Copy a msg/Constants message.
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
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__copy(
  const test_msgs__msg__Constants * input,
  test_msgs__msg__Constants * output);

/// Initialize array of msg/Constants messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__msg__Constants__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__Sequence__init(test_msgs__msg__Constants__Sequence * array, size_t size);

/// Finalize array of msg/Constants messages.
/**
 * It calls
 * test_msgs__msg__Constants__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Constants__Sequence__fini(test_msgs__msg__Constants__Sequence * array);

/// Create array of msg/Constants messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__msg__Constants__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__Constants__Sequence *
test_msgs__msg__Constants__Sequence__create(size_t size);

/// Destroy array of msg/Constants messages.
/**
 * It calls
 * test_msgs__msg__Constants__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Constants__Sequence__destroy(test_msgs__msg__Constants__Sequence * array);

/// Check for msg/Constants message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__Sequence__are_equal(const test_msgs__msg__Constants__Sequence * lhs, const test_msgs__msg__Constants__Sequence * rhs);

/// Copy an array of msg/Constants messages.
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
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Constants__Sequence__copy(
  const test_msgs__msg__Constants__Sequence * input,
  test_msgs__msg__Constants__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__CONSTANTS__FUNCTIONS_H_
