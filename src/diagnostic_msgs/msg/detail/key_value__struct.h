// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

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
#define diagnostic_msgs__msg__KeyValue__TYPE_VERSION_HASH__INIT {1, { \
      0xc5, 0xc6, 0xc6, 0x51, 0x53, 0xc0, 0xa8, 0x65, \
      0x79, 0xca, 0x02, 0xa1, 0x99, 0x66, 0x60, 0x5b, \
      0xc8, 0x42, 0x9f, 0xd9, 0xe4, 0x19, 0x06, 0xca, \
      0x9e, 0xcf, 0xbb, 0x9e, 0x13, 0x0f, 0xae, 0xd7, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__msg__KeyValue__TYPE_VERSION_HASH = diagnostic_msgs__msg__KeyValue__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package diagnostic_msgs.
/**
  * What to label this value when viewing.
 */
typedef struct diagnostic_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  /// A value to track over time.
  rosidl_runtime_c__String value;
} diagnostic_msgs__msg__KeyValue;

// Struct for a sequence of diagnostic_msgs__msg__KeyValue.
typedef struct diagnostic_msgs__msg__KeyValue__Sequence
{
  diagnostic_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
