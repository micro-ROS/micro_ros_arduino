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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Bool__TYPE_VERSION_HASH__INIT {1, { \
      0xf7, 0x5a, 0x9d, 0xbb, 0x54, 0x35, 0xef, 0x90, \
      0x21, 0x75, 0x52, 0xb8, 0xb5, 0xbe, 0x50, 0xcb, \
      0x10, 0x1d, 0x31, 0x5b, 0x9b, 0xd1, 0x2b, 0x6e, \
      0x41, 0xe7, 0x2c, 0x99, 0xc3, 0x76, 0x49, 0x78, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Bool__TYPE_VERSION_HASH = example_interfaces__msg__Bool__TYPE_VERSION_HASH__INIT;

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
