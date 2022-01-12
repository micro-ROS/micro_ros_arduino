// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from example_interfaces:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__FUNCTIONS_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "example_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "example_interfaces/msg/detail/byte_multi_array__struct.h"

/// Initialize msg/ByteMultiArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * example_interfaces__msg__ByteMultiArray
 * )) before or use
 * example_interfaces__msg__ByteMultiArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__ByteMultiArray__init(example_interfaces__msg__ByteMultiArray * msg);

/// Finalize msg/ByteMultiArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__ByteMultiArray__fini(example_interfaces__msg__ByteMultiArray * msg);

/// Create msg/ByteMultiArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * example_interfaces__msg__ByteMultiArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__ByteMultiArray *
example_interfaces__msg__ByteMultiArray__create();

/// Destroy msg/ByteMultiArray message.
/**
 * It calls
 * example_interfaces__msg__ByteMultiArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__ByteMultiArray__destroy(example_interfaces__msg__ByteMultiArray * msg);


/// Initialize array of msg/ByteMultiArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * example_interfaces__msg__ByteMultiArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__msg__ByteMultiArray__Sequence__init(example_interfaces__msg__ByteMultiArray__Sequence * array, size_t size);

/// Finalize array of msg/ByteMultiArray messages.
/**
 * It calls
 * example_interfaces__msg__ByteMultiArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__ByteMultiArray__Sequence__fini(example_interfaces__msg__ByteMultiArray__Sequence * array);

/// Create array of msg/ByteMultiArray messages.
/**
 * It allocates the memory for the array and calls
 * example_interfaces__msg__ByteMultiArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__msg__ByteMultiArray__Sequence *
example_interfaces__msg__ByteMultiArray__Sequence__create(size_t size);

/// Destroy array of msg/ByteMultiArray messages.
/**
 * It calls
 * example_interfaces__msg__ByteMultiArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__msg__ByteMultiArray__Sequence__destroy(example_interfaces__msg__ByteMultiArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__FUNCTIONS_H_
