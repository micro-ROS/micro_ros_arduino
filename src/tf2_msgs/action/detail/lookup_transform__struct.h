// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_frame'
// Member 'source_frame'
// Member 'fixed_frame'
#include "rosidl_runtime_c/string.h"
// Member 'source_time'
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Goal
{
  rosidl_runtime_c__String target_frame;
  rosidl_runtime_c__String source_frame;
  builtin_interfaces__msg__Time source_time;
  builtin_interfaces__msg__Duration timeout;
  /// Advanced API
  builtin_interfaces__msg__Time target_time;
  rosidl_runtime_c__String fixed_frame;
  /// Whether or not to use the advanced API
  bool advanced;
} tf2_msgs__action__LookupTransform_Goal;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Goal.
typedef struct tf2_msgs__action__LookupTransform_Goal__Sequence
{
  tf2_msgs__action__LookupTransform_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'error'
#include "tf2_msgs/msg/detail/tf2_error__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Result
{
  geometry_msgs__msg__TransformStamped transform;
  tf2_msgs__msg__TF2Error error;
} tf2_msgs__action__LookupTransform_Result;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Result.
typedef struct tf2_msgs__action__LookupTransform_Result__Sequence
{
  tf2_msgs__action__LookupTransform_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} tf2_msgs__action__LookupTransform_Feedback;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Feedback.
typedef struct tf2_msgs__action__LookupTransform_Feedback__Sequence
{
  tf2_msgs__action__LookupTransform_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_msgs__action__LookupTransform_Goal goal;
} tf2_msgs__action__LookupTransform_SendGoal_Request;

// Struct for a sequence of tf2_msgs__action__LookupTransform_SendGoal_Request.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence
{
  tf2_msgs__action__LookupTransform_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tf2_msgs__action__LookupTransform_SendGoal_Response;

// Struct for a sequence of tf2_msgs__action__LookupTransform_SendGoal_Response.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence
{
  tf2_msgs__action__LookupTransform_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tf2_msgs__action__LookupTransform_GetResult_Request;

// Struct for a sequence of tf2_msgs__action__LookupTransform_GetResult_Request.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Request__Sequence
{
  tf2_msgs__action__LookupTransform_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Response
{
  int8_t status;
  tf2_msgs__action__LookupTransform_Result result;
} tf2_msgs__action__LookupTransform_GetResult_Response;

// Struct for a sequence of tf2_msgs__action__LookupTransform_GetResult_Response.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Response__Sequence
{
  tf2_msgs__action__LookupTransform_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_msgs__action__LookupTransform_Feedback feedback;
} tf2_msgs__action__LookupTransform_FeedbackMessage;

// Struct for a sequence of tf2_msgs__action__LookupTransform_FeedbackMessage.
typedef struct tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence
{
  tf2_msgs__action__LookupTransform_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_
