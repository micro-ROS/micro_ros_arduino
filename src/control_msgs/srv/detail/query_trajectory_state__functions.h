// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__FUNCTIONS_H_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/srv/detail/query_trajectory_state__struct.h"

/// Initialize srv/QueryTrajectoryState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__srv__QueryTrajectoryState_Request
 * )) before or use
 * control_msgs__srv__QueryTrajectoryState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__srv__QueryTrajectoryState_Request__init(control_msgs__srv__QueryTrajectoryState_Request * msg);

/// Finalize srv/QueryTrajectoryState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Request__fini(control_msgs__srv__QueryTrajectoryState_Request * msg);

/// Create srv/QueryTrajectoryState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__srv__QueryTrajectoryState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__srv__QueryTrajectoryState_Request *
control_msgs__srv__QueryTrajectoryState_Request__create();

/// Destroy srv/QueryTrajectoryState message.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Request__destroy(control_msgs__srv__QueryTrajectoryState_Request * msg);


/// Initialize array of srv/QueryTrajectoryState messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__srv__QueryTrajectoryState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__srv__QueryTrajectoryState_Request__Sequence__init(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array, size_t size);

/// Finalize array of srv/QueryTrajectoryState messages.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array);

/// Create array of srv/QueryTrajectoryState messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__srv__QueryTrajectoryState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__srv__QueryTrajectoryState_Request__Sequence *
control_msgs__srv__QueryTrajectoryState_Request__Sequence__create(size_t size);

/// Destroy array of srv/QueryTrajectoryState messages.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Request__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array);

/// Initialize srv/QueryTrajectoryState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__srv__QueryTrajectoryState_Response
 * )) before or use
 * control_msgs__srv__QueryTrajectoryState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__srv__QueryTrajectoryState_Response__init(control_msgs__srv__QueryTrajectoryState_Response * msg);

/// Finalize srv/QueryTrajectoryState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Response__fini(control_msgs__srv__QueryTrajectoryState_Response * msg);

/// Create srv/QueryTrajectoryState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__srv__QueryTrajectoryState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__srv__QueryTrajectoryState_Response *
control_msgs__srv__QueryTrajectoryState_Response__create();

/// Destroy srv/QueryTrajectoryState message.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Response__destroy(control_msgs__srv__QueryTrajectoryState_Response * msg);


/// Initialize array of srv/QueryTrajectoryState messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__srv__QueryTrajectoryState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__srv__QueryTrajectoryState_Response__Sequence__init(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array, size_t size);

/// Finalize array of srv/QueryTrajectoryState messages.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array);

/// Create array of srv/QueryTrajectoryState messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__srv__QueryTrajectoryState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__srv__QueryTrajectoryState_Response__Sequence *
control_msgs__srv__QueryTrajectoryState_Response__Sequence__create(size_t size);

/// Destroy array of srv/QueryTrajectoryState messages.
/**
 * It calls
 * control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__srv__QueryTrajectoryState_Response__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__FUNCTIONS_H_
