// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__FUNCTIONS_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "visualization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "visualization_msgs/msg/detail/interactive_marker_init__struct.h"

/// Initialize msg/InteractiveMarkerInit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visualization_msgs__msg__InteractiveMarkerInit
 * )) before or use
 * visualization_msgs__msg__InteractiveMarkerInit__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__msg__InteractiveMarkerInit__init(visualization_msgs__msg__InteractiveMarkerInit * msg);

/// Finalize msg/InteractiveMarkerInit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__InteractiveMarkerInit__fini(visualization_msgs__msg__InteractiveMarkerInit * msg);

/// Create msg/InteractiveMarkerInit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visualization_msgs__msg__InteractiveMarkerInit__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__msg__InteractiveMarkerInit *
visualization_msgs__msg__InteractiveMarkerInit__create();

/// Destroy msg/InteractiveMarkerInit message.
/**
 * It calls
 * visualization_msgs__msg__InteractiveMarkerInit__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__InteractiveMarkerInit__destroy(visualization_msgs__msg__InteractiveMarkerInit * msg);


/// Initialize array of msg/InteractiveMarkerInit messages.
/**
 * It allocates the memory for the number of elements and calls
 * visualization_msgs__msg__InteractiveMarkerInit__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__msg__InteractiveMarkerInit__Sequence__init(visualization_msgs__msg__InteractiveMarkerInit__Sequence * array, size_t size);

/// Finalize array of msg/InteractiveMarkerInit messages.
/**
 * It calls
 * visualization_msgs__msg__InteractiveMarkerInit__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__InteractiveMarkerInit__Sequence__fini(visualization_msgs__msg__InteractiveMarkerInit__Sequence * array);

/// Create array of msg/InteractiveMarkerInit messages.
/**
 * It allocates the memory for the array and calls
 * visualization_msgs__msg__InteractiveMarkerInit__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__msg__InteractiveMarkerInit__Sequence *
visualization_msgs__msg__InteractiveMarkerInit__Sequence__create(size_t size);

/// Destroy array of msg/InteractiveMarkerInit messages.
/**
 * It calls
 * visualization_msgs__msg__InteractiveMarkerInit__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__InteractiveMarkerInit__Sequence__destroy(visualization_msgs__msg__InteractiveMarkerInit__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__FUNCTIONS_H_
