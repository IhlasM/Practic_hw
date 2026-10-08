// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice
#include "reaction_interfaces/action/detail/random_walk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
reaction_interfaces__action__RandomWalk_Goal__init(reaction_interfaces__action__RandomWalk_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    reaction_interfaces__action__RandomWalk_Goal__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
reaction_interfaces__action__RandomWalk_Goal__fini(reaction_interfaces__action__RandomWalk_Goal * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // duration
}

bool
reaction_interfaces__action__RandomWalk_Goal__are_equal(const reaction_interfaces__action__RandomWalk_Goal * lhs, const reaction_interfaces__action__RandomWalk_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Goal__copy(
  const reaction_interfaces__action__RandomWalk_Goal * input,
  reaction_interfaces__action__RandomWalk_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

reaction_interfaces__action__RandomWalk_Goal *
reaction_interfaces__action__RandomWalk_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Goal * msg = (reaction_interfaces__action__RandomWalk_Goal *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_Goal));
  bool success = reaction_interfaces__action__RandomWalk_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_Goal__destroy(reaction_interfaces__action__RandomWalk_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_Goal__Sequence__init(reaction_interfaces__action__RandomWalk_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Goal)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_Goal *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_Goal__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_Goal__Sequence__fini(reaction_interfaces__action__RandomWalk_Goal__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_Goal__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_Goal__Sequence *
reaction_interfaces__action__RandomWalk_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Goal__Sequence * array = (reaction_interfaces__action__RandomWalk_Goal__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_Goal__Sequence__destroy(reaction_interfaces__action__RandomWalk_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_Goal__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Goal__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Goal__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Goal__Sequence * input,
  reaction_interfaces__action__RandomWalk_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_Goal * data =
      (reaction_interfaces__action__RandomWalk_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
reaction_interfaces__action__RandomWalk_Result__init(reaction_interfaces__action__RandomWalk_Result * msg)
{
  if (!msg) {
    return false;
  }
  // completed
  return true;
}

void
reaction_interfaces__action__RandomWalk_Result__fini(reaction_interfaces__action__RandomWalk_Result * msg)
{
  if (!msg) {
    return;
  }
  // completed
}

bool
reaction_interfaces__action__RandomWalk_Result__are_equal(const reaction_interfaces__action__RandomWalk_Result * lhs, const reaction_interfaces__action__RandomWalk_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // completed
  if (lhs->completed != rhs->completed) {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Result__copy(
  const reaction_interfaces__action__RandomWalk_Result * input,
  reaction_interfaces__action__RandomWalk_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // completed
  output->completed = input->completed;
  return true;
}

reaction_interfaces__action__RandomWalk_Result *
reaction_interfaces__action__RandomWalk_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Result * msg = (reaction_interfaces__action__RandomWalk_Result *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_Result));
  bool success = reaction_interfaces__action__RandomWalk_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_Result__destroy(reaction_interfaces__action__RandomWalk_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_Result__Sequence__init(reaction_interfaces__action__RandomWalk_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Result)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_Result *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_Result__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_Result__Sequence__fini(reaction_interfaces__action__RandomWalk_Result__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_Result__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_Result__Sequence *
reaction_interfaces__action__RandomWalk_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Result__Sequence * array = (reaction_interfaces__action__RandomWalk_Result__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_Result__Sequence__destroy(reaction_interfaces__action__RandomWalk_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_Result__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Result__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Result__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Result__Sequence * input,
  reaction_interfaces__action__RandomWalk_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_Result * data =
      (reaction_interfaces__action__RandomWalk_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
reaction_interfaces__action__RandomWalk_Feedback__init(reaction_interfaces__action__RandomWalk_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // time_left
  return true;
}

void
reaction_interfaces__action__RandomWalk_Feedback__fini(reaction_interfaces__action__RandomWalk_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // time_left
}

bool
reaction_interfaces__action__RandomWalk_Feedback__are_equal(const reaction_interfaces__action__RandomWalk_Feedback * lhs, const reaction_interfaces__action__RandomWalk_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_left
  if (lhs->time_left != rhs->time_left) {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Feedback__copy(
  const reaction_interfaces__action__RandomWalk_Feedback * input,
  reaction_interfaces__action__RandomWalk_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // time_left
  output->time_left = input->time_left;
  return true;
}

reaction_interfaces__action__RandomWalk_Feedback *
reaction_interfaces__action__RandomWalk_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Feedback * msg = (reaction_interfaces__action__RandomWalk_Feedback *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_Feedback));
  bool success = reaction_interfaces__action__RandomWalk_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_Feedback__destroy(reaction_interfaces__action__RandomWalk_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_Feedback__Sequence__init(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Feedback)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_Feedback *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_Feedback__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_Feedback__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_Feedback__Sequence *
reaction_interfaces__action__RandomWalk_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_Feedback__Sequence * array = (reaction_interfaces__action__RandomWalk_Feedback__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_Feedback__Sequence__destroy(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_Feedback__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Feedback__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_Feedback__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Feedback__Sequence * input,
  reaction_interfaces__action__RandomWalk_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_Feedback * data =
      (reaction_interfaces__action__RandomWalk_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_Feedback__copy(
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"

bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__init(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!reaction_interfaces__action__RandomWalk_Goal__init(&msg->goal)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  reaction_interfaces__action__RandomWalk_Goal__fini(&msg->goal);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Request * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Request * rhs)
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
  if (!reaction_interfaces__action__RandomWalk_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Request * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Request * output)
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
  if (!reaction_interfaces__action__RandomWalk_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__action__RandomWalk_SendGoal_Request *
reaction_interfaces__action__RandomWalk_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Request * msg = (reaction_interfaces__action__RandomWalk_SendGoal_Request *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request));
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Request__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_SendGoal_Request *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array = (reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_SendGoal_Request * data =
      (reaction_interfaces__action__RandomWalk_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__copy(
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
reaction_interfaces__action__RandomWalk_SendGoal_Response__init(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Response * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Response * rhs)
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
reaction_interfaces__action__RandomWalk_SendGoal_Response__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Response * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Response * output)
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

reaction_interfaces__action__RandomWalk_SendGoal_Response *
reaction_interfaces__action__RandomWalk_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Response * msg = (reaction_interfaces__action__RandomWalk_SendGoal_Response *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response));
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Response__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_SendGoal_Response *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array = (reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_SendGoal_Response * data =
      (reaction_interfaces__action__RandomWalk_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__copy(
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"

bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__init(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Event * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Event * rhs)
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
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Event * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Event * output)
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
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__action__RandomWalk_SendGoal_Event *
reaction_interfaces__action__RandomWalk_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Event * msg = (reaction_interfaces__action__RandomWalk_SendGoal_Event *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event));
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Event__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_SendGoal_Event *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array = (reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_SendGoal_Event * data =
      (reaction_interfaces__action__RandomWalk_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_SendGoal_Event__copy(
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
reaction_interfaces__action__RandomWalk_GetResult_Request__init(reaction_interfaces__action__RandomWalk_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reaction_interfaces__action__RandomWalk_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Request__fini(reaction_interfaces__action__RandomWalk_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Request__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Request * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Request * rhs)
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
reaction_interfaces__action__RandomWalk_GetResult_Request__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Request * input,
  reaction_interfaces__action__RandomWalk_GetResult_Request * output)
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

reaction_interfaces__action__RandomWalk_GetResult_Request *
reaction_interfaces__action__RandomWalk_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Request * msg = (reaction_interfaces__action__RandomWalk_GetResult_Request *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request));
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Request__destroy(reaction_interfaces__action__RandomWalk_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_GetResult_Request *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_GetResult_Request__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_GetResult_Request__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array = (reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_GetResult_Request * data =
      (reaction_interfaces__action__RandomWalk_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Request__copy(
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"

bool
reaction_interfaces__action__RandomWalk_GetResult_Response__init(reaction_interfaces__action__RandomWalk_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!reaction_interfaces__action__RandomWalk_Result__init(&msg->result)) {
    reaction_interfaces__action__RandomWalk_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Response__fini(reaction_interfaces__action__RandomWalk_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  reaction_interfaces__action__RandomWalk_Result__fini(&msg->result);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Response__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Response * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!reaction_interfaces__action__RandomWalk_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Response__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Response * input,
  reaction_interfaces__action__RandomWalk_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!reaction_interfaces__action__RandomWalk_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__action__RandomWalk_GetResult_Response *
reaction_interfaces__action__RandomWalk_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Response * msg = (reaction_interfaces__action__RandomWalk_GetResult_Response *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response));
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Response__destroy(reaction_interfaces__action__RandomWalk_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_GetResult_Response *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_GetResult_Response__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_GetResult_Response__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array = (reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_GetResult_Response * data =
      (reaction_interfaces__action__RandomWalk_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Response__copy(
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"

bool
reaction_interfaces__action__RandomWalk_GetResult_Event__init(reaction_interfaces__action__RandomWalk_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    reaction_interfaces__action__RandomWalk_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(&msg->request, 0)) {
    reaction_interfaces__action__RandomWalk_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(&msg->response, 0)) {
    reaction_interfaces__action__RandomWalk_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Event__fini(reaction_interfaces__action__RandomWalk_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(&msg->request);
  // response
  reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(&msg->response);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Event__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Event * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Event * rhs)
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
  if (!reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Event__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Event * input,
  reaction_interfaces__action__RandomWalk_GetResult_Event * output)
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
  if (!reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__action__RandomWalk_GetResult_Event *
reaction_interfaces__action__RandomWalk_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Event * msg = (reaction_interfaces__action__RandomWalk_GetResult_Event *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event));
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Event__destroy(reaction_interfaces__action__RandomWalk_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_GetResult_Event *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_GetResult_Event__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_GetResult_Event__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array = (reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_GetResult_Event * data =
      (reaction_interfaces__action__RandomWalk_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_GetResult_Event__copy(
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"

bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__init(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!reaction_interfaces__action__RandomWalk_Feedback__init(&msg->feedback)) {
    reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  reaction_interfaces__action__RandomWalk_Feedback__fini(&msg->feedback);
}

bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__are_equal(const reaction_interfaces__action__RandomWalk_FeedbackMessage * lhs, const reaction_interfaces__action__RandomWalk_FeedbackMessage * rhs)
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
  if (!reaction_interfaces__action__RandomWalk_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__copy(
  const reaction_interfaces__action__RandomWalk_FeedbackMessage * input,
  reaction_interfaces__action__RandomWalk_FeedbackMessage * output)
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
  if (!reaction_interfaces__action__RandomWalk_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__action__RandomWalk_FeedbackMessage *
reaction_interfaces__action__RandomWalk_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_FeedbackMessage * msg = (reaction_interfaces__action__RandomWalk_FeedbackMessage *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage));
  bool success = reaction_interfaces__action__RandomWalk_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__action__RandomWalk_FeedbackMessage__destroy(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage)) {
      return false;
    }
    data = (reaction_interfaces__action__RandomWalk_FeedbackMessage *)allocator.zero_allocate(size, sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__action__RandomWalk_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(&data[i - 1]);
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
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array)
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
      reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(&array->data[i]);
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

reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence *
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array = (reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence *)allocator.allocate(sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__destroy(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * lhs, const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * input,
  reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__action__RandomWalk_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__action__RandomWalk_FeedbackMessage * data =
      (reaction_interfaces__action__RandomWalk_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__action__RandomWalk_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__action__RandomWalk_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
