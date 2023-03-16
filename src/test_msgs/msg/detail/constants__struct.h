// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__CONSTANTS__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__CONSTANTS__STRUCT_H_

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
#define test_msgs__msg__Constants__TYPE_VERSION_HASH__INIT {1, { \
      0xf0, 0xb9, 0xa9, 0xeb, 0x5e, 0xfe, 0x49, 0x9e, \
      0x3c, 0xe1, 0x9a, 0x1d, 0x84, 0x01, 0xcd, 0x91, \
      0x82, 0x44, 0x47, 0x55, 0xd2, 0x0a, 0xbe, 0xd8, \
      0x0b, 0x4c, 0xba, 0x6e, 0x5d, 0x70, 0x63, 0x5e, \
    }}
static const rosidl_type_hash_t test_msgs__msg__Constants__TYPE_VERSION_HASH = test_msgs__msg__Constants__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'BOOL_CONST'.
static const bool test_msgs__msg__Constants__BOOL_CONST = true;

/// Constant 'BYTE_CONST'.
enum
{
  test_msgs__msg__Constants__BYTE_CONST = 50
};

/// Constant 'CHAR_CONST'.
enum
{
  test_msgs__msg__Constants__CHAR_CONST = 100
};

/// Constant 'FLOAT32_CONST'.
static const float test_msgs__msg__Constants__FLOAT32_CONST = 1.125f;

/// Constant 'FLOAT64_CONST'.
static const double test_msgs__msg__Constants__FLOAT64_CONST = 1.125l;

/// Constant 'INT8_CONST'.
enum
{
  test_msgs__msg__Constants__INT8_CONST = -50
};

/// Constant 'UINT8_CONST'.
enum
{
  test_msgs__msg__Constants__UINT8_CONST = 200
};

/// Constant 'INT16_CONST'.
enum
{
  test_msgs__msg__Constants__INT16_CONST = -1000
};

/// Constant 'UINT16_CONST'.
enum
{
  test_msgs__msg__Constants__UINT16_CONST = 2000
};

/// Constant 'INT32_CONST'.
enum
{
  test_msgs__msg__Constants__INT32_CONST = -30000l
};

/// Constant 'UINT32_CONST'.
enum
{
  test_msgs__msg__Constants__UINT32_CONST = 60000ul
};

/// Constant 'INT64_CONST'.
enum
{
  test_msgs__msg__Constants__INT64_CONST = -40000000ll
};

/// Constant 'UINT64_CONST'.
enum
{
  test_msgs__msg__Constants__UINT64_CONST = 50000000ull
};

/// Struct defined in msg/Constants in the package test_msgs.
typedef struct test_msgs__msg__Constants
{
  uint8_t structure_needs_at_least_one_member;
} test_msgs__msg__Constants;

// Struct for a sequence of test_msgs__msg__Constants.
typedef struct test_msgs__msg__Constants__Sequence
{
  test_msgs__msg__Constants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Constants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__CONSTANTS__STRUCT_H_
