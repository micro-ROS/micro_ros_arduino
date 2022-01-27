// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/UInt16 in the package example_interfaces.
typedef struct example_interfaces__msg__UInt16
{
  uint16_t data;
} example_interfaces__msg__UInt16;

// Struct for a sequence of example_interfaces__msg__UInt16.
typedef struct example_interfaces__msg__UInt16__Sequence
{
  example_interfaces__msg__UInt16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16__STRUCT_H_
