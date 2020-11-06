// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__FUNCTIONS_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/msg/detail/joint_controller_state__struct.h"

/// Initialize msg/JointControllerState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__msg__JointControllerState
 * )) before or use
 * control_msgs__msg__JointControllerState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__JointControllerState__init(control_msgs__msg__JointControllerState * msg);

/// Finalize msg/JointControllerState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__JointControllerState__fini(control_msgs__msg__JointControllerState * msg);

/// Create msg/JointControllerState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__msg__JointControllerState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__msg__JointControllerState *
control_msgs__msg__JointControllerState__create();

/// Destroy msg/JointControllerState message.
/**
 * It calls
 * control_msgs__msg__JointControllerState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__JointControllerState__destroy(control_msgs__msg__JointControllerState * msg);


/// Initialize array of msg/JointControllerState messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__msg__JointControllerState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__msg__JointControllerState__Sequence__init(control_msgs__msg__JointControllerState__Sequence * array, size_t size);

/// Finalize array of msg/JointControllerState messages.
/**
 * It calls
 * control_msgs__msg__JointControllerState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__JointControllerState__Sequence__fini(control_msgs__msg__JointControllerState__Sequence * array);

/// Create array of msg/JointControllerState messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__msg__JointControllerState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__msg__JointControllerState__Sequence *
control_msgs__msg__JointControllerState__Sequence__create(size_t size);

/// Destroy array of msg/JointControllerState messages.
/**
 * It calls
 * control_msgs__msg__JointControllerState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__msg__JointControllerState__Sequence__destroy(control_msgs__msg__JointControllerState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__FUNCTIONS_H_
