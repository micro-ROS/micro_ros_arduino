// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from statistics_msgs:msg/StatisticDataPoint.idl
// generated code does not contain a copyright notice

#ifndef STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_POINT__STRUCT_H_
#define STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t statistics_msgs__msg__StatisticDataPoint__TYPE_HASH = {1, {
    0xb7, 0xe6, 0x1a, 0x40, 0x73, 0x46, 0xea, 0x91,
    0x2e, 0xff, 0xb6, 0x95, 0x40, 0x23, 0xd2, 0xd2,
    0xc9, 0xad, 0xf8, 0xf7, 0xbc, 0x10, 0xf6, 0xca,
    0xe5, 0x76, 0xd3, 0x50, 0xc4, 0x45, 0xf6, 0xa5,
  }};

// Constants defined in the message

/// Struct defined in msg/StatisticDataPoint in the package statistics_msgs.
/**
  * This holds the structure of a single data point of a StatisticDataType.
  *
  * This message is used in MetricsStatisticsMessage, defined in MetricsStatisticsMessage.msg.
  *
  * Examples of the value of data point are
  * - average size of messages received
  * - standard deviation of the period of messages published
  * - maximum age of messages published
  *
  * A value of nan represents no data is available.
  * One example is that standard deviation is only available when there are two or more data points but there is only one,
  * and in this case the value would be nan.
  * +inf and -inf are not allowed.
 */
typedef struct statistics_msgs__msg__StatisticDataPoint
{
  /// The statistic type of this data point, defined in StatisticDataType.msg
  /// Default value should be StatisticDataType.STATISTICS_DATA_TYPE_UNINITIALIZED (0).
  uint8_t data_type;
  /// The value of the data point
  double data;
} statistics_msgs__msg__StatisticDataPoint;

// Struct for a sequence of statistics_msgs__msg__StatisticDataPoint.
typedef struct statistics_msgs__msg__StatisticDataPoint__Sequence
{
  statistics_msgs__msg__StatisticDataPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} statistics_msgs__msg__StatisticDataPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_POINT__STRUCT_H_
