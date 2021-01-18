// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__FUNCTIONS_H_
#define RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rcl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rcl_interfaces/msg/detail/set_parameters_result__struct.h"

/// Initialize msg/SetParametersResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rcl_interfaces__msg__SetParametersResult
 * )) before or use
 * rcl_interfaces__msg__SetParametersResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__msg__SetParametersResult__init(rcl_interfaces__msg__SetParametersResult * msg);

/// Finalize msg/SetParametersResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__SetParametersResult__fini(rcl_interfaces__msg__SetParametersResult * msg);

/// Create msg/SetParametersResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rcl_interfaces__msg__SetParametersResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__msg__SetParametersResult *
rcl_interfaces__msg__SetParametersResult__create();

/// Destroy msg/SetParametersResult message.
/**
 * It calls
 * rcl_interfaces__msg__SetParametersResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__SetParametersResult__destroy(rcl_interfaces__msg__SetParametersResult * msg);


/// Initialize array of msg/SetParametersResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rcl_interfaces__msg__SetParametersResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__msg__SetParametersResult__Sequence__init(rcl_interfaces__msg__SetParametersResult__Sequence * array, size_t size);

/// Finalize array of msg/SetParametersResult messages.
/**
 * It calls
 * rcl_interfaces__msg__SetParametersResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__SetParametersResult__Sequence__fini(rcl_interfaces__msg__SetParametersResult__Sequence * array);

/// Create array of msg/SetParametersResult messages.
/**
 * It allocates the memory for the array and calls
 * rcl_interfaces__msg__SetParametersResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__msg__SetParametersResult__Sequence *
rcl_interfaces__msg__SetParametersResult__Sequence__create(size_t size);

/// Destroy array of msg/SetParametersResult messages.
/**
 * It calls
 * rcl_interfaces__msg__SetParametersResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__SetParametersResult__Sequence__destroy(rcl_interfaces__msg__SetParametersResult__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__FUNCTIONS_H_
