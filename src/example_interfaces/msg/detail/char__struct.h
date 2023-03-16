// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Char.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__STRUCT_H_

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
#define example_interfaces__msg__Char__TYPE_VERSION_HASH__INIT {1, { \
      0x18, 0xf8, 0xed, 0x57, 0x3c, 0x11, 0xc6, 0xb6, \
      0xda, 0xeb, 0x9d, 0x70, 0x77, 0x0e, 0xf8, 0xca, \
      0x8f, 0x5a, 0xbd, 0x08, 0xf5, 0x0e, 0x58, 0x40, \
      0xcb, 0x51, 0x48, 0x4f, 0x1e, 0x68, 0x23, 0x6e, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Char__TYPE_VERSION_HASH = example_interfaces__msg__Char__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Char in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, char.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Char
{
  uint8_t data;
} example_interfaces__msg__Char;

// Struct for a sequence of example_interfaces__msg__Char.
typedef struct example_interfaces__msg__Char__Sequence
{
  example_interfaces__msg__Char * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Char__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__STRUCT_H_
