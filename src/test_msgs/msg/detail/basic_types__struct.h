// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__BASIC_TYPES__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__BASIC_TYPES__STRUCT_H_

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
#define test_msgs__msg__BasicTypes__TYPE_VERSION_HASH__INIT {1, { \
      0x92, 0x14, 0x34, 0x4c, 0x57, 0xce, 0xcb, 0xa7, \
      0xb1, 0x3b, 0xee, 0x10, 0x66, 0xd9, 0x8c, 0xa4, \
      0xa7, 0xd0, 0x60, 0xa5, 0x89, 0x5b, 0x68, 0xbd, \
      0x4c, 0x51, 0x1c, 0x15, 0xb2, 0xcf, 0xf5, 0x24, \
    }}
static const rosidl_type_hash_t test_msgs__msg__BasicTypes__TYPE_VERSION_HASH = test_msgs__msg__BasicTypes__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/BasicTypes in the package test_msgs.
typedef struct test_msgs__msg__BasicTypes
{
  bool bool_value;
  uint8_t byte_value;
  uint8_t char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
} test_msgs__msg__BasicTypes;

// Struct for a sequence of test_msgs__msg__BasicTypes.
typedef struct test_msgs__msg__BasicTypes__Sequence
{
  test_msgs__msg__BasicTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__BasicTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__BASIC_TYPES__STRUCT_H_
