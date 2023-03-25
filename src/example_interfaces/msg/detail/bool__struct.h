// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Bool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Bool__TYPE_HASH = {1, {
    0x47, 0x65, 0xc1, 0x42, 0x50, 0x0f, 0x8f, 0xd4,
    0xe1, 0xa3, 0x2f, 0xb3, 0xed, 0xd7, 0xb7, 0xd9,
    0xd8, 0x22, 0xa1, 0x6e, 0xc2, 0x70, 0x44, 0x5f,
    0x51, 0x20, 0xe7, 0x72, 0xc5, 0xf9, 0xae, 0xd5,
  }};

// Constants defined in the message

/// Struct defined in msg/Bool in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, bool.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Bool
{
  bool data;
} example_interfaces__msg__Bool;

// Struct for a sequence of example_interfaces__msg__Bool.
typedef struct example_interfaces__msg__Bool__Sequence
{
  example_interfaces__msg__Bool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Bool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_
