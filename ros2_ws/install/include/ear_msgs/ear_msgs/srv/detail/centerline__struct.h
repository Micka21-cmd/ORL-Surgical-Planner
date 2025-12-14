// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/centerline.h"


#ifndef EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_H_
#define EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mask_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Centerline in the package ear_msgs.
typedef struct ear_msgs__srv__Centerline_Request
{
  rosidl_runtime_c__String mask_path;
} ear_msgs__srv__Centerline_Request;

// Struct for a sequence of ear_msgs__srv__Centerline_Request.
typedef struct ear_msgs__srv__Centerline_Request__Sequence
{
  ear_msgs__srv__Centerline_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Centerline_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'centerline'
#include "geometry_msgs/msg/detail/pose_array__struct.h"
// Member 'sdf_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Centerline in the package ear_msgs.
typedef struct ear_msgs__srv__Centerline_Response
{
  geometry_msgs__msg__PoseArray centerline;
  rosidl_runtime_c__String sdf_path;
} ear_msgs__srv__Centerline_Response;

// Struct for a sequence of ear_msgs__srv__Centerline_Response.
typedef struct ear_msgs__srv__Centerline_Response__Sequence
{
  ear_msgs__srv__Centerline_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Centerline_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ear_msgs__srv__Centerline_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ear_msgs__srv__Centerline_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Centerline in the package ear_msgs.
typedef struct ear_msgs__srv__Centerline_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ear_msgs__srv__Centerline_Request__Sequence request;
  ear_msgs__srv__Centerline_Response__Sequence response;
} ear_msgs__srv__Centerline_Event;

// Struct for a sequence of ear_msgs__srv__Centerline_Event.
typedef struct ear_msgs__srv__Centerline_Event__Sequence
{
  ear_msgs__srv__Centerline_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Centerline_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_H_
