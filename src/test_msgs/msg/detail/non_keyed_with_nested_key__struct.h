// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/NonKeyedWithNestedKey.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/non_keyed_with_nested_key.h"


#ifndef TEST_MSGS__MSG__DETAIL__NON_KEYED_WITH_NESTED_KEY__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__NON_KEYED_WITH_NESTED_KEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'nested_data'
#include "test_msgs/msg/detail/keyed_string__struct.h"

/// Struct defined in msg/NonKeyedWithNestedKey in the package test_msgs.
typedef struct test_msgs__msg__NonKeyedWithNestedKey
{
  test_msgs__msg__KeyedString nested_data;
  int32_t some_int;
} test_msgs__msg__NonKeyedWithNestedKey;

// Struct for a sequence of test_msgs__msg__NonKeyedWithNestedKey.
typedef struct test_msgs__msg__NonKeyedWithNestedKey__Sequence
{
  test_msgs__msg__NonKeyedWithNestedKey * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__NonKeyedWithNestedKey__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__NON_KEYED_WITH_NESTED_KEY__STRUCT_H_
