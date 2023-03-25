// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t type_description_interfaces__msg__KeyValue__TYPE_HASH = {1, {
    0x27, 0x4f, 0xe5, 0x6b, 0xf1, 0x4f, 0x33, 0xc7,
    0x51, 0x2e, 0x34, 0xc6, 0x46, 0xa3, 0x75, 0x79,
    0xee, 0x36, 0x77, 0x9f, 0x74, 0x5f, 0x04, 0x9a,
    0x97, 0x60, 0x76, 0x3e, 0x81, 0x7f, 0x0c, 0x42,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package type_description_interfaces.
/**
  * Represents an arbitrary key-value pair for application-specific information.
 */
typedef struct type_description_interfaces__msg__KeyValue
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} type_description_interfaces__msg__KeyValue;

// Struct for a sequence of type_description_interfaces__msg__KeyValue.
typedef struct type_description_interfaces__msg__KeyValue__Sequence
{
  type_description_interfaces__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__KEY_VALUE__STRUCT_H_
