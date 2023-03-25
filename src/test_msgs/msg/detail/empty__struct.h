// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__msg__Empty__TYPE_HASH = {1, {
    0x65, 0x87, 0xce, 0xac, 0xfd, 0xb9, 0x7a, 0x89,
    0x5b, 0x60, 0x77, 0x4d, 0x02, 0x10, 0x11, 0xc6,
    0x4f, 0x8c, 0x72, 0x99, 0xf5, 0x33, 0x22, 0x40,
    0x4a, 0xf4, 0x03, 0x6d, 0xec, 0x61, 0x42, 0xdc,
  }};

// Constants defined in the message

/// Struct defined in msg/Empty in the package test_msgs.
typedef struct test_msgs__msg__Empty
{
  uint8_t structure_needs_at_least_one_member;
} test_msgs__msg__Empty;

// Struct for a sequence of test_msgs__msg__Empty.
typedef struct test_msgs__msg__Empty__Sequence
{
  test_msgs__msg__Empty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Empty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_
