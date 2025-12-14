// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ear_msgs:action/PlanPath.idl
// generated code does not contain a copyright notice
#include "ear_msgs/action/detail/plan_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `entry`
// Member `target`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
ear_msgs__action__PlanPath_Goal__init(ear_msgs__action__PlanPath_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // entry
  if (!geometry_msgs__msg__PoseStamped__init(&msg->entry)) {
    ear_msgs__action__PlanPath_Goal__fini(msg);
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target)) {
    ear_msgs__action__PlanPath_Goal__fini(msg);
    return false;
  }
  // tool_diam_mm
  // safety_margin_mm
  return true;
}

void
ear_msgs__action__PlanPath_Goal__fini(ear_msgs__action__PlanPath_Goal * msg)
{
  if (!msg) {
    return;
  }
  // entry
  geometry_msgs__msg__PoseStamped__fini(&msg->entry);
  // target
  geometry_msgs__msg__PoseStamped__fini(&msg->target);
  // tool_diam_mm
  // safety_margin_mm
}

bool
ear_msgs__action__PlanPath_Goal__are_equal(const ear_msgs__action__PlanPath_Goal * lhs, const ear_msgs__action__PlanPath_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entry
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->entry), &(rhs->entry)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // tool_diam_mm
  if (lhs->tool_diam_mm != rhs->tool_diam_mm) {
    return false;
  }
  // safety_margin_mm
  if (lhs->safety_margin_mm != rhs->safety_margin_mm) {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Goal__copy(
  const ear_msgs__action__PlanPath_Goal * input,
  ear_msgs__action__PlanPath_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // entry
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->entry), &(output->entry)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // tool_diam_mm
  output->tool_diam_mm = input->tool_diam_mm;
  // safety_margin_mm
  output->safety_margin_mm = input->safety_margin_mm;
  return true;
}

ear_msgs__action__PlanPath_Goal *
ear_msgs__action__PlanPath_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Goal * msg = (ear_msgs__action__PlanPath_Goal *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_Goal));
  bool success = ear_msgs__action__PlanPath_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_Goal__destroy(ear_msgs__action__PlanPath_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_Goal__Sequence__init(ear_msgs__action__PlanPath_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Goal * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_Goal *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_Goal__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_Goal__Sequence__fini(ear_msgs__action__PlanPath_Goal__Sequence * array)
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
      ear_msgs__action__PlanPath_Goal__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_Goal__Sequence *
ear_msgs__action__PlanPath_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Goal__Sequence * array = (ear_msgs__action__PlanPath_Goal__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_Goal__Sequence__destroy(ear_msgs__action__PlanPath_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_Goal__Sequence__are_equal(const ear_msgs__action__PlanPath_Goal__Sequence * lhs, const ear_msgs__action__PlanPath_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Goal__Sequence__copy(
  const ear_msgs__action__PlanPath_Goal__Sequence * input,
  ear_msgs__action__PlanPath_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_Goal * data =
      (ear_msgs__action__PlanPath_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"

bool
ear_msgs__action__PlanPath_Result__init(ear_msgs__action__PlanPath_Result * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    ear_msgs__action__PlanPath_Result__fini(msg);
    return false;
  }
  // min_clearance_mm
  // est_time_s
  return true;
}

void
ear_msgs__action__PlanPath_Result__fini(ear_msgs__action__PlanPath_Result * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // min_clearance_mm
  // est_time_s
}

bool
ear_msgs__action__PlanPath_Result__are_equal(const ear_msgs__action__PlanPath_Result * lhs, const ear_msgs__action__PlanPath_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // min_clearance_mm
  if (lhs->min_clearance_mm != rhs->min_clearance_mm) {
    return false;
  }
  // est_time_s
  if (lhs->est_time_s != rhs->est_time_s) {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Result__copy(
  const ear_msgs__action__PlanPath_Result * input,
  ear_msgs__action__PlanPath_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // min_clearance_mm
  output->min_clearance_mm = input->min_clearance_mm;
  // est_time_s
  output->est_time_s = input->est_time_s;
  return true;
}

ear_msgs__action__PlanPath_Result *
ear_msgs__action__PlanPath_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Result * msg = (ear_msgs__action__PlanPath_Result *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_Result));
  bool success = ear_msgs__action__PlanPath_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_Result__destroy(ear_msgs__action__PlanPath_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_Result__Sequence__init(ear_msgs__action__PlanPath_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Result * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_Result *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_Result__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_Result__Sequence__fini(ear_msgs__action__PlanPath_Result__Sequence * array)
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
      ear_msgs__action__PlanPath_Result__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_Result__Sequence *
ear_msgs__action__PlanPath_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Result__Sequence * array = (ear_msgs__action__PlanPath_Result__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_Result__Sequence__destroy(ear_msgs__action__PlanPath_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_Result__Sequence__are_equal(const ear_msgs__action__PlanPath_Result__Sequence * lhs, const ear_msgs__action__PlanPath_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Result__Sequence__copy(
  const ear_msgs__action__PlanPath_Result__Sequence * input,
  ear_msgs__action__PlanPath_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_Result * data =
      (ear_msgs__action__PlanPath_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ear_msgs__action__PlanPath_Feedback__init(ear_msgs__action__PlanPath_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  return true;
}

void
ear_msgs__action__PlanPath_Feedback__fini(ear_msgs__action__PlanPath_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
}

bool
ear_msgs__action__PlanPath_Feedback__are_equal(const ear_msgs__action__PlanPath_Feedback * lhs, const ear_msgs__action__PlanPath_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Feedback__copy(
  const ear_msgs__action__PlanPath_Feedback * input,
  ear_msgs__action__PlanPath_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

ear_msgs__action__PlanPath_Feedback *
ear_msgs__action__PlanPath_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Feedback * msg = (ear_msgs__action__PlanPath_Feedback *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_Feedback));
  bool success = ear_msgs__action__PlanPath_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_Feedback__destroy(ear_msgs__action__PlanPath_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_Feedback__Sequence__init(ear_msgs__action__PlanPath_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Feedback * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_Feedback *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_Feedback__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_Feedback__Sequence__fini(ear_msgs__action__PlanPath_Feedback__Sequence * array)
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
      ear_msgs__action__PlanPath_Feedback__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_Feedback__Sequence *
ear_msgs__action__PlanPath_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_Feedback__Sequence * array = (ear_msgs__action__PlanPath_Feedback__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_Feedback__Sequence__destroy(ear_msgs__action__PlanPath_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_Feedback__Sequence__are_equal(const ear_msgs__action__PlanPath_Feedback__Sequence * lhs, const ear_msgs__action__PlanPath_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_Feedback__Sequence__copy(
  const ear_msgs__action__PlanPath_Feedback__Sequence * input,
  ear_msgs__action__PlanPath_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_Feedback * data =
      (ear_msgs__action__PlanPath_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ear_msgs/action/detail/plan_path__functions.h"

bool
ear_msgs__action__PlanPath_SendGoal_Request__init(ear_msgs__action__PlanPath_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ear_msgs__action__PlanPath_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ear_msgs__action__PlanPath_Goal__init(&msg->goal)) {
    ear_msgs__action__PlanPath_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_SendGoal_Request__fini(ear_msgs__action__PlanPath_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ear_msgs__action__PlanPath_Goal__fini(&msg->goal);
}

bool
ear_msgs__action__PlanPath_SendGoal_Request__are_equal(const ear_msgs__action__PlanPath_SendGoal_Request * lhs, const ear_msgs__action__PlanPath_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ear_msgs__action__PlanPath_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Request__copy(
  const ear_msgs__action__PlanPath_SendGoal_Request * input,
  ear_msgs__action__PlanPath_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ear_msgs__action__PlanPath_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_SendGoal_Request *
ear_msgs__action__PlanPath_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Request * msg = (ear_msgs__action__PlanPath_SendGoal_Request *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_SendGoal_Request));
  bool success = ear_msgs__action__PlanPath_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_SendGoal_Request__destroy(ear_msgs__action__PlanPath_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__init(ear_msgs__action__PlanPath_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Request * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_SendGoal_Request__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__fini(ear_msgs__action__PlanPath_SendGoal_Request__Sequence * array)
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
      ear_msgs__action__PlanPath_SendGoal_Request__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_SendGoal_Request__Sequence *
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Request__Sequence * array = (ear_msgs__action__PlanPath_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__destroy(ear_msgs__action__PlanPath_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__are_equal(const ear_msgs__action__PlanPath_SendGoal_Request__Sequence * lhs, const ear_msgs__action__PlanPath_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Request__Sequence__copy(
  const ear_msgs__action__PlanPath_SendGoal_Request__Sequence * input,
  ear_msgs__action__PlanPath_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_SendGoal_Request * data =
      (ear_msgs__action__PlanPath_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ear_msgs__action__PlanPath_SendGoal_Response__init(ear_msgs__action__PlanPath_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ear_msgs__action__PlanPath_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_SendGoal_Response__fini(ear_msgs__action__PlanPath_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ear_msgs__action__PlanPath_SendGoal_Response__are_equal(const ear_msgs__action__PlanPath_SendGoal_Response * lhs, const ear_msgs__action__PlanPath_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Response__copy(
  const ear_msgs__action__PlanPath_SendGoal_Response * input,
  ear_msgs__action__PlanPath_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_SendGoal_Response *
ear_msgs__action__PlanPath_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Response * msg = (ear_msgs__action__PlanPath_SendGoal_Response *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_SendGoal_Response));
  bool success = ear_msgs__action__PlanPath_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_SendGoal_Response__destroy(ear_msgs__action__PlanPath_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__init(ear_msgs__action__PlanPath_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Response * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_SendGoal_Response__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__fini(ear_msgs__action__PlanPath_SendGoal_Response__Sequence * array)
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
      ear_msgs__action__PlanPath_SendGoal_Response__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_SendGoal_Response__Sequence *
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Response__Sequence * array = (ear_msgs__action__PlanPath_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__destroy(ear_msgs__action__PlanPath_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__are_equal(const ear_msgs__action__PlanPath_SendGoal_Response__Sequence * lhs, const ear_msgs__action__PlanPath_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Response__Sequence__copy(
  const ear_msgs__action__PlanPath_SendGoal_Response__Sequence * input,
  ear_msgs__action__PlanPath_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_SendGoal_Response * data =
      (ear_msgs__action__PlanPath_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Response__copy(
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
// #include "ear_msgs/action/detail/plan_path__functions.h"

bool
ear_msgs__action__PlanPath_SendGoal_Event__init(ear_msgs__action__PlanPath_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ear_msgs__action__PlanPath_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!ear_msgs__action__PlanPath_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    ear_msgs__action__PlanPath_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    ear_msgs__action__PlanPath_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_SendGoal_Event__fini(ear_msgs__action__PlanPath_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ear_msgs__action__PlanPath_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  ear_msgs__action__PlanPath_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
ear_msgs__action__PlanPath_SendGoal_Event__are_equal(const ear_msgs__action__PlanPath_SendGoal_Event * lhs, const ear_msgs__action__PlanPath_SendGoal_Event * rhs)
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
  if (!ear_msgs__action__PlanPath_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Event__copy(
  const ear_msgs__action__PlanPath_SendGoal_Event * input,
  ear_msgs__action__PlanPath_SendGoal_Event * output)
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
  if (!ear_msgs__action__PlanPath_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_SendGoal_Event *
ear_msgs__action__PlanPath_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Event * msg = (ear_msgs__action__PlanPath_SendGoal_Event *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_SendGoal_Event));
  bool success = ear_msgs__action__PlanPath_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_SendGoal_Event__destroy(ear_msgs__action__PlanPath_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__init(ear_msgs__action__PlanPath_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Event * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_SendGoal_Event *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_SendGoal_Event__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__fini(ear_msgs__action__PlanPath_SendGoal_Event__Sequence * array)
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
      ear_msgs__action__PlanPath_SendGoal_Event__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_SendGoal_Event__Sequence *
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_SendGoal_Event__Sequence * array = (ear_msgs__action__PlanPath_SendGoal_Event__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__destroy(ear_msgs__action__PlanPath_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__are_equal(const ear_msgs__action__PlanPath_SendGoal_Event__Sequence * lhs, const ear_msgs__action__PlanPath_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_SendGoal_Event__Sequence__copy(
  const ear_msgs__action__PlanPath_SendGoal_Event__Sequence * input,
  ear_msgs__action__PlanPath_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_SendGoal_Event * data =
      (ear_msgs__action__PlanPath_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ear_msgs__action__PlanPath_GetResult_Request__init(ear_msgs__action__PlanPath_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ear_msgs__action__PlanPath_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_GetResult_Request__fini(ear_msgs__action__PlanPath_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ear_msgs__action__PlanPath_GetResult_Request__are_equal(const ear_msgs__action__PlanPath_GetResult_Request * lhs, const ear_msgs__action__PlanPath_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Request__copy(
  const ear_msgs__action__PlanPath_GetResult_Request * input,
  ear_msgs__action__PlanPath_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_GetResult_Request *
ear_msgs__action__PlanPath_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Request * msg = (ear_msgs__action__PlanPath_GetResult_Request *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_GetResult_Request));
  bool success = ear_msgs__action__PlanPath_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_GetResult_Request__destroy(ear_msgs__action__PlanPath_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_GetResult_Request__Sequence__init(ear_msgs__action__PlanPath_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Request * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_GetResult_Request *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_GetResult_Request__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_GetResult_Request__Sequence__fini(ear_msgs__action__PlanPath_GetResult_Request__Sequence * array)
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
      ear_msgs__action__PlanPath_GetResult_Request__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_GetResult_Request__Sequence *
ear_msgs__action__PlanPath_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Request__Sequence * array = (ear_msgs__action__PlanPath_GetResult_Request__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_GetResult_Request__Sequence__destroy(ear_msgs__action__PlanPath_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_GetResult_Request__Sequence__are_equal(const ear_msgs__action__PlanPath_GetResult_Request__Sequence * lhs, const ear_msgs__action__PlanPath_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Request__Sequence__copy(
  const ear_msgs__action__PlanPath_GetResult_Request__Sequence * input,
  ear_msgs__action__PlanPath_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_GetResult_Request * data =
      (ear_msgs__action__PlanPath_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ear_msgs/action/detail/plan_path__functions.h"

bool
ear_msgs__action__PlanPath_GetResult_Response__init(ear_msgs__action__PlanPath_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ear_msgs__action__PlanPath_Result__init(&msg->result)) {
    ear_msgs__action__PlanPath_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_GetResult_Response__fini(ear_msgs__action__PlanPath_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ear_msgs__action__PlanPath_Result__fini(&msg->result);
}

bool
ear_msgs__action__PlanPath_GetResult_Response__are_equal(const ear_msgs__action__PlanPath_GetResult_Response * lhs, const ear_msgs__action__PlanPath_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ear_msgs__action__PlanPath_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Response__copy(
  const ear_msgs__action__PlanPath_GetResult_Response * input,
  ear_msgs__action__PlanPath_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ear_msgs__action__PlanPath_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_GetResult_Response *
ear_msgs__action__PlanPath_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Response * msg = (ear_msgs__action__PlanPath_GetResult_Response *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_GetResult_Response));
  bool success = ear_msgs__action__PlanPath_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_GetResult_Response__destroy(ear_msgs__action__PlanPath_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_GetResult_Response__Sequence__init(ear_msgs__action__PlanPath_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Response * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_GetResult_Response *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_GetResult_Response__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_GetResult_Response__Sequence__fini(ear_msgs__action__PlanPath_GetResult_Response__Sequence * array)
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
      ear_msgs__action__PlanPath_GetResult_Response__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_GetResult_Response__Sequence *
ear_msgs__action__PlanPath_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Response__Sequence * array = (ear_msgs__action__PlanPath_GetResult_Response__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_GetResult_Response__Sequence__destroy(ear_msgs__action__PlanPath_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_GetResult_Response__Sequence__are_equal(const ear_msgs__action__PlanPath_GetResult_Response__Sequence * lhs, const ear_msgs__action__PlanPath_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Response__Sequence__copy(
  const ear_msgs__action__PlanPath_GetResult_Response__Sequence * input,
  ear_msgs__action__PlanPath_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_GetResult_Response * data =
      (ear_msgs__action__PlanPath_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ear_msgs/action/detail/plan_path__functions.h"

bool
ear_msgs__action__PlanPath_GetResult_Event__init(ear_msgs__action__PlanPath_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ear_msgs__action__PlanPath_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!ear_msgs__action__PlanPath_GetResult_Request__Sequence__init(&msg->request, 0)) {
    ear_msgs__action__PlanPath_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_GetResult_Response__Sequence__init(&msg->response, 0)) {
    ear_msgs__action__PlanPath_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_GetResult_Event__fini(ear_msgs__action__PlanPath_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ear_msgs__action__PlanPath_GetResult_Request__Sequence__fini(&msg->request);
  // response
  ear_msgs__action__PlanPath_GetResult_Response__Sequence__fini(&msg->response);
}

bool
ear_msgs__action__PlanPath_GetResult_Event__are_equal(const ear_msgs__action__PlanPath_GetResult_Event * lhs, const ear_msgs__action__PlanPath_GetResult_Event * rhs)
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
  if (!ear_msgs__action__PlanPath_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Event__copy(
  const ear_msgs__action__PlanPath_GetResult_Event * input,
  ear_msgs__action__PlanPath_GetResult_Event * output)
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
  if (!ear_msgs__action__PlanPath_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ear_msgs__action__PlanPath_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_GetResult_Event *
ear_msgs__action__PlanPath_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Event * msg = (ear_msgs__action__PlanPath_GetResult_Event *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_GetResult_Event));
  bool success = ear_msgs__action__PlanPath_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_GetResult_Event__destroy(ear_msgs__action__PlanPath_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_GetResult_Event__Sequence__init(ear_msgs__action__PlanPath_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Event * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_GetResult_Event *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_GetResult_Event__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_GetResult_Event__Sequence__fini(ear_msgs__action__PlanPath_GetResult_Event__Sequence * array)
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
      ear_msgs__action__PlanPath_GetResult_Event__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_GetResult_Event__Sequence *
ear_msgs__action__PlanPath_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_GetResult_Event__Sequence * array = (ear_msgs__action__PlanPath_GetResult_Event__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_GetResult_Event__Sequence__destroy(ear_msgs__action__PlanPath_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_GetResult_Event__Sequence__are_equal(const ear_msgs__action__PlanPath_GetResult_Event__Sequence * lhs, const ear_msgs__action__PlanPath_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_GetResult_Event__Sequence__copy(
  const ear_msgs__action__PlanPath_GetResult_Event__Sequence * input,
  ear_msgs__action__PlanPath_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_GetResult_Event * data =
      (ear_msgs__action__PlanPath_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ear_msgs/action/detail/plan_path__functions.h"

bool
ear_msgs__action__PlanPath_FeedbackMessage__init(ear_msgs__action__PlanPath_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ear_msgs__action__PlanPath_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ear_msgs__action__PlanPath_Feedback__init(&msg->feedback)) {
    ear_msgs__action__PlanPath_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ear_msgs__action__PlanPath_FeedbackMessage__fini(ear_msgs__action__PlanPath_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ear_msgs__action__PlanPath_Feedback__fini(&msg->feedback);
}

bool
ear_msgs__action__PlanPath_FeedbackMessage__are_equal(const ear_msgs__action__PlanPath_FeedbackMessage * lhs, const ear_msgs__action__PlanPath_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ear_msgs__action__PlanPath_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ear_msgs__action__PlanPath_FeedbackMessage__copy(
  const ear_msgs__action__PlanPath_FeedbackMessage * input,
  ear_msgs__action__PlanPath_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ear_msgs__action__PlanPath_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ear_msgs__action__PlanPath_FeedbackMessage *
ear_msgs__action__PlanPath_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_FeedbackMessage * msg = (ear_msgs__action__PlanPath_FeedbackMessage *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ear_msgs__action__PlanPath_FeedbackMessage));
  bool success = ear_msgs__action__PlanPath_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ear_msgs__action__PlanPath_FeedbackMessage__destroy(ear_msgs__action__PlanPath_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ear_msgs__action__PlanPath_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__init(ear_msgs__action__PlanPath_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_FeedbackMessage * data = NULL;

  if (size) {
    data = (ear_msgs__action__PlanPath_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ear_msgs__action__PlanPath_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ear_msgs__action__PlanPath_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ear_msgs__action__PlanPath_FeedbackMessage__fini(&data[i - 1]);
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
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__fini(ear_msgs__action__PlanPath_FeedbackMessage__Sequence * array)
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
      ear_msgs__action__PlanPath_FeedbackMessage__fini(&array->data[i]);
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

ear_msgs__action__PlanPath_FeedbackMessage__Sequence *
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ear_msgs__action__PlanPath_FeedbackMessage__Sequence * array = (ear_msgs__action__PlanPath_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ear_msgs__action__PlanPath_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ear_msgs__action__PlanPath_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__destroy(ear_msgs__action__PlanPath_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ear_msgs__action__PlanPath_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__are_equal(const ear_msgs__action__PlanPath_FeedbackMessage__Sequence * lhs, const ear_msgs__action__PlanPath_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ear_msgs__action__PlanPath_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ear_msgs__action__PlanPath_FeedbackMessage__Sequence__copy(
  const ear_msgs__action__PlanPath_FeedbackMessage__Sequence * input,
  ear_msgs__action__PlanPath_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ear_msgs__action__PlanPath_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ear_msgs__action__PlanPath_FeedbackMessage * data =
      (ear_msgs__action__PlanPath_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ear_msgs__action__PlanPath_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ear_msgs__action__PlanPath_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ear_msgs__action__PlanPath_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
