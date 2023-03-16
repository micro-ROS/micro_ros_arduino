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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__msg__Parameter__TYPE_VERSION_HASH__INIT {1, { \
      0x08, 0x2e, 0x44, 0x0c, 0x82, 0x0b, 0xf6, 0x80, \
      0xe9, 0xbf, 0x2f, 0xee, 0x38, 0x42, 0xe7, 0xdb, \
      0x3c, 0xbe, 0x02, 0xa1, 0xfe, 0xb6, 0xc4, 0x3a, \
      0x42, 0x2e, 0xfb, 0x41, 0x6d, 0xbb, 0x63, 0x3a, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__Parameter__TYPE_VERSION_HASH = rcl_interfaces__msg__Parameter__TYPE_VERSION_HASH__INIT;

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
