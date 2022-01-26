// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from example_interfaces:msg/String.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__STRING__FUNCTIONS_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__STRING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "example_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "example_interfaces/msg/detail/string__struct.h"

/// Initialize msg/String message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * example_interfaces__msg__String
 * )) before or use
 * example_interfaces__msg__String__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__init(example_interfaces__msg__String * msg);

/// Finalize msg/String message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__String__fini(example_interfaces__msg__String * msg);

/// Create msg/String message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * example_interfaces__msg__String__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__String *
example_interfaces__msg__String__create();

/// Destroy msg/String message.
/**
 * It calls
 * example_interfaces__msg__String__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__String__destroy(example_interfaces__msg__String * msg);

/// Check for msg/String message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__are_equal(const example_interfaces__msg__String * lhs, const example_interfaces__msg__String * rhs);

/// Copy a msg/String message.
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
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__copy(
  const example_interfaces__msg__String * input,
  example_interfaces__msg__String * output);

/// Initialize array of msg/String messages.
/**
 * It allocates the memory for the number of elements and calls
 * example_interfaces__msg__String__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__Sequence__init(example_interfaces__msg__String__Sequence * array, size_t size);

/// Finalize array of msg/String messages.
/**
 * It calls
 * example_interfaces__msg__String__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__String__Sequence__fini(example_interfaces__msg__String__Sequence * array);

/// Create array of msg/String messages.
/**
 * It allocates the memory for the array and calls
 * example_interfaces__msg__String__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__String__Sequence *
example_interfaces__msg__String__Sequence__create(size_t size);

/// Destroy array of msg/String messages.
/**
 * It calls
 * example_interfaces__msg__String__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__String__Sequence__destroy(example_interfaces__msg__String__Sequence * array);

/// Check for msg/String message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__Sequence__are_equal(const example_interfaces__msg__String__Sequence * lhs, const example_interfaces__msg__String__Sequence * rhs);

/// Copy an array of msg/String messages.
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
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__String__Sequence__copy(
  const example_interfaces__msg__String__Sequence * input,
  example_interfaces__msg__String__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__STRING__FUNCTIONS_H_
