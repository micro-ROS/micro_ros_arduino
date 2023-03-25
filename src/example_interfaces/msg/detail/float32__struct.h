// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Float32.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Float32__TYPE_HASH = {1, {
    0x6a, 0x11, 0x2d, 0x92, 0x35, 0xf8, 0xe8, 0x08,
    0x8d, 0x7a, 0x2b, 0xc7, 0x7c, 0xb9, 0x55, 0x34,
    0x1a, 0xc0, 0xd5, 0xc9, 0x87, 0x0b, 0xdc, 0x59,
    0x26, 0x51, 0xa4, 0x18, 0x6b, 0xb2, 0x46, 0xf3,
  }};

// Constants defined in the message

/// Struct defined in msg/Float32 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, float32.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Float32
{
  float data;
} example_interfaces__msg__Float32;

// Struct for a sequence of example_interfaces__msg__Float32.
typedef struct example_interfaces__msg__Float32__Sequence
{
  example_interfaces__msg__Float32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Float32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_
