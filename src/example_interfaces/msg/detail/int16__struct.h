// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int16.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT16__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int16__TYPE_HASH = {1, {
    0x33, 0x2d, 0x94, 0x30, 0x67, 0x32, 0xe4, 0xe3,
    0x5d, 0xa3, 0x8e, 0x5a, 0xe7, 0x44, 0xff, 0x35,
    0xbb, 0xda, 0xec, 0xa3, 0x00, 0x90, 0x8d, 0xc4,
    0x34, 0x88, 0xd3, 0xa8, 0x44, 0x68, 0x7c, 0xd6,
  }};

// Constants defined in the message

/// Struct defined in msg/Int16 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, int16.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Int16
{
  int16_t data;
} example_interfaces__msg__Int16;

// Struct for a sequence of example_interfaces__msg__Int16.
typedef struct example_interfaces__msg__Int16__Sequence
{
  example_interfaces__msg__Int16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT16__STRUCT_H_
