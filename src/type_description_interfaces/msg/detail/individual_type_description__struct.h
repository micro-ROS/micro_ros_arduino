// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/IndividualTypeDescription.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_
#define TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_

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
#define type_description_interfaces__msg__IndividualTypeDescription__TYPE_VERSION_HASH__INIT {1, { \
      0x68, 0xef, 0x8d, 0x4d, 0xae, 0x31, 0x9a, 0xd5, \
      0x48, 0xf3, 0x0f, 0x30, 0x44, 0x9a, 0x47, 0x23, \
      0x2a, 0xe8, 0x94, 0xf1, 0x0a, 0x3d, 0xb2, 0x3a, \
      0x67, 0xf7, 0x22, 0x87, 0x42, 0x26, 0x04, 0x49, \
    }}
static const rosidl_type_hash_t type_description_interfaces__msg__IndividualTypeDescription__TYPE_VERSION_HASH = type_description_interfaces__msg__IndividualTypeDescription__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'type_name'
#include "rosidl_runtime_c/string.h"
// Member 'fields'
#include "type_description_interfaces/msg/detail/field__struct.h"

// constants for array fields with an upper bound
// type_name
enum
{
  type_description_interfaces__msg__IndividualTypeDescription__type_name__MAX_STRING_SIZE = 255
};

/// Struct defined in msg/IndividualTypeDescription in the package type_description_interfaces.
/**
  * Represents a single type, without the types it references, if any.
 */
typedef struct type_description_interfaces__msg__IndividualTypeDescription
{
  /// Name of the type.
  /// This is limited to 255 characters.
  /// TODO(wjwwood): this 255 character limit was chosen due to this being the limit
  ///   for DDSI-RTPS based middlewares, which is the most commonly used right now.
  ///   We lack a ROS 2 specific limit in our design documents, but we should update
  ///   this and/or link to the design doc when that is available.
  rosidl_runtime_c__String type_name;
  /// Fields of the type.
  type_description_interfaces__msg__Field__Sequence fields;
} type_description_interfaces__msg__IndividualTypeDescription;

// Struct for a sequence of type_description_interfaces__msg__IndividualTypeDescription.
typedef struct type_description_interfaces__msg__IndividualTypeDescription__Sequence
{
  type_description_interfaces__msg__IndividualTypeDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__msg__IndividualTypeDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__INDIVIDUAL_TYPE_DESCRIPTION__STRUCT_H_
