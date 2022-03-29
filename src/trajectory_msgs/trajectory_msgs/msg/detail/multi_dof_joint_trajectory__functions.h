// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__FUNCTIONS_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "trajectory_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.h"

/// Initialize msg/MultiDOFJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trajectory_msgs__msg__MultiDOFJointTrajectory
 * )) before or use
 * trajectory_msgs__msg__MultiDOFJointTrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__init(trajectory_msgs__msg__MultiDOFJointTrajectory * msg);

/// Finalize msg/MultiDOFJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__MultiDOFJointTrajectory__fini(trajectory_msgs__msg__MultiDOFJointTrajectory * msg);

/// Create msg/MultiDOFJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
trajectory_msgs__msg__MultiDOFJointTrajectory *
trajectory_msgs__msg__MultiDOFJointTrajectory__create();

/// Destroy msg/MultiDOFJointTrajectory message.
/**
 * It calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__MultiDOFJointTrajectory__destroy(trajectory_msgs__msg__MultiDOFJointTrajectory * msg);

/// Check for msg/MultiDOFJointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__are_equal(const trajectory_msgs__msg__MultiDOFJointTrajectory * lhs, const trajectory_msgs__msg__MultiDOFJointTrajectory * rhs);

/// Copy a msg/MultiDOFJointTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__copy(
  const trajectory_msgs__msg__MultiDOFJointTrajectory * input,
  trajectory_msgs__msg__MultiDOFJointTrajectory * output);

/// Initialize array of msg/MultiDOFJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__init(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array, size_t size);

/// Finalize array of msg/MultiDOFJointTrajectory messages.
/**
 * It calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__fini(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array);

/// Create array of msg/MultiDOFJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence *
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__create(size_t size);

/// Destroy array of msg/MultiDOFJointTrajectory messages.
/**
 * It calls
 * trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__destroy(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array);

/// Check for msg/MultiDOFJointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__are_equal(const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * lhs, const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * rhs);

/// Copy an array of msg/MultiDOFJointTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__copy(
  const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * input,
  trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__FUNCTIONS_H_
