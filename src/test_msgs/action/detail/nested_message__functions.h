// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_msgs:action/NestedMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__FUNCTIONS_H_
#define TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "test_msgs/action/detail/nested_message__struct.h"

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_Goal
 * )) before or use
 * test_msgs__action__NestedMessage_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Goal__init(test_msgs__action__NestedMessage_Goal * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Goal__fini(test_msgs__action__NestedMessage_Goal * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Goal *
test_msgs__action__NestedMessage_Goal__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Goal__destroy(test_msgs__action__NestedMessage_Goal * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Goal__Sequence__init(test_msgs__action__NestedMessage_Goal__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Goal__Sequence__fini(test_msgs__action__NestedMessage_Goal__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Goal__Sequence *
test_msgs__action__NestedMessage_Goal__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Goal__Sequence__destroy(test_msgs__action__NestedMessage_Goal__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_Result
 * )) before or use
 * test_msgs__action__NestedMessage_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Result__init(test_msgs__action__NestedMessage_Result * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Result__fini(test_msgs__action__NestedMessage_Result * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Result *
test_msgs__action__NestedMessage_Result__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Result__destroy(test_msgs__action__NestedMessage_Result * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Result__Sequence__init(test_msgs__action__NestedMessage_Result__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Result__Sequence__fini(test_msgs__action__NestedMessage_Result__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Result__Sequence *
test_msgs__action__NestedMessage_Result__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Result__Sequence__destroy(test_msgs__action__NestedMessage_Result__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_Feedback
 * )) before or use
 * test_msgs__action__NestedMessage_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Feedback__init(test_msgs__action__NestedMessage_Feedback * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Feedback__fini(test_msgs__action__NestedMessage_Feedback * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Feedback *
test_msgs__action__NestedMessage_Feedback__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Feedback__destroy(test_msgs__action__NestedMessage_Feedback * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_Feedback__Sequence__init(test_msgs__action__NestedMessage_Feedback__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Feedback__Sequence__fini(test_msgs__action__NestedMessage_Feedback__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_Feedback__Sequence *
test_msgs__action__NestedMessage_Feedback__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_Feedback__Sequence__destroy(test_msgs__action__NestedMessage_Feedback__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_SendGoal_Request
 * )) before or use
 * test_msgs__action__NestedMessage_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_SendGoal_Request__init(test_msgs__action__NestedMessage_SendGoal_Request * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Request__fini(test_msgs__action__NestedMessage_SendGoal_Request * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_SendGoal_Request *
test_msgs__action__NestedMessage_SendGoal_Request__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Request__destroy(test_msgs__action__NestedMessage_SendGoal_Request * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__init(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__fini(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_SendGoal_Request__Sequence *
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__destroy(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_SendGoal_Response
 * )) before or use
 * test_msgs__action__NestedMessage_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_SendGoal_Response__init(test_msgs__action__NestedMessage_SendGoal_Response * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Response__fini(test_msgs__action__NestedMessage_SendGoal_Response * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_SendGoal_Response *
test_msgs__action__NestedMessage_SendGoal_Response__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Response__destroy(test_msgs__action__NestedMessage_SendGoal_Response * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__init(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__fini(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_SendGoal_Response__Sequence *
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__destroy(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_GetResult_Request
 * )) before or use
 * test_msgs__action__NestedMessage_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_GetResult_Request__init(test_msgs__action__NestedMessage_GetResult_Request * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Request__fini(test_msgs__action__NestedMessage_GetResult_Request * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_GetResult_Request *
test_msgs__action__NestedMessage_GetResult_Request__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Request__destroy(test_msgs__action__NestedMessage_GetResult_Request * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_GetResult_Request__Sequence__init(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Request__Sequence__fini(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_GetResult_Request__Sequence *
test_msgs__action__NestedMessage_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Request__Sequence__destroy(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_GetResult_Response
 * )) before or use
 * test_msgs__action__NestedMessage_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_GetResult_Response__init(test_msgs__action__NestedMessage_GetResult_Response * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Response__fini(test_msgs__action__NestedMessage_GetResult_Response * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_GetResult_Response *
test_msgs__action__NestedMessage_GetResult_Response__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Response__destroy(test_msgs__action__NestedMessage_GetResult_Response * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_GetResult_Response__Sequence__init(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Response__Sequence__fini(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_GetResult_Response__Sequence *
test_msgs__action__NestedMessage_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_GetResult_Response__Sequence__destroy(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array);

/// Initialize action/NestedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__action__NestedMessage_FeedbackMessage
 * )) before or use
 * test_msgs__action__NestedMessage_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_FeedbackMessage__init(test_msgs__action__NestedMessage_FeedbackMessage * msg);

/// Finalize action/NestedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_FeedbackMessage__fini(test_msgs__action__NestedMessage_FeedbackMessage * msg);

/// Create action/NestedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__action__NestedMessage_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_FeedbackMessage *
test_msgs__action__NestedMessage_FeedbackMessage__create();

/// Destroy action/NestedMessage message.
/**
 * It calls
 * test_msgs__action__NestedMessage_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_FeedbackMessage__destroy(test_msgs__action__NestedMessage_FeedbackMessage * msg);


/// Initialize array of action/NestedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__action__NestedMessage_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__init(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__fini(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array);

/// Create array of action/NestedMessage messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__action__NestedMessage_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__action__NestedMessage_FeedbackMessage__Sequence *
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/NestedMessage messages.
/**
 * It calls
 * test_msgs__action__NestedMessage_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__destroy(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__FUNCTIONS_H_
