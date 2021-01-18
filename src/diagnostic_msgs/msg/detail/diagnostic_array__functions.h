// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__FUNCTIONS_H_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "diagnostic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.h"

/// Initialize msg/DiagnosticArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * diagnostic_msgs__msg__DiagnosticArray
 * )) before or use
 * diagnostic_msgs__msg__DiagnosticArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__msg__DiagnosticArray__init(diagnostic_msgs__msg__DiagnosticArray * msg);

/// Finalize msg/DiagnosticArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticArray__fini(diagnostic_msgs__msg__DiagnosticArray * msg);

/// Create msg/DiagnosticArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * diagnostic_msgs__msg__DiagnosticArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__msg__DiagnosticArray *
diagnostic_msgs__msg__DiagnosticArray__create();

/// Destroy msg/DiagnosticArray message.
/**
 * It calls
 * diagnostic_msgs__msg__DiagnosticArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticArray__destroy(diagnostic_msgs__msg__DiagnosticArray * msg);


/// Initialize array of msg/DiagnosticArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * diagnostic_msgs__msg__DiagnosticArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__msg__DiagnosticArray__Sequence__init(diagnostic_msgs__msg__DiagnosticArray__Sequence * array, size_t size);

/// Finalize array of msg/DiagnosticArray messages.
/**
 * It calls
 * diagnostic_msgs__msg__DiagnosticArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticArray__Sequence__fini(diagnostic_msgs__msg__DiagnosticArray__Sequence * array);

/// Create array of msg/DiagnosticArray messages.
/**
 * It allocates the memory for the array and calls
 * diagnostic_msgs__msg__DiagnosticArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__msg__DiagnosticArray__Sequence *
diagnostic_msgs__msg__DiagnosticArray__Sequence__create(size_t size);

/// Destroy array of msg/DiagnosticArray messages.
/**
 * It calls
 * diagnostic_msgs__msg__DiagnosticArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticArray__Sequence__destroy(diagnostic_msgs__msg__DiagnosticArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__FUNCTIONS_H_
