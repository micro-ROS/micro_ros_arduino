// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__FUNCTIONS_H_
#define CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.h"

/// Initialize msg/MecanumDriveControllerState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__msg__MecanumDriveControllerState
 * )) before or use
 * control_msgs__msg__MecanumDriveControllerState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__init(control_msgs__msg__MecanumDriveControllerState * msg);

/// Finalize msg/MecanumDriveControllerState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__MecanumDriveControllerState__fini(control_msgs__msg__MecanumDriveControllerState * msg);

/// Create msg/MecanumDriveControllerState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__msg__MecanumDriveControllerState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__msg__MecanumDriveControllerState *
control_msgs__msg__MecanumDriveControllerState__create();

/// Destroy msg/MecanumDriveControllerState message.
/**
 * It calls
 * control_msgs__msg__MecanumDriveControllerState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__MecanumDriveControllerState__destroy(control_msgs__msg__MecanumDriveControllerState * msg);

/// Check for msg/MecanumDriveControllerState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__are_equal(const control_msgs__msg__MecanumDriveControllerState * lhs, const control_msgs__msg__MecanumDriveControllerState * rhs);

/// Copy a msg/MecanumDriveControllerState message.
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
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__copy(
  const control_msgs__msg__MecanumDriveControllerState * input,
  control_msgs__msg__MecanumDriveControllerState * output);

/// Initialize array of msg/MecanumDriveControllerState messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__msg__MecanumDriveControllerState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__Sequence__init(control_msgs__msg__MecanumDriveControllerState__Sequence * array, size_t size);

/// Finalize array of msg/MecanumDriveControllerState messages.
/**
 * It calls
 * control_msgs__msg__MecanumDriveControllerState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__MecanumDriveControllerState__Sequence__fini(control_msgs__msg__MecanumDriveControllerState__Sequence * array);

/// Create array of msg/MecanumDriveControllerState messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__msg__MecanumDriveControllerState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__msg__MecanumDriveControllerState__Sequence *
control_msgs__msg__MecanumDriveControllerState__Sequence__create(size_t size);

/// Destroy array of msg/MecanumDriveControllerState messages.
/**
 * It calls
 * control_msgs__msg__MecanumDriveControllerState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__MecanumDriveControllerState__Sequence__destroy(control_msgs__msg__MecanumDriveControllerState__Sequence * array);

/// Check for msg/MecanumDriveControllerState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__Sequence__are_equal(const control_msgs__msg__MecanumDriveControllerState__Sequence * lhs, const control_msgs__msg__MecanumDriveControllerState__Sequence * rhs);

/// Copy an array of msg/MecanumDriveControllerState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__MecanumDriveControllerState__Sequence__copy(
  const control_msgs__msg__MecanumDriveControllerState__Sequence * input,
  control_msgs__msg__MecanumDriveControllerState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__FUNCTIONS_H_
