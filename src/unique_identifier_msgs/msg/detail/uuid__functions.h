// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__FUNCTIONS_H_
#define UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "unique_identifier_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Initialize msg/UUID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unique_identifier_msgs__msg__UUID
 * )) before or use
 * unique_identifier_msgs__msg__UUID__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
bool
unique_identifier_msgs__msg__UUID__init(unique_identifier_msgs__msg__UUID * msg);

/// Finalize msg/UUID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
void
unique_identifier_msgs__msg__UUID__fini(unique_identifier_msgs__msg__UUID * msg);

/// Create msg/UUID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unique_identifier_msgs__msg__UUID__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
unique_identifier_msgs__msg__UUID *
unique_identifier_msgs__msg__UUID__create();

/// Destroy msg/UUID message.
/**
 * It calls
 * unique_identifier_msgs__msg__UUID__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
void
unique_identifier_msgs__msg__UUID__destroy(unique_identifier_msgs__msg__UUID * msg);


/// Initialize array of msg/UUID messages.
/**
 * It allocates the memory for the number of elements and calls
 * unique_identifier_msgs__msg__UUID__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
bool
unique_identifier_msgs__msg__UUID__Sequence__init(unique_identifier_msgs__msg__UUID__Sequence * array, size_t size);

/// Finalize array of msg/UUID messages.
/**
 * It calls
 * unique_identifier_msgs__msg__UUID__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
void
unique_identifier_msgs__msg__UUID__Sequence__fini(unique_identifier_msgs__msg__UUID__Sequence * array);

/// Create array of msg/UUID messages.
/**
 * It allocates the memory for the array and calls
 * unique_identifier_msgs__msg__UUID__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
unique_identifier_msgs__msg__UUID__Sequence *
unique_identifier_msgs__msg__UUID__Sequence__create(size_t size);

/// Destroy array of msg/UUID messages.
/**
 * It calls
 * unique_identifier_msgs__msg__UUID__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unique_identifier_msgs
void
unique_identifier_msgs__msg__UUID__Sequence__destroy(unique_identifier_msgs__msg__UUID__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__FUNCTIONS_H_
