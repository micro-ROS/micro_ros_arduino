// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__FUNCTIONS_H_
#define MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "micro_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "micro_ros_msgs/msg/detail/graph__struct.h"

/// Initialize msg/Graph message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * micro_ros_msgs__msg__Graph
 * )) before or use
 * micro_ros_msgs__msg__Graph__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
bool
micro_ros_msgs__msg__Graph__init(micro_ros_msgs__msg__Graph * msg);

/// Finalize msg/Graph message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Graph__fini(micro_ros_msgs__msg__Graph * msg);

/// Create msg/Graph message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * micro_ros_msgs__msg__Graph__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
micro_ros_msgs__msg__Graph *
micro_ros_msgs__msg__Graph__create();

/// Destroy msg/Graph message.
/**
 * It calls
 * micro_ros_msgs__msg__Graph__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Graph__destroy(micro_ros_msgs__msg__Graph * msg);


/// Initialize array of msg/Graph messages.
/**
 * It allocates the memory for the number of elements and calls
 * micro_ros_msgs__msg__Graph__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
bool
micro_ros_msgs__msg__Graph__Sequence__init(micro_ros_msgs__msg__Graph__Sequence * array, size_t size);

/// Finalize array of msg/Graph messages.
/**
 * It calls
 * micro_ros_msgs__msg__Graph__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Graph__Sequence__fini(micro_ros_msgs__msg__Graph__Sequence * array);

/// Create array of msg/Graph messages.
/**
 * It allocates the memory for the array and calls
 * micro_ros_msgs__msg__Graph__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
micro_ros_msgs__msg__Graph__Sequence *
micro_ros_msgs__msg__Graph__Sequence__create(size_t size);

/// Destroy array of msg/Graph messages.
/**
 * It calls
 * micro_ros_msgs__msg__Graph__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Graph__Sequence__destroy(micro_ros_msgs__msg__Graph__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__FUNCTIONS_H_
