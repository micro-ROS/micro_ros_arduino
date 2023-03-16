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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Empty__TYPE_VERSION_HASH__INIT {1, { \
      0xc2, 0xd8, 0x95, 0xda, 0x0b, 0x19, 0x74, 0x03, \
      0x69, 0x2d, 0xe2, 0xb5, 0x62, 0x8f, 0x39, 0x33, \
      0x40, 0x5e, 0x50, 0x06, 0x9c, 0xd9, 0x07, 0x6c, \
      0xb0, 0xf2, 0xdd, 0x82, 0x47, 0x4d, 0xb8, 0xa7, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Empty__TYPE_VERSION_HASH = example_interfaces__msg__Empty__TYPE_VERSION_HASH__INIT;

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
