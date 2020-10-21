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


// Constants defined in the message

// Struct defined in msg/StatisticDataPoint in the package statistics_msgs.
typedef struct statistics_msgs__msg__StatisticDataPoint
{
  uint8_t data_type;
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
