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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int64__TYPE_HASH = {1, {
    0x1b, 0x3b, 0x9a, 0x65, 0x02, 0xf5, 0x60, 0xd0,
    0x79, 0x52, 0x0c, 0x73, 0xc6, 0x85, 0xa9, 0x55,
    0x0e, 0x5a, 0x18, 0x38, 0xd2, 0xce, 0xfd, 0x53,
    0x7f, 0xe0, 0xab, 0xa7, 0x5a, 0x36, 0x39, 0xa0,
  }};

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
