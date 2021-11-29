// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice

#ifndef STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__STRUCT_H_
#define STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'measurement_source_name'
// Member 'metrics_source'
// Member 'unit'
#include "rosidl_runtime_c/string.h"
// Member 'window_start'
// Member 'window_stop'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'statistics'
#include "statistics_msgs/msg/detail/statistic_data_point__struct.h"

// Struct defined in msg/MetricsMessage in the package statistics_msgs.
typedef struct statistics_msgs__msg__MetricsMessage
{
  rosidl_runtime_c__String measurement_source_name;
  rosidl_runtime_c__String metrics_source;
  rosidl_runtime_c__String unit;
  builtin_interfaces__msg__Time window_start;
  builtin_interfaces__msg__Time window_stop;
  statistics_msgs__msg__StatisticDataPoint__Sequence statistics;
} statistics_msgs__msg__MetricsMessage;

// Struct for a sequence of statistics_msgs__msg__MetricsMessage.
typedef struct statistics_msgs__msg__MetricsMessage__Sequence
{
  statistics_msgs__msg__MetricsMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} statistics_msgs__msg__MetricsMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__STRUCT_H_
