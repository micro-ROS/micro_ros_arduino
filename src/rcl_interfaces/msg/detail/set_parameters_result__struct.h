// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__msg__SetParametersResult__TYPE_HASH = {1, {
    0xcf, 0xcc, 0x0f, 0xb0, 0x37, 0x1e, 0xe5, 0x15,
    0x9b, 0x40, 0x39, 0x60, 0xef, 0x43, 0x00, 0xf8,
    0xf9, 0xd2, 0xf1, 0xfd, 0x61, 0x17, 0xc8, 0x66,
    0x6b, 0x7f, 0x96, 0x54, 0xd5, 0x28, 0xa9, 0xb1,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetParametersResult in the package rcl_interfaces.
/**
  * A true value of the same index indicates that the parameter was set
  * successfully. A false value indicates the change was rejected.
 */
typedef struct rcl_interfaces__msg__SetParametersResult
{
  bool successful;
  /// Reason why the setting was either successful or a failure. This should only be
  /// used for logging and user interfaces.
  rosidl_runtime_c__String reason;
} rcl_interfaces__msg__SetParametersResult;

// Struct for a sequence of rcl_interfaces__msg__SetParametersResult.
typedef struct rcl_interfaces__msg__SetParametersResult__Sequence
{
  rcl_interfaces__msg__SetParametersResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__SetParametersResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__SET_PARAMETERS_RESULT__STRUCT_H_
