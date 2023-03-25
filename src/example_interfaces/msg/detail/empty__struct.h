// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Empty__TYPE_HASH = {1, {
    0x73, 0xc2, 0x2a, 0x73, 0x41, 0xee, 0xcc, 0xf8,
    0xef, 0x50, 0x4a, 0x99, 0x1e, 0x60, 0xd4, 0x07,
    0x82, 0x23, 0xf0, 0x93, 0x1a, 0x5d, 0x5d, 0x21,
    0x28, 0x00, 0xe7, 0xc9, 0x78, 0x90, 0x3c, 0x58,
  }};

// Constants defined in the message

/// Struct defined in msg/Empty in the package example_interfaces.
/**
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
 */
typedef struct example_interfaces__msg__Empty
{
  uint8_t structure_needs_at_least_one_member;
} example_interfaces__msg__Empty;

// Struct for a sequence of example_interfaces__msg__Empty.
typedef struct example_interfaces__msg__Empty__Sequence
{
  example_interfaces__msg__Empty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Empty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__STRUCT_H_
