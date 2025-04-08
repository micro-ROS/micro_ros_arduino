// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/ComplexNestedKey.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/complex_nested_key.h"


#ifndef TEST_MSGS__MSG__DETAIL__COMPLEX_NESTED_KEY__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__COMPLEX_NESTED_KEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'nested_keys'
#include "test_msgs/msg/detail/non_keyed_with_nested_key__struct.h"

/// Struct defined in msg/ComplexNestedKey in the package test_msgs.
typedef struct test_msgs__msg__ComplexNestedKey
{
  uint32_t uint32_key;
  test_msgs__msg__NonKeyedWithNestedKey nested_keys;
  double float64_value;
} test_msgs__msg__ComplexNestedKey;

// Struct for a sequence of test_msgs__msg__ComplexNestedKey.
typedef struct test_msgs__msg__ComplexNestedKey__Sequence
{
  test_msgs__msg__ComplexNestedKey * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__ComplexNestedKey__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__COMPLEX_NESTED_KEY__STRUCT_H_
