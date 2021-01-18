// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__FUNCTIONS_H_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "diagnostic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "diagnostic_msgs/srv/detail/self_test__struct.h"

/// Initialize srv/SelfTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * diagnostic_msgs__srv__SelfTest_Request
 * )) before or use
 * diagnostic_msgs__srv__SelfTest_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Request__init(diagnostic_msgs__srv__SelfTest_Request * msg);

/// Finalize srv/SelfTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Request__fini(diagnostic_msgs__srv__SelfTest_Request * msg);

/// Create srv/SelfTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * diagnostic_msgs__srv__SelfTest_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Request *
diagnostic_msgs__srv__SelfTest_Request__create();

/// Destroy srv/SelfTest message.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Request__destroy(diagnostic_msgs__srv__SelfTest_Request * msg);


/// Initialize array of srv/SelfTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * diagnostic_msgs__srv__SelfTest_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Request__Sequence__init(diagnostic_msgs__srv__SelfTest_Request__Sequence * array, size_t size);

/// Finalize array of srv/SelfTest messages.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Request__Sequence__fini(diagnostic_msgs__srv__SelfTest_Request__Sequence * array);

/// Create array of srv/SelfTest messages.
/**
 * It allocates the memory for the array and calls
 * diagnostic_msgs__srv__SelfTest_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Request__Sequence *
diagnostic_msgs__srv__SelfTest_Request__Sequence__create(size_t size);

/// Destroy array of srv/SelfTest messages.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Request__Sequence__destroy(diagnostic_msgs__srv__SelfTest_Request__Sequence * array);

/// Initialize srv/SelfTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * diagnostic_msgs__srv__SelfTest_Response
 * )) before or use
 * diagnostic_msgs__srv__SelfTest_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Response__init(diagnostic_msgs__srv__SelfTest_Response * msg);

/// Finalize srv/SelfTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__fini(diagnostic_msgs__srv__SelfTest_Response * msg);

/// Create srv/SelfTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * diagnostic_msgs__srv__SelfTest_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Response *
diagnostic_msgs__srv__SelfTest_Response__create();

/// Destroy srv/SelfTest message.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__destroy(diagnostic_msgs__srv__SelfTest_Response * msg);


/// Initialize array of srv/SelfTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * diagnostic_msgs__srv__SelfTest_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Response__Sequence__init(diagnostic_msgs__srv__SelfTest_Response__Sequence * array, size_t size);

/// Finalize array of srv/SelfTest messages.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__Sequence__fini(diagnostic_msgs__srv__SelfTest_Response__Sequence * array);

/// Create array of srv/SelfTest messages.
/**
 * It allocates the memory for the array and calls
 * diagnostic_msgs__srv__SelfTest_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Response__Sequence *
diagnostic_msgs__srv__SelfTest_Response__Sequence__create(size_t size);

/// Destroy array of srv/SelfTest messages.
/**
 * It calls
 * diagnostic_msgs__srv__SelfTest_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__Sequence__destroy(diagnostic_msgs__srv__SelfTest_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__FUNCTIONS_H_
