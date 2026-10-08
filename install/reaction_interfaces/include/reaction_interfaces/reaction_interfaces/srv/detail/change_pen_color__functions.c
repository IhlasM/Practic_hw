// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reaction_interfaces:srv/ChangePenColor.idl
// generated code does not contain a copyright notice
#include "reaction_interfaces/srv/detail/change_pen_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
reaction_interfaces__srv__ChangePenColor_Request__init(reaction_interfaces__srv__ChangePenColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    reaction_interfaces__srv__ChangePenColor_Request__fini(msg);
    return false;
  }
  // r
  // g
  // b
  // width
  return true;
}

void
reaction_interfaces__srv__ChangePenColor_Request__fini(reaction_interfaces__srv__ChangePenColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // r
  // g
  // b
  // width
}

bool
reaction_interfaces__srv__ChangePenColor_Request__are_equal(const reaction_interfaces__srv__ChangePenColor_Request * lhs, const reaction_interfaces__srv__ChangePenColor_Request * rhs)
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
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Request__copy(
  const reaction_interfaces__srv__ChangePenColor_Request * input,
  reaction_interfaces__srv__ChangePenColor_Request * output)
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
  // r
  output->r = input->r;
  // g
  output->g = input->g;
  // b
  output->b = input->b;
  // width
  output->width = input->width;
  return true;
}

reaction_interfaces__srv__ChangePenColor_Request *
reaction_interfaces__srv__ChangePenColor_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Request * msg = (reaction_interfaces__srv__ChangePenColor_Request *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__srv__ChangePenColor_Request));
  bool success = reaction_interfaces__srv__ChangePenColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__srv__ChangePenColor_Request__destroy(reaction_interfaces__srv__ChangePenColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__srv__ChangePenColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__srv__ChangePenColor_Request__Sequence__init(reaction_interfaces__srv__ChangePenColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Request)) {
      return false;
    }
    data = (reaction_interfaces__srv__ChangePenColor_Request *)allocator.zero_allocate(size, sizeof(reaction_interfaces__srv__ChangePenColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__srv__ChangePenColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__srv__ChangePenColor_Request__fini(&data[i - 1]);
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
reaction_interfaces__srv__ChangePenColor_Request__Sequence__fini(reaction_interfaces__srv__ChangePenColor_Request__Sequence * array)
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
      reaction_interfaces__srv__ChangePenColor_Request__fini(&array->data[i]);
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

reaction_interfaces__srv__ChangePenColor_Request__Sequence *
reaction_interfaces__srv__ChangePenColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Request__Sequence * array = (reaction_interfaces__srv__ChangePenColor_Request__Sequence *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__srv__ChangePenColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__srv__ChangePenColor_Request__Sequence__destroy(reaction_interfaces__srv__ChangePenColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__srv__ChangePenColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__srv__ChangePenColor_Request__Sequence__are_equal(const reaction_interfaces__srv__ChangePenColor_Request__Sequence * lhs, const reaction_interfaces__srv__ChangePenColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Request__Sequence__copy(
  const reaction_interfaces__srv__ChangePenColor_Request__Sequence * input,
  reaction_interfaces__srv__ChangePenColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__srv__ChangePenColor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__srv__ChangePenColor_Request * data =
      (reaction_interfaces__srv__ChangePenColor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__srv__ChangePenColor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__srv__ChangePenColor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
reaction_interfaces__srv__ChangePenColor_Response__init(reaction_interfaces__srv__ChangePenColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
reaction_interfaces__srv__ChangePenColor_Response__fini(reaction_interfaces__srv__ChangePenColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
reaction_interfaces__srv__ChangePenColor_Response__are_equal(const reaction_interfaces__srv__ChangePenColor_Response * lhs, const reaction_interfaces__srv__ChangePenColor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Response__copy(
  const reaction_interfaces__srv__ChangePenColor_Response * input,
  reaction_interfaces__srv__ChangePenColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

reaction_interfaces__srv__ChangePenColor_Response *
reaction_interfaces__srv__ChangePenColor_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Response * msg = (reaction_interfaces__srv__ChangePenColor_Response *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__srv__ChangePenColor_Response));
  bool success = reaction_interfaces__srv__ChangePenColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__srv__ChangePenColor_Response__destroy(reaction_interfaces__srv__ChangePenColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__srv__ChangePenColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__srv__ChangePenColor_Response__Sequence__init(reaction_interfaces__srv__ChangePenColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Response)) {
      return false;
    }
    data = (reaction_interfaces__srv__ChangePenColor_Response *)allocator.zero_allocate(size, sizeof(reaction_interfaces__srv__ChangePenColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__srv__ChangePenColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__srv__ChangePenColor_Response__fini(&data[i - 1]);
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
reaction_interfaces__srv__ChangePenColor_Response__Sequence__fini(reaction_interfaces__srv__ChangePenColor_Response__Sequence * array)
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
      reaction_interfaces__srv__ChangePenColor_Response__fini(&array->data[i]);
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

reaction_interfaces__srv__ChangePenColor_Response__Sequence *
reaction_interfaces__srv__ChangePenColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Response__Sequence * array = (reaction_interfaces__srv__ChangePenColor_Response__Sequence *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__srv__ChangePenColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__srv__ChangePenColor_Response__Sequence__destroy(reaction_interfaces__srv__ChangePenColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__srv__ChangePenColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__srv__ChangePenColor_Response__Sequence__are_equal(const reaction_interfaces__srv__ChangePenColor_Response__Sequence * lhs, const reaction_interfaces__srv__ChangePenColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Response__Sequence__copy(
  const reaction_interfaces__srv__ChangePenColor_Response__Sequence * input,
  reaction_interfaces__srv__ChangePenColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__srv__ChangePenColor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__srv__ChangePenColor_Response * data =
      (reaction_interfaces__srv__ChangePenColor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__srv__ChangePenColor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__srv__ChangePenColor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Response__copy(
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
// #include "reaction_interfaces/srv/detail/change_pen_color__functions.h"

bool
reaction_interfaces__srv__ChangePenColor_Event__init(reaction_interfaces__srv__ChangePenColor_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    reaction_interfaces__srv__ChangePenColor_Event__fini(msg);
    return false;
  }
  // request
  if (!reaction_interfaces__srv__ChangePenColor_Request__Sequence__init(&msg->request, 0)) {
    reaction_interfaces__srv__ChangePenColor_Event__fini(msg);
    return false;
  }
  // response
  if (!reaction_interfaces__srv__ChangePenColor_Response__Sequence__init(&msg->response, 0)) {
    reaction_interfaces__srv__ChangePenColor_Event__fini(msg);
    return false;
  }
  return true;
}

void
reaction_interfaces__srv__ChangePenColor_Event__fini(reaction_interfaces__srv__ChangePenColor_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  reaction_interfaces__srv__ChangePenColor_Request__Sequence__fini(&msg->request);
  // response
  reaction_interfaces__srv__ChangePenColor_Response__Sequence__fini(&msg->response);
}

bool
reaction_interfaces__srv__ChangePenColor_Event__are_equal(const reaction_interfaces__srv__ChangePenColor_Event * lhs, const reaction_interfaces__srv__ChangePenColor_Event * rhs)
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
  if (!reaction_interfaces__srv__ChangePenColor_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__srv__ChangePenColor_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Event__copy(
  const reaction_interfaces__srv__ChangePenColor_Event * input,
  reaction_interfaces__srv__ChangePenColor_Event * output)
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
  if (!reaction_interfaces__srv__ChangePenColor_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!reaction_interfaces__srv__ChangePenColor_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

reaction_interfaces__srv__ChangePenColor_Event *
reaction_interfaces__srv__ChangePenColor_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Event * msg = (reaction_interfaces__srv__ChangePenColor_Event *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__srv__ChangePenColor_Event));
  bool success = reaction_interfaces__srv__ChangePenColor_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__srv__ChangePenColor_Event__destroy(reaction_interfaces__srv__ChangePenColor_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__srv__ChangePenColor_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__srv__ChangePenColor_Event__Sequence__init(reaction_interfaces__srv__ChangePenColor_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Event)) {
      return false;
    }
    data = (reaction_interfaces__srv__ChangePenColor_Event *)allocator.zero_allocate(size, sizeof(reaction_interfaces__srv__ChangePenColor_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__srv__ChangePenColor_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__srv__ChangePenColor_Event__fini(&data[i - 1]);
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
reaction_interfaces__srv__ChangePenColor_Event__Sequence__fini(reaction_interfaces__srv__ChangePenColor_Event__Sequence * array)
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
      reaction_interfaces__srv__ChangePenColor_Event__fini(&array->data[i]);
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

reaction_interfaces__srv__ChangePenColor_Event__Sequence *
reaction_interfaces__srv__ChangePenColor_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__srv__ChangePenColor_Event__Sequence * array = (reaction_interfaces__srv__ChangePenColor_Event__Sequence *)allocator.allocate(sizeof(reaction_interfaces__srv__ChangePenColor_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__srv__ChangePenColor_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__srv__ChangePenColor_Event__Sequence__destroy(reaction_interfaces__srv__ChangePenColor_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__srv__ChangePenColor_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__srv__ChangePenColor_Event__Sequence__are_equal(const reaction_interfaces__srv__ChangePenColor_Event__Sequence * lhs, const reaction_interfaces__srv__ChangePenColor_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__srv__ChangePenColor_Event__Sequence__copy(
  const reaction_interfaces__srv__ChangePenColor_Event__Sequence * input,
  reaction_interfaces__srv__ChangePenColor_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__srv__ChangePenColor_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__srv__ChangePenColor_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__srv__ChangePenColor_Event * data =
      (reaction_interfaces__srv__ChangePenColor_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__srv__ChangePenColor_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__srv__ChangePenColor_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__srv__ChangePenColor_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
