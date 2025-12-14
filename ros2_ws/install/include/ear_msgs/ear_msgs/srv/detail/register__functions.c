// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ear_msgs:srv/Register.idl
// generated code does not contain a copyright notice
#include "ear_msgs/srv/detail/register__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mesh_path`
#include "rosidl_runtime_c/string_functions.h"

bool
ear_msgs__srv__Register_Request__init(ear_msgs__srv__Register_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mesh_path
  if (!rosidl_runtime_c__String__init(&msg->mesh_path)) {
    ear_msgs__srv__Register_Request__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Register_Request__fini(ear_msgs__srv__Register_Request * msg)
{
  if (!msg) {
    return;
  }
  // mesh_path
  rosidl_runtime_c__String__fini(&msg->mesh_path);
}

bool
ear_msgs__srv__Register_Request__are_equal(const ear_msgs__srv__Register_Request * lhs, const ear_msgs__srv__Register_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mesh_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mesh_path), &(rhs->mesh_path)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Register_Request__copy(
  const ear_msgs__srv__Register_Request * input,
  ear_msgs__srv__Register_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mesh_path
  if (!rosidl_runtime_c__String__copy(
      &(input->mesh_path), &(output->mesh_path)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Register_Request *
ear_msgs__srv__Register_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Request * msg = (ear_msgs__srv__Register_Request *)allocator.allocate(sizeof(ear_msgs__srv__Register_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Register_Request));
  bool success = ear_msgs__srv__Register_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Register_Request__destroy(ear_msgs__srv__Register_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Register_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Register_Request__Sequence__init(ear_msgs__srv__Register_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Request * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Register_Request *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Register_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Register_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Register_Request__fini(&data[i - 1]);
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
ear_msgs__srv__Register_Request__Sequence__fini(ear_msgs__srv__Register_Request__Sequence * array)
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
      ear_msgs__srv__Register_Request__fini(&array->data[i]);
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

ear_msgs__srv__Register_Request__Sequence *
ear_msgs__srv__Register_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Request__Sequence * array = (ear_msgs__srv__Register_Request__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Register_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Register_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Register_Request__Sequence__destroy(ear_msgs__srv__Register_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Register_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Register_Request__Sequence__are_equal(const ear_msgs__srv__Register_Request__Sequence * lhs, const ear_msgs__srv__Register_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Register_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Register_Request__Sequence__copy(
  const ear_msgs__srv__Register_Request__Sequence * input,
  ear_msgs__srv__Register_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Register_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Register_Request * data =
      (ear_msgs__srv__Register_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Register_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Register_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Register_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `mri_to_world`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
ear_msgs__srv__Register_Response__init(ear_msgs__srv__Register_Response * msg)
{
  if (!msg) {
    return false;
  }
  // mri_to_world
  if (!geometry_msgs__msg__TransformStamped__init(&msg->mri_to_world)) {
    ear_msgs__srv__Register_Response__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Register_Response__fini(ear_msgs__srv__Register_Response * msg)
{
  if (!msg) {
    return;
  }
  // mri_to_world
  geometry_msgs__msg__TransformStamped__fini(&msg->mri_to_world);
}

bool
ear_msgs__srv__Register_Response__are_equal(const ear_msgs__srv__Register_Response * lhs, const ear_msgs__srv__Register_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mri_to_world
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->mri_to_world), &(rhs->mri_to_world)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Register_Response__copy(
  const ear_msgs__srv__Register_Response * input,
  ear_msgs__srv__Register_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // mri_to_world
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->mri_to_world), &(output->mri_to_world)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Register_Response *
ear_msgs__srv__Register_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Response * msg = (ear_msgs__srv__Register_Response *)allocator.allocate(sizeof(ear_msgs__srv__Register_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Register_Response));
  bool success = ear_msgs__srv__Register_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Register_Response__destroy(ear_msgs__srv__Register_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Register_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Register_Response__Sequence__init(ear_msgs__srv__Register_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Response * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Register_Response *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Register_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Register_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Register_Response__fini(&data[i - 1]);
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
ear_msgs__srv__Register_Response__Sequence__fini(ear_msgs__srv__Register_Response__Sequence * array)
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
      ear_msgs__srv__Register_Response__fini(&array->data[i]);
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

ear_msgs__srv__Register_Response__Sequence *
ear_msgs__srv__Register_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Response__Sequence * array = (ear_msgs__srv__Register_Response__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Register_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Register_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Register_Response__Sequence__destroy(ear_msgs__srv__Register_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Register_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Register_Response__Sequence__are_equal(const ear_msgs__srv__Register_Response__Sequence * lhs, const ear_msgs__srv__Register_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Register_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Register_Response__Sequence__copy(
  const ear_msgs__srv__Register_Response__Sequence * input,
  ear_msgs__srv__Register_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Register_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Register_Response * data =
      (ear_msgs__srv__Register_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Register_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Register_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Register_Response__copy(
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
// #include "ear_msgs/srv/detail/register__functions.h"

bool
ear_msgs__srv__Register_Event__init(ear_msgs__srv__Register_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ear_msgs__srv__Register_Event__fini(msg);
    return false;
  }
  // request
  if (!ear_msgs__srv__Register_Request__Sequence__init(&msg->request, 0)) {
    ear_msgs__srv__Register_Event__fini(msg);
    return false;
  }
  // response
  if (!ear_msgs__srv__Register_Response__Sequence__init(&msg->response, 0)) {
    ear_msgs__srv__Register_Event__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__srv__Register_Event__fini(ear_msgs__srv__Register_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ear_msgs__srv__Register_Request__Sequence__fini(&msg->request);
  // response
  ear_msgs__srv__Register_Response__Sequence__fini(&msg->response);
}

bool
ear_msgs__srv__Register_Event__are_equal(const ear_msgs__srv__Register_Event * lhs, const ear_msgs__srv__Register_Event * rhs)
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
  if (!ear_msgs__srv__Register_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__srv__Register_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__srv__Register_Event__copy(
  const ear_msgs__srv__Register_Event * input,
  ear_msgs__srv__Register_Event * output)
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
  if (!ear_msgs__srv__Register_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__srv__Register_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ear_msgs__srv__Register_Event *
ear_msgs__srv__Register_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Event * msg = (ear_msgs__srv__Register_Event *)allocator.allocate(sizeof(ear_msgs__srv__Register_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__srv__Register_Event));
  bool success = ear_msgs__srv__Register_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__srv__Register_Event__destroy(ear_msgs__srv__Register_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__srv__Register_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__srv__Register_Event__Sequence__init(ear_msgs__srv__Register_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Event * data = NULL;

  if (size) {
    data = (ear_msgs__srv__Register_Event *)allocator.zero_allocate(size, sizeof(ear_msgs__srv__Register_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__srv__Register_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__srv__Register_Event__fini(&data[i - 1]);
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
ear_msgs__srv__Register_Event__Sequence__fini(ear_msgs__srv__Register_Event__Sequence * array)
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
      ear_msgs__srv__Register_Event__fini(&array->data[i]);
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

ear_msgs__srv__Register_Event__Sequence *
ear_msgs__srv__Register_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__srv__Register_Event__Sequence * array = (ear_msgs__srv__Register_Event__Sequence *)allocator.allocate(sizeof(ear_msgs__srv__Register_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__srv__Register_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__srv__Register_Event__Sequence__destroy(ear_msgs__srv__Register_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__srv__Register_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__srv__Register_Event__Sequence__are_equal(const ear_msgs__srv__Register_Event__Sequence * lhs, const ear_msgs__srv__Register_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__srv__Register_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__srv__Register_Event__Sequence__copy(
  const ear_msgs__srv__Register_Event__Sequence * input,
  ear_msgs__srv__Register_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__srv__Register_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__srv__Register_Event * data =
      (ear_msgs__srv__Register_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__srv__Register_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__srv__Register_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__srv__Register_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
