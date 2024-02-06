// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef AKROS2_MSGS__MSG__DETAIL__MODE__FUNCTIONS_H_
#define AKROS2_MSGS__MSG__DETAIL__MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "akros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "akros2_msgs/msg/detail/mode__struct.h"

/// Initialize msg/Mode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akros2_msgs__msg__Mode
 * )) before or use
 * akros2_msgs__msg__Mode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__init(akros2_msgs__msg__Mode * msg);

/// Finalize msg/Mode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
void
akros2_msgs__msg__Mode__fini(akros2_msgs__msg__Mode * msg);

/// Create msg/Mode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akros2_msgs__msg__Mode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
akros2_msgs__msg__Mode *
akros2_msgs__msg__Mode__create();

/// Destroy msg/Mode message.
/**
 * It calls
 * akros2_msgs__msg__Mode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
void
akros2_msgs__msg__Mode__destroy(akros2_msgs__msg__Mode * msg);

/// Check for msg/Mode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__are_equal(const akros2_msgs__msg__Mode * lhs, const akros2_msgs__msg__Mode * rhs);

/// Copy a msg/Mode message.
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
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__copy(
  const akros2_msgs__msg__Mode * input,
  akros2_msgs__msg__Mode * output);

/// Initialize array of msg/Mode messages.
/**
 * It allocates the memory for the number of elements and calls
 * akros2_msgs__msg__Mode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__Sequence__init(akros2_msgs__msg__Mode__Sequence * array, size_t size);

/// Finalize array of msg/Mode messages.
/**
 * It calls
 * akros2_msgs__msg__Mode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
void
akros2_msgs__msg__Mode__Sequence__fini(akros2_msgs__msg__Mode__Sequence * array);

/// Create array of msg/Mode messages.
/**
 * It allocates the memory for the array and calls
 * akros2_msgs__msg__Mode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
akros2_msgs__msg__Mode__Sequence *
akros2_msgs__msg__Mode__Sequence__create(size_t size);

/// Destroy array of msg/Mode messages.
/**
 * It calls
 * akros2_msgs__msg__Mode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
void
akros2_msgs__msg__Mode__Sequence__destroy(akros2_msgs__msg__Mode__Sequence * array);

/// Check for msg/Mode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__Sequence__are_equal(const akros2_msgs__msg__Mode__Sequence * lhs, const akros2_msgs__msg__Mode__Sequence * rhs);

/// Copy an array of msg/Mode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_akros2_msgs
bool
akros2_msgs__msg__Mode__Sequence__copy(
  const akros2_msgs__msg__Mode__Sequence * input,
  akros2_msgs__msg__Mode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AKROS2_MSGS__MSG__DETAIL__MODE__FUNCTIONS_H_
