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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__msg__Nested__TYPE_VERSION_HASH__INIT {1, { \
      0x44, 0x2e, 0x83, 0x19, 0xc1, 0x1c, 0x25, 0x7b, \
      0x80, 0xab, 0x38, 0x3f, 0x8a, 0x1f, 0x3e, 0x92, \
      0x17, 0x10, 0x24, 0x7f, 0x90, 0x6d, 0xf9, 0x89, \
      0x4a, 0x88, 0x3e, 0x80, 0x1f, 0x4f, 0x6c, 0xe8, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Nested__TYPE_VERSION_HASH = test_msgs__msg__Nested__TYPE_VERSION_HASH__INIT;

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
