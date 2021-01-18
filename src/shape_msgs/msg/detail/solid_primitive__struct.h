// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_H_
#define SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOX'.
enum
{
  shape_msgs__msg__SolidPrimitive__BOX = 1
};

/// Constant 'SPHERE'.
enum
{
  shape_msgs__msg__SolidPrimitive__SPHERE = 2
};

/// Constant 'CYLINDER'.
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER = 3
};

/// Constant 'CONE'.
enum
{
  shape_msgs__msg__SolidPrimitive__CONE = 4
};

/// Constant 'BOX_X'.
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_X = 0
};

/// Constant 'BOX_Y'.
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_Y = 1
};

/// Constant 'BOX_Z'.
enum
{
  shape_msgs__msg__SolidPrimitive__BOX_Z = 2
};

/// Constant 'SPHERE_RADIUS'.
enum
{
  shape_msgs__msg__SolidPrimitive__SPHERE_RADIUS = 0
};

/// Constant 'CYLINDER_HEIGHT'.
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER_HEIGHT = 0
};

/// Constant 'CYLINDER_RADIUS'.
enum
{
  shape_msgs__msg__SolidPrimitive__CYLINDER_RADIUS = 1
};

/// Constant 'CONE_HEIGHT'.
enum
{
  shape_msgs__msg__SolidPrimitive__CONE_HEIGHT = 0
};

/// Constant 'CONE_RADIUS'.
enum
{
  shape_msgs__msg__SolidPrimitive__CONE_RADIUS = 1
};

// Include directives for member types
// Member 'dimensions'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// dimensions
enum
{
  shape_msgs__msg__SolidPrimitive__dimensions__MAX_SIZE = 3
};

// Struct defined in msg/SolidPrimitive in the package shape_msgs.
typedef struct shape_msgs__msg__SolidPrimitive
{
  uint8_t type;
  rosidl_runtime_c__double__Sequence dimensions;
} shape_msgs__msg__SolidPrimitive;

// Struct for a sequence of shape_msgs__msg__SolidPrimitive.
typedef struct shape_msgs__msg__SolidPrimitive__Sequence
{
  shape_msgs__msg__SolidPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__SolidPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_H_
