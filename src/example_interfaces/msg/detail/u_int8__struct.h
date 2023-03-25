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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__UInt8__TYPE_HASH = {1, {
    0x92, 0x55, 0xb6, 0xd0, 0xdd, 0x98, 0xf5, 0xb5,
    0x73, 0xaf, 0xbf, 0xf2, 0x23, 0x13, 0x12, 0x79,
    0xb7, 0x88, 0xac, 0x45, 0xcf, 0x05, 0x1f, 0xb4,
    0x62, 0xc1, 0x2d, 0xd9, 0xa3, 0x0f, 0x40, 0x61,
  }};

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
