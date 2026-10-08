// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice
#include "reaction_interfaces/msg/detail/turtle_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
reaction_interfaces__msg__TurtleColor__init(reaction_interfaces__msg__TurtleColor * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    reaction_interfaces__msg__TurtleColor__fini(msg);
    return false;
  }
  // r
  // g
  // b
  return true;
}

void
reaction_interfaces__msg__TurtleColor__fini(reaction_interfaces__msg__TurtleColor * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // r
  // g
  // b
}

bool
reaction_interfaces__msg__TurtleColor__are_equal(const reaction_interfaces__msg__TurtleColor * lhs, const reaction_interfaces__msg__TurtleColor * rhs)
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
  return true;
}

bool
reaction_interfaces__msg__TurtleColor__copy(
  const reaction_interfaces__msg__TurtleColor * input,
  reaction_interfaces__msg__TurtleColor * output)
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
  return true;
}

reaction_interfaces__msg__TurtleColor *
reaction_interfaces__msg__TurtleColor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__msg__TurtleColor * msg = (reaction_interfaces__msg__TurtleColor *)allocator.allocate(sizeof(reaction_interfaces__msg__TurtleColor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reaction_interfaces__msg__TurtleColor));
  bool success = reaction_interfaces__msg__TurtleColor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
reaction_interfaces__msg__TurtleColor__destroy(reaction_interfaces__msg__TurtleColor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    reaction_interfaces__msg__TurtleColor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
reaction_interfaces__msg__TurtleColor__Sequence__init(reaction_interfaces__msg__TurtleColor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__msg__TurtleColor * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(reaction_interfaces__msg__TurtleColor)) {
      return false;
    }
    data = (reaction_interfaces__msg__TurtleColor *)allocator.zero_allocate(size, sizeof(reaction_interfaces__msg__TurtleColor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reaction_interfaces__msg__TurtleColor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reaction_interfaces__msg__TurtleColor__fini(&data[i - 1]);
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
reaction_interfaces__msg__TurtleColor__Sequence__fini(reaction_interfaces__msg__TurtleColor__Sequence * array)
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
      reaction_interfaces__msg__TurtleColor__fini(&array->data[i]);
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

reaction_interfaces__msg__TurtleColor__Sequence *
reaction_interfaces__msg__TurtleColor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  reaction_interfaces__msg__TurtleColor__Sequence * array = (reaction_interfaces__msg__TurtleColor__Sequence *)allocator.allocate(sizeof(reaction_interfaces__msg__TurtleColor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = reaction_interfaces__msg__TurtleColor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
reaction_interfaces__msg__TurtleColor__Sequence__destroy(reaction_interfaces__msg__TurtleColor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    reaction_interfaces__msg__TurtleColor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
reaction_interfaces__msg__TurtleColor__Sequence__are_equal(const reaction_interfaces__msg__TurtleColor__Sequence * lhs, const reaction_interfaces__msg__TurtleColor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reaction_interfaces__msg__TurtleColor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reaction_interfaces__msg__TurtleColor__Sequence__copy(
  const reaction_interfaces__msg__TurtleColor__Sequence * input,
  reaction_interfaces__msg__TurtleColor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(reaction_interfaces__msg__TurtleColor)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(reaction_interfaces__msg__TurtleColor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    reaction_interfaces__msg__TurtleColor * data =
      (reaction_interfaces__msg__TurtleColor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reaction_interfaces__msg__TurtleColor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          reaction_interfaces__msg__TurtleColor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reaction_interfaces__msg__TurtleColor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
