// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Float64.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Float64__TYPE_HASH = {1, {
    0x74, 0xc1, 0x37, 0xb7, 0x93, 0x0c, 0x26, 0x33,
    0x94, 0x25, 0xa9, 0x5f, 0xcf, 0xab, 0x44, 0x11,
    0x99, 0xbc, 0x41, 0xe0, 0xe5, 0x72, 0xd3, 0xa0,
    0xc9, 0xe9, 0x5b, 0xad, 0xd7, 0x2b, 0x50, 0xda,
  }};

// Constants defined in the message

/// Struct defined in msg/Float64 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, float64.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Float64
{
  double data;
} example_interfaces__msg__Float64;

// Struct for a sequence of example_interfaces__msg__Float64.
typedef struct example_interfaces__msg__Float64__Sequence
{
  example_interfaces__msg__Float64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Float64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_
