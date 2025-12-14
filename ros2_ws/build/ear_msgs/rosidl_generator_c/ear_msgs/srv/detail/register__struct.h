// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ear_msgs:srv/Register.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/register.h"


#ifndef EAR_MSGS__SRV__DETAIL__REGISTER__STRUCT_H_
#define EAR_MSGS__SRV__DETAIL__REGISTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mesh_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Register in the package ear_msgs.
typedef struct ear_msgs__srv__Register_Request
{
  rosidl_runtime_c__String mesh_path;
} ear_msgs__srv__Register_Request;

// Struct for a sequence of ear_msgs__srv__Register_Request.
typedef struct ear_msgs__srv__Register_Request__Sequence
{
  ear_msgs__srv__Register_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Register_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'mri_to_world'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in srv/Register in the package ear_msgs.
typedef struct ear_msgs__srv__Register_Response
{
  geometry_msgs__msg__TransformStamped mri_to_world;
} ear_msgs__srv__Register_Response;

// Struct for a sequence of ear_msgs__srv__Register_Response.
typedef struct ear_msgs__srv__Register_Response__Sequence
{
  ear_msgs__srv__Register_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Register_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ear_msgs__srv__Register_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ear_msgs__srv__Register_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Register in the package ear_msgs.
typedef struct ear_msgs__srv__Register_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ear_msgs__srv__Register_Request__Sequence request;
  ear_msgs__srv__Register_Response__Sequence response;
} ear_msgs__srv__Register_Event;

// Struct for a sequence of ear_msgs__srv__Register_Event.
typedef struct ear_msgs__srv__Register_Event__Sequence
{
  ear_msgs__srv__Register_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ear_msgs__srv__Register_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAR_MSGS__SRV__DETAIL__REGISTER__STRUCT_H_
