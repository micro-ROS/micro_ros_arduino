// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_

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
#define std_msgs__msg__MultiArrayLayout__TYPE_VERSION_HASH__INIT {1, { \
      0xb7, 0xd6, 0x23, 0x8e, 0x4b, 0x85, 0x66, 0xde, \
      0xc2, 0x98, 0x2c, 0x55, 0x11, 0x48, 0xa4, 0x33, \
      0x32, 0xb7, 0x0d, 0xf5, 0x5a, 0x79, 0x71, 0xde, \
      0x15, 0x6c, 0x99, 0xe1, 0x9d, 0xc1, 0x87, 0x52, \
    }}
static const rosidl_type_hash_t std_msgs__msg__MultiArrayLayout__TYPE_VERSION_HASH = std_msgs__msg__MultiArrayLayout__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'dim'
#include "std_msgs/msg/detail/multi_array_dimension__struct.h"

/// Struct defined in msg/MultiArrayLayout in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__MultiArrayLayout
{
  /// The multiarray declares a generic multi-dimensional array of a
  /// particular data type.  Dimensions are ordered from outer most
  /// to inner most.
  ///
  /// Accessors should ALWAYS be written in terms of dimension stride
  /// and specified outer-most dimension first.
  ///
  /// multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
  ///
  /// A standard, 3-channel 640x480 image with interleaved color channels
  /// would be specified as:
  ///
  /// dim[0].label  = "height"
  /// dim[0].size   = 480
  /// dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
  /// dim[1].label  = "width"
  /// dim[1].size   = 640
  /// dim[1].stride = 3*640 = 1920
  /// dim[2].label  = "channel"
  /// dim[2].size   = 3
  /// dim[2].stride = 3
  ///
  /// multiarray(i,j,k) refers to the ith row, jth column, and kth channel.
  /// Array of dimension properties
  std_msgs__msg__MultiArrayDimension__Sequence dim;
  /// padding bytes at front of data
  uint32_t data_offset;
} std_msgs__msg__MultiArrayLayout;

// Struct for a sequence of std_msgs__msg__MultiArrayLayout.
typedef struct std_msgs__msg__MultiArrayLayout__Sequence
{
  std_msgs__msg__MultiArrayLayout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__MultiArrayLayout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
