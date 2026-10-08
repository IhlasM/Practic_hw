// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/msg/turtle_color.h"


#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__FUNCTIONS_H_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "reaction_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "reaction_interfaces/msg/detail/turtle_color__struct.h"

/// Initialize msg/TurtleColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__msg__TurtleColor
 * )) before or use
 * reaction_interfaces__msg__TurtleColor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__init(reaction_interfaces__msg__TurtleColor * msg);

/// Finalize msg/TurtleColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__msg__TurtleColor__fini(reaction_interfaces__msg__TurtleColor * msg);

/// Create msg/TurtleColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__msg__TurtleColor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__msg__TurtleColor *
reaction_interfaces__msg__TurtleColor__create(void);

/// Destroy msg/TurtleColor message.
/**
 * It calls
 * reaction_interfaces__msg__TurtleColor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__msg__TurtleColor__destroy(reaction_interfaces__msg__TurtleColor * msg);

/// Check for msg/TurtleColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__are_equal(const reaction_interfaces__msg__TurtleColor * lhs, const reaction_interfaces__msg__TurtleColor * rhs);

/// Copy a msg/TurtleColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__copy(
  const reaction_interfaces__msg__TurtleColor * input,
  reaction_interfaces__msg__TurtleColor * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__msg__TurtleColor__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__msg__TurtleColor__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__msg__TurtleColor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__msg__TurtleColor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TurtleColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__msg__TurtleColor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__Sequence__init(reaction_interfaces__msg__TurtleColor__Sequence * array, size_t size);

/// Finalize array of msg/TurtleColor messages.
/**
 * It calls
 * reaction_interfaces__msg__TurtleColor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__msg__TurtleColor__Sequence__fini(reaction_interfaces__msg__TurtleColor__Sequence * array);

/// Create array of msg/TurtleColor messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__msg__TurtleColor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__msg__TurtleColor__Sequence *
reaction_interfaces__msg__TurtleColor__Sequence__create(size_t size);

/// Destroy array of msg/TurtleColor messages.
/**
 * It calls
 * reaction_interfaces__msg__TurtleColor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__msg__TurtleColor__Sequence__destroy(reaction_interfaces__msg__TurtleColor__Sequence * array);

/// Check for msg/TurtleColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__Sequence__are_equal(const reaction_interfaces__msg__TurtleColor__Sequence * lhs, const reaction_interfaces__msg__TurtleColor__Sequence * rhs);

/// Copy an array of msg/TurtleColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__msg__TurtleColor__Sequence__copy(
  const reaction_interfaces__msg__TurtleColor__Sequence * input,
  reaction_interfaces__msg__TurtleColor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__FUNCTIONS_H_
