// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "trajectory_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Initialize msg/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trajectory_msgs__msg__JointTrajectory
 * )) before or use
 * trajectory_msgs__msg__JointTrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__JointTrajectory__init(trajectory_msgs__msg__JointTrajectory * msg);

/// Finalize msg/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__JointTrajectory__fini(trajectory_msgs__msg__JointTrajectory * msg);

/// Create msg/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trajectory_msgs__msg__JointTrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
trajectory_msgs__msg__JointTrajectory *
trajectory_msgs__msg__JointTrajectory__create();

/// Destroy msg/JointTrajectory message.
/**
 * It calls
 * trajectory_msgs__msg__JointTrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__JointTrajectory__destroy(trajectory_msgs__msg__JointTrajectory * msg);


/// Initialize array of msg/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * trajectory_msgs__msg__JointTrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
bool
trajectory_msgs__msg__JointTrajectory__Sequence__init(trajectory_msgs__msg__JointTrajectory__Sequence * array, size_t size);

/// Finalize array of msg/JointTrajectory messages.
/**
 * It calls
 * trajectory_msgs__msg__JointTrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__JointTrajectory__Sequence__fini(trajectory_msgs__msg__JointTrajectory__Sequence * array);

/// Create array of msg/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * trajectory_msgs__msg__JointTrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
trajectory_msgs__msg__JointTrajectory__Sequence *
trajectory_msgs__msg__JointTrajectory__Sequence__create(size_t size);

/// Destroy array of msg/JointTrajectory messages.
/**
 * It calls
 * trajectory_msgs__msg__JointTrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_msgs
void
trajectory_msgs__msg__JointTrajectory__Sequence__destroy(trajectory_msgs__msg__JointTrajectory__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
