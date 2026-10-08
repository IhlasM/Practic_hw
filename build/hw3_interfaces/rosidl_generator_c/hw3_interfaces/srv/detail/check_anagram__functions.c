// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hw3_interfaces:srv/CheckAnagram.idl
// generated code does not contain a copyright notice
#include "hw3_interfaces/srv/detail/check_anagram__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `first`
// Member `second`
#include "rosidl_runtime_c/string_functions.h"

bool
hw3_interfaces__srv__CheckAnagram_Request__init(hw3_interfaces__srv__CheckAnagram_Request * msg)
{
  if (!msg) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__init(&msg->first)) {
    hw3_interfaces__srv__CheckAnagram_Request__fini(msg);
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__init(&msg->second)) {
    hw3_interfaces__srv__CheckAnagram_Request__fini(msg);
    return false;
  }
  return true;
}

void
hw3_interfaces__srv__CheckAnagram_Request__fini(hw3_interfaces__srv__CheckAnagram_Request * msg)
{
  if (!msg) {
    return;
  }
  // first
  rosidl_runtime_c__String__fini(&msg->first);
  // second
  rosidl_runtime_c__String__fini(&msg->second);
}

bool
hw3_interfaces__srv__CheckAnagram_Request__are_equal(const hw3_interfaces__srv__CheckAnagram_Request * lhs, const hw3_interfaces__srv__CheckAnagram_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first), &(rhs->first)))
  {
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Request__copy(
  const hw3_interfaces__srv__CheckAnagram_Request * input,
  hw3_interfaces__srv__CheckAnagram_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__copy(
      &(input->first), &(output->first)))
  {
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  return true;
}

hw3_interfaces__srv__CheckAnagram_Request *
hw3_interfaces__srv__CheckAnagram_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Request * msg = (hw3_interfaces__srv__CheckAnagram_Request *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__CheckAnagram_Request));
  bool success = hw3_interfaces__srv__CheckAnagram_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__CheckAnagram_Request__destroy(hw3_interfaces__srv__CheckAnagram_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__CheckAnagram_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__CheckAnagram_Request__Sequence__init(hw3_interfaces__srv__CheckAnagram_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Request)) {
      return false;
    }
    data = (hw3_interfaces__srv__CheckAnagram_Request *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__CheckAnagram_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__CheckAnagram_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__CheckAnagram_Request__fini(&data[i - 1]);
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
hw3_interfaces__srv__CheckAnagram_Request__Sequence__fini(hw3_interfaces__srv__CheckAnagram_Request__Sequence * array)
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
      hw3_interfaces__srv__CheckAnagram_Request__fini(&array->data[i]);
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

hw3_interfaces__srv__CheckAnagram_Request__Sequence *
hw3_interfaces__srv__CheckAnagram_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Request__Sequence * array = (hw3_interfaces__srv__CheckAnagram_Request__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__CheckAnagram_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__CheckAnagram_Request__Sequence__destroy(hw3_interfaces__srv__CheckAnagram_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__CheckAnagram_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__CheckAnagram_Request__Sequence__are_equal(const hw3_interfaces__srv__CheckAnagram_Request__Sequence * lhs, const hw3_interfaces__srv__CheckAnagram_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Request__Sequence__copy(
  const hw3_interfaces__srv__CheckAnagram_Request__Sequence * input,
  hw3_interfaces__srv__CheckAnagram_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__CheckAnagram_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__CheckAnagram_Request * data =
      (hw3_interfaces__srv__CheckAnagram_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__CheckAnagram_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__CheckAnagram_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hw3_interfaces__srv__CheckAnagram_Response__init(hw3_interfaces__srv__CheckAnagram_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_anagram
  return true;
}

void
hw3_interfaces__srv__CheckAnagram_Response__fini(hw3_interfaces__srv__CheckAnagram_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_anagram
}

bool
hw3_interfaces__srv__CheckAnagram_Response__are_equal(const hw3_interfaces__srv__CheckAnagram_Response * lhs, const hw3_interfaces__srv__CheckAnagram_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_anagram
  if (lhs->is_anagram != rhs->is_anagram) {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Response__copy(
  const hw3_interfaces__srv__CheckAnagram_Response * input,
  hw3_interfaces__srv__CheckAnagram_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_anagram
  output->is_anagram = input->is_anagram;
  return true;
}

hw3_interfaces__srv__CheckAnagram_Response *
hw3_interfaces__srv__CheckAnagram_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Response * msg = (hw3_interfaces__srv__CheckAnagram_Response *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__CheckAnagram_Response));
  bool success = hw3_interfaces__srv__CheckAnagram_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__CheckAnagram_Response__destroy(hw3_interfaces__srv__CheckAnagram_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__CheckAnagram_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__CheckAnagram_Response__Sequence__init(hw3_interfaces__srv__CheckAnagram_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Response)) {
      return false;
    }
    data = (hw3_interfaces__srv__CheckAnagram_Response *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__CheckAnagram_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__CheckAnagram_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__CheckAnagram_Response__fini(&data[i - 1]);
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
hw3_interfaces__srv__CheckAnagram_Response__Sequence__fini(hw3_interfaces__srv__CheckAnagram_Response__Sequence * array)
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
      hw3_interfaces__srv__CheckAnagram_Response__fini(&array->data[i]);
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

hw3_interfaces__srv__CheckAnagram_Response__Sequence *
hw3_interfaces__srv__CheckAnagram_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Response__Sequence * array = (hw3_interfaces__srv__CheckAnagram_Response__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__CheckAnagram_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__CheckAnagram_Response__Sequence__destroy(hw3_interfaces__srv__CheckAnagram_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__CheckAnagram_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__CheckAnagram_Response__Sequence__are_equal(const hw3_interfaces__srv__CheckAnagram_Response__Sequence * lhs, const hw3_interfaces__srv__CheckAnagram_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Response__Sequence__copy(
  const hw3_interfaces__srv__CheckAnagram_Response__Sequence * input,
  hw3_interfaces__srv__CheckAnagram_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__CheckAnagram_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__CheckAnagram_Response * data =
      (hw3_interfaces__srv__CheckAnagram_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__CheckAnagram_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__CheckAnagram_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Response__copy(
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
// #include "hw3_interfaces/srv/detail/check_anagram__functions.h"

bool
hw3_interfaces__srv__CheckAnagram_Event__init(hw3_interfaces__srv__CheckAnagram_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hw3_interfaces__srv__CheckAnagram_Event__fini(msg);
    return false;
  }
  // request
  if (!hw3_interfaces__srv__CheckAnagram_Request__Sequence__init(&msg->request, 0)) {
    hw3_interfaces__srv__CheckAnagram_Event__fini(msg);
    return false;
  }
  // response
  if (!hw3_interfaces__srv__CheckAnagram_Response__Sequence__init(&msg->response, 0)) {
    hw3_interfaces__srv__CheckAnagram_Event__fini(msg);
    return false;
  }
  return true;
}

void
hw3_interfaces__srv__CheckAnagram_Event__fini(hw3_interfaces__srv__CheckAnagram_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hw3_interfaces__srv__CheckAnagram_Request__Sequence__fini(&msg->request);
  // response
  hw3_interfaces__srv__CheckAnagram_Response__Sequence__fini(&msg->response);
}

bool
hw3_interfaces__srv__CheckAnagram_Event__are_equal(const hw3_interfaces__srv__CheckAnagram_Event * lhs, const hw3_interfaces__srv__CheckAnagram_Event * rhs)
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
  if (!hw3_interfaces__srv__CheckAnagram_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hw3_interfaces__srv__CheckAnagram_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Event__copy(
  const hw3_interfaces__srv__CheckAnagram_Event * input,
  hw3_interfaces__srv__CheckAnagram_Event * output)
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
  if (!hw3_interfaces__srv__CheckAnagram_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hw3_interfaces__srv__CheckAnagram_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hw3_interfaces__srv__CheckAnagram_Event *
hw3_interfaces__srv__CheckAnagram_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Event * msg = (hw3_interfaces__srv__CheckAnagram_Event *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__CheckAnagram_Event));
  bool success = hw3_interfaces__srv__CheckAnagram_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__CheckAnagram_Event__destroy(hw3_interfaces__srv__CheckAnagram_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__CheckAnagram_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__CheckAnagram_Event__Sequence__init(hw3_interfaces__srv__CheckAnagram_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Event)) {
      return false;
    }
    data = (hw3_interfaces__srv__CheckAnagram_Event *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__CheckAnagram_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__CheckAnagram_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__CheckAnagram_Event__fini(&data[i - 1]);
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
hw3_interfaces__srv__CheckAnagram_Event__Sequence__fini(hw3_interfaces__srv__CheckAnagram_Event__Sequence * array)
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
      hw3_interfaces__srv__CheckAnagram_Event__fini(&array->data[i]);
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

hw3_interfaces__srv__CheckAnagram_Event__Sequence *
hw3_interfaces__srv__CheckAnagram_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__CheckAnagram_Event__Sequence * array = (hw3_interfaces__srv__CheckAnagram_Event__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__CheckAnagram_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__CheckAnagram_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__CheckAnagram_Event__Sequence__destroy(hw3_interfaces__srv__CheckAnagram_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__CheckAnagram_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__CheckAnagram_Event__Sequence__are_equal(const hw3_interfaces__srv__CheckAnagram_Event__Sequence * lhs, const hw3_interfaces__srv__CheckAnagram_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__CheckAnagram_Event__Sequence__copy(
  const hw3_interfaces__srv__CheckAnagram_Event__Sequence * input,
  hw3_interfaces__srv__CheckAnagram_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(hw3_interfaces__srv__CheckAnagram_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__CheckAnagram_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__CheckAnagram_Event * data =
      (hw3_interfaces__srv__CheckAnagram_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__CheckAnagram_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__CheckAnagram_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__CheckAnagram_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
