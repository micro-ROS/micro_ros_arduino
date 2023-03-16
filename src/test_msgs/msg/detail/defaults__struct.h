// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__DEFAULTS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__DEFAULTS__STRUCT_H_

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
#define test_msgs__msg__Defaults__TYPE_VERSION_HASH__INIT {1, { \
      0x81, 0xd7, 0xf9, 0x3a, 0x33, 0xe4, 0x24, 0x4b, \
      0x0a, 0xbd, 0xcf, 0x31, 0x5e, 0xc4, 0x1e, 0xaa, \
      0xca, 0xda, 0xbb, 0x52, 0x74, 0x93, 0xcd, 0xd9, \
      0xad, 0xce, 0xd9, 0xc6, 0xca, 0xc4, 0xe1, 0x8c, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Defaults__TYPE_VERSION_HASH = test_msgs__msg__Defaults__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Defaults in the package test_msgs.
typedef struct test_msgs__msg__Defaults
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
} test_msgs__msg__Defaults;

// Struct for a sequence of test_msgs__msg__Defaults.
typedef struct test_msgs__msg__Defaults__Sequence
{
  test_msgs__msg__Defaults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Defaults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__DEFAULTS__STRUCT_H_
