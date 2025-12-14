// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice
#include "ear_msgs/srv/detail/centerline__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mask_path`
#include "rosidl_runtime_c/string_functions.h"

bool
ear_msgs__srv__Centerline_Request__init(ear_msgs__srv__Centerline_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mask_path
  if (!rosidl_runtime_c__String__init(&msg->mask_path)) {
    ear_msgs__srv__Centerline_Request__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Centerline_Request__fini(ear_msgs__srv__Centerline_Request * msg)
{
  if (!msg) {
    return;
  }
  // mask_path
  rosidl_runtime_c__String__fini(&msg->mask_path);
}

bool
ear_msgs__srv__Centerline_Request__are_equal(const ear_msgs__srv__Centerline_Request * lhs, const ear_msgs__srv__Centerline_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mask_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mask_path), &(rhs->mask_path)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Request__copy(
  const ear_msgs__srv__Centerline_Request * input,
  ear_msgs__srv__Centerline_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mask_path
  if (!rosidl_runtime_c__String__copy(
      &(input->mask_path), &(output->mask_path)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Centerline_Request *
ear_msgs__srv__Centerline_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Request * msg = (ear_msgs__srv__Centerline_Request *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Centerline_Request));
  bool success = ear_msgs__srv__Centerline_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Centerline_Request__destroy(ear_msgs__srv__Centerline_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Centerline_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Centerline_Request__Sequence__init(ear_msgs__srv__Centerline_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Request * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Centerline_Request *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Centerline_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Centerline_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Centerline_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ear_msgs__srv__Centerline_Request__Sequence__fini(ear_msgs__srv__Centerline_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ear_msgs__srv__Centerline_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ear_msgs__srv__Centerline_Request__Sequence *
ear_msgs__srv__Centerline_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Request__Sequence * array = (ear_msgs__srv__Centerline_Request__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Centerline_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Centerline_Request__Sequence__destroy(ear_msgs__srv__Centerline_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Centerline_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Centerline_Request__Sequence__are_equal(const ear_msgs__srv__Centerline_Request__Sequence * lhs, const ear_msgs__srv__Centerline_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Centerline_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Request__Sequence__copy(
  const ear_msgs__srv__Centerline_Request__Sequence * input,
  ear_msgs__srv__Centerline_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Centerline_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Centerline_Request * data =
      (ear_msgs__srv__Centerline_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Centerline_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Centerline_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Centerline_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `centerline`
#include "geometry_msgs/msg/detail/pose_array__functions.h"
// Member `sdf_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ear_msgs__srv__Centerline_Response__init(ear_msgs__srv__Centerline_Response * msg)
{
  if (!msg) {
    return false;
  }
  // centerline
  if (!geometry_msgs__msg__PoseArray__init(&msg->centerline)) {
    ear_msgs__srv__Centerline_Response__fini(msg);
    return false;
  }
  // sdf_path
  if (!rosidl_runtime_c__String__init(&msg->sdf_path)) {
    ear_msgs__srv__Centerline_Response__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Centerline_Response__fini(ear_msgs__srv__Centerline_Response * msg)
{
  if (!msg) {
    return;
  }
  // centerline
  geometry_msgs__msg__PoseArray__fini(&msg->centerline);
  // sdf_path
  rosidl_runtime_c__String__fini(&msg->sdf_path);
}

bool
ear_msgs__srv__Centerline_Response__are_equal(const ear_msgs__srv__Centerline_Response * lhs, const ear_msgs__srv__Centerline_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // centerline
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->centerline), &(rhs->centerline)))
  {
    return false;
  }
  // sdf_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sdf_path), &(rhs->sdf_path)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Response__copy(
  const ear_msgs__srv__Centerline_Response * input,
  ear_msgs__srv__Centerline_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // centerline
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->centerline), &(output->centerline)))
  {
    return false;
  }
  // sdf_path
  if (!rosidl_runtime_c__String__copy(
      &(input->sdf_path), &(output->sdf_path)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Centerline_Response *
ear_msgs__srv__Centerline_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Response * msg = (ear_msgs__srv__Centerline_Response *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Centerline_Response));
  bool success = ear_msgs__srv__Centerline_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Centerline_Response__destroy(ear_msgs__srv__Centerline_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Centerline_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Centerline_Response__Sequence__init(ear_msgs__srv__Centerline_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Response * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Centerline_Response *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Centerline_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Centerline_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Centerline_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ear_msgs__srv__Centerline_Response__Sequence__fini(ear_msgs__srv__Centerline_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ear_msgs__srv__Centerline_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ear_msgs__srv__Centerline_Response__Sequence *
ear_msgs__srv__Centerline_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Response__Sequence * array = (ear_msgs__srv__Centerline_Response__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Centerline_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Centerline_Response__Sequence__destroy(ear_msgs__srv__Centerline_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Centerline_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Centerline_Response__Sequence__are_equal(const ear_msgs__srv__Centerline_Response__Sequence * lhs, const ear_msgs__srv__Centerline_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Centerline_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Response__Sequence__copy(
  const ear_msgs__srv__Centerline_Response__Sequence * input,
  ear_msgs__srv__Centerline_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Centerline_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Centerline_Response * data =
      (ear_msgs__srv__Centerline_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Centerline_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Centerline_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Centerline_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ear_msgs/srv/detail/centerline__functions.h"

bool
ear_msgs__srv__Centerline_Event__init(ear_msgs__srv__Centerline_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ear_msgs__srv__Centerline_Event__fini(msg);
    return false;
  }
  // request
  if (!ear_msgs__srv__Centerline_Request__Sequence__init(&msg->request, 0)) {
    ear_msgs__srv__Centerline_Event__fini(msg);
    return false;
  }
  // response
  if (!ear_msgs__srv__Centerline_Response__Sequence__init(&msg->response, 0)) {
    ear_msgs__srv__Centerline_Event__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Centerline_Event__fini(ear_msgs__srv__Centerline_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ear_msgs__srv__Centerline_Request__Sequence__fini(&msg->request);
  // response
  ear_msgs__srv__Centerline_Response__Sequence__fini(&msg->response);
}

bool
ear_msgs__srv__Centerline_Event__are_equal(const ear_msgs__srv__Centerline_Event * lhs, const ear_msgs__srv__Centerline_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ear_msgs__srv__Centerline_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__srv__Centerline_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Event__copy(
  const ear_msgs__srv__Centerline_Event * input,
  ear_msgs__srv__Centerline_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ear_msgs__srv__Centerline_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__srv__Centerline_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Centerline_Event *
ear_msgs__srv__Centerline_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Event * msg = (ear_msgs__srv__Centerline_Event *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Centerline_Event));
  bool success = ear_msgs__srv__Centerline_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Centerline_Event__destroy(ear_msgs__srv__Centerline_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Centerline_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Centerline_Event__Sequence__init(ear_msgs__srv__Centerline_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Event * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Centerline_Event *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Centerline_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Centerline_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Centerline_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ear_msgs__srv__Centerline_Event__Sequence__fini(ear_msgs__srv__Centerline_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ear_msgs__srv__Centerline_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ear_msgs__srv__Centerline_Event__Sequence *
ear_msgs__srv__Centerline_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Centerline_Event__Sequence * array = (ear_msgs__srv__Centerline_Event__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Centerline_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Centerline_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Centerline_Event__Sequence__destroy(ear_msgs__srv__Centerline_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Centerline_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Centerline_Event__Sequence__are_equal(const ear_msgs__srv__Centerline_Event__Sequence * lhs, const ear_msgs__srv__Centerline_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Centerline_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Centerline_Event__Sequence__copy(
  const ear_msgs__srv__Centerline_Event__Sequence * input,
  ear_msgs__srv__Centerline_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Centerline_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Centerline_Event * data =
      (ear_msgs__srv__Centerline_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Centerline_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Centerline_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Centerline_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
