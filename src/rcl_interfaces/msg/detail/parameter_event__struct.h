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

// Struct defined in msg/ParameterEvent in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__ParameterEvent
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String node;
  rcl_interfaces__msg__Parameter__Sequence new_parameters;
  rcl_interfaces__msg__Parameter__Sequence changed_parameters;
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
