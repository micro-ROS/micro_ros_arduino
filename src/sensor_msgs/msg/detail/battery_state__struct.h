// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWER_SUPPLY_STATUS_UNKNOWN'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_STATUS_CHARGING'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_CHARGING = 1
};

/// Constant 'POWER_SUPPLY_STATUS_DISCHARGING'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_DISCHARGING = 2
};

/// Constant 'POWER_SUPPLY_STATUS_NOT_CHARGING'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_NOT_CHARGING = 3
};

/// Constant 'POWER_SUPPLY_STATUS_FULL'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_FULL = 4
};

/// Constant 'POWER_SUPPLY_HEALTH_UNKNOWN'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_HEALTH_GOOD'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_GOOD = 1
};

/// Constant 'POWER_SUPPLY_HEALTH_OVERHEAT'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERHEAT = 2
};

/// Constant 'POWER_SUPPLY_HEALTH_DEAD'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_DEAD = 3
};

/// Constant 'POWER_SUPPLY_HEALTH_OVERVOLTAGE'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4
};

/// Constant 'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5
};

/// Constant 'POWER_SUPPLY_HEALTH_COLD'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_COLD = 6
};

/// Constant 'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7
};

/// Constant 'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_UNKNOWN'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_NIMH'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NIMH = 1
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LION'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LION = 2
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIPO'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIPO = 3
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIFE'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIFE = 4
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_NICD'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NICD = 5
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIMN'.
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIMN = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cell_voltage'
// Member 'cell_temperature'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'location'
// Member 'serial_number'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BatteryState in the package sensor_msgs.
typedef struct sensor_msgs__msg__BatteryState
{
  std_msgs__msg__Header header;
  float voltage;
  float temperature;
  float current;
  float charge;
  float capacity;
  float design_capacity;
  float percentage;
  uint8_t power_supply_status;
  uint8_t power_supply_health;
  uint8_t power_supply_technology;
  bool present;
  rosidl_runtime_c__float__Sequence cell_voltage;
  rosidl_runtime_c__float__Sequence cell_temperature;
  rosidl_runtime_c__String location;
  rosidl_runtime_c__String serial_number;
} sensor_msgs__msg__BatteryState;

// Struct for a sequence of sensor_msgs__msg__BatteryState.
typedef struct sensor_msgs__msg__BatteryState__Sequence
{
  sensor_msgs__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
