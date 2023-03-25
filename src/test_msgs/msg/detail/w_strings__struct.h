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


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__msg__WStrings__TYPE_HASH = {1, {
    0x5a, 0x2c, 0x8d, 0xdb, 0x20, 0x54, 0x60, 0x00,
    0x23, 0xb9, 0xa1, 0x80, 0x65, 0x2f, 0x2b, 0xa8,
    0x95, 0x37, 0x32, 0x17, 0xca, 0xd4, 0xb1, 0xf0,
    0xfc, 0x12, 0x58, 0xc9, 0xe4, 0x42, 0x4a, 0x79,
  }};

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
