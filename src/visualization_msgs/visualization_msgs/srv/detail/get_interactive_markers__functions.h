// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__FUNCTIONS_H_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "visualization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "visualization_msgs/srv/detail/get_interactive_markers__struct.h"

/// Initialize srv/GetInteractiveMarkers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visualization_msgs__srv__GetInteractiveMarkers_Request
 * )) before or use
 * visualization_msgs__srv__GetInteractiveMarkers_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__init(visualization_msgs__srv__GetInteractiveMarkers_Request * msg);

/// Finalize srv/GetInteractiveMarkers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Request__fini(visualization_msgs__srv__GetInteractiveMarkers_Request * msg);

/// Create srv/GetInteractiveMarkers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__srv__GetInteractiveMarkers_Request *
visualization_msgs__srv__GetInteractiveMarkers_Request__create();

/// Destroy srv/GetInteractiveMarkers message.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Request__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request * msg);

/// Check for srv/GetInteractiveMarkers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Request * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Request * rhs);

/// Copy a srv/GetInteractiveMarkers message.
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
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Request * input,
  visualization_msgs__srv__GetInteractiveMarkers_Request * output);

/// Initialize array of srv/GetInteractiveMarkers messages.
/**
 * It allocates the memory for the number of elements and calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetInteractiveMarkers messages.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array);

/// Create array of srv/GetInteractiveMarkers messages.
/**
 * It allocates the memory for the array and calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetInteractiveMarkers messages.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array);

/// Check for srv/GetInteractiveMarkers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * rhs);

/// Copy an array of srv/GetInteractiveMarkers messages.
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
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * input,
  visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * output);

/// Initialize srv/GetInteractiveMarkers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visualization_msgs__srv__GetInteractiveMarkers_Response
 * )) before or use
 * visualization_msgs__srv__GetInteractiveMarkers_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__init(visualization_msgs__srv__GetInteractiveMarkers_Response * msg);

/// Finalize srv/GetInteractiveMarkers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Response__fini(visualization_msgs__srv__GetInteractiveMarkers_Response * msg);

/// Create srv/GetInteractiveMarkers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__srv__GetInteractiveMarkers_Response *
visualization_msgs__srv__GetInteractiveMarkers_Response__create();

/// Destroy srv/GetInteractiveMarkers message.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Response__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response * msg);

/// Check for srv/GetInteractiveMarkers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Response * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Response * rhs);

/// Copy a srv/GetInteractiveMarkers message.
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
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Response * input,
  visualization_msgs__srv__GetInteractiveMarkers_Response * output);

/// Initialize array of srv/GetInteractiveMarkers messages.
/**
 * It allocates the memory for the number of elements and calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetInteractiveMarkers messages.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array);

/// Create array of srv/GetInteractiveMarkers messages.
/**
 * It allocates the memory for the array and calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetInteractiveMarkers messages.
/**
 * It calls
 * visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array);

/// Check for srv/GetInteractiveMarkers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * rhs);

/// Copy an array of srv/GetInteractiveMarkers messages.
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
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * input,
  visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__FUNCTIONS_H_
