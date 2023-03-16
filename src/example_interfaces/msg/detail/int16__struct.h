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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Int16__TYPE_VERSION_HASH__INIT {1, { \
      0x38, 0xa7, 0xb3, 0x2e, 0x13, 0x55, 0xce, 0xd8, \
      0x66, 0x0d, 0xb9, 0xef, 0xe5, 0xa3, 0x1e, 0x9d, \
      0x3d, 0xb0, 0xcc, 0xa1, 0xc4, 0xef, 0x82, 0xaf, \
      0xee, 0x33, 0xff, 0xaa, 0x29, 0xb2, 0x2e, 0xb2, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int16__TYPE_VERSION_HASH = example_interfaces__msg__Int16__TYPE_VERSION_HASH__INIT;

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
