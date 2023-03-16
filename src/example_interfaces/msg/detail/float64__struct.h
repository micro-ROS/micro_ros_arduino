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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Float64__TYPE_VERSION_HASH__INIT {1, { \
      0x9a, 0xd3, 0x57, 0xf8, 0x80, 0x34, 0x47, 0xfd, \
      0xf9, 0x04, 0x6d, 0x11, 0x28, 0xb2, 0xa1, 0x62, \
      0xdb, 0x1e, 0x89, 0xe1, 0xe5, 0x57, 0x98, 0xac, \
      0x88, 0x28, 0x3c, 0xa5, 0xc2, 0xbb, 0x4d, 0x49, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Float64__TYPE_VERSION_HASH = example_interfaces__msg__Float64__TYPE_VERSION_HASH__INIT;

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
