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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__msg__SetParametersResult__TYPE_VERSION_HASH__INIT {1, { \
      0x2c, 0x20, 0x32, 0x62, 0x1f, 0x1c, 0xcc, 0x45, \
      0xe4, 0xdd, 0x3e, 0xc7, 0x0e, 0x68, 0x9a, 0x87, \
      0x28, 0x71, 0x97, 0xf7, 0x1a, 0xee, 0xfd, 0x03, \
      0x07, 0xbb, 0x49, 0xae, 0xbe, 0x6a, 0x0d, 0x58, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__SetParametersResult__TYPE_VERSION_HASH = rcl_interfaces__msg__SetParametersResult__TYPE_VERSION_HASH__INIT;

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
