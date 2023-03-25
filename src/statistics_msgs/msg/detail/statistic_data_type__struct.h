// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from statistics_msgs:msg/StatisticDataType.idl
// generated code does not contain a copyright notice

#ifndef STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__STRUCT_H_
#define STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t statistics_msgs__msg__StatisticDataType__TYPE_HASH = {1, {
    0x84, 0x0d, 0x83, 0xbd, 0x5d, 0xc6, 0x60, 0xe0,
    0xc6, 0xe9, 0x96, 0xf9, 0xe1, 0xab, 0x80, 0xbe,
    0xc3, 0xc5, 0xa9, 0x19, 0x76, 0x36, 0x0a, 0x40,
    0xd6, 0xcc, 0x57, 0x9a, 0x37, 0xa8, 0xc9, 0x59,
  }};

// Constants defined in the message

/// Constant 'STATISTICS_DATA_TYPE_UNINITIALIZED'.
/**
  * Constant for uninitialized
 */
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_UNINITIALIZED = 0
};

/// Constant 'STATISTICS_DATA_TYPE_AVERAGE'.
/**
  * Allowed values
 */
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_AVERAGE = 1
};

/// Constant 'STATISTICS_DATA_TYPE_MINIMUM'.
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_MINIMUM = 2
};

/// Constant 'STATISTICS_DATA_TYPE_MAXIMUM'.
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_MAXIMUM = 3
};

/// Constant 'STATISTICS_DATA_TYPE_STDDEV'.
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_STDDEV = 4
};

/// Constant 'STATISTICS_DATA_TYPE_SAMPLE_COUNT'.
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_SAMPLE_COUNT = 5
};

/// Struct defined in msg/StatisticDataType in the package statistics_msgs.
/**
  * This file contains the commonly used constants for the statistics data type.
  *
  * The value 0 is reserved for unitialized statistic message data type.
  * Range of values: [0, 255].
  * Unallowed values: any value that is not specified in this file.
 */
typedef struct statistics_msgs__msg__StatisticDataType
{
  uint8_t structure_needs_at_least_one_member;
} statistics_msgs__msg__StatisticDataType;

// Struct for a sequence of statistics_msgs__msg__StatisticDataType.
typedef struct statistics_msgs__msg__StatisticDataType__Sequence
{
  statistics_msgs__msg__StatisticDataType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} statistics_msgs__msg__StatisticDataType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__STRUCT_H_
