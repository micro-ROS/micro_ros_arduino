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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__MultiArrayDimension__TYPE_VERSION_HASH__INIT {1, { \
      0xee, 0xc8, 0xd0, 0x06, 0x9d, 0x6d, 0x9d, 0xda, \
      0xbe, 0x00, 0x72, 0xe2, 0x27, 0xd6, 0xe2, 0x74, \
      0x94, 0x4b, 0x49, 0x9c, 0xa4, 0xd1, 0xe5, 0xcb, \
      0xa3, 0xe0, 0x0a, 0xe1, 0xd9, 0x96, 0x2b, 0xab, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__MultiArrayDimension__TYPE_VERSION_HASH = example_interfaces__msg__MultiArrayDimension__TYPE_VERSION_HASH__INIT;

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
