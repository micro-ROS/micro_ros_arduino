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


// Type Hash for interface
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__TYPE_HASH = {1, {
    0x1b, 0x8e, 0x8a, 0xca, 0x95, 0x8c, 0xbe, 0xa2,
    0x8f, 0xe6, 0xef, 0x60, 0xbf, 0x6c, 0x19, 0xb6,
    0x83, 0xc9, 0x7a, 0x9e, 0xf6, 0x0b, 0xb3, 0x47,
    0x52, 0x06, 0x7d, 0x0f, 0x2f, 0x7a, 0xb4, 0x37,
  }};

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
