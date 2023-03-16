// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/ParameterEvent.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__msg__ParameterEvent__TYPE_VERSION_HASH__INIT {1, { \
      0x7b, 0xb9, 0x08, 0x16, 0xcc, 0xaa, 0x85, 0xc1, \
      0x97, 0xdb, 0x9d, 0x04, 0xd4, 0x33, 0x3a, 0x00, \
      0xb7, 0xa3, 0xce, 0x43, 0xc7, 0xf8, 0x75, 0xb7, \
      0x37, 0x7b, 0x77, 0x58, 0x75, 0x5a, 0xad, 0x7a, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__ParameterEvent__TYPE_VERSION_HASH = rcl_interfaces__msg__ParameterEvent__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'node'
#include "rosidl_runtime_c/string.h"
// Member 'new_parameters'
// Member 'changed_parameters'
// Member 'deleted_parameters'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in msg/ParameterEvent in the package rcl_interfaces.
/**
  * This message contains a parameter event.
  * Because the parameter event was an atomic update, a specific parameter name
  * can only be in one of the three sets.
 */
typedef struct rcl_interfaces__msg__ParameterEvent
{
  /// The time stamp when this parameter event occurred.
  builtin_interfaces__msg__Time stamp;
  /// Fully qualified ROS path to node.
  rosidl_runtime_c__String node;
  /// New parameters that have been set for this node.
  rcl_interfaces__msg__Parameter__Sequence new_parameters;
  /// Parameters that have been changed during this event.
  rcl_interfaces__msg__Parameter__Sequence changed_parameters;
  /// Parameters that have been deleted during this event.
  rcl_interfaces__msg__Parameter__Sequence deleted_parameters;
} rcl_interfaces__msg__ParameterEvent;

// Struct for a sequence of rcl_interfaces__msg__ParameterEvent.
typedef struct rcl_interfaces__msg__ParameterEvent__Sequence
{
  rcl_interfaces__msg__ParameterEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT__STRUCT_H_
