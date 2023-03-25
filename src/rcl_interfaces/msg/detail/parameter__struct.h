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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__msg__Parameter__TYPE_HASH = {1, {
    0xdd, 0xfe, 0x64, 0x42, 0xcf, 0xfc, 0x46, 0x23,
    0x17, 0xad, 0xb5, 0xc9, 0x25, 0x36, 0xa7, 0xb6,
    0xdd, 0x55, 0x85, 0x8c, 0x5c, 0x3e, 0x1e, 0x32,
    0x81, 0x65, 0xa6, 0xb7, 0x3c, 0x28, 0x31, 0xaf,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"

/// Struct defined in msg/Parameter in the package rcl_interfaces.
/**
  * This is the message to communicate a parameter. It is an open struct with an enum in
  * the descriptor to select which value is active.
 */
typedef struct rcl_interfaces__msg__Parameter
{
  /// The full name of the parameter.
  rosidl_runtime_c__String name;
  /// The parameter's value which can be one of several types, see
  /// `ParameterValue.msg` and `ParameterType.msg`.
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
