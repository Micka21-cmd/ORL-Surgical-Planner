// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ear_msgs:srv/Register.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ear_msgs/srv/detail/register__struct.h"
#include "ear_msgs/srv/detail/register__type_support.h"
#include "ear_msgs/srv/detail/register__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Register_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Register_Request_type_support_ids_t;

static const _Register_Request_type_support_ids_t _Register_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Register_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Register_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Register_Request_type_support_symbol_names_t _Register_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ear_msgs, srv, Register_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Request)),
  }
};

typedef struct _Register_Request_type_support_data_t
{
  void * data[2];
} _Register_Request_type_support_data_t;

static _Register_Request_type_support_data_t _Register_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Register_Request_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Register_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Register_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Register_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Register_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Register_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Request__get_type_hash,
  &ear_msgs__srv__Register_Request__get_type_description,
  &ear_msgs__srv__Register_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ear_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ear_msgs, srv, Register_Request)() {
  return &::ear_msgs::srv::rosidl_typesupport_c::Register_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ear_msgs/srv/detail/register__struct.h"
// already included above
// #include "ear_msgs/srv/detail/register__type_support.h"
// already included above
// #include "ear_msgs/srv/detail/register__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Register_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Register_Response_type_support_ids_t;

static const _Register_Response_type_support_ids_t _Register_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Register_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Register_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Register_Response_type_support_symbol_names_t _Register_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ear_msgs, srv, Register_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Response)),
  }
};

typedef struct _Register_Response_type_support_data_t
{
  void * data[2];
} _Register_Response_type_support_data_t;

static _Register_Response_type_support_data_t _Register_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Register_Response_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Register_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Register_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Register_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Register_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Register_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Response__get_type_hash,
  &ear_msgs__srv__Register_Response__get_type_description,
  &ear_msgs__srv__Register_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ear_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ear_msgs, srv, Register_Response)() {
  return &::ear_msgs::srv::rosidl_typesupport_c::Register_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ear_msgs/srv/detail/register__struct.h"
// already included above
// #include "ear_msgs/srv/detail/register__type_support.h"
// already included above
// #include "ear_msgs/srv/detail/register__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Register_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Register_Event_type_support_ids_t;

static const _Register_Event_type_support_ids_t _Register_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Register_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Register_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Register_Event_type_support_symbol_names_t _Register_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ear_msgs, srv, Register_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register_Event)),
  }
};

typedef struct _Register_Event_type_support_data_t
{
  void * data[2];
} _Register_Event_type_support_data_t;

static _Register_Event_type_support_data_t _Register_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Register_Event_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Register_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Register_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Register_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Register_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Register_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ear_msgs__srv__Register_Event__get_type_hash,
  &ear_msgs__srv__Register_Event__get_type_description,
  &ear_msgs__srv__Register_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ear_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ear_msgs, srv, Register_Event)() {
  return &::ear_msgs::srv::rosidl_typesupport_c::Register_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ear_msgs/srv/detail/register__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Register_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Register_type_support_ids_t;

static const _Register_type_support_ids_t _Register_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Register_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Register_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Register_type_support_symbol_names_t _Register_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ear_msgs, srv, Register)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ear_msgs, srv, Register)),
  }
};

typedef struct _Register_type_support_data_t
{
  void * data[2];
} _Register_type_support_data_t;

static _Register_type_support_data_t _Register_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Register_service_typesupport_map = {
  2,
  "ear_msgs",
  &_Register_service_typesupport_ids.typesupport_identifier[0],
  &_Register_service_typesupport_symbol_names.symbol_name[0],
  &_Register_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Register_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Register_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Register_Request_message_type_support_handle,
  &Register_Response_message_type_support_handle,
  &Register_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ear_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ear_msgs, srv, Register)() {
  return &::ear_msgs::srv::rosidl_typesupport_c::Register_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
