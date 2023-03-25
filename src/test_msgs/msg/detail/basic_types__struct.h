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


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__msg__BasicTypes__TYPE_HASH = {1, {
    0x7c, 0x30, 0x0a, 0xfd, 0x4e, 0x79, 0x67, 0x98,
    0xd4, 0x9b, 0xdd, 0x6c, 0xda, 0xa0, 0xfa, 0x87,
    0xfa, 0x0e, 0xd2, 0xba, 0x32, 0x17, 0xd9, 0x77,
    0xe1, 0xfa, 0xa8, 0x70, 0x70, 0xd7, 0x97, 0xab,
  }};

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
