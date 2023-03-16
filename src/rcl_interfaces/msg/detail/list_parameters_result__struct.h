// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/ListParametersResult.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__STRUCT_H_

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
#define rcl_interfaces__msg__ListParametersResult__TYPE_VERSION_HASH__INIT {1, { \
      0x18, 0xa8, 0x87, 0x26, 0x18, 0x75, 0x8f, 0xcb, \
      0x3d, 0x5e, 0xe3, 0x55, 0x54, 0x11, 0x9b, 0x77, \
      0x4b, 0x5a, 0xd0, 0xa6, 0xe5, 0xaa, 0x7b, 0xc0, \
      0x24, 0x35, 0xfc, 0x97, 0xd9, 0x84, 0x63, 0xb2, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__ListParametersResult__TYPE_VERSION_HASH = rcl_interfaces__msg__ListParametersResult__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'names'
// Member 'prefixes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ListParametersResult in the package rcl_interfaces.
/**
  * The resulting parameters under the given prefixes.
 */
typedef struct rcl_interfaces__msg__ListParametersResult
{
  rosidl_runtime_c__String__Sequence names;
  /// The resulting prefixes under the given prefixes.
  /// TODO(wjwwood): link to prefix definition and rules.
  rosidl_runtime_c__String__Sequence prefixes;
} rcl_interfaces__msg__ListParametersResult;

// Struct for a sequence of rcl_interfaces__msg__ListParametersResult.
typedef struct rcl_interfaces__msg__ListParametersResult__Sequence
{
  rcl_interfaces__msg__ListParametersResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ListParametersResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__STRUCT_H_
