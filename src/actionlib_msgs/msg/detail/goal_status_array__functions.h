// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__FUNCTIONS_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "actionlib_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "actionlib_msgs/msg/detail/goal_status_array__struct.h"

/// Initialize msg/GoalStatusArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * actionlib_msgs__msg__GoalStatusArray
 * )) before or use
 * actionlib_msgs__msg__GoalStatusArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalStatusArray__init(actionlib_msgs__msg__GoalStatusArray * msg);

/// Finalize msg/GoalStatusArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatusArray__fini(actionlib_msgs__msg__GoalStatusArray * msg);

/// Create msg/GoalStatusArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * actionlib_msgs__msg__GoalStatusArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalStatusArray *
actionlib_msgs__msg__GoalStatusArray__create();

/// Destroy msg/GoalStatusArray message.
/**
 * It calls
 * actionlib_msgs__msg__GoalStatusArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatusArray__destroy(actionlib_msgs__msg__GoalStatusArray * msg);


/// Initialize array of msg/GoalStatusArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * actionlib_msgs__msg__GoalStatusArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalStatusArray__Sequence__init(actionlib_msgs__msg__GoalStatusArray__Sequence * array, size_t size);

/// Finalize array of msg/GoalStatusArray messages.
/**
 * It calls
 * actionlib_msgs__msg__GoalStatusArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatusArray__Sequence__fini(actionlib_msgs__msg__GoalStatusArray__Sequence * array);

/// Create array of msg/GoalStatusArray messages.
/**
 * It allocates the memory for the array and calls
 * actionlib_msgs__msg__GoalStatusArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalStatusArray__Sequence *
actionlib_msgs__msg__GoalStatusArray__Sequence__create(size_t size);

/// Destroy array of msg/GoalStatusArray messages.
/**
 * It calls
 * actionlib_msgs__msg__GoalStatusArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatusArray__Sequence__destroy(actionlib_msgs__msg__GoalStatusArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__FUNCTIONS_H_
