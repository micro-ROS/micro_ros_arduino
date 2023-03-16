// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int64.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT64__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT64__STRUCT_H_

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
#define example_interfaces__msg__Int64__TYPE_VERSION_HASH__INIT {1, { \
      0x92, 0xf1, 0x3b, 0xc7, 0x28, 0xb1, 0x2b, 0xba, \
      0x0a, 0x54, 0x7a, 0x0e, 0x6f, 0x35, 0xb5, 0x6f, \
      0xcb, 0x29, 0xd0, 0x8c, 0x44, 0x77, 0xf8, 0xd5, \
      0xcc, 0xfd, 0x6d, 0x9e, 0x73, 0x56, 0xa1, 0x41, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int64__TYPE_VERSION_HASH = example_interfaces__msg__Int64__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Int64 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, int64.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Int64
{
  int64_t data;
} example_interfaces__msg__Int64;

// Struct for a sequence of example_interfaces__msg__Int64.
typedef struct example_interfaces__msg__Int64__Sequence
{
  example_interfaces__msg__Int64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT64__STRUCT_H_
