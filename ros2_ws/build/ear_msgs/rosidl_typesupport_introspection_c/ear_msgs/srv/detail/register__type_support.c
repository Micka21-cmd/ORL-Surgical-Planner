// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ear_msgs:srv/Register.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ear_msgs/srv/detail/register__rosidl_typesupport_introspection_c.h"
#include "ear_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ear_msgs/srv/detail/register__functions.h"
#include "ear_msgs/srv/detail/register__struct.h"


// Include directives for member types
// Member `mesh_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ear_msgs__srv__Register_Request__init(message_memory);
}

void ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_fini_function(void * message_memory)
{
  ear_msgs__srv__Register_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_member_array[1] = {
  {
    "mesh_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ear_msgs__srv__Register_Request, mesh_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_members = {
  "ear_msgs__srv",  // message namespace
  "Register_Request",  // message name
  1,  // number of fields
  sizeof(ear_msgs__srv__Register_Request),
  false,  // has_any_key_member_
  ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_member_array,  // message members
  ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle = {
  0,
  &ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_members,
  get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Request__get_type_hash,
  &ear_msgs__srv__Register_Request__get_type_description,
  &ear_msgs__srv__Register_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ear_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Request)() {
  if (!ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle.typesupport_identifier) {
    ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ear_msgs/srv/detail/register__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ear_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ear_msgs/srv/detail/register__functions.h"
// already included above
// #include "ear_msgs/srv/detail/register__struct.h"


// Include directives for member types
// Member `mri_to_world`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `mri_to_world`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ear_msgs__srv__Register_Response__init(message_memory);
}

void ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_fini_function(void * message_memory)
{
  ear_msgs__srv__Register_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_member_array[1] = {
  {
    "mri_to_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ear_msgs__srv__Register_Response, mri_to_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_members = {
  "ear_msgs__srv",  // message namespace
  "Register_Response",  // message name
  1,  // number of fields
  sizeof(ear_msgs__srv__Register_Response),
  false,  // has_any_key_member_
  ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_member_array,  // message members
  ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle = {
  0,
  &ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_members,
  get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Response__get_type_hash,
  &ear_msgs__srv__Register_Response__get_type_description,
  &ear_msgs__srv__Register_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ear_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Response)() {
  ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle.typesupport_identifier) {
    ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ear_msgs/srv/detail/register__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ear_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ear_msgs/srv/detail/register__functions.h"
// already included above
// #include "ear_msgs/srv/detail/register__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ear_msgs/srv/register.h"
// Member `request`
// Member `response`
// already included above
// #include "ear_msgs/srv/detail/register__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ear_msgs__srv__Register_Event__init(message_memory);
}

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_fini_function(void * message_memory)
{
  ear_msgs__srv__Register_Event__fini(message_memory);
}

size_t ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__size_function__Register_Event__request(
  const void * untyped_member)
{
  const ear_msgs__srv__Register_Request__Sequence * member =
    (const ear_msgs__srv__Register_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__request(
  const void * untyped_member, size_t index)
{
  const ear_msgs__srv__Register_Request__Sequence * member =
    (const ear_msgs__srv__Register_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__request(
  void * untyped_member, size_t index)
{
  ear_msgs__srv__Register_Request__Sequence * member =
    (ear_msgs__srv__Register_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__fetch_function__Register_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ear_msgs__srv__Register_Request * item =
    ((const ear_msgs__srv__Register_Request *)
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__request(untyped_member, index));
  ear_msgs__srv__Register_Request * value =
    (ear_msgs__srv__Register_Request *)(untyped_value);
  *value = *item;
}

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__assign_function__Register_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ear_msgs__srv__Register_Request * item =
    ((ear_msgs__srv__Register_Request *)
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__request(untyped_member, index));
  const ear_msgs__srv__Register_Request * value =
    (const ear_msgs__srv__Register_Request *)(untyped_value);
  *item = *value;
}

bool ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__resize_function__Register_Event__request(
  void * untyped_member, size_t size)
{
  ear_msgs__srv__Register_Request__Sequence * member =
    (ear_msgs__srv__Register_Request__Sequence *)(untyped_member);
  ear_msgs__srv__Register_Request__Sequence__fini(member);
  return ear_msgs__srv__Register_Request__Sequence__init(member, size);
}

size_t ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__size_function__Register_Event__response(
  const void * untyped_member)
{
  const ear_msgs__srv__Register_Response__Sequence * member =
    (const ear_msgs__srv__Register_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__response(
  const void * untyped_member, size_t index)
{
  const ear_msgs__srv__Register_Response__Sequence * member =
    (const ear_msgs__srv__Register_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__response(
  void * untyped_member, size_t index)
{
  ear_msgs__srv__Register_Response__Sequence * member =
    (ear_msgs__srv__Register_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__fetch_function__Register_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ear_msgs__srv__Register_Response * item =
    ((const ear_msgs__srv__Register_Response *)
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__response(untyped_member, index));
  ear_msgs__srv__Register_Response * value =
    (ear_msgs__srv__Register_Response *)(untyped_value);
  *value = *item;
}

void ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__assign_function__Register_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ear_msgs__srv__Register_Response * item =
    ((ear_msgs__srv__Register_Response *)
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__response(untyped_member, index));
  const ear_msgs__srv__Register_Response * value =
    (const ear_msgs__srv__Register_Response *)(untyped_value);
  *item = *value;
}

bool ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__resize_function__Register_Event__response(
  void * untyped_member, size_t size)
{
  ear_msgs__srv__Register_Response__Sequence * member =
    (ear_msgs__srv__Register_Response__Sequence *)(untyped_member);
  ear_msgs__srv__Register_Response__Sequence__fini(member);
  return ear_msgs__srv__Register_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ear_msgs__srv__Register_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ear_msgs__srv__Register_Event, request),  // bytes offset in struct
    NULL,  // default value
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__size_function__Register_Event__request,  // size() function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__request,  // get_const(index) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__request,  // get(index) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__fetch_function__Register_Event__request,  // fetch(index, &value) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__assign_function__Register_Event__request,  // assign(index, value) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__resize_function__Register_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ear_msgs__srv__Register_Event, response),  // bytes offset in struct
    NULL,  // default value
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__size_function__Register_Event__response,  // size() function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_const_function__Register_Event__response,  // get_const(index) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__get_function__Register_Event__response,  // get(index) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__fetch_function__Register_Event__response,  // fetch(index, &value) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__assign_function__Register_Event__response,  // assign(index, value) function pointer
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__resize_function__Register_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_members = {
  "ear_msgs__srv",  // message namespace
  "Register_Event",  // message name
  3,  // number of fields
  sizeof(ear_msgs__srv__Register_Event),
  false,  // has_any_key_member_
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_member_array,  // message members
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_type_support_handle = {
  0,
  &ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_members,
  get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Event__get_type_hash,
  &ear_msgs__srv__Register_Event__get_type_description,
  &ear_msgs__srv__Register_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ear_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Event)() {
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Request)();
  ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Response)();
  if (!ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_type_support_handle.typesupport_identifier) {
    ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ear_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ear_msgs/srv/detail/register__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_members = {
  "ear_msgs__srv",  // service namespace
  "Register",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle,
  NULL,  // response message
  // ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle
  NULL  // event_message
  // ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle
};


static rosidl_service_type_support_t ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_type_support_handle = {
  0,
  &ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_members,
  get_service_typesupport_handle_function,
  &ear_msgs__srv__Register_Request__rosidl_typesupport_introspection_c__Register_Request_message_type_support_handle,
  &ear_msgs__srv__Register_Response__rosidl_typesupport_introspection_c__Register_Response_message_type_support_handle,
  &ear_msgs__srv__Register_Event__rosidl_typesupport_introspection_c__Register_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ear_msgs,
    srv,
    Register
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ear_msgs,
    srv,
    Register
  ),
  &ear_msgs__srv__Register__get_type_hash,
  &ear_msgs__srv__Register__get_type_description,
  &ear_msgs__srv__Register__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ear_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register)(void) {
  if (!ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_type_support_handle.typesupport_identifier) {
    ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Event)()->data;
  }

  return &ear_msgs__srv__detail__register__rosidl_typesupport_introspection_c__Register_service_type_support_handle;
}
