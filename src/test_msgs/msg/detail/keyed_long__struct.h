// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/KeyedLong.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/keyed_long.h"


#ifndef TEST_MSGS__MSG__DETAIL__KEYED_LONG__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__KEYED_LONG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/KeyedLong in the package test_msgs.
typedef struct test_msgs__msg__KeyedLong
{
  int32_t key;
  int32_t value;
} test_msgs__msg__KeyedLong;

// Struct for a sequence of test_msgs__msg__KeyedLong.
typedef struct test_msgs__msg__KeyedLong__Sequence
{
  test_msgs__msg__KeyedLong * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__KeyedLong__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__KEYED_LONG__STRUCT_H_
