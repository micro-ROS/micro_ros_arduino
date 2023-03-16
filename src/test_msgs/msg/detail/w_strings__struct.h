// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__W_STRINGS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__W_STRINGS__STRUCT_H_

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
#define test_msgs__msg__WStrings__TYPE_VERSION_HASH__INIT {1, { \
      0xc3, 0xc5, 0x5f, 0x06, 0x72, 0xed, 0x23, 0x05, \
      0x5a, 0x03, 0x55, 0xd8, 0x66, 0xe4, 0x54, 0x16, \
      0x8b, 0x97, 0x72, 0x0b, 0x58, 0x9f, 0x54, 0xb8, \
      0x83, 0x6d, 0x2a, 0xe2, 0xea, 0x8d, 0x21, 0xe0, \
    }}
static const rosidl_type_hash_t test_msgs__msg__WStrings__TYPE_VERSION_HASH = test_msgs__msg__WStrings__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'wstring_value'
// Member 'wstring_value_default1'
// Member 'wstring_value_default2'
// Member 'wstring_value_default3'
// Member 'array_of_wstrings'
// Member 'bounded_sequence_of_wstrings'
// Member 'unbounded_sequence_of_wstrings'
#include "rosidl_runtime_c/u16string.h"

// constants for array fields with an upper bound
// bounded_sequence_of_wstrings
enum
{
  test_msgs__msg__WStrings__bounded_sequence_of_wstrings__MAX_SIZE = 3
};

/// Struct defined in msg/WStrings in the package test_msgs.
typedef struct test_msgs__msg__WStrings
{
  rosidl_runtime_c__U16String wstring_value;
  rosidl_runtime_c__U16String wstring_value_default1;
  rosidl_runtime_c__U16String wstring_value_default2;
  rosidl_runtime_c__U16String wstring_value_default3;
  /// wstring WSTRING_CONST="Hello world!"
  /// wstring<=22 bounded_wstring_value
  /// wstring<=22 bounded_wstring_value_default1 "Hello world!"
  rosidl_runtime_c__U16String array_of_wstrings[3];
  rosidl_runtime_c__U16String__Sequence bounded_sequence_of_wstrings;
  rosidl_runtime_c__U16String__Sequence unbounded_sequence_of_wstrings;
} test_msgs__msg__WStrings;

// Struct for a sequence of test_msgs__msg__WStrings.
typedef struct test_msgs__msg__WStrings__Sequence
{
  test_msgs__msg__WStrings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__WStrings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__W_STRINGS__STRUCT_H_
