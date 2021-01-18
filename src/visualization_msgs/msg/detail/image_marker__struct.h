// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/ImageMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CIRCLE'.
enum
{
  visualization_msgs__msg__ImageMarker__CIRCLE = 0l
};

/// Constant 'LINE_STRIP'.
enum
{
  visualization_msgs__msg__ImageMarker__LINE_STRIP = 1l
};

/// Constant 'LINE_LIST'.
enum
{
  visualization_msgs__msg__ImageMarker__LINE_LIST = 2l
};

/// Constant 'POLYGON'.
enum
{
  visualization_msgs__msg__ImageMarker__POLYGON = 3l
};

/// Constant 'POINTS'.
enum
{
  visualization_msgs__msg__ImageMarker__POINTS = 4l
};

/// Constant 'ADD'.
enum
{
  visualization_msgs__msg__ImageMarker__ADD = 0l
};

/// Constant 'REMOVE'.
enum
{
  visualization_msgs__msg__ImageMarker__REMOVE = 1l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ns'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'outline_color'
// Member 'fill_color'
// Member 'outline_colors'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/ImageMarker in the package visualization_msgs.
typedef struct visualization_msgs__msg__ImageMarker
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String ns;
  int32_t id;
  int32_t type;
  int32_t action;
  geometry_msgs__msg__Point position;
  float scale;
  std_msgs__msg__ColorRGBA outline_color;
  uint8_t filled;
  std_msgs__msg__ColorRGBA fill_color;
  builtin_interfaces__msg__Duration lifetime;
  geometry_msgs__msg__Point__Sequence points;
  std_msgs__msg__ColorRGBA__Sequence outline_colors;
} visualization_msgs__msg__ImageMarker;

// Struct for a sequence of visualization_msgs__msg__ImageMarker.
typedef struct visualization_msgs__msg__ImageMarker__Sequence
{
  visualization_msgs__msg__ImageMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__ImageMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_H_
