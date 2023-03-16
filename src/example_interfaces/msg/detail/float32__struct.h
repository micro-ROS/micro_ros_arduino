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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Float32__TYPE_VERSION_HASH__INIT {1, { \
      0xea, 0xf0, 0xcc, 0x0f, 0xbb, 0x2b, 0x14, 0x0d, \
      0x78, 0xc9, 0xc1, 0x69, 0x4f, 0xe9, 0xd1, 0xd7, \
      0x05, 0xd6, 0x54, 0xdc, 0xfb, 0x28, 0x54, 0xa8, \
      0xd8, 0x7d, 0xea, 0xe3, 0x26, 0x3d, 0x03, 0xc9, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Float32__TYPE_VERSION_HASH = example_interfaces__msg__Float32__TYPE_VERSION_HASH__INIT;

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
