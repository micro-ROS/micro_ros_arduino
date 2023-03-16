// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/String.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_

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
#define example_interfaces__msg__String__TYPE_VERSION_HASH__INIT {1, { \
      0x2a, 0x95, 0x11, 0x59, 0x2a, 0xb3, 0x2a, 0xbd, \
      0x29, 0xa4, 0x9f, 0xdc, 0x0c, 0xf8, 0x33, 0xbb, \
      0x3e, 0xaa, 0x0d, 0xf1, 0x0c, 0x1b, 0xdd, 0x54, \
      0xe8, 0xef, 0x3e, 0xce, 0x57, 0x2a, 0x18, 0x1a, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__String__TYPE_VERSION_HASH = example_interfaces__msg__String__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/String in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, string.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__String
{
  rosidl_runtime_c__String data;
} example_interfaces__msg__String;

// Struct for a sequence of example_interfaces__msg__String.
typedef struct example_interfaces__msg__String__Sequence
{
  example_interfaces__msg__String * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__String__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_
