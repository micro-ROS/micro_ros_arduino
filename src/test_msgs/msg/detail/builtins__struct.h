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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__msg__Builtins__TYPE_VERSION_HASH__INIT {1, { \
      0x33, 0x0e, 0x95, 0x3a, 0xe5, 0x98, 0x93, 0xf8, \
      0xd9, 0xa3, 0xdd, 0xbe, 0x10, 0xa9, 0x28, 0x79, \
      0x53, 0xe8, 0x8e, 0x42, 0xc9, 0x0e, 0xfd, 0x2e, \
      0xa4, 0xf9, 0xfb, 0xbb, 0xce, 0x5d, 0xe9, 0xe2, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Builtins__TYPE_VERSION_HASH = test_msgs__msg__Builtins__TYPE_VERSION_HASH__INIT;

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
