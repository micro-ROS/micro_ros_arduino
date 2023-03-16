// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__STRINGS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__STRINGS__STRUCT_H_

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
#define test_msgs__msg__Strings__TYPE_VERSION_HASH__INIT {1, { \
      0x2c, 0xff, 0xcb, 0xfe, 0xde, 0xce, 0xd3, 0xbf, \
      0xeb, 0x29, 0x25, 0x05, 0x04, 0x06, 0x15, 0xa6, \
      0x20, 0x85, 0x1a, 0xed, 0x00, 0xff, 0x0e, 0x7e, \
      0xc7, 0xcd, 0xb1, 0xd5, 0x10, 0x21, 0x2f, 0xde, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Strings__TYPE_VERSION_HASH = test_msgs__msg__Strings__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'STRING_CONST'.
static const char * const test_msgs__msg__Strings__STRING_CONST = "Hello world!";

// Include directives for member types
// Member 'string_value'
// Member 'string_value_default1'
// Member 'string_value_default2'
// Member 'string_value_default3'
// Member 'string_value_default4'
// Member 'string_value_default5'
// Member 'bounded_string_value'
// Member 'bounded_string_value_default1'
// Member 'bounded_string_value_default2'
// Member 'bounded_string_value_default3'
// Member 'bounded_string_value_default4'
// Member 'bounded_string_value_default5'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// bounded_string_value
enum
{
  test_msgs__msg__Strings__bounded_string_value__MAX_STRING_SIZE = 22
};
// bounded_string_value_default1
enum
{
  test_msgs__msg__Strings__bounded_string_value_default1__MAX_STRING_SIZE = 22
};
// bounded_string_value_default2
enum
{
  test_msgs__msg__Strings__bounded_string_value_default2__MAX_STRING_SIZE = 22
};
// bounded_string_value_default3
enum
{
  test_msgs__msg__Strings__bounded_string_value_default3__MAX_STRING_SIZE = 22
};
// bounded_string_value_default4
enum
{
  test_msgs__msg__Strings__bounded_string_value_default4__MAX_STRING_SIZE = 22
};
// bounded_string_value_default5
enum
{
  test_msgs__msg__Strings__bounded_string_value_default5__MAX_STRING_SIZE = 22
};

/// Struct defined in msg/Strings in the package test_msgs.
typedef struct test_msgs__msg__Strings
{
  rosidl_runtime_c__String string_value;
  rosidl_runtime_c__String string_value_default1;
  rosidl_runtime_c__String string_value_default2;
  rosidl_runtime_c__String string_value_default3;
  rosidl_runtime_c__String string_value_default4;
  rosidl_runtime_c__String string_value_default5;
  rosidl_runtime_c__String bounded_string_value;
  rosidl_runtime_c__String bounded_string_value_default1;
  rosidl_runtime_c__String bounded_string_value_default2;
  rosidl_runtime_c__String bounded_string_value_default3;
  rosidl_runtime_c__String bounded_string_value_default4;
  rosidl_runtime_c__String bounded_string_value_default5;
} test_msgs__msg__Strings;

// Struct for a sequence of test_msgs__msg__Strings.
typedef struct test_msgs__msg__Strings__Sequence
{
  test_msgs__msg__Strings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Strings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__STRINGS__STRUCT_H_
