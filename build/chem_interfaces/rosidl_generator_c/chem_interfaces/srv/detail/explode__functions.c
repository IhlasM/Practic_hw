// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice
#include "chem_interfaces/srv/detail/explode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `turtles`
#include "rosidl_runtime_c/string_functions.h"

bool
chem_interfaces__srv__Explode_Request__init(chem_interfaces__srv__Explode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!rosidl_runtime_c__String__Sequence__init(&msg->turtles, 0)) {
    chem_interfaces__srv__Explode_Request__fini(msg);
    return false;
  }
  return true;
}

void
chem_interfaces__srv__Explode_Request__fini(chem_interfaces__srv__Explode_Request * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  rosidl_runtime_c__String__Sequence__fini(&msg->turtles);
}

bool
chem_interfaces__srv__Explode_Request__are_equal(const chem_interfaces__srv__Explode_Request * lhs, const chem_interfaces__srv__Explode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Request__copy(
  const chem_interfaces__srv__Explode_Request * input,
  chem_interfaces__srv__Explode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

chem_interfaces__srv__Explode_Request *
chem_interfaces__srv__Explode_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Request * msg = (chem_interfaces__srv__Explode_Request *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chem_interfaces__srv__Explode_Request));
  bool success = chem_interfaces__srv__Explode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chem_interfaces__srv__Explode_Request__destroy(chem_interfaces__srv__Explode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chem_interfaces__srv__Explode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chem_interfaces__srv__Explode_Request__Sequence__init(chem_interfaces__srv__Explode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Request)) {
      return false;
    }
    data = (chem_interfaces__srv__Explode_Request *)allocator.zero_allocate(size, sizeof(chem_interfaces__srv__Explode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chem_interfaces__srv__Explode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chem_interfaces__srv__Explode_Request__fini(&data[i - 1]);
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
chem_interfaces__srv__Explode_Request__Sequence__fini(chem_interfaces__srv__Explode_Request__Sequence * array)
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
      chem_interfaces__srv__Explode_Request__fini(&array->data[i]);
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

chem_interfaces__srv__Explode_Request__Sequence *
chem_interfaces__srv__Explode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Request__Sequence * array = (chem_interfaces__srv__Explode_Request__Sequence *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chem_interfaces__srv__Explode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chem_interfaces__srv__Explode_Request__Sequence__destroy(chem_interfaces__srv__Explode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chem_interfaces__srv__Explode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chem_interfaces__srv__Explode_Request__Sequence__are_equal(const chem_interfaces__srv__Explode_Request__Sequence * lhs, const chem_interfaces__srv__Explode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chem_interfaces__srv__Explode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Request__Sequence__copy(
  const chem_interfaces__srv__Explode_Request__Sequence * input,
  chem_interfaces__srv__Explode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(chem_interfaces__srv__Explode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chem_interfaces__srv__Explode_Request * data =
      (chem_interfaces__srv__Explode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chem_interfaces__srv__Explode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chem_interfaces__srv__Explode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chem_interfaces__srv__Explode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
chem_interfaces__srv__Explode_Response__init(chem_interfaces__srv__Explode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // teleported
  return true;
}

void
chem_interfaces__srv__Explode_Response__fini(chem_interfaces__srv__Explode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // teleported
}

bool
chem_interfaces__srv__Explode_Response__are_equal(const chem_interfaces__srv__Explode_Response * lhs, const chem_interfaces__srv__Explode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // teleported
  if (lhs->teleported != rhs->teleported) {
    return false;
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Response__copy(
  const chem_interfaces__srv__Explode_Response * input,
  chem_interfaces__srv__Explode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // teleported
  output->teleported = input->teleported;
  return true;
}

chem_interfaces__srv__Explode_Response *
chem_interfaces__srv__Explode_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Response * msg = (chem_interfaces__srv__Explode_Response *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chem_interfaces__srv__Explode_Response));
  bool success = chem_interfaces__srv__Explode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chem_interfaces__srv__Explode_Response__destroy(chem_interfaces__srv__Explode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chem_interfaces__srv__Explode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chem_interfaces__srv__Explode_Response__Sequence__init(chem_interfaces__srv__Explode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Response)) {
      return false;
    }
    data = (chem_interfaces__srv__Explode_Response *)allocator.zero_allocate(size, sizeof(chem_interfaces__srv__Explode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chem_interfaces__srv__Explode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chem_interfaces__srv__Explode_Response__fini(&data[i - 1]);
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
chem_interfaces__srv__Explode_Response__Sequence__fini(chem_interfaces__srv__Explode_Response__Sequence * array)
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
      chem_interfaces__srv__Explode_Response__fini(&array->data[i]);
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

chem_interfaces__srv__Explode_Response__Sequence *
chem_interfaces__srv__Explode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Response__Sequence * array = (chem_interfaces__srv__Explode_Response__Sequence *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chem_interfaces__srv__Explode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chem_interfaces__srv__Explode_Response__Sequence__destroy(chem_interfaces__srv__Explode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chem_interfaces__srv__Explode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chem_interfaces__srv__Explode_Response__Sequence__are_equal(const chem_interfaces__srv__Explode_Response__Sequence * lhs, const chem_interfaces__srv__Explode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chem_interfaces__srv__Explode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Response__Sequence__copy(
  const chem_interfaces__srv__Explode_Response__Sequence * input,
  chem_interfaces__srv__Explode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(chem_interfaces__srv__Explode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chem_interfaces__srv__Explode_Response * data =
      (chem_interfaces__srv__Explode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chem_interfaces__srv__Explode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chem_interfaces__srv__Explode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chem_interfaces__srv__Explode_Response__copy(
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
// #include "chem_interfaces/srv/detail/explode__functions.h"

bool
chem_interfaces__srv__Explode_Event__init(chem_interfaces__srv__Explode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    chem_interfaces__srv__Explode_Event__fini(msg);
    return false;
  }
  // request
  if (!chem_interfaces__srv__Explode_Request__Sequence__init(&msg->request, 0)) {
    chem_interfaces__srv__Explode_Event__fini(msg);
    return false;
  }
  // response
  if (!chem_interfaces__srv__Explode_Response__Sequence__init(&msg->response, 0)) {
    chem_interfaces__srv__Explode_Event__fini(msg);
    return false;
  }
  return true;
}

void
chem_interfaces__srv__Explode_Event__fini(chem_interfaces__srv__Explode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  chem_interfaces__srv__Explode_Request__Sequence__fini(&msg->request);
  // response
  chem_interfaces__srv__Explode_Response__Sequence__fini(&msg->response);
}

bool
chem_interfaces__srv__Explode_Event__are_equal(const chem_interfaces__srv__Explode_Event * lhs, const chem_interfaces__srv__Explode_Event * rhs)
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
  if (!chem_interfaces__srv__Explode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!chem_interfaces__srv__Explode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Event__copy(
  const chem_interfaces__srv__Explode_Event * input,
  chem_interfaces__srv__Explode_Event * output)
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
  if (!chem_interfaces__srv__Explode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!chem_interfaces__srv__Explode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

chem_interfaces__srv__Explode_Event *
chem_interfaces__srv__Explode_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Event * msg = (chem_interfaces__srv__Explode_Event *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chem_interfaces__srv__Explode_Event));
  bool success = chem_interfaces__srv__Explode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chem_interfaces__srv__Explode_Event__destroy(chem_interfaces__srv__Explode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chem_interfaces__srv__Explode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chem_interfaces__srv__Explode_Event__Sequence__init(chem_interfaces__srv__Explode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Event)) {
      return false;
    }
    data = (chem_interfaces__srv__Explode_Event *)allocator.zero_allocate(size, sizeof(chem_interfaces__srv__Explode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chem_interfaces__srv__Explode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chem_interfaces__srv__Explode_Event__fini(&data[i - 1]);
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
chem_interfaces__srv__Explode_Event__Sequence__fini(chem_interfaces__srv__Explode_Event__Sequence * array)
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
      chem_interfaces__srv__Explode_Event__fini(&array->data[i]);
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

chem_interfaces__srv__Explode_Event__Sequence *
chem_interfaces__srv__Explode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__srv__Explode_Event__Sequence * array = (chem_interfaces__srv__Explode_Event__Sequence *)allocator.allocate(sizeof(chem_interfaces__srv__Explode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chem_interfaces__srv__Explode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chem_interfaces__srv__Explode_Event__Sequence__destroy(chem_interfaces__srv__Explode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chem_interfaces__srv__Explode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chem_interfaces__srv__Explode_Event__Sequence__are_equal(const chem_interfaces__srv__Explode_Event__Sequence * lhs, const chem_interfaces__srv__Explode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chem_interfaces__srv__Explode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chem_interfaces__srv__Explode_Event__Sequence__copy(
  const chem_interfaces__srv__Explode_Event__Sequence * input,
  chem_interfaces__srv__Explode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(chem_interfaces__srv__Explode_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(chem_interfaces__srv__Explode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chem_interfaces__srv__Explode_Event * data =
      (chem_interfaces__srv__Explode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chem_interfaces__srv__Explode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chem_interfaces__srv__Explode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chem_interfaces__srv__Explode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
