// DO NOT EDIT MANUALLY - this copied file managed by copy_type_description_generated_sources.bash
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/IndividualTypeDescription.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_
#define ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t rosidl_runtime_c__type_description__IndividualTypeDescription__TYPE_HASH = {1, {
    0x55, 0xc8, 0x27, 0xd8, 0x6c, 0x3c, 0x14, 0x1b,
    0xdd, 0x31, 0x8f, 0xe6, 0xc2, 0x2e, 0x11, 0x19,
    0x0e, 0x4d, 0x3b, 0x37, 0xc8, 0xf4, 0xf9, 0x75,
    0x1a, 0x08, 0x4a, 0xa0, 0x5c, 0xe9, 0x65, 0x60,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'type_name'
#include "rosidl_runtime_c/string.h"
// Member 'fields'
#include "rosidl_runtime_c/type_description/field__struct.h"

// constants for array fields with an upper bound
// type_name
enum
{
  rosidl_runtime_c__type_description__IndividualTypeDescription__type_name__MAX_STRING_SIZE = 255
};

/// Struct defined in msg/IndividualTypeDescription in the package type_description_interfaces.
/**
  * Represents a single type, without the types it references, if any.
 */
typedef struct rosidl_runtime_c__type_description__IndividualTypeDescription
{
  /// Name of the type.
  /// This is limited to 255 characters.
  /// TODO(wjwwood): this 255 character limit was chosen due to this being the limit
  ///   for DDSI-RTPS based middlewares, which is the most commonly used right now.
  ///   We lack a ROS 2 specific limit in our design documents, but we should update
  ///   this and/or link to the design doc when that is available.
  rosidl_runtime_c__String type_name;
  /// Fields of the type.
  rosidl_runtime_c__type_description__Field__Sequence fields;
} rosidl_runtime_c__type_description__IndividualTypeDescription;

// Struct for a sequence of rosidl_runtime_c__type_description__IndividualTypeDescription.
typedef struct rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence
{
  rosidl_runtime_c__type_description__IndividualTypeDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_
