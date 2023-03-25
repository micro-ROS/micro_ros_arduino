// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__MultiArrayDimension__TYPE_HASH = {1, {
    0xa7, 0x85, 0xcb, 0x98, 0x39, 0xe1, 0x77, 0xe3,
    0xeb, 0x76, 0x02, 0x60, 0x13, 0x9a, 0x91, 0x9f,
    0xec, 0x87, 0x82, 0x1e, 0xdc, 0x33, 0x14, 0xc5,
    0x92, 0xf2, 0x72, 0x5a, 0xbb, 0xf0, 0xbf, 0xcd,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MultiArrayDimension in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__MultiArrayDimension
{
  /// label of given dimension
  rosidl_runtime_c__String label;
  /// size of given dimension (in type units)
  uint32_t size;
  /// stride of given dimension
  uint32_t stride;
} example_interfaces__msg__MultiArrayDimension;

// Struct for a sequence of example_interfaces__msg__MultiArrayDimension.
typedef struct example_interfaces__msg__MultiArrayDimension__Sequence
{
  example_interfaces__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
