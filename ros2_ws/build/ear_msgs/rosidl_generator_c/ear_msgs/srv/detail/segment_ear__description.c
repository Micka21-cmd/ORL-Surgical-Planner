// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ear_msgs:srv/SegmentEar.idl
// generated code does not contain a copyright notice

#include "ear_msgs/srv/detail/segment_ear__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__SegmentEar__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x47, 0xa2, 0x23, 0x0a, 0xe4, 0xbb, 0xd6,
      0x87, 0xfa, 0x35, 0x1d, 0xea, 0x36, 0x4b, 0xee,
      0x34, 0x49, 0x6c, 0xfc, 0xbc, 0x29, 0x62, 0xdd,
      0x85, 0x84, 0xae, 0xcc, 0x33, 0x17, 0x6b, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__SegmentEar_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0xbc, 0xfc, 0x9f, 0xcf, 0x16, 0xfd, 0x49,
      0x16, 0x9a, 0x5c, 0x51, 0xf1, 0x6b, 0x7f, 0xe3,
      0x22, 0xfc, 0x9b, 0xc3, 0x70, 0xf4, 0xa2, 0xf1,
      0x80, 0xef, 0x98, 0x65, 0x2a, 0x87, 0x6c, 0x58,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__SegmentEar_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xb9, 0x1c, 0x6a, 0xe0, 0x84, 0x71, 0x01,
      0x82, 0x30, 0x94, 0x14, 0xdd, 0x6c, 0xbb, 0xf5,
      0x03, 0xb2, 0x80, 0xd5, 0x00, 0x9f, 0x27, 0x4d,
      0x02, 0x2b, 0x55, 0x3f, 0xbb, 0x13, 0x2f, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ear_msgs
const rosidl_type_hash_t *
ear_msgs__srv__SegmentEar_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x1d, 0x94, 0x19, 0x52, 0xbc, 0xb3, 0xd7,
      0x7c, 0x79, 0x15, 0xca, 0x08, 0x84, 0x5a, 0xda,
      0x65, 0xdc, 0xae, 0x50, 0x33, 0x8b, 0xb6, 0xe9,
      0xd8, 0xaa, 0x70, 0xd3, 0x66, 0x39, 0xfa, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ear_msgs__srv__SegmentEar__TYPE_NAME[] = "ear_msgs/srv/SegmentEar";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ear_msgs__srv__SegmentEar_Event__TYPE_NAME[] = "ear_msgs/srv/SegmentEar_Event";
static char ear_msgs__srv__SegmentEar_Request__TYPE_NAME[] = "ear_msgs/srv/SegmentEar_Request";
static char ear_msgs__srv__SegmentEar_Response__TYPE_NAME[] = "ear_msgs/srv/SegmentEar_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ear_msgs__srv__SegmentEar__FIELD_NAME__request_message[] = "request_message";
static char ear_msgs__srv__SegmentEar__FIELD_NAME__response_message[] = "response_message";
static char ear_msgs__srv__SegmentEar__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__SegmentEar__FIELDS[] = {
  {
    {ear_msgs__srv__SegmentEar__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ear_msgs__srv__SegmentEar_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ear_msgs__srv__SegmentEar__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__SegmentEar__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__SegmentEar__TYPE_NAME, 23, 23},
      {ear_msgs__srv__SegmentEar__FIELDS, 3, 3},
    },
    {ear_msgs__srv__SegmentEar__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ear_msgs__srv__SegmentEar_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ear_msgs__srv__SegmentEar_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ear_msgs__srv__SegmentEar_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__SegmentEar_Request__FIELD_NAME__mri_path[] = "mri_path";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__SegmentEar_Request__FIELDS[] = {
  {
    {ear_msgs__srv__SegmentEar_Request__FIELD_NAME__mri_path, 8, 8},
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
ear_msgs__srv__SegmentEar_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
      {ear_msgs__srv__SegmentEar_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__SegmentEar_Response__FIELD_NAME__mask_path[] = "mask_path";
static char ear_msgs__srv__SegmentEar_Response__FIELD_NAME__mesh_path[] = "mesh_path";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__SegmentEar_Response__FIELDS[] = {
  {
    {ear_msgs__srv__SegmentEar_Response__FIELD_NAME__mask_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Response__FIELD_NAME__mesh_path, 9, 9},
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
ear_msgs__srv__SegmentEar_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
      {ear_msgs__srv__SegmentEar_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ear_msgs__srv__SegmentEar_Event__FIELD_NAME__info[] = "info";
static char ear_msgs__srv__SegmentEar_Event__FIELD_NAME__request[] = "request";
static char ear_msgs__srv__SegmentEar_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ear_msgs__srv__SegmentEar_Event__FIELDS[] = {
  {
    {ear_msgs__srv__SegmentEar_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ear_msgs__srv__SegmentEar_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ear_msgs__srv__SegmentEar_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ear_msgs__srv__SegmentEar_Event__TYPE_NAME, 29, 29},
      {ear_msgs__srv__SegmentEar_Event__FIELDS, 3, 3},
    },
    {ear_msgs__srv__SegmentEar_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ear_msgs__srv__SegmentEar_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ear_msgs__srv__SegmentEar_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string mri_path\n"
  "---\n"
  "string mask_path\n"
  "string mesh_path";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__SegmentEar__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__SegmentEar__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__SegmentEar_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__SegmentEar_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__SegmentEar_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__SegmentEar_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ear_msgs__srv__SegmentEar_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ear_msgs__srv__SegmentEar_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__SegmentEar__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__SegmentEar__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ear_msgs__srv__SegmentEar_Event__get_individual_type_description_source(NULL);
    sources[3] = *ear_msgs__srv__SegmentEar_Request__get_individual_type_description_source(NULL);
    sources[4] = *ear_msgs__srv__SegmentEar_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__SegmentEar_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__SegmentEar_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__SegmentEar_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__SegmentEar_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ear_msgs__srv__SegmentEar_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ear_msgs__srv__SegmentEar_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ear_msgs__srv__SegmentEar_Request__get_individual_type_description_source(NULL);
    sources[3] = *ear_msgs__srv__SegmentEar_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
