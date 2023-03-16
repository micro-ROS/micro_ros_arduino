// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_

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
#define example_interfaces__msg__UInt16__TYPE_VERSION_HASH__INIT {1, { \
      0x3f, 0xf9, 0xca, 0xd2, 0xb8, 0x64, 0xda, 0x3b, \
      0x64, 0xc4, 0x8b, 0x31, 0xe5, 0x40, 0x87, 0x72, \
      0xe3, 0x40, 0x71, 0xbf, 0x11, 0x3e, 0x5d, 0xcc, \
      0x59, 0x75, 0x92, 0xc2, 0xbe, 0xa4, 0xc3, 0xfc, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt16__TYPE_VERSION_HASH = example_interfaces__msg__UInt16__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt16 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, uint16.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__UInt16
{
  uint16_t data;
} example_interfaces__msg__UInt16;

// Struct for a sequence of example_interfaces__msg__UInt16.
typedef struct example_interfaces__msg__UInt16__Sequence
{
  example_interfaces__msg__UInt16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_
