// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__NESTED__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__msg__Nested__TYPE_HASH = {1, {
    0xf9, 0x64, 0xf9, 0xdc, 0x32, 0x20, 0x22, 0xb7,
    0xa6, 0x81, 0xee, 0x69, 0x33, 0xee, 0x5c, 0x3c,
    0x78, 0x80, 0x25, 0xb9, 0x42, 0xfe, 0xdb, 0x7f,
    0x4d, 0x7c, 0x01, 0x8e, 0xd8, 0x40, 0xcf, 0x86,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'basic_types_value'
#include "test_msgs/msg/detail/basic_types__struct.h"

/// Struct defined in msg/Nested in the package test_msgs.
typedef struct test_msgs__msg__Nested
{
  test_msgs__msg__BasicTypes basic_types_value;
} test_msgs__msg__Nested;

// Struct for a sequence of test_msgs__msg__Nested.
typedef struct test_msgs__msg__Nested__Sequence
{
  test_msgs__msg__Nested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Nested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__NESTED__STRUCT_H_
