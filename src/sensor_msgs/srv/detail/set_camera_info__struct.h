// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_
#define SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__srv__SetCameraInfo__TYPE_VERSION_HASH__INIT {1, { \
      0x76, 0x5a, 0x32, 0x1e, 0x15, 0x68, 0x47, 0x6a, \
      0x10, 0x90, 0x58, 0x88, 0xd9, 0x62, 0x0b, 0x4f, \
      0xfb, 0x1c, 0x00, 0xf1, 0xff, 0x60, 0xd7, 0x50, \
      0x5f, 0x79, 0x07, 0x28, 0x77, 0x47, 0xd8, 0x80, \
    }}
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo__TYPE_VERSION_HASH = sensor_msgs__srv__SetCameraInfo__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__srv__SetCameraInfo_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xf8, 0x27, 0x23, 0x40, 0x81, 0x53, 0x6e, 0x0d, \
      0x2e, 0x5a, 0x5c, 0xed, 0x30, 0x45, 0x26, 0x05, \
      0x34, 0x08, 0x1d, 0x85, 0xa9, 0xa7, 0xfa, 0x1c, \
      0x29, 0x88, 0x14, 0xa1, 0x00, 0x92, 0xc9, 0x2f, \
    }}
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Request__TYPE_VERSION_HASH = sensor_msgs__srv__SetCameraInfo_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Request
{
  /// The camera_info to store
  sensor_msgs__msg__CameraInfo camera_info;
} sensor_msgs__srv__SetCameraInfo_Request;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Request.
typedef struct sensor_msgs__srv__SetCameraInfo_Request__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__srv__SetCameraInfo_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xdd, 0x2f, 0xba, 0x55, 0x4d, 0xb5, 0x0f, 0xa8, \
      0xd7, 0x47, 0x1d, 0xf0, 0xcd, 0x62, 0x6e, 0x18, \
      0xf7, 0xef, 0x5b, 0xee, 0x15, 0x57, 0xd5, 0x61, \
      0x14, 0xc6, 0x0b, 0x36, 0x32, 0x31, 0xa5, 0xc5, \
    }}
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Response__TYPE_VERSION_HASH = sensor_msgs__srv__SetCameraInfo_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Response
{
  /// True if the call succeeded
  bool success;
  /// Used to give details about success
  rosidl_runtime_c__String status_message;
} sensor_msgs__srv__SetCameraInfo_Response;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Response.
typedef struct sensor_msgs__srv__SetCameraInfo_Response__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__srv__SetCameraInfo_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x83, 0x33, 0x49, 0x65, 0x28, 0x34, 0x6f, 0xd3, \
      0xbe, 0xe9, 0xe3, 0x3a, 0x9b, 0x2f, 0x6d, 0x68, \
      0x5a, 0x7a, 0xea, 0x30, 0x65, 0x34, 0x15, 0x7b, \
      0xa1, 0xec, 0x87, 0x77, 0xc6, 0x6e, 0xbf, 0x20, \
    }}
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Event__TYPE_VERSION_HASH = sensor_msgs__srv__SetCameraInfo_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sensor_msgs__srv__SetCameraInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sensor_msgs__srv__SetCameraInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sensor_msgs__srv__SetCameraInfo_Request__Sequence request;
  sensor_msgs__srv__SetCameraInfo_Response__Sequence response;
} sensor_msgs__srv__SetCameraInfo_Event;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Event.
typedef struct sensor_msgs__srv__SetCameraInfo_Event__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_
