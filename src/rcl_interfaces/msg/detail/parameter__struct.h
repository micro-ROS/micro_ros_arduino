// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/Parameter.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"

// Struct defined in msg/Parameter in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__Parameter
{
  rosidl_runtime_c__String name;
  rcl_interfaces__msg__ParameterValue value;
} rcl_interfaces__msg__Parameter;

// Struct for a sequence of rcl_interfaces__msg__Parameter.
typedef struct rcl_interfaces__msg__Parameter__Sequence
{
  rcl_interfaces__msg__Parameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__Parameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER__STRUCT_H_
