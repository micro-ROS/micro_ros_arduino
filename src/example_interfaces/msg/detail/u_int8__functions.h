// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from example_interfaces:msg/UInt8.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__FUNCTIONS_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "example_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "example_interfaces/msg/detail/u_int8__struct.h"

/// Initialize msg/UInt8 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * example_interfaces__msg__UInt8
 * )) before or use
 * example_interfaces__msg__UInt8__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__UInt8__init(example_interfaces__msg__UInt8 * msg);

/// Finalize msg/UInt8 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__UInt8__fini(example_interfaces__msg__UInt8 * msg);

/// Create msg/UInt8 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * example_interfaces__msg__UInt8__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__UInt8 *
example_interfaces__msg__UInt8__create();

/// Destroy msg/UInt8 message.
/**
 * It calls
 * example_interfaces__msg__UInt8__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__UInt8__destroy(example_interfaces__msg__UInt8 * msg);


/// Initialize array of msg/UInt8 messages.
/**
 * It allocates the memory for the number of elements and calls
 * example_interfaces__msg__UInt8__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__UInt8__Sequence__init(example_interfaces__msg__UInt8__Sequence * array, size_t size);

/// Finalize array of msg/UInt8 messages.
/**
 * It calls
 * example_interfaces__msg__UInt8__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__UInt8__Sequence__fini(example_interfaces__msg__UInt8__Sequence * array);

/// Create array of msg/UInt8 messages.
/**
 * It allocates the memory for the array and calls
 * example_interfaces__msg__UInt8__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__UInt8__Sequence *
example_interfaces__msg__UInt8__Sequence__create(size_t size);

/// Destroy array of msg/UInt8 messages.
/**
 * It calls
 * example_interfaces__msg__UInt8__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__UInt8__Sequence__destroy(example_interfaces__msg__UInt8__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__FUNCTIONS_H_
