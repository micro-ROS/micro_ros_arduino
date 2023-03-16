// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32__STRUCT_H_

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
#define example_interfaces__msg__UInt32__TYPE_VERSION_HASH__INIT {1, { \
      0xe9, 0xc7, 0x1d, 0x88, 0xb1, 0xa4, 0x4a, 0x68, \
      0x15, 0x85, 0x02, 0xa5, 0xfc, 0x3e, 0x11, 0x82, \
      0xfd, 0xcd, 0x80, 0x70, 0xee, 0x5a, 0xf6, 0xdc, \
      0x85, 0x2d, 0xa1, 0x07, 0xf1, 0x50, 0xbc, 0xeb, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt32__TYPE_VERSION_HASH = example_interfaces__msg__UInt32__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt32 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, uint32.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__UInt32
{
  uint32_t data;
} example_interfaces__msg__UInt32;

// Struct for a sequence of example_interfaces__msg__UInt32.
typedef struct example_interfaces__msg__UInt32__Sequence
{
  example_interfaces__msg__UInt32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32__STRUCT_H_
