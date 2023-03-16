// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_H_

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
#define example_interfaces__msg__WString__TYPE_VERSION_HASH__INIT {1, { \
      0x33, 0x5d, 0x35, 0x5f, 0xe5, 0x37, 0x94, 0x4e, \
      0xbc, 0x59, 0x92, 0x88, 0x71, 0x4c, 0x2b, 0x09, \
      0xb6, 0xee, 0xef, 0x8b, 0x75, 0x53, 0xa9, 0x27, \
      0xcd, 0xe1, 0xbd, 0x3f, 0x8b, 0x0e, 0x2d, 0x9e, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__WString__TYPE_VERSION_HASH = example_interfaces__msg__WString__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/u16string.h"

/// Struct defined in msg/WString in the package example_interfaces.
/**
  * This is an example message of using a primitive datatype, wstring.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct example_interfaces__msg__WString
{
  rosidl_runtime_c__U16String data;
} example_interfaces__msg__WString;

// Struct for a sequence of example_interfaces__msg__WString.
typedef struct example_interfaces__msg__WString__Sequence
{
  example_interfaces__msg__WString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__WString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_H_
