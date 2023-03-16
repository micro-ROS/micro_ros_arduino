// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__MULTI_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__DETAIL__MULTI_NESTED__STRUCT_H_

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
#define test_msgs__msg__MultiNested__TYPE_VERSION_HASH__INIT {1, { \
      0x29, 0x47, 0xf9, 0xef, 0x75, 0x4b, 0x49, 0xa4, \
      0xbf, 0xec, 0xc1, 0x36, 0x88, 0x89, 0x4a, 0x56, \
      0x0c, 0x1b, 0x23, 0x98, 0xa2, 0xaf, 0x8c, 0x16, \
      0xe2, 0x7b, 0x1e, 0xca, 0xe5, 0xd6, 0xa3, 0xd2, \
    }}
static const rosidl_type_hash_t test_msgs__msg__MultiNested__TYPE_VERSION_HASH = test_msgs__msg__MultiNested__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'array_of_arrays'
// Member 'bounded_sequence_of_arrays'
// Member 'unbounded_sequence_of_arrays'
#include "test_msgs/msg/detail/arrays__struct.h"
// Member 'array_of_bounded_sequences'
// Member 'bounded_sequence_of_bounded_sequences'
// Member 'unbounded_sequence_of_bounded_sequences'
#include "test_msgs/msg/detail/bounded_sequences__struct.h"
// Member 'array_of_unbounded_sequences'
// Member 'bounded_sequence_of_unbounded_sequences'
// Member 'unbounded_sequence_of_unbounded_sequences'
#include "test_msgs/msg/detail/unbounded_sequences__struct.h"

// constants for array fields with an upper bound
// bounded_sequence_of_arrays
enum
{
  test_msgs__msg__MultiNested__bounded_sequence_of_arrays__MAX_SIZE = 3
};
// bounded_sequence_of_bounded_sequences
enum
{
  test_msgs__msg__MultiNested__bounded_sequence_of_bounded_sequences__MAX_SIZE = 3
};
// bounded_sequence_of_unbounded_sequences
enum
{
  test_msgs__msg__MultiNested__bounded_sequence_of_unbounded_sequences__MAX_SIZE = 3
};

/// Struct defined in msg/MultiNested in the package test_msgs.
/**
  * Mulitple levels of nested messages
 */
typedef struct test_msgs__msg__MultiNested
{
  test_msgs__msg__Arrays array_of_arrays[3];
  test_msgs__msg__BoundedSequences array_of_bounded_sequences[3];
  test_msgs__msg__UnboundedSequences array_of_unbounded_sequences[3];
  test_msgs__msg__Arrays__Sequence bounded_sequence_of_arrays;
  test_msgs__msg__BoundedSequences__Sequence bounded_sequence_of_bounded_sequences;
  test_msgs__msg__UnboundedSequences__Sequence bounded_sequence_of_unbounded_sequences;
  test_msgs__msg__Arrays__Sequence unbounded_sequence_of_arrays;
  test_msgs__msg__BoundedSequences__Sequence unbounded_sequence_of_bounded_sequences;
  test_msgs__msg__UnboundedSequences__Sequence unbounded_sequence_of_unbounded_sequences;
} test_msgs__msg__MultiNested;

// Struct for a sequence of test_msgs__msg__MultiNested.
typedef struct test_msgs__msg__MultiNested__Sequence
{
  test_msgs__msg__MultiNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__MultiNested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DETAIL__MULTI_NESTED__STRUCT_H_
