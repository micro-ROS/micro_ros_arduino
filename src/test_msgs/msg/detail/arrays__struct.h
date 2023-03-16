// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Arrays.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__ARRAYS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__ARRAYS__STRUCT_H_

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
#define test_msgs__msg__Arrays__TYPE_VERSION_HASH__INIT {1, { \
      0xe1, 0x00, 0xc4, 0x42, 0x86, 0x64, 0x54, 0x5d, \
      0xd3, 0xaf, 0xbc, 0x21, 0x09, 0xfe, 0x44, 0x93, \
      0x8b, 0xba, 0xbd, 0x19, 0x78, 0xf1, 0xd1, 0x7f, \
      0x26, 0x6f, 0xc9, 0xc4, 0x8c, 0x3a, 0x74, 0xc3, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Arrays__TYPE_VERSION_HASH = test_msgs__msg__Arrays__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
#include "rosidl_runtime_c/string.h"
// Member 'basic_types_values'
#include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'constants_values'
#include "test_msgs/msg/detail/constants__struct.h"
// Member 'defaults_values'
#include "test_msgs/msg/detail/defaults__struct.h"

/// Struct defined in msg/Arrays in the package test_msgs.
/**
  * Arrays of different types
 */
typedef struct test_msgs__msg__Arrays
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_runtime_c__String string_values[3];
  test_msgs__msg__BasicTypes basic_types_values[3];
  test_msgs__msg__Constants constants_values[3];
  test_msgs__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_runtime_c__String string_values_default[3];
  /// Regression test: check alignment of basic field after an array field is correct
  int32_t alignment_check;
} test_msgs__msg__Arrays;

// Struct for a sequence of test_msgs__msg__Arrays.
typedef struct test_msgs__msg__Arrays__Sequence
{
  test_msgs__msg__Arrays * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Arrays__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__ARRAYS__STRUCT_H_
