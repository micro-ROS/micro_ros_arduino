// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/Field.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__FIELD__STRUCT_H_
#define TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t type_description_interfaces__msg__Field__TYPE_HASH = {1, {
    0xc0, 0xb0, 0x13, 0x79, 0xcd, 0x42, 0x26, 0x28,
    0x12, 0x85, 0xcc, 0xaf, 0x6b, 0xe4, 0x66, 0x53,
    0x96, 0x8f, 0x85, 0x5f, 0x7c, 0x5e, 0x41, 0x61,
    0x4f, 0xf5, 0xd7, 0xa8, 0x54, 0xef, 0xef, 0x7c,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'default_value'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "type_description_interfaces/msg/detail/field_type__struct.h"

/// Struct defined in msg/Field in the package type_description_interfaces.
/**
  * Represents a single field in a type.
 */
typedef struct type_description_interfaces__msg__Field
{
  /// Name of the field.
  rosidl_runtime_c__String name;
  /// Type of the field, including details about the type like length, nested name, etc.
  type_description_interfaces__msg__FieldType type;
  /// Literal default value of the field as a string, as it appeared in the original
  /// message description file, whether that be .msg/.srv/.action or .idl.
  rosidl_runtime_c__String default_value;
} type_description_interfaces__msg__Field;

// Struct for a sequence of type_description_interfaces__msg__Field.
typedef struct type_description_interfaces__msg__Field__Sequence
{
  type_description_interfaces__msg__Field * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__msg__Field__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__MSG__DETAIL__FIELD__STRUCT_H_
