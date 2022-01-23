// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:action/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
#define CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/action/detail/joint_trajectory__struct.h"

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_Goal
 * )) before or use
 * control_msgs__action__JointTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Goal__init(control_msgs__action__JointTrajectory_Goal * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Goal__fini(control_msgs__action__JointTrajectory_Goal * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Goal *
control_msgs__action__JointTrajectory_Goal__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Goal__destroy(control_msgs__action__JointTrajectory_Goal * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Goal__are_equal(const control_msgs__action__JointTrajectory_Goal * lhs, const control_msgs__action__JointTrajectory_Goal * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Goal__Sequence__init(control_msgs__action__JointTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Goal__Sequence__fini(control_msgs__action__JointTrajectory_Goal__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Goal__Sequence *
control_msgs__action__JointTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Goal__Sequence__destroy(control_msgs__action__JointTrajectory_Goal__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Goal__Sequence__are_equal(const control_msgs__action__JointTrajectory_Goal__Sequence * lhs, const control_msgs__action__JointTrajectory_Goal__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_Result
 * )) before or use
 * control_msgs__action__JointTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Result__init(control_msgs__action__JointTrajectory_Result * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Result__fini(control_msgs__action__JointTrajectory_Result * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Result *
control_msgs__action__JointTrajectory_Result__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Result__destroy(control_msgs__action__JointTrajectory_Result * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Result__are_equal(const control_msgs__action__JointTrajectory_Result * lhs, const control_msgs__action__JointTrajectory_Result * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Result__Sequence__init(control_msgs__action__JointTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Result__Sequence__fini(control_msgs__action__JointTrajectory_Result__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Result__Sequence *
control_msgs__action__JointTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Result__Sequence__destroy(control_msgs__action__JointTrajectory_Result__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Result__Sequence__are_equal(const control_msgs__action__JointTrajectory_Result__Sequence * lhs, const control_msgs__action__JointTrajectory_Result__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_Feedback
 * )) before or use
 * control_msgs__action__JointTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Feedback__init(control_msgs__action__JointTrajectory_Feedback * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Feedback__fini(control_msgs__action__JointTrajectory_Feedback * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Feedback *
control_msgs__action__JointTrajectory_Feedback__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Feedback__destroy(control_msgs__action__JointTrajectory_Feedback * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Feedback__are_equal(const control_msgs__action__JointTrajectory_Feedback * lhs, const control_msgs__action__JointTrajectory_Feedback * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Feedback__Sequence__init(control_msgs__action__JointTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Feedback__Sequence__fini(control_msgs__action__JointTrajectory_Feedback__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_Feedback__Sequence *
control_msgs__action__JointTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_Feedback__Sequence__destroy(control_msgs__action__JointTrajectory_Feedback__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_Feedback__Sequence__are_equal(const control_msgs__action__JointTrajectory_Feedback__Sequence * lhs, const control_msgs__action__JointTrajectory_Feedback__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_SendGoal_Request
 * )) before or use
 * control_msgs__action__JointTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Request__init(control_msgs__action__JointTrajectory_SendGoal_Request * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Request__fini(control_msgs__action__JointTrajectory_SendGoal_Request * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_SendGoal_Request *
control_msgs__action__JointTrajectory_SendGoal_Request__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Request__destroy(control_msgs__action__JointTrajectory_SendGoal_Request * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Request__are_equal(const control_msgs__action__JointTrajectory_SendGoal_Request * lhs, const control_msgs__action__JointTrajectory_SendGoal_Request * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__init(control_msgs__action__JointTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__fini(control_msgs__action__JointTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence *
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__destroy(control_msgs__action__JointTrajectory_SendGoal_Request__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__are_equal(const control_msgs__action__JointTrajectory_SendGoal_Request__Sequence * lhs, const control_msgs__action__JointTrajectory_SendGoal_Request__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_SendGoal_Response
 * )) before or use
 * control_msgs__action__JointTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Response__init(control_msgs__action__JointTrajectory_SendGoal_Response * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Response__fini(control_msgs__action__JointTrajectory_SendGoal_Response * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_SendGoal_Response *
control_msgs__action__JointTrajectory_SendGoal_Response__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Response__destroy(control_msgs__action__JointTrajectory_SendGoal_Response * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Response__are_equal(const control_msgs__action__JointTrajectory_SendGoal_Response * lhs, const control_msgs__action__JointTrajectory_SendGoal_Response * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__init(control_msgs__action__JointTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__fini(control_msgs__action__JointTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence *
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__destroy(control_msgs__action__JointTrajectory_SendGoal_Response__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__are_equal(const control_msgs__action__JointTrajectory_SendGoal_Response__Sequence * lhs, const control_msgs__action__JointTrajectory_SendGoal_Response__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_GetResult_Request
 * )) before or use
 * control_msgs__action__JointTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Request__init(control_msgs__action__JointTrajectory_GetResult_Request * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Request__fini(control_msgs__action__JointTrajectory_GetResult_Request * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_GetResult_Request *
control_msgs__action__JointTrajectory_GetResult_Request__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Request__destroy(control_msgs__action__JointTrajectory_GetResult_Request * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Request__are_equal(const control_msgs__action__JointTrajectory_GetResult_Request * lhs, const control_msgs__action__JointTrajectory_GetResult_Request * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Request__Sequence__init(control_msgs__action__JointTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Request__Sequence__fini(control_msgs__action__JointTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_GetResult_Request__Sequence *
control_msgs__action__JointTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Request__Sequence__destroy(control_msgs__action__JointTrajectory_GetResult_Request__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Request__Sequence__are_equal(const control_msgs__action__JointTrajectory_GetResult_Request__Sequence * lhs, const control_msgs__action__JointTrajectory_GetResult_Request__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_GetResult_Response
 * )) before or use
 * control_msgs__action__JointTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Response__init(control_msgs__action__JointTrajectory_GetResult_Response * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Response__fini(control_msgs__action__JointTrajectory_GetResult_Response * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_GetResult_Response *
control_msgs__action__JointTrajectory_GetResult_Response__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Response__destroy(control_msgs__action__JointTrajectory_GetResult_Response * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Response__are_equal(const control_msgs__action__JointTrajectory_GetResult_Response * lhs, const control_msgs__action__JointTrajectory_GetResult_Response * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Response__Sequence__init(control_msgs__action__JointTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Response__Sequence__fini(control_msgs__action__JointTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_GetResult_Response__Sequence *
control_msgs__action__JointTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_GetResult_Response__Sequence__destroy(control_msgs__action__JointTrajectory_GetResult_Response__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_GetResult_Response__Sequence__are_equal(const control_msgs__action__JointTrajectory_GetResult_Response__Sequence * lhs, const control_msgs__action__JointTrajectory_GetResult_Response__Sequence * rhs);

/// Initialize action/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__JointTrajectory_FeedbackMessage
 * )) before or use
 * control_msgs__action__JointTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_FeedbackMessage__init(control_msgs__action__JointTrajectory_FeedbackMessage * msg);

/// Finalize action/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_FeedbackMessage__fini(control_msgs__action__JointTrajectory_FeedbackMessage * msg);

/// Create action/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_FeedbackMessage *
control_msgs__action__JointTrajectory_FeedbackMessage__create();

/// Destroy action/JointTrajectory message.
/**
 * It calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_FeedbackMessage__destroy(control_msgs__action__JointTrajectory_FeedbackMessage * msg);

/// Check for action/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_FeedbackMessage__are_equal(const control_msgs__action__JointTrajectory_FeedbackMessage * lhs, const control_msgs__action__JointTrajectory_FeedbackMessage * rhs);

/// Initialize array of action/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__init(control_msgs__action__JointTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__fini(control_msgs__action__JointTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence *
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/JointTrajectory messages.
/**
 * It calls
 * control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__destroy(control_msgs__action__JointTrajectory_FeedbackMessage__Sequence * array);

/// Check for action/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__are_equal(const control_msgs__action__JointTrajectory_FeedbackMessage__Sequence * lhs, const control_msgs__action__JointTrajectory_FeedbackMessage__Sequence * rhs);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
