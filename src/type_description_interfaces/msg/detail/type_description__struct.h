// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/TypeDescription.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__TYPE_DESCRIPTION__STRUCT_H_
#define TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__TYPE_DESCRIPTION__STRUCT_H_

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
#define type_description_interfaces__msg__TypeDescription__TYPE_VERSION_HASH__INIT {1, { \
      0xac, 0x5a, 0x6b, 0xf3, 0x23, 0x7f, 0xc6, 0xc4, \
      0xbb, 0xdc, 0x24, 0xca, 0x2b, 0xc9, 0xdc, 0xd1, \
      0x57, 0xe5, 0xd1, 0x13, 0xe4, 0x70, 0x83, 0x61, \
      0x44, 0x3c, 0x33, 0x1d, 0xc2, 0x0d, 0xc6, 0xeb, \
    }}
static const rosidl_type_hash_t type_description_interfaces__msg__TypeDescription__TYPE_VERSION_HASH = type_description_interfaces__msg__TypeDescription__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'type_description'
// Member 'referenced_type_descriptions'
#include "type_description_interfaces/msg/detail/individual_type_description__struct.h"

/// Struct defined in msg/TypeDescription in the package type_description_interfaces.
/**
  * Represents a complete type description, including the type itself as well as the types it references.
 */
typedef struct type_description_interfaces__msg__TypeDescription
{
  /// Description of the type.
  type_description_interfaces__msg__IndividualTypeDescription type_description;
  /// Descriptions of all referenced types, recursively.
  type_description_interfaces__msg__IndividualTypeDescription__Sequence referenced_type_descriptions;
} type_description_interfaces__msg__TypeDescription;

// Struct for a sequence of type_description_interfaces__msg__TypeDescription.
typedef struct type_description_interfaces__msg__TypeDescription__Sequence
{
  type_description_interfaces__msg__TypeDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__msg__TypeDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__TYPE_DESCRIPTION__STRUCT_H_
