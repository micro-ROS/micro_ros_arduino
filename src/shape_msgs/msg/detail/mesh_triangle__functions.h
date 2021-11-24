// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__FUNCTIONS_H_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "shape_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "shape_msgs/msg/detail/mesh_triangle__struct.h"

/// Initialize msg/MeshTriangle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * shape_msgs__msg__MeshTriangle
 * )) before or use
 * shape_msgs__msg__MeshTriangle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__MeshTriangle__init(shape_msgs__msg__MeshTriangle * msg);

/// Finalize msg/MeshTriangle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__MeshTriangle__fini(shape_msgs__msg__MeshTriangle * msg);

/// Create msg/MeshTriangle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * shape_msgs__msg__MeshTriangle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__MeshTriangle *
shape_msgs__msg__MeshTriangle__create();

/// Destroy msg/MeshTriangle message.
/**
 * It calls
 * shape_msgs__msg__MeshTriangle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__MeshTriangle__destroy(shape_msgs__msg__MeshTriangle * msg);


/// Initialize array of msg/MeshTriangle messages.
/**
 * It allocates the memory for the number of elements and calls
 * shape_msgs__msg__MeshTriangle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__MeshTriangle__Sequence__init(shape_msgs__msg__MeshTriangle__Sequence * array, size_t size);

/// Finalize array of msg/MeshTriangle messages.
/**
 * It calls
 * shape_msgs__msg__MeshTriangle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__MeshTriangle__Sequence__fini(shape_msgs__msg__MeshTriangle__Sequence * array);

/// Create array of msg/MeshTriangle messages.
/**
 * It allocates the memory for the array and calls
 * shape_msgs__msg__MeshTriangle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__MeshTriangle__Sequence *
shape_msgs__msg__MeshTriangle__Sequence__create(size_t size);

/// Destroy array of msg/MeshTriangle messages.
/**
 * It calls
 * shape_msgs__msg__MeshTriangle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__MeshTriangle__Sequence__destroy(shape_msgs__msg__MeshTriangle__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__FUNCTIONS_H_
