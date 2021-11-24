// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__FUNCTIONS_H_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "control_msgs/action/detail/point_head__struct.h"

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_Goal
 * )) before or use
 * control_msgs__action__PointHead_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Goal__init(control_msgs__action__PointHead_Goal * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Goal__fini(control_msgs__action__PointHead_Goal * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Goal *
control_msgs__action__PointHead_Goal__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Goal__destroy(control_msgs__action__PointHead_Goal * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Goal__Sequence__init(control_msgs__action__PointHead_Goal__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Goal__Sequence__fini(control_msgs__action__PointHead_Goal__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Goal__Sequence *
control_msgs__action__PointHead_Goal__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Goal__Sequence__destroy(control_msgs__action__PointHead_Goal__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_Result
 * )) before or use
 * control_msgs__action__PointHead_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Result__init(control_msgs__action__PointHead_Result * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Result__fini(control_msgs__action__PointHead_Result * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Result *
control_msgs__action__PointHead_Result__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Result__destroy(control_msgs__action__PointHead_Result * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Result__Sequence__init(control_msgs__action__PointHead_Result__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Result__Sequence__fini(control_msgs__action__PointHead_Result__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Result__Sequence *
control_msgs__action__PointHead_Result__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Result__Sequence__destroy(control_msgs__action__PointHead_Result__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_Feedback
 * )) before or use
 * control_msgs__action__PointHead_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Feedback__init(control_msgs__action__PointHead_Feedback * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Feedback__fini(control_msgs__action__PointHead_Feedback * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Feedback *
control_msgs__action__PointHead_Feedback__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Feedback__destroy(control_msgs__action__PointHead_Feedback * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_Feedback__Sequence__init(control_msgs__action__PointHead_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Feedback__Sequence__fini(control_msgs__action__PointHead_Feedback__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_Feedback__Sequence *
control_msgs__action__PointHead_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_Feedback__Sequence__destroy(control_msgs__action__PointHead_Feedback__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_SendGoal_Request
 * )) before or use
 * control_msgs__action__PointHead_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_SendGoal_Request__init(control_msgs__action__PointHead_SendGoal_Request * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Request__fini(control_msgs__action__PointHead_SendGoal_Request * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_SendGoal_Request *
control_msgs__action__PointHead_SendGoal_Request__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Request__destroy(control_msgs__action__PointHead_SendGoal_Request * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_SendGoal_Request__Sequence__init(control_msgs__action__PointHead_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Request__Sequence__fini(control_msgs__action__PointHead_SendGoal_Request__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_SendGoal_Request__Sequence *
control_msgs__action__PointHead_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Request__Sequence__destroy(control_msgs__action__PointHead_SendGoal_Request__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_SendGoal_Response
 * )) before or use
 * control_msgs__action__PointHead_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_SendGoal_Response__init(control_msgs__action__PointHead_SendGoal_Response * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Response__fini(control_msgs__action__PointHead_SendGoal_Response * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_SendGoal_Response *
control_msgs__action__PointHead_SendGoal_Response__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Response__destroy(control_msgs__action__PointHead_SendGoal_Response * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_SendGoal_Response__Sequence__init(control_msgs__action__PointHead_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Response__Sequence__fini(control_msgs__action__PointHead_SendGoal_Response__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_SendGoal_Response__Sequence *
control_msgs__action__PointHead_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_SendGoal_Response__Sequence__destroy(control_msgs__action__PointHead_SendGoal_Response__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_GetResult_Request
 * )) before or use
 * control_msgs__action__PointHead_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_GetResult_Request__init(control_msgs__action__PointHead_GetResult_Request * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Request__fini(control_msgs__action__PointHead_GetResult_Request * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_GetResult_Request *
control_msgs__action__PointHead_GetResult_Request__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Request__destroy(control_msgs__action__PointHead_GetResult_Request * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_GetResult_Request__Sequence__init(control_msgs__action__PointHead_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Request__Sequence__fini(control_msgs__action__PointHead_GetResult_Request__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_GetResult_Request__Sequence *
control_msgs__action__PointHead_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Request__Sequence__destroy(control_msgs__action__PointHead_GetResult_Request__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_GetResult_Response
 * )) before or use
 * control_msgs__action__PointHead_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_GetResult_Response__init(control_msgs__action__PointHead_GetResult_Response * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Response__fini(control_msgs__action__PointHead_GetResult_Response * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_GetResult_Response *
control_msgs__action__PointHead_GetResult_Response__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Response__destroy(control_msgs__action__PointHead_GetResult_Response * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_GetResult_Response__Sequence__init(control_msgs__action__PointHead_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Response__Sequence__fini(control_msgs__action__PointHead_GetResult_Response__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_GetResult_Response__Sequence *
control_msgs__action__PointHead_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_GetResult_Response__Sequence__destroy(control_msgs__action__PointHead_GetResult_Response__Sequence * array);

/// Initialize action/PointHead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_msgs__action__PointHead_FeedbackMessage
 * )) before or use
 * control_msgs__action__PointHead_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_FeedbackMessage__init(control_msgs__action__PointHead_FeedbackMessage * msg);

/// Finalize action/PointHead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_FeedbackMessage__fini(control_msgs__action__PointHead_FeedbackMessage * msg);

/// Create action/PointHead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_msgs__action__PointHead_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_FeedbackMessage *
control_msgs__action__PointHead_FeedbackMessage__create();

/// Destroy action/PointHead message.
/**
 * It calls
 * control_msgs__action__PointHead_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_FeedbackMessage__destroy(control_msgs__action__PointHead_FeedbackMessage * msg);


/// Initialize array of action/PointHead messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_msgs__action__PointHead_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
bool
control_msgs__action__PointHead_FeedbackMessage__Sequence__init(control_msgs__action__PointHead_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_FeedbackMessage__Sequence__fini(control_msgs__action__PointHead_FeedbackMessage__Sequence * array);

/// Create array of action/PointHead messages.
/**
 * It allocates the memory for the array and calls
 * control_msgs__action__PointHead_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
control_msgs__action__PointHead_FeedbackMessage__Sequence *
control_msgs__action__PointHead_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PointHead messages.
/**
 * It calls
 * control_msgs__action__PointHead_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_msgs
void
control_msgs__action__PointHead_FeedbackMessage__Sequence__destroy(control_msgs__action__PointHead_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__FUNCTIONS_H_
