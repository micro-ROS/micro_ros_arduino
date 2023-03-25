// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/PointField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__PointField__TYPE_HASH = {1, {
    0x5c, 0x6a, 0x47, 0x50, 0x72, 0x8c, 0x2b, 0xcf,
    0xbb, 0xf7, 0x03, 0x72, 0x25, 0xb2, 0x0b, 0x02,
    0xd4, 0x42, 0x96, 0x34, 0x73, 0x21, 0x46, 0xb7,
    0x42, 0xde, 0xe1, 0x72, 0x66, 0x37, 0xef, 0x01,
  }};

// Constants defined in the message

/// Constant 'INT8'.
enum
{
  sensor_msgs__msg__PointField__INT8 = 1
};

/// Constant 'UINT8'.
enum
{
  sensor_msgs__msg__PointField__UINT8 = 2
};

/// Constant 'INT16'.
enum
{
  sensor_msgs__msg__PointField__INT16 = 3
};

/// Constant 'UINT16'.
enum
{
  sensor_msgs__msg__PointField__UINT16 = 4
};

/// Constant 'INT32'.
enum
{
  sensor_msgs__msg__PointField__INT32 = 5
};

/// Constant 'UINT32'.
enum
{
  sensor_msgs__msg__PointField__UINT32 = 6
};

/// Constant 'FLOAT32'.
enum
{
  sensor_msgs__msg__PointField__FLOAT32 = 7
};

/// Constant 'FLOAT64'.
enum
{
  sensor_msgs__msg__PointField__FLOAT64 = 8
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PointField in the package sensor_msgs.
/**
  * This message holds the description of one point entry in the
  * PointCloud2 message format.
 */
typedef struct sensor_msgs__msg__PointField
{
  /// Common PointField names are x, y, z, intensity, rgb, rgba
  /// Name of field
  rosidl_runtime_c__String name;
  /// Offset from start of point struct
  uint32_t offset;
  /// Datatype enumeration, see above
  uint8_t datatype;
  /// How many elements in the field
  uint32_t count;
} sensor_msgs__msg__PointField;

// Struct for a sequence of sensor_msgs__msg__PointField.
typedef struct sensor_msgs__msg__PointField__Sequence
{
  sensor_msgs__msg__PointField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__PointField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_H_
