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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__WString__TYPE_HASH = {1, {
    0x32, 0x03, 0x3e, 0x06, 0xd9, 0xdf, 0xe5, 0x46,
    0x8c, 0x5d, 0x6e, 0x1d, 0xc8, 0xb7, 0xa2, 0x3c,
    0x89, 0x10, 0xba, 0xd0, 0x71, 0xcf, 0xd4, 0xe1,
    0x51, 0xa9, 0x51, 0xd5, 0x80, 0xe6, 0x8d, 0xd8,
  }};

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
