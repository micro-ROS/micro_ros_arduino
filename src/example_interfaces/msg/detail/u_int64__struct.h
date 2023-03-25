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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__UInt64__TYPE_HASH = {1, {
    0x6a, 0x3f, 0x85, 0x48, 0xc5, 0x81, 0x8b, 0x7a,
    0xdd, 0x62, 0xdd, 0x6c, 0xbb, 0xd8, 0x40, 0xfd,
    0x1a, 0xb1, 0x7f, 0xbf, 0x9d, 0x73, 0xca, 0xd6,
    0x69, 0x05, 0x57, 0xb7, 0x32, 0x6d, 0x89, 0x08,
  }};

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
