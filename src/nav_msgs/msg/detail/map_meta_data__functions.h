// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_
#define NAV_MSGS__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav_msgs/msg/detail/map_meta_data__struct.h"

/// Initialize msg/MapMetaData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_msgs__msg__MapMetaData
 * )) before or use
 * nav_msgs__msg__MapMetaData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__msg__MapMetaData__init(nav_msgs__msg__MapMetaData * msg);

/// Finalize msg/MapMetaData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__fini(nav_msgs__msg__MapMetaData * msg);

/// Create msg/MapMetaData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_msgs__msg__MapMetaData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__msg__MapMetaData *
nav_msgs__msg__MapMetaData__create();

/// Destroy msg/MapMetaData message.
/**
 * It calls
 * nav_msgs__msg__MapMetaData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__destroy(nav_msgs__msg__MapMetaData * msg);


/// Initialize array of msg/MapMetaData messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_msgs__msg__MapMetaData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__msg__MapMetaData__Sequence__init(nav_msgs__msg__MapMetaData__Sequence * array, size_t size);

/// Finalize array of msg/MapMetaData messages.
/**
 * It calls
 * nav_msgs__msg__MapMetaData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__Sequence__fini(nav_msgs__msg__MapMetaData__Sequence * array);

/// Create array of msg/MapMetaData messages.
/**
 * It allocates the memory for the array and calls
 * nav_msgs__msg__MapMetaData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__msg__MapMetaData__Sequence *
nav_msgs__msg__MapMetaData__Sequence__create(size_t size);

/// Destroy array of msg/MapMetaData messages.
/**
 * It calls
 * nav_msgs__msg__MapMetaData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__msg__MapMetaData__Sequence__destroy(nav_msgs__msg__MapMetaData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_
