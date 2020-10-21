// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__FUNCTIONS_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "actionlib_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "actionlib_msgs/msg/detail/goal_id__struct.h"

/// Initialize msg/GoalID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * actionlib_msgs__msg__GoalID
 * )) before or use
 * actionlib_msgs__msg__GoalID__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalID__init(actionlib_msgs__msg__GoalID * msg);

/// Finalize msg/GoalID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalID__fini(actionlib_msgs__msg__GoalID * msg);

/// Create msg/GoalID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * actionlib_msgs__msg__GoalID__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalID *
actionlib_msgs__msg__GoalID__create();

/// Destroy msg/GoalID message.
/**
 * It calls
 * actionlib_msgs__msg__GoalID__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalID__destroy(actionlib_msgs__msg__GoalID * msg);


/// Initialize array of msg/GoalID messages.
/**
 * It allocates the memory for the number of elements and calls
 * actionlib_msgs__msg__GoalID__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalID__Sequence__init(actionlib_msgs__msg__GoalID__Sequence * array, size_t size);

/// Finalize array of msg/GoalID messages.
/**
 * It calls
 * actionlib_msgs__msg__GoalID__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalID__Sequence__fini(actionlib_msgs__msg__GoalID__Sequence * array);

/// Create array of msg/GoalID messages.
/**
 * It allocates the memory for the array and calls
 * actionlib_msgs__msg__GoalID__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalID__Sequence *
actionlib_msgs__msg__GoalID__Sequence__create(size_t size);

/// Destroy array of msg/GoalID messages.
/**
 * It calls
 * actionlib_msgs__msg__GoalID__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalID__Sequence__destroy(actionlib_msgs__msg__GoalID__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__FUNCTIONS_H_
