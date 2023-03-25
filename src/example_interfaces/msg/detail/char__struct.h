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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Char__TYPE_HASH = {1, {
    0x32, 0x0d, 0xcd, 0x57, 0xe1, 0x18, 0x3f, 0xb0,
    0x84, 0x63, 0xcc, 0x3a, 0xb5, 0x0b, 0xf7, 0xe5,
    0xce, 0x0e, 0xce, 0xe3, 0x9f, 0x64, 0xd1, 0x5a,
    0x9e, 0x9e, 0xec, 0xa3, 0x38, 0x4c, 0x91, 0xa5,
  }};

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
