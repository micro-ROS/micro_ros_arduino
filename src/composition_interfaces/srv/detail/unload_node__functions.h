// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from composition_interfaces:srv/UnloadNode.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__FUNCTIONS_H_
#define COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "composition_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "composition_interfaces/srv/detail/unload_node__struct.h"

/// Initialize srv/UnloadNode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * composition_interfaces__srv__UnloadNode_Request
 * )) before or use
 * composition_interfaces__srv__UnloadNode_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__init(composition_interfaces__srv__UnloadNode_Request * msg);

/// Finalize srv/UnloadNode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Request__fini(composition_interfaces__srv__UnloadNode_Request * msg);

/// Create srv/UnloadNode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * composition_interfaces__srv__UnloadNode_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
composition_interfaces__srv__UnloadNode_Request *
composition_interfaces__srv__UnloadNode_Request__create();

/// Destroy srv/UnloadNode message.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Request__destroy(composition_interfaces__srv__UnloadNode_Request * msg);

/// Check for srv/UnloadNode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__are_equal(const composition_interfaces__srv__UnloadNode_Request * lhs, const composition_interfaces__srv__UnloadNode_Request * rhs);

/// Copy a srv/UnloadNode message.
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
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__copy(
  const composition_interfaces__srv__UnloadNode_Request * input,
  composition_interfaces__srv__UnloadNode_Request * output);

/// Initialize array of srv/UnloadNode messages.
/**
 * It allocates the memory for the number of elements and calls
 * composition_interfaces__srv__UnloadNode_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__Sequence__init(composition_interfaces__srv__UnloadNode_Request__Sequence * array, size_t size);

/// Finalize array of srv/UnloadNode messages.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Request__Sequence__fini(composition_interfaces__srv__UnloadNode_Request__Sequence * array);

/// Create array of srv/UnloadNode messages.
/**
 * It allocates the memory for the array and calls
 * composition_interfaces__srv__UnloadNode_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
composition_interfaces__srv__UnloadNode_Request__Sequence *
composition_interfaces__srv__UnloadNode_Request__Sequence__create(size_t size);

/// Destroy array of srv/UnloadNode messages.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Request__Sequence__destroy(composition_interfaces__srv__UnloadNode_Request__Sequence * array);

/// Check for srv/UnloadNode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__Sequence__are_equal(const composition_interfaces__srv__UnloadNode_Request__Sequence * lhs, const composition_interfaces__srv__UnloadNode_Request__Sequence * rhs);

/// Copy an array of srv/UnloadNode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Request__Sequence__copy(
  const composition_interfaces__srv__UnloadNode_Request__Sequence * input,
  composition_interfaces__srv__UnloadNode_Request__Sequence * output);

/// Initialize srv/UnloadNode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * composition_interfaces__srv__UnloadNode_Response
 * )) before or use
 * composition_interfaces__srv__UnloadNode_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__init(composition_interfaces__srv__UnloadNode_Response * msg);

/// Finalize srv/UnloadNode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Response__fini(composition_interfaces__srv__UnloadNode_Response * msg);

/// Create srv/UnloadNode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * composition_interfaces__srv__UnloadNode_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
composition_interfaces__srv__UnloadNode_Response *
composition_interfaces__srv__UnloadNode_Response__create();

/// Destroy srv/UnloadNode message.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Response__destroy(composition_interfaces__srv__UnloadNode_Response * msg);

/// Check for srv/UnloadNode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__are_equal(const composition_interfaces__srv__UnloadNode_Response * lhs, const composition_interfaces__srv__UnloadNode_Response * rhs);

/// Copy a srv/UnloadNode message.
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
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__copy(
  const composition_interfaces__srv__UnloadNode_Response * input,
  composition_interfaces__srv__UnloadNode_Response * output);

/// Initialize array of srv/UnloadNode messages.
/**
 * It allocates the memory for the number of elements and calls
 * composition_interfaces__srv__UnloadNode_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__Sequence__init(composition_interfaces__srv__UnloadNode_Response__Sequence * array, size_t size);

/// Finalize array of srv/UnloadNode messages.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Response__Sequence__fini(composition_interfaces__srv__UnloadNode_Response__Sequence * array);

/// Create array of srv/UnloadNode messages.
/**
 * It allocates the memory for the array and calls
 * composition_interfaces__srv__UnloadNode_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
composition_interfaces__srv__UnloadNode_Response__Sequence *
composition_interfaces__srv__UnloadNode_Response__Sequence__create(size_t size);

/// Destroy array of srv/UnloadNode messages.
/**
 * It calls
 * composition_interfaces__srv__UnloadNode_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
void
composition_interfaces__srv__UnloadNode_Response__Sequence__destroy(composition_interfaces__srv__UnloadNode_Response__Sequence * array);

/// Check for srv/UnloadNode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__Sequence__are_equal(const composition_interfaces__srv__UnloadNode_Response__Sequence * lhs, const composition_interfaces__srv__UnloadNode_Response__Sequence * rhs);

/// Copy an array of srv/UnloadNode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_composition_interfaces
bool
composition_interfaces__srv__UnloadNode_Response__Sequence__copy(
  const composition_interfaces__srv__UnloadNode_Response__Sequence * input,
  composition_interfaces__srv__UnloadNode_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__FUNCTIONS_H_
