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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define type_description_interfaces__msg__KeyValue__TYPE_VERSION_HASH__INIT {1, { \
      0x96, 0xeb, 0xe1, 0xdc, 0xdd, 0xe6, 0x55, 0x04, \
      0x93, 0xad, 0xeb, 0x5f, 0xa6, 0x97, 0x73, 0x36, \
      0x00, 0xb9, 0x68, 0x79, 0x2c, 0x20, 0xac, 0x18, \
      0xdb, 0x60, 0x05, 0x6e, 0xb6, 0x46, 0xee, 0xad, \
    }}
static const rosidl_type_hash_t type_description_interfaces__msg__KeyValue__TYPE_VERSION_HASH = type_description_interfaces__msg__KeyValue__TYPE_VERSION_HASH__INIT;

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
