// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__FUNCTIONS_H_
#define CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/action/detail/gripper_command__struct.h"

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_Goal
 * )) before or use
 * control_msgs__action__GripperCommand_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Goal__init(control_msgs__action__GripperCommand_Goal * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Goal__fini(control_msgs__action__GripperCommand_Goal * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Goal *
control_msgs__action__GripperCommand_Goal__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Goal__destroy(control_msgs__action__GripperCommand_Goal * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Goal__are_equal(const control_msgs__action__GripperCommand_Goal * lhs, const control_msgs__action__GripperCommand_Goal * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_Goal__copy(
  const control_msgs__action__GripperCommand_Goal * input,
  control_msgs__action__GripperCommand_Goal * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Goal__Sequence__init(control_msgs__action__GripperCommand_Goal__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Goal__Sequence__fini(control_msgs__action__GripperCommand_Goal__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Goal__Sequence *
control_msgs__action__GripperCommand_Goal__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Goal__Sequence__destroy(control_msgs__action__GripperCommand_Goal__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Goal__Sequence__are_equal(const control_msgs__action__GripperCommand_Goal__Sequence * lhs, const control_msgs__action__GripperCommand_Goal__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_Goal__Sequence__copy(
  const control_msgs__action__GripperCommand_Goal__Sequence * input,
  control_msgs__action__GripperCommand_Goal__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_Result
 * )) before or use
 * control_msgs__action__GripperCommand_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Result__init(control_msgs__action__GripperCommand_Result * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Result__fini(control_msgs__action__GripperCommand_Result * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Result *
control_msgs__action__GripperCommand_Result__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Result__destroy(control_msgs__action__GripperCommand_Result * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Result__are_equal(const control_msgs__action__GripperCommand_Result * lhs, const control_msgs__action__GripperCommand_Result * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_Result__copy(
  const control_msgs__action__GripperCommand_Result * input,
  control_msgs__action__GripperCommand_Result * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Result__Sequence__init(control_msgs__action__GripperCommand_Result__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Result__Sequence__fini(control_msgs__action__GripperCommand_Result__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Result__Sequence *
control_msgs__action__GripperCommand_Result__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Result__Sequence__destroy(control_msgs__action__GripperCommand_Result__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Result__Sequence__are_equal(const control_msgs__action__GripperCommand_Result__Sequence * lhs, const control_msgs__action__GripperCommand_Result__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_Result__Sequence__copy(
  const control_msgs__action__GripperCommand_Result__Sequence * input,
  control_msgs__action__GripperCommand_Result__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_Feedback
 * )) before or use
 * control_msgs__action__GripperCommand_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Feedback__init(control_msgs__action__GripperCommand_Feedback * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Feedback__fini(control_msgs__action__GripperCommand_Feedback * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Feedback *
control_msgs__action__GripperCommand_Feedback__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Feedback__destroy(control_msgs__action__GripperCommand_Feedback * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Feedback__are_equal(const control_msgs__action__GripperCommand_Feedback * lhs, const control_msgs__action__GripperCommand_Feedback * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_Feedback__copy(
  const control_msgs__action__GripperCommand_Feedback * input,
  control_msgs__action__GripperCommand_Feedback * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Feedback__Sequence__init(control_msgs__action__GripperCommand_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Feedback__Sequence__fini(control_msgs__action__GripperCommand_Feedback__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_Feedback__Sequence *
control_msgs__action__GripperCommand_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_Feedback__Sequence__destroy(control_msgs__action__GripperCommand_Feedback__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_Feedback__Sequence__are_equal(const control_msgs__action__GripperCommand_Feedback__Sequence * lhs, const control_msgs__action__GripperCommand_Feedback__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_Feedback__Sequence__copy(
  const control_msgs__action__GripperCommand_Feedback__Sequence * input,
  control_msgs__action__GripperCommand_Feedback__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_SendGoal_Request
 * )) before or use
 * control_msgs__action__GripperCommand_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Request__init(control_msgs__action__GripperCommand_SendGoal_Request * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Request__fini(control_msgs__action__GripperCommand_SendGoal_Request * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_SendGoal_Request *
control_msgs__action__GripperCommand_SendGoal_Request__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Request__destroy(control_msgs__action__GripperCommand_SendGoal_Request * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Request__are_equal(const control_msgs__action__GripperCommand_SendGoal_Request * lhs, const control_msgs__action__GripperCommand_SendGoal_Request * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_SendGoal_Request__copy(
  const control_msgs__action__GripperCommand_SendGoal_Request * input,
  control_msgs__action__GripperCommand_SendGoal_Request * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__init(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__fini(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_SendGoal_Request__Sequence *
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__destroy(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__are_equal(const control_msgs__action__GripperCommand_SendGoal_Request__Sequence * lhs, const control_msgs__action__GripperCommand_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__copy(
  const control_msgs__action__GripperCommand_SendGoal_Request__Sequence * input,
  control_msgs__action__GripperCommand_SendGoal_Request__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_SendGoal_Response
 * )) before or use
 * control_msgs__action__GripperCommand_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Response__init(control_msgs__action__GripperCommand_SendGoal_Response * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Response__fini(control_msgs__action__GripperCommand_SendGoal_Response * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_SendGoal_Response *
control_msgs__action__GripperCommand_SendGoal_Response__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Response__destroy(control_msgs__action__GripperCommand_SendGoal_Response * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Response__are_equal(const control_msgs__action__GripperCommand_SendGoal_Response * lhs, const control_msgs__action__GripperCommand_SendGoal_Response * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_SendGoal_Response__copy(
  const control_msgs__action__GripperCommand_SendGoal_Response * input,
  control_msgs__action__GripperCommand_SendGoal_Response * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__init(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__fini(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_SendGoal_Response__Sequence *
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__destroy(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__are_equal(const control_msgs__action__GripperCommand_SendGoal_Response__Sequence * lhs, const control_msgs__action__GripperCommand_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__copy(
  const control_msgs__action__GripperCommand_SendGoal_Response__Sequence * input,
  control_msgs__action__GripperCommand_SendGoal_Response__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_GetResult_Request
 * )) before or use
 * control_msgs__action__GripperCommand_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Request__init(control_msgs__action__GripperCommand_GetResult_Request * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Request__fini(control_msgs__action__GripperCommand_GetResult_Request * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_GetResult_Request *
control_msgs__action__GripperCommand_GetResult_Request__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Request__destroy(control_msgs__action__GripperCommand_GetResult_Request * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Request__are_equal(const control_msgs__action__GripperCommand_GetResult_Request * lhs, const control_msgs__action__GripperCommand_GetResult_Request * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_GetResult_Request__copy(
  const control_msgs__action__GripperCommand_GetResult_Request * input,
  control_msgs__action__GripperCommand_GetResult_Request * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Request__Sequence__init(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Request__Sequence__fini(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_GetResult_Request__Sequence *
control_msgs__action__GripperCommand_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Request__Sequence__destroy(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Request__Sequence__are_equal(const control_msgs__action__GripperCommand_GetResult_Request__Sequence * lhs, const control_msgs__action__GripperCommand_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_GetResult_Request__Sequence__copy(
  const control_msgs__action__GripperCommand_GetResult_Request__Sequence * input,
  control_msgs__action__GripperCommand_GetResult_Request__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_GetResult_Response
 * )) before or use
 * control_msgs__action__GripperCommand_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Response__init(control_msgs__action__GripperCommand_GetResult_Response * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Response__fini(control_msgs__action__GripperCommand_GetResult_Response * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_GetResult_Response *
control_msgs__action__GripperCommand_GetResult_Response__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Response__destroy(control_msgs__action__GripperCommand_GetResult_Response * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Response__are_equal(const control_msgs__action__GripperCommand_GetResult_Response * lhs, const control_msgs__action__GripperCommand_GetResult_Response * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_GetResult_Response__copy(
  const control_msgs__action__GripperCommand_GetResult_Response * input,
  control_msgs__action__GripperCommand_GetResult_Response * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Response__Sequence__init(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Response__Sequence__fini(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_GetResult_Response__Sequence *
control_msgs__action__GripperCommand_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_GetResult_Response__Sequence__destroy(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_GetResult_Response__Sequence__are_equal(const control_msgs__action__GripperCommand_GetResult_Response__Sequence * lhs, const control_msgs__action__GripperCommand_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_GetResult_Response__Sequence__copy(
  const control_msgs__action__GripperCommand_GetResult_Response__Sequence * input,
  control_msgs__action__GripperCommand_GetResult_Response__Sequence * output);

/// Initialize action/GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__GripperCommand_FeedbackMessage
 * )) before or use
 * control_msgs__action__GripperCommand_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_FeedbackMessage__init(control_msgs__action__GripperCommand_FeedbackMessage * msg);

/// Finalize action/GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_FeedbackMessage__fini(control_msgs__action__GripperCommand_FeedbackMessage * msg);

/// Create action/GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__GripperCommand_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_FeedbackMessage *
control_msgs__action__GripperCommand_FeedbackMessage__create();

/// Destroy action/GripperCommand message.
/**
 * It calls
 * control_msgs__action__GripperCommand_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_FeedbackMessage__destroy(control_msgs__action__GripperCommand_FeedbackMessage * msg);

/// Check for action/GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_FeedbackMessage__are_equal(const control_msgs__action__GripperCommand_FeedbackMessage * lhs, const control_msgs__action__GripperCommand_FeedbackMessage * rhs);

/// Copy a action/GripperCommand message.
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
control_msgs__action__GripperCommand_FeedbackMessage__copy(
  const control_msgs__action__GripperCommand_FeedbackMessage * input,
  control_msgs__action__GripperCommand_FeedbackMessage * output);

/// Initialize array of action/GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__GripperCommand_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__init(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__fini(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array);

/// Create array of action/GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__GripperCommand_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__GripperCommand_FeedbackMessage__Sequence *
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GripperCommand messages.
/**
 * It calls
 * control_msgs__action__GripperCommand_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__destroy(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array);

/// Check for action/GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__are_equal(const control_msgs__action__GripperCommand_FeedbackMessage__Sequence * lhs, const control_msgs__action__GripperCommand_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GripperCommand messages.
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
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__copy(
  const control_msgs__action__GripperCommand_FeedbackMessage__Sequence * input,
  control_msgs__action__GripperCommand_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__FUNCTIONS_H_
