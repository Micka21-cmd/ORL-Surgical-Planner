// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ear_msgs:action/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/action/plan_path.h"


#ifndef EAR_MSGS__ACTION__DETAIL__PLAN_PATH__STRUCT_H_
#define EAR_MSGS__ACTION__DETAIL__PLAN_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entry'
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_Goal
{
  geometry_msgs__msg__PoseStamped entry;
  geometry_msgs__msg__PoseStamped target;
  float tool_diam_mm;
  float safety_margin_mm;
} ear_msgs__action__PlanPath_Goal;

// Struct for a sequence of ear_msgs__action__PlanPath_Goal.
typedef struct ear_msgs__action__PlanPath_Goal__Sequence
{
  ear_msgs__action__PlanPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_Result
{
  nav_msgs__msg__Path path;
  float min_clearance_mm;
  float est_time_s;
} ear_msgs__action__PlanPath_Result;

// Struct for a sequence of ear_msgs__action__PlanPath_Result.
typedef struct ear_msgs__action__PlanPath_Result__Sequence
{
  ear_msgs__action__PlanPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_Feedback
{
  float progress;
} ear_msgs__action__PlanPath_Feedback;

// Struct for a sequence of ear_msgs__action__PlanPath_Feedback.
typedef struct ear_msgs__action__PlanPath_Feedback__Sequence
{
  ear_msgs__action__PlanPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ear_msgs/action/detail/plan_path__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ear_msgs__action__PlanPath_Goal goal;
} ear_msgs__action__PlanPath_SendGoal_Request;

// Struct for a sequence of ear_msgs__action__PlanPath_SendGoal_Request.
typedef struct ear_msgs__action__PlanPath_SendGoal_Request__Sequence
{
  ear_msgs__action__PlanPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ear_msgs__action__PlanPath_SendGoal_Response;

// Struct for a sequence of ear_msgs__action__PlanPath_SendGoal_Response.
typedef struct ear_msgs__action__PlanPath_SendGoal_Response__Sequence
{
  ear_msgs__action__PlanPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ear_msgs__action__PlanPath_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ear_msgs__action__PlanPath_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ear_msgs__action__PlanPath_SendGoal_Request__Sequence request;
  ear_msgs__action__PlanPath_SendGoal_Response__Sequence response;
} ear_msgs__action__PlanPath_SendGoal_Event;

// Struct for a sequence of ear_msgs__action__PlanPath_SendGoal_Event.
typedef struct ear_msgs__action__PlanPath_SendGoal_Event__Sequence
{
  ear_msgs__action__PlanPath_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ear_msgs__action__PlanPath_GetResult_Request;

// Struct for a sequence of ear_msgs__action__PlanPath_GetResult_Request.
typedef struct ear_msgs__action__PlanPath_GetResult_Request__Sequence
{
  ear_msgs__action__PlanPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ear_msgs/action/detail/plan_path__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_GetResult_Response
{
  int8_t status;
  ear_msgs__action__PlanPath_Result result;
} ear_msgs__action__PlanPath_GetResult_Response;

// Struct for a sequence of ear_msgs__action__PlanPath_GetResult_Response.
typedef struct ear_msgs__action__PlanPath_GetResult_Response__Sequence
{
  ear_msgs__action__PlanPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ear_msgs__action__PlanPath_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ear_msgs__action__PlanPath_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ear_msgs__action__PlanPath_GetResult_Request__Sequence request;
  ear_msgs__action__PlanPath_GetResult_Response__Sequence response;
} ear_msgs__action__PlanPath_GetResult_Event;

// Struct for a sequence of ear_msgs__action__PlanPath_GetResult_Event.
typedef struct ear_msgs__action__PlanPath_GetResult_Event__Sequence
{
  ear_msgs__action__PlanPath_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ear_msgs/action/detail/plan_path__struct.h"

/// Struct defined in action/PlanPath in the package ear_msgs.
typedef struct ear_msgs__action__PlanPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ear_msgs__action__PlanPath_Feedback feedback;
} ear_msgs__action__PlanPath_FeedbackMessage;

// Struct for a sequence of ear_msgs__action__PlanPath_FeedbackMessage.
typedef struct ear_msgs__action__PlanPath_FeedbackMessage__Sequence
{
  ear_msgs__action__PlanPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__action__PlanPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAR_MSGS__ACTION__DETAIL__PLAN_PATH__STRUCT_H_
