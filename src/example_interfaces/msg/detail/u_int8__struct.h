// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt8.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__STRUCT_H_

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
#define example_interfaces__msg__UInt8__TYPE_VERSION_HASH__INIT {1, { \
      0x7d, 0x95, 0x4a, 0xdd, 0x55, 0xa3, 0xdc, 0x71, \
      0x73, 0x25, 0xd6, 0x26, 0xd1, 0x91, 0xdf, 0x52, \
      0xe8, 0xc9, 0x50, 0x26, 0x93, 0x9a, 0xae, 0x3c, \
      0x19, 0x75, 0xed, 0xb1, 0x13, 0x49, 0x6a, 0x75, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt8__TYPE_VERSION_HASH = example_interfaces__msg__UInt8__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt8 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, uint8.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__UInt8
{
  uint8_t data;
} example_interfaces__msg__UInt8;

// Struct for a sequence of example_interfaces__msg__UInt8.
typedef struct example_interfaces__msg__UInt8__Sequence
{
  example_interfaces__msg__UInt8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8__STRUCT_H_
