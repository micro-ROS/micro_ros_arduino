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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__UInt32__TYPE_HASH = {1, {
    0xe8, 0x6c, 0xcc, 0xba, 0x58, 0x6f, 0x30, 0xc1,
    0x64, 0x98, 0xf3, 0xcc, 0xd3, 0x55, 0x0a, 0x76,
    0x4b, 0x25, 0x52, 0x39, 0xa6, 0x14, 0x2b, 0xe3,
    0xa4, 0xd7, 0xa2, 0xfa, 0x9a, 0x43, 0x51, 0x5c,
  }};

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
