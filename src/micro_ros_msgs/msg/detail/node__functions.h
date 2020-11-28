// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__NODE__FUNCTIONS_H_
#define MICRO_ROS_MSGS__MSG__DETAIL__NODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "micro_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "micro_ros_msgs/msg/detail/node__struct.h"

/// Initialize msg/Node message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * micro_ros_msgs__msg__Node
 * )) before or use
 * micro_ros_msgs__msg__Node__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
bool
micro_ros_msgs__msg__Node__init(micro_ros_msgs__msg__Node * msg);

/// Finalize msg/Node message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Node__fini(micro_ros_msgs__msg__Node * msg);

/// Create msg/Node message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * micro_ros_msgs__msg__Node__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
micro_ros_msgs__msg__Node *
micro_ros_msgs__msg__Node__create();

/// Destroy msg/Node message.
/**
 * It calls
 * micro_ros_msgs__msg__Node__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Node__destroy(micro_ros_msgs__msg__Node * msg);


/// Initialize array of msg/Node messages.
/**
 * It allocates the memory for the number of elements and calls
 * micro_ros_msgs__msg__Node__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
bool
micro_ros_msgs__msg__Node__Sequence__init(micro_ros_msgs__msg__Node__Sequence * array, size_t size);

/// Finalize array of msg/Node messages.
/**
 * It calls
 * micro_ros_msgs__msg__Node__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Node__Sequence__fini(micro_ros_msgs__msg__Node__Sequence * array);

/// Create array of msg/Node messages.
/**
 * It allocates the memory for the array and calls
 * micro_ros_msgs__msg__Node__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
micro_ros_msgs__msg__Node__Sequence *
micro_ros_msgs__msg__Node__Sequence__create(size_t size);

/// Destroy array of msg/Node messages.
/**
 * It calls
 * micro_ros_msgs__msg__Node__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_micro_ros_msgs
void
micro_ros_msgs__msg__Node__Sequence__destroy(micro_ros_msgs__msg__Node__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__NODE__FUNCTIONS_H_
