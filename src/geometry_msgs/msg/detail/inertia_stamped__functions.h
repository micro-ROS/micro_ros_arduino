// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geometry_msgs:msg/InertiaStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__FUNCTIONS_H_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geometry_msgs/msg/detail/inertia_stamped__struct.h"

/// Initialize msg/InertiaStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geometry_msgs__msg__InertiaStamped
 * )) before or use
 * geometry_msgs__msg__InertiaStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__InertiaStamped__init(geometry_msgs__msg__InertiaStamped * msg);

/// Finalize msg/InertiaStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__InertiaStamped__fini(geometry_msgs__msg__InertiaStamped * msg);

/// Create msg/InertiaStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geometry_msgs__msg__InertiaStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__InertiaStamped *
geometry_msgs__msg__InertiaStamped__create();

/// Destroy msg/InertiaStamped message.
/**
 * It calls
 * geometry_msgs__msg__InertiaStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__InertiaStamped__destroy(geometry_msgs__msg__InertiaStamped * msg);


/// Initialize array of msg/InertiaStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * geometry_msgs__msg__InertiaStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__InertiaStamped__Sequence__init(geometry_msgs__msg__InertiaStamped__Sequence * array, size_t size);

/// Finalize array of msg/InertiaStamped messages.
/**
 * It calls
 * geometry_msgs__msg__InertiaStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__InertiaStamped__Sequence__fini(geometry_msgs__msg__InertiaStamped__Sequence * array);

/// Create array of msg/InertiaStamped messages.
/**
 * It allocates the memory for the array and calls
 * geometry_msgs__msg__InertiaStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__InertiaStamped__Sequence *
geometry_msgs__msg__InertiaStamped__Sequence__create(size_t size);

/// Destroy array of msg/InertiaStamped messages.
/**
 * It calls
 * geometry_msgs__msg__InertiaStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__InertiaStamped__Sequence__destroy(geometry_msgs__msg__InertiaStamped__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__FUNCTIONS_H_
