// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__BASIC_TYPES__FUNCTIONS_H_
#define TEST_MSGS__SRV__DETAIL__BASIC_TYPES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "test_msgs/srv/detail/basic_types__struct.h"

/// Initialize srv/BasicTypes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__srv__BasicTypes_Request
 * )) before or use
 * test_msgs__srv__BasicTypes_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__srv__BasicTypes_Request__init(test_msgs__srv__BasicTypes_Request * msg);

/// Finalize srv/BasicTypes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Request__fini(test_msgs__srv__BasicTypes_Request * msg);

/// Create srv/BasicTypes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__srv__BasicTypes_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__srv__BasicTypes_Request *
test_msgs__srv__BasicTypes_Request__create();

/// Destroy srv/BasicTypes message.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Request__destroy(test_msgs__srv__BasicTypes_Request * msg);


/// Initialize array of srv/BasicTypes messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__srv__BasicTypes_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__srv__BasicTypes_Request__Sequence__init(test_msgs__srv__BasicTypes_Request__Sequence * array, size_t size);

/// Finalize array of srv/BasicTypes messages.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Request__Sequence__fini(test_msgs__srv__BasicTypes_Request__Sequence * array);

/// Create array of srv/BasicTypes messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__srv__BasicTypes_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__srv__BasicTypes_Request__Sequence *
test_msgs__srv__BasicTypes_Request__Sequence__create(size_t size);

/// Destroy array of srv/BasicTypes messages.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Request__Sequence__destroy(test_msgs__srv__BasicTypes_Request__Sequence * array);

/// Initialize srv/BasicTypes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__srv__BasicTypes_Response
 * )) before or use
 * test_msgs__srv__BasicTypes_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__srv__BasicTypes_Response__init(test_msgs__srv__BasicTypes_Response * msg);

/// Finalize srv/BasicTypes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Response__fini(test_msgs__srv__BasicTypes_Response * msg);

/// Create srv/BasicTypes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__srv__BasicTypes_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__srv__BasicTypes_Response *
test_msgs__srv__BasicTypes_Response__create();

/// Destroy srv/BasicTypes message.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Response__destroy(test_msgs__srv__BasicTypes_Response * msg);


/// Initialize array of srv/BasicTypes messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__srv__BasicTypes_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__srv__BasicTypes_Response__Sequence__init(test_msgs__srv__BasicTypes_Response__Sequence * array, size_t size);

/// Finalize array of srv/BasicTypes messages.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Response__Sequence__fini(test_msgs__srv__BasicTypes_Response__Sequence * array);

/// Create array of srv/BasicTypes messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__srv__BasicTypes_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__srv__BasicTypes_Response__Sequence *
test_msgs__srv__BasicTypes_Response__Sequence__create(size_t size);

/// Destroy array of srv/BasicTypes messages.
/**
 * It calls
 * test_msgs__srv__BasicTypes_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__srv__BasicTypes_Response__Sequence__destroy(test_msgs__srv__BasicTypes_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__DETAIL__BASIC_TYPES__FUNCTIONS_H_
