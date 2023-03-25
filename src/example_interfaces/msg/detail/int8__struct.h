// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT8__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT8__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int8__TYPE_HASH = {1, {
    0x2e, 0x9e, 0xf6, 0x43, 0xd8, 0x4f, 0xf3, 0x78,
    0x40, 0xfe, 0x78, 0x7d, 0x12, 0x69, 0xaa, 0x06,
    0x26, 0x89, 0x60, 0xe2, 0x94, 0xf4, 0xa0, 0xf5,
    0xeb, 0x1e, 0x9d, 0x4e, 0xb2, 0x1c, 0xbb, 0x57,
  }};

// Constants defined in the message

/// Struct defined in msg/Int8 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, in8.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Int8
{
  int8_t data;
} example_interfaces__msg__Int8;

// Struct for a sequence of example_interfaces__msg__Int8.
typedef struct example_interfaces__msg__Int8__Sequence
{
  example_interfaces__msg__Int8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT8__STRUCT_H_
