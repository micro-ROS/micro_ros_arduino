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


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__msg__ListParametersResult__TYPE_HASH = {1, {
    0x23, 0x7a, 0xe3, 0x42, 0x84, 0x13, 0xdc, 0xbc,
    0xfb, 0x45, 0x2b, 0x51, 0x0c, 0x42, 0x35, 0x5f,
    0x3a, 0x2b, 0x02, 0x1d, 0xc0, 0x91, 0xaf, 0xa3,
    0xe1, 0x85, 0x26, 0xd5, 0x70, 0x22, 0xf1, 0xcd,
  }};

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
