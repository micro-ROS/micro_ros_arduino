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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__msg__Empty__TYPE_VERSION_HASH__INIT {1, { \
      0x60, 0x9e, 0xa2, 0xfc, 0x37, 0x45, 0xdc, 0x64, \
      0xc2, 0xd2, 0x0f, 0xf8, 0xb9, 0x1c, 0x9a, 0xf0, \
      0xc0, 0xea, 0x2d, 0xab, 0x69, 0xec, 0xb1, 0x7a, \
      0xb6, 0x20, 0x4d, 0x56, 0xb6, 0xf2, 0x90, 0x36, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Empty__TYPE_VERSION_HASH = test_msgs__msg__Empty__TYPE_VERSION_HASH__INIT;

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
