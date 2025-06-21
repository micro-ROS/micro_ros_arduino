// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/KeyedString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/keyed_string.h"


#ifndef TEST_MSGS__MSG__DETAIL__KEYED_STRING__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__KEYED_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyedString in the package test_msgs.
typedef struct test_msgs__msg__KeyedString
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} test_msgs__msg__KeyedString;

// Struct for a sequence of test_msgs__msg__KeyedString.
typedef struct test_msgs__msg__KeyedString__Sequence
{
  test_msgs__msg__KeyedString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__KeyedString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__KEYED_STRING__STRUCT_H_
