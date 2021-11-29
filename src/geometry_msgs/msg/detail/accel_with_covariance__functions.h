// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__FUNCTIONS_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

/// Initialize msg/AccelWithCovariance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geometry_msgs__msg__AccelWithCovariance
 * )) before or use
 * geometry_msgs__msg__AccelWithCovariance__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__AccelWithCovariance__init(geometry_msgs__msg__AccelWithCovariance * msg);

/// Finalize msg/AccelWithCovariance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__AccelWithCovariance__fini(geometry_msgs__msg__AccelWithCovariance * msg);

/// Create msg/AccelWithCovariance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geometry_msgs__msg__AccelWithCovariance__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__AccelWithCovariance *
geometry_msgs__msg__AccelWithCovariance__create();

/// Destroy msg/AccelWithCovariance message.
/**
 * It calls
 * geometry_msgs__msg__AccelWithCovariance__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__AccelWithCovariance__destroy(geometry_msgs__msg__AccelWithCovariance * msg);


/// Initialize array of msg/AccelWithCovariance messages.
/**
 * It allocates the memory for the number of elements and calls
 * geometry_msgs__msg__AccelWithCovariance__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__AccelWithCovariance__Sequence__init(geometry_msgs__msg__AccelWithCovariance__Sequence * array, size_t size);

/// Finalize array of msg/AccelWithCovariance messages.
/**
 * It calls
 * geometry_msgs__msg__AccelWithCovariance__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__AccelWithCovariance__Sequence__fini(geometry_msgs__msg__AccelWithCovariance__Sequence * array);

/// Create array of msg/AccelWithCovariance messages.
/**
 * It allocates the memory for the array and calls
 * geometry_msgs__msg__AccelWithCovariance__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__AccelWithCovariance__Sequence *
geometry_msgs__msg__AccelWithCovariance__Sequence__create(size_t size);

/// Destroy array of msg/AccelWithCovariance messages.
/**
 * It calls
 * geometry_msgs__msg__AccelWithCovariance__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__AccelWithCovariance__Sequence__destroy(geometry_msgs__msg__AccelWithCovariance__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__FUNCTIONS_H_
