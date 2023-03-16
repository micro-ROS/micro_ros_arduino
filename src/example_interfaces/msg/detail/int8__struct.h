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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Int8__TYPE_VERSION_HASH__INIT {1, { \
      0x00, 0x96, 0xc9, 0x22, 0x4d, 0xd3, 0x22, 0xf0, \
      0xe5, 0x2f, 0x00, 0x84, 0x1b, 0x92, 0xb6, 0x48, \
      0x6e, 0x50, 0x1a, 0x79, 0xfb, 0x13, 0x35, 0x8d, \
      0xc8, 0x22, 0x74, 0xb0, 0x31, 0x8a, 0x55, 0xd0, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int8__TYPE_VERSION_HASH = example_interfaces__msg__Int8__TYPE_VERSION_HASH__INIT;

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
