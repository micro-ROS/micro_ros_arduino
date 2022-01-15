// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'pointing_axis'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'pointing_frame'
#include "rosidl_runtime_c/string.h"
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Goal
{
  geometry_msgs__msg__PointStamped target;
  geometry_msgs__msg__Vector3 pointing_axis;
  rosidl_runtime_c__String pointing_frame;
  builtin_interfaces__msg__Duration min_duration;
  double max_velocity;
} control_msgs__action__PointHead_Goal;

// Struct for a sequence of control_msgs__action__PointHead_Goal.
typedef struct control_msgs__action__PointHead_Goal__Sequence
{
  control_msgs__action__PointHead_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Result
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__PointHead_Result;

// Struct for a sequence of control_msgs__action__PointHead_Result.
typedef struct control_msgs__action__PointHead_Result__Sequence
{
  control_msgs__action__PointHead_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Feedback
{
  double pointing_angle_error;
} control_msgs__action__PointHead_Feedback;

// Struct for a sequence of control_msgs__action__PointHead_Feedback.
typedef struct control_msgs__action__PointHead_Feedback__Sequence
{
  control_msgs__action__PointHead_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__PointHead_Goal goal;
} control_msgs__action__PointHead_SendGoal_Request;

// Struct for a sequence of control_msgs__action__PointHead_SendGoal_Request.
typedef struct control_msgs__action__PointHead_SendGoal_Request__Sequence
{
  control_msgs__action__PointHead_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__PointHead_SendGoal_Response;

// Struct for a sequence of control_msgs__action__PointHead_SendGoal_Response.
typedef struct control_msgs__action__PointHead_SendGoal_Response__Sequence
{
  control_msgs__action__PointHead_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__PointHead_GetResult_Request;

// Struct for a sequence of control_msgs__action__PointHead_GetResult_Request.
typedef struct control_msgs__action__PointHead_GetResult_Request__Sequence
{
  control_msgs__action__PointHead_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_GetResult_Response
{
  int8_t status;
  control_msgs__action__PointHead_Result result;
} control_msgs__action__PointHead_GetResult_Response;

// Struct for a sequence of control_msgs__action__PointHead_GetResult_Response.
typedef struct control_msgs__action__PointHead_GetResult_Response__Sequence
{
  control_msgs__action__PointHead_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__PointHead_Feedback feedback;
} control_msgs__action__PointHead_FeedbackMessage;

// Struct for a sequence of control_msgs__action__PointHead_FeedbackMessage.
typedef struct control_msgs__action__PointHead_FeedbackMessage__Sequence
{
  control_msgs__action__PointHead_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_
