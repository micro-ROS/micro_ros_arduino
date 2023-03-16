// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_H_
#define TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_H_

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
#define tf2_msgs__msg__TF2Error__TYPE_VERSION_HASH__INIT {1, { \
      0x7d, 0xfe, 0x24, 0x8e, 0x7a, 0xac, 0x17, 0xd5, \
      0x3f, 0x95, 0x7c, 0xac, 0x31, 0x8b, 0xdf, 0x78, \
      0x59, 0xf1, 0x8b, 0x7b, 0xcc, 0x59, 0x1e, 0x00, \
      0xf1, 0x98, 0x40, 0xfe, 0x99, 0x9d, 0x2d, 0xe8, \
    }}
static const rosidl_type_hash_t tf2_msgs__msg__TF2Error__TYPE_VERSION_HASH = tf2_msgs__msg__TF2Error__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'NO_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__NO_ERROR = 0
};

/// Constant 'LOOKUP_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__LOOKUP_ERROR = 1
};

/// Constant 'CONNECTIVITY_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__CONNECTIVITY_ERROR = 2
};

/// Constant 'EXTRAPOLATION_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__EXTRAPOLATION_ERROR = 3
};

/// Constant 'INVALID_ARGUMENT_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__INVALID_ARGUMENT_ERROR = 4
};

/// Constant 'TIMEOUT_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__TIMEOUT_ERROR = 5
};

/// Constant 'TRANSFORM_ERROR'.
enum
{
  tf2_msgs__msg__TF2Error__TRANSFORM_ERROR = 6
};

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TF2Error in the package tf2_msgs.
typedef struct tf2_msgs__msg__TF2Error
{
  uint8_t error;
  rosidl_runtime_c__String error_string;
} tf2_msgs__msg__TF2Error;

// Struct for a sequence of tf2_msgs__msg__TF2Error.
typedef struct tf2_msgs__msg__TF2Error__Sequence
{
  tf2_msgs__msg__TF2Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__msg__TF2Error__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_H_
