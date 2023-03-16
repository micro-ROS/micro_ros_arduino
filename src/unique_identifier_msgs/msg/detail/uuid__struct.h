// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__STRUCT_H_
#define UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__STRUCT_H_

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
#define unique_identifier_msgs__msg__UUID__TYPE_VERSION_HASH__INIT {1, { \
      0x31, 0x8f, 0xb9, 0x51, 0x3f, 0xaa, 0x44, 0xce, \
      0xa1, 0x7e, 0x34, 0xd4, 0xea, 0x1f, 0xa1, 0x65, \
      0xac, 0x3f, 0x90, 0xe8, 0xec, 0x49, 0x68, 0x5d, \
      0xd0, 0xcd, 0x56, 0x23, 0xcf, 0xbd, 0xf8, 0x1a, \
    }}
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__TYPE_VERSION_HASH = unique_identifier_msgs__msg__UUID__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UUID in the package unique_identifier_msgs.
/**
  * A universally unique identifier (UUID).
  *
  *  http://en.wikipedia.org/wiki/Universally_unique_identifier
  *  http://tools.ietf.org/html/rfc4122.html
 */
typedef struct unique_identifier_msgs__msg__UUID
{
  uint8_t uuid[16];
} unique_identifier_msgs__msg__UUID;

// Struct for a sequence of unique_identifier_msgs__msg__UUID.
typedef struct unique_identifier_msgs__msg__UUID__Sequence
{
  unique_identifier_msgs__msg__UUID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unique_identifier_msgs__msg__UUID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__STRUCT_H_
