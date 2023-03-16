// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt64.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__STRUCT_H_

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
#define example_interfaces__msg__UInt64__TYPE_VERSION_HASH__INIT {1, { \
      0xa2, 0x69, 0xc4, 0xb4, 0xf3, 0xd0, 0x73, 0x79, \
      0xcb, 0xf3, 0x9b, 0x34, 0x81, 0x71, 0x76, 0xf4, \
      0xcd, 0xc8, 0x25, 0x50, 0xb1, 0xa6, 0x3b, 0xb5, \
      0xba, 0xb6, 0x08, 0x88, 0xce, 0x7b, 0x02, 0x17, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt64__TYPE_VERSION_HASH = example_interfaces__msg__UInt64__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt64 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, unint64.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__UInt64
{
  uint64_t data;
} example_interfaces__msg__UInt64;

// Struct for a sequence of example_interfaces__msg__UInt64.
typedef struct example_interfaces__msg__UInt64__Sequence
{
  example_interfaces__msg__UInt64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__STRUCT_H_
