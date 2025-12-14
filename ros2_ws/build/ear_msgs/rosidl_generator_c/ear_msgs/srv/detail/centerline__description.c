// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice

#include "ear_msgs/srv/detail/centerline__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__Centerline__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xa7, 0x41, 0xf6, 0xb7, 0xe4, 0x28, 0x31,
      0xec, 0x0d, 0xb9, 0xe8, 0x92, 0xf3, 0x22, 0xff,
      0xd6, 0x3d, 0xd2, 0x06, 0x3b, 0x93, 0xb3, 0x22,
      0x9d, 0x47, 0xc0, 0x4d, 0xa0, 0xdb, 0xa3, 0x21,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__Centerline_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0xac, 0xbc, 0x21, 0x57, 0xc4, 0x55, 0xd9,
      0x04, 0xef, 0xbc, 0xf5, 0x7e, 0x5b, 0xc2, 0x8f,
      0xaa, 0x65, 0x9e, 0x12, 0x1c, 0x36, 0xba, 0x6b,
      0xcd, 0x23, 0xf0, 0x6f, 0x64, 0xb8, 0xc8, 0x25,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__Centerline_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x15, 0xf6, 0xbe, 0x26, 0xfe, 0xd7, 0x97,
      0x80, 0xbf, 0x0d, 0xd1, 0xff, 0xa2, 0xe9, 0x16,
      0x5c, 0xd5, 0x8a, 0x70, 0xd3, 0xa5, 0xca, 0x80,
      0x6d, 0xe3, 0x33, 0xc5, 0xb5, 0x7a, 0x10, 0x6d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__Centerline_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x4e, 0xdb, 0x05, 0x85, 0x0a, 0xea, 0x44,
      0x2f, 0x27, 0xb4, 0xcd, 0x0f, 0xae, 0x11, 0xb6,
      0xc6, 0x1e, 0x48, 0xa5, 0xcb, 0x0d, 0x79, 0x0d,
      0xc4, 0xfa, 0xd7, 0xe0, 0xed, 0x80, 0xdf, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/pose_array__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseArray__EXPECTED_HASH = {1, {
    0xaf, 0x0c, 0xc3, 0x6d, 0x19, 0x0e, 0x10, 0x4d,
    0x54, 0x6d, 0x16, 0x8d, 0x6b, 0x39, 0xdf, 0x04,
    0xfa, 0x4b, 0x4c, 0xce, 0xcf, 0x59, 0xcb, 0x4c,
    0x9e, 0xd3, 0x28, 0xd3, 0xd5, 0x00, 0x4a, 0xa0,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ear_msgs__srv__Centerline__TYPE_NAME[] = "ear_msgs/srv/Centerline";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ear_msgs__srv__Centerline_Event__TYPE_NAME[] = "ear_msgs/srv/Centerline_Event";
static char ear_msgs__srv__Centerline_Request__TYPE_NAME[] = "ear_msgs/srv/Centerline_Request";
static char ear_msgs__srv__Centerline_Response__TYPE_NAME[] = "ear_msgs/srv/Centerline_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseArray__TYPE_NAME[] = "geometry_msgs/msg/PoseArray";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ear_msgs__srv__Centerline__FIELD_NAME__request_message[] = "request_message";
static char ear_msgs__srv__Centerline__FIELD_NAME__response_message[] = "response_message";
static char ear_msgs__srv__Centerline__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__Centerline__FIELDS[] = {
  {
    {ear_msgs__srv__Centerline__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__Centerline_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ear_msgs__srv__Centerline__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__Centerline__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__Centerline__TYPE_NAME, 23, 23},
      {ear_msgs__srv__Centerline__FIELDS, 3, 3},
    },
    {ear_msgs__srv__Centerline__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ear_msgs__srv__Centerline_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ear_msgs__srv__Centerline_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ear_msgs__srv__Centerline_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__Centerline_Request__FIELD_NAME__mask_path[] = "mask_path";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__Centerline_Request__FIELDS[] = {
  {
    {ear_msgs__srv__Centerline_Request__FIELD_NAME__mask_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__Centerline_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
      {ear_msgs__srv__Centerline_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__Centerline_Response__FIELD_NAME__centerline[] = "centerline";
static char ear_msgs__srv__Centerline_Response__FIELD_NAME__sdf_path[] = "sdf_path";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__Centerline_Response__FIELDS[] = {
  {
    {ear_msgs__srv__Centerline_Response__FIELD_NAME__centerline, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Response__FIELD_NAME__sdf_path, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ear_msgs__srv__Centerline_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__Centerline_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
      {ear_msgs__srv__Centerline_Response__FIELDS, 2, 2},
    },
    {ear_msgs__srv__Centerline_Response__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__Centerline_Event__FIELD_NAME__info[] = "info";
static char ear_msgs__srv__Centerline_Event__FIELD_NAME__request[] = "request";
static char ear_msgs__srv__Centerline_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__Centerline_Event__FIELDS[] = {
  {
    {ear_msgs__srv__Centerline_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ear_msgs__srv__Centerline_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__Centerline_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__Centerline_Event__TYPE_NAME, 29, 29},
      {ear_msgs__srv__Centerline_Event__FIELDS, 3, 3},
    },
    {ear_msgs__srv__Centerline_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ear_msgs__srv__Centerline_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ear_msgs__srv__Centerline_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string mask_path\n"
  "---\n"
  "geometry_msgs/PoseArray centerline\n"
  "string sdf_path";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__Centerline__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__Centerline__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 71, 71},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__Centerline_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__Centerline_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__Centerline_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__Centerline_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__Centerline_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__Centerline_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__Centerline__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__Centerline__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ear_msgs__srv__Centerline_Event__get_individual_type_description_source(NULL);
    sources[3] = *ear_msgs__srv__Centerline_Request__get_individual_type_description_source(NULL);
    sources[4] = *ear_msgs__srv__Centerline_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__Centerline_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__Centerline_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__Centerline_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__Centerline_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__Centerline_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__Centerline_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ear_msgs__srv__Centerline_Request__get_individual_type_description_source(NULL);
    sources[3] = *ear_msgs__srv__Centerline_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
