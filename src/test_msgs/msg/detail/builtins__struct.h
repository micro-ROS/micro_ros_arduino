// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__BUILTINS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__BUILTINS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__msg__Builtins__TYPE_HASH = {1, {
    0x9e, 0x61, 0x88, 0x8e, 0x75, 0x21, 0xdd, 0xa3,
    0x5c, 0x21, 0xac, 0x6b, 0x6c, 0xab, 0xbc, 0xaf,
    0xf8, 0xda, 0xe8, 0x8b, 0x6d, 0x67, 0xb2, 0x5b,
    0x90, 0x78, 0xfd, 0xb9, 0xab, 0xf5, 0x63, 0x03,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'duration_value'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'time_value'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Builtins in the package test_msgs.
typedef struct test_msgs__msg__Builtins
{
  builtin_interfaces__msg__Duration duration_value;
  builtin_interfaces__msg__Time time_value;
} test_msgs__msg__Builtins;

// Struct for a sequence of test_msgs__msg__Builtins.
typedef struct test_msgs__msg__Builtins__Sequence
{
  test_msgs__msg__Builtins * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Builtins__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__BUILTINS__STRUCT_H_
