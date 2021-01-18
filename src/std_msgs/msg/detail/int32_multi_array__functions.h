// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__FUNCTIONS_H_
#define STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "std_msgs/msg/detail/int32_multi_array__struct.h"

/// Initialize msg/Int32MultiArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_msgs__msg__Int32MultiArray
 * )) before or use
 * std_msgs__msg__Int32MultiArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Int32MultiArray__init(std_msgs__msg__Int32MultiArray * msg);

/// Finalize msg/Int32MultiArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32MultiArray__fini(std_msgs__msg__Int32MultiArray * msg);

/// Create msg/Int32MultiArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_msgs__msg__Int32MultiArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Int32MultiArray *
std_msgs__msg__Int32MultiArray__create();

/// Destroy msg/Int32MultiArray message.
/**
 * It calls
 * std_msgs__msg__Int32MultiArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32MultiArray__destroy(std_msgs__msg__Int32MultiArray * msg);


/// Initialize array of msg/Int32MultiArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_msgs__msg__Int32MultiArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Int32MultiArray__Sequence__init(std_msgs__msg__Int32MultiArray__Sequence * array, size_t size);

/// Finalize array of msg/Int32MultiArray messages.
/**
 * It calls
 * std_msgs__msg__Int32MultiArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32MultiArray__Sequence__fini(std_msgs__msg__Int32MultiArray__Sequence * array);

/// Create array of msg/Int32MultiArray messages.
/**
 * It allocates the memory for the array and calls
 * std_msgs__msg__Int32MultiArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Int32MultiArray__Sequence *
std_msgs__msg__Int32MultiArray__Sequence__create(size_t size);

/// Destroy array of msg/Int32MultiArray messages.
/**
 * It calls
 * std_msgs__msg__Int32MultiArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32MultiArray__Sequence__destroy(std_msgs__msg__Int32MultiArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__FUNCTIONS_H_
