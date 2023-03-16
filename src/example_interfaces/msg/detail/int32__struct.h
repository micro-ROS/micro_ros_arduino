// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_

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
#define example_interfaces__msg__Int32__TYPE_VERSION_HASH__INIT {1, { \
      0xc5, 0x74, 0xf8, 0xb0, 0x0e, 0xc5, 0x3a, 0xef, \
      0xe8, 0xe7, 0xe6, 0x93, 0x69, 0x9f, 0x89, 0x5c, \
      0xb3, 0xfd, 0x1c, 0xca, 0xae, 0x98, 0xca, 0x3d, \
      0x2b, 0x48, 0x62, 0xd0, 0x33, 0x32, 0xd0, 0x78, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int32__TYPE_VERSION_HASH = example_interfaces__msg__Int32__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Int32 in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, int32.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__Int32
{
  int32_t data;
} example_interfaces__msg__Int32;

// Struct for a sequence of example_interfaces__msg__Int32.
typedef struct example_interfaces__msg__Int32__Sequence
{
  example_interfaces__msg__Int32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_
