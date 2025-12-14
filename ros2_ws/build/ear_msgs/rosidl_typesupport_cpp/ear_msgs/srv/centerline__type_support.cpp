// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ear_msgs/srv/detail/centerline__functions.h"
#include "ear_msgs/srv/detail/centerline__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Centerline_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Centerline_Request_type_support_ids_t;

static const _Centerline_Request_type_support_ids_t _Centerline_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Centerline_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Centerline_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Centerline_Request_type_support_symbol_names_t _Centerline_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ear_msgs, srv, Centerline_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ear_msgs, srv, Centerline_Request)),
  }
};

typedef struct _Centerline_Request_type_support_data_t
{
  void * data[2];
} _Centerline_Request_type_support_data_t;

static _Centerline_Request_type_support_data_t _Centerline_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Centerline_Request_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Centerline_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Centerline_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Centerline_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Centerline_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Centerline_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ear_msgs__srv__Centerline_Request__get_type_hash,
  &ear_msgs__srv__Centerline_Request__get_type_description,
  &ear_msgs__srv__Centerline_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ear_msgs::srv::Centerline_Request>()
{
  return &::ear_msgs::srv::rosidl_typesupport_cpp::Centerline_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ear_msgs, srv, Centerline_Request)() {
  return get_message_type_support_handle<ear_msgs::srv::Centerline_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ear_msgs/srv/detail/centerline__functions.h"
// already included above
// #include "ear_msgs/srv/detail/centerline__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Centerline_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Centerline_Response_type_support_ids_t;

static const _Centerline_Response_type_support_ids_t _Centerline_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Centerline_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Centerline_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Centerline_Response_type_support_symbol_names_t _Centerline_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ear_msgs, srv, Centerline_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ear_msgs, srv, Centerline_Response)),
  }
};

typedef struct _Centerline_Response_type_support_data_t
{
  void * data[2];
} _Centerline_Response_type_support_data_t;

static _Centerline_Response_type_support_data_t _Centerline_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Centerline_Response_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Centerline_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Centerline_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Centerline_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Centerline_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Centerline_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ear_msgs__srv__Centerline_Response__get_type_hash,
  &ear_msgs__srv__Centerline_Response__get_type_description,
  &ear_msgs__srv__Centerline_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ear_msgs::srv::Centerline_Response>()
{
  return &::ear_msgs::srv::rosidl_typesupport_cpp::Centerline_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ear_msgs, srv, Centerline_Response)() {
  return get_message_type_support_handle<ear_msgs::srv::Centerline_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ear_msgs/srv/detail/centerline__functions.h"
// already included above
// #include "ear_msgs/srv/detail/centerline__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Centerline_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Centerline_Event_type_support_ids_t;

static const _Centerline_Event_type_support_ids_t _Centerline_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Centerline_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Centerline_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Centerline_Event_type_support_symbol_names_t _Centerline_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ear_msgs, srv, Centerline_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ear_msgs, srv, Centerline_Event)),
  }
};

typedef struct _Centerline_Event_type_support_data_t
{
  void * data[2];
} _Centerline_Event_type_support_data_t;

static _Centerline_Event_type_support_data_t _Centerline_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Centerline_Event_message_typesupport_map = {
  2,
  "ear_msgs",
  &_Centerline_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Centerline_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Centerline_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Centerline_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Centerline_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ear_msgs__srv__Centerline_Event__get_type_hash,
  &ear_msgs__srv__Centerline_Event__get_type_description,
  &ear_msgs__srv__Centerline_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ear_msgs::srv::Centerline_Event>()
{
  return &::ear_msgs::srv::rosidl_typesupport_cpp::Centerline_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ear_msgs, srv, Centerline_Event)() {
  return get_message_type_support_handle<ear_msgs::srv::Centerline_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ear_msgs/srv/detail/centerline__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ear_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Centerline_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Centerline_type_support_ids_t;

static const _Centerline_type_support_ids_t _Centerline_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Centerline_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Centerline_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Centerline_type_support_symbol_names_t _Centerline_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ear_msgs, srv, Centerline)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ear_msgs, srv, Centerline)),
  }
};

typedef struct _Centerline_type_support_data_t
{
  void * data[2];
} _Centerline_type_support_data_t;

static _Centerline_type_support_data_t _Centerline_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Centerline_service_typesupport_map = {
  2,
  "ear_msgs",
  &_Centerline_service_typesupport_ids.typesupport_identifier[0],
  &_Centerline_service_typesupport_symbol_names.symbol_name[0],
  &_Centerline_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Centerline_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Centerline_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ear_msgs::srv::Centerline_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ear_msgs::srv::Centerline_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ear_msgs::srv::Centerline_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ear_msgs::srv::Centerline>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ear_msgs::srv::Centerline>,
  &ear_msgs__srv__Centerline__get_type_hash,
  &ear_msgs__srv__Centerline__get_type_description,
  &ear_msgs__srv__Centerline__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ear_msgs::srv::Centerline>()
{
  return &::ear_msgs::srv::rosidl_typesupport_cpp::Centerline_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ear_msgs, srv, Centerline)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ear_msgs::srv::Centerline>();
}

#ifdef __cplusplus
}
#endif
