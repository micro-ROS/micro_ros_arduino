// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Byte.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_

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
#define example_interfaces__msg__Byte__TYPE_VERSION_HASH__INIT {1, { \
      0x5c, 0x60, 0xc7, 0xdd, 0x90, 0xc4, 0xeb, 0xd3, \
      0x28, 0x55, 0x0b, 0x0f, 0xcb, 0xa3, 0x10, 0x2d, \
      0x95, 0xdf, 0x67, 0x90, 0xdf, 0xc4, 0x32, 0xae, \
      0x76, 0x60, 0x85, 0x80, 0x32, 0x5b, 0x59, 0x0b, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Byte__TYPE_VERSION_HASH = example_interfaces__msg__Byte__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Byte in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, byte.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Byte
{
  uint8_t data;
} example_interfaces__msg__Byte;

// Struct for a sequence of example_interfaces__msg__Byte.
typedef struct example_interfaces__msg__Byte__Sequence
{
  example_interfaces__msg__Byte * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Byte__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_
