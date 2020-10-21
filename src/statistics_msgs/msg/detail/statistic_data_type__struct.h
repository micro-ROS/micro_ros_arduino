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


// Constants defined in the message

/// Constant 'STATISTICS_DATA_TYPE_UNINITIALIZED'.
enum
{
  statistics_msgs__msg__StatisticDataType__STATISTICS_DATA_TYPE_UNINITIALIZED = 0
};

/// Constant 'STATISTICS_DATA_TYPE_AVERAGE'.
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

// Struct defined in msg/StatisticDataType in the package statistics_msgs.
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
