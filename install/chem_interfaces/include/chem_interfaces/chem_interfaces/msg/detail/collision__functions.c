// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice
#include "chem_interfaces/msg/detail/collision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "rosidl_runtime_c/string_functions.h"

bool
chem_interfaces__msg__Collision__init(chem_interfaces__msg__Collision * msg)
{
  if (!msg) {
    return false;
  }
  // kind
  // turtles
  if (!rosidl_runtime_c__String__Sequence__init(&msg->turtles, 0)) {
    chem_interfaces__msg__Collision__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
chem_interfaces__msg__Collision__fini(chem_interfaces__msg__Collision * msg)
{
  if (!msg) {
    return;
  }
  // kind
  // turtles
  rosidl_runtime_c__String__Sequence__fini(&msg->turtles);
  // x
  // y
}

bool
chem_interfaces__msg__Collision__are_equal(const chem_interfaces__msg__Collision * lhs, const chem_interfaces__msg__Collision * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kind
  if (lhs->kind != rhs->kind) {
    return false;
  }
  // turtles
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
chem_interfaces__msg__Collision__copy(
  const chem_interfaces__msg__Collision * input,
  chem_interfaces__msg__Collision * output)
{
  if (!input || !output) {
    return false;
  }
  // kind
  output->kind = input->kind;
  // turtles
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

chem_interfaces__msg__Collision *
chem_interfaces__msg__Collision__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__msg__Collision * msg = (chem_interfaces__msg__Collision *)allocator.allocate(sizeof(chem_interfaces__msg__Collision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chem_interfaces__msg__Collision));
  bool success = chem_interfaces__msg__Collision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chem_interfaces__msg__Collision__destroy(chem_interfaces__msg__Collision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chem_interfaces__msg__Collision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chem_interfaces__msg__Collision__Sequence__init(chem_interfaces__msg__Collision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__msg__Collision * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(chem_interfaces__msg__Collision)) {
      return false;
    }
    data = (chem_interfaces__msg__Collision *)allocator.zero_allocate(size, sizeof(chem_interfaces__msg__Collision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chem_interfaces__msg__Collision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chem_interfaces__msg__Collision__fini(&data[i - 1]);
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
chem_interfaces__msg__Collision__Sequence__fini(chem_interfaces__msg__Collision__Sequence * array)
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
      chem_interfaces__msg__Collision__fini(&array->data[i]);
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

chem_interfaces__msg__Collision__Sequence *
chem_interfaces__msg__Collision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chem_interfaces__msg__Collision__Sequence * array = (chem_interfaces__msg__Collision__Sequence *)allocator.allocate(sizeof(chem_interfaces__msg__Collision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chem_interfaces__msg__Collision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chem_interfaces__msg__Collision__Sequence__destroy(chem_interfaces__msg__Collision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chem_interfaces__msg__Collision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chem_interfaces__msg__Collision__Sequence__are_equal(const chem_interfaces__msg__Collision__Sequence * lhs, const chem_interfaces__msg__Collision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chem_interfaces__msg__Collision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chem_interfaces__msg__Collision__Sequence__copy(
  const chem_interfaces__msg__Collision__Sequence * input,
  chem_interfaces__msg__Collision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(chem_interfaces__msg__Collision)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(chem_interfaces__msg__Collision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chem_interfaces__msg__Collision * data =
      (chem_interfaces__msg__Collision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chem_interfaces__msg__Collision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chem_interfaces__msg__Collision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chem_interfaces__msg__Collision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
