// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/action/random_walk.h"


#ifndef REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__FUNCTIONS_H_
#define REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__FUNCTIONS_H_

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

#include "reaction_interfaces/action/detail/random_walk__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_Goal
 * )) before or use
 * reaction_interfaces__action__RandomWalk_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Goal__init(reaction_interfaces__action__RandomWalk_Goal * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Goal__fini(reaction_interfaces__action__RandomWalk_Goal * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Goal *
reaction_interfaces__action__RandomWalk_Goal__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Goal__destroy(reaction_interfaces__action__RandomWalk_Goal * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Goal__are_equal(const reaction_interfaces__action__RandomWalk_Goal * lhs, const reaction_interfaces__action__RandomWalk_Goal * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_Goal__copy(
  const reaction_interfaces__action__RandomWalk_Goal * input,
  reaction_interfaces__action__RandomWalk_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Goal__Sequence__init(reaction_interfaces__action__RandomWalk_Goal__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Goal__Sequence__fini(reaction_interfaces__action__RandomWalk_Goal__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Goal__Sequence *
reaction_interfaces__action__RandomWalk_Goal__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Goal__Sequence__destroy(reaction_interfaces__action__RandomWalk_Goal__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Goal__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Goal__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Goal__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_Goal__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Goal__Sequence * input,
  reaction_interfaces__action__RandomWalk_Goal__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_Result
 * )) before or use
 * reaction_interfaces__action__RandomWalk_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Result__init(reaction_interfaces__action__RandomWalk_Result * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Result__fini(reaction_interfaces__action__RandomWalk_Result * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Result *
reaction_interfaces__action__RandomWalk_Result__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Result__destroy(reaction_interfaces__action__RandomWalk_Result * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Result__are_equal(const reaction_interfaces__action__RandomWalk_Result * lhs, const reaction_interfaces__action__RandomWalk_Result * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_Result__copy(
  const reaction_interfaces__action__RandomWalk_Result * input,
  reaction_interfaces__action__RandomWalk_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Result__Sequence__init(reaction_interfaces__action__RandomWalk_Result__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Result__Sequence__fini(reaction_interfaces__action__RandomWalk_Result__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Result__Sequence *
reaction_interfaces__action__RandomWalk_Result__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Result__Sequence__destroy(reaction_interfaces__action__RandomWalk_Result__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Result__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Result__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Result__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_Result__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Result__Sequence * input,
  reaction_interfaces__action__RandomWalk_Result__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_Feedback
 * )) before or use
 * reaction_interfaces__action__RandomWalk_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Feedback__init(reaction_interfaces__action__RandomWalk_Feedback * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Feedback__fini(reaction_interfaces__action__RandomWalk_Feedback * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Feedback *
reaction_interfaces__action__RandomWalk_Feedback__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Feedback__destroy(reaction_interfaces__action__RandomWalk_Feedback * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Feedback__are_equal(const reaction_interfaces__action__RandomWalk_Feedback * lhs, const reaction_interfaces__action__RandomWalk_Feedback * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_Feedback__copy(
  const reaction_interfaces__action__RandomWalk_Feedback * input,
  reaction_interfaces__action__RandomWalk_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Feedback__Sequence__init(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_Feedback__Sequence *
reaction_interfaces__action__RandomWalk_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_Feedback__Sequence__destroy(reaction_interfaces__action__RandomWalk_Feedback__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_Feedback__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_Feedback__Sequence * lhs, const reaction_interfaces__action__RandomWalk_Feedback__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_Feedback__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_Feedback__Sequence * input,
  reaction_interfaces__action__RandomWalk_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_SendGoal_Request
 * )) before or use
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__init(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Request__fini(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Request *
reaction_interfaces__action__RandomWalk_SendGoal_Request__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Request__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Request * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Request * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Request * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_SendGoal_Request__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Request * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_SendGoal_Response
 * )) before or use
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__init(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Response__fini(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Response *
reaction_interfaces__action__RandomWalk_SendGoal_Response__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Response__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Response * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Response * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Response * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_SendGoal_Response__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Response * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_SendGoal_Event
 * )) before or use
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__init(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Event__fini(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Event *
reaction_interfaces__action__RandomWalk_SendGoal_Event__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Event__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Event * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Event * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Event * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_SendGoal_Event__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Event * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__init(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__fini(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence *
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__destroy(reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * lhs, const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * input,
  reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_GetResult_Request
 * )) before or use
 * reaction_interfaces__action__RandomWalk_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Request__init(reaction_interfaces__action__RandomWalk_GetResult_Request * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Request__fini(reaction_interfaces__action__RandomWalk_GetResult_Request * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Request *
reaction_interfaces__action__RandomWalk_GetResult_Request__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Request__destroy(reaction_interfaces__action__RandomWalk_GetResult_Request * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Request__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Request * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Request * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_GetResult_Request__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Request * input,
  reaction_interfaces__action__RandomWalk_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_GetResult_Response
 * )) before or use
 * reaction_interfaces__action__RandomWalk_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Response__init(reaction_interfaces__action__RandomWalk_GetResult_Response * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Response__fini(reaction_interfaces__action__RandomWalk_GetResult_Response * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Response *
reaction_interfaces__action__RandomWalk_GetResult_Response__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Response__destroy(reaction_interfaces__action__RandomWalk_GetResult_Response * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Response__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Response * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Response * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_GetResult_Response__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Response * input,
  reaction_interfaces__action__RandomWalk_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_GetResult_Event
 * )) before or use
 * reaction_interfaces__action__RandomWalk_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Event__init(reaction_interfaces__action__RandomWalk_GetResult_Event * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Event__fini(reaction_interfaces__action__RandomWalk_GetResult_Event * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Event *
reaction_interfaces__action__RandomWalk_GetResult_Event__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Event__destroy(reaction_interfaces__action__RandomWalk_GetResult_Event * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Event__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Event * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Event * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_GetResult_Event__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Event * input,
  reaction_interfaces__action__RandomWalk_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__init(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__fini(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence *
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__destroy(reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * lhs, const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * input,
  reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence * output);

/// Initialize action/RandomWalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reaction_interfaces__action__RandomWalk_FeedbackMessage
 * )) before or use
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__init(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg);

/// Finalize action/RandomWalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_FeedbackMessage__fini(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg);

/// Create action/RandomWalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_FeedbackMessage *
reaction_interfaces__action__RandomWalk_FeedbackMessage__create(void);

/// Destroy action/RandomWalk message.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_FeedbackMessage__destroy(reaction_interfaces__action__RandomWalk_FeedbackMessage * msg);

/// Check for action/RandomWalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__are_equal(const reaction_interfaces__action__RandomWalk_FeedbackMessage * lhs, const reaction_interfaces__action__RandomWalk_FeedbackMessage * rhs);

/// Copy a action/RandomWalk message.
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
reaction_interfaces__action__RandomWalk_FeedbackMessage__copy(
  const reaction_interfaces__action__RandomWalk_FeedbackMessage * input,
  reaction_interfaces__action__RandomWalk_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__action__RandomWalk_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RandomWalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array);

/// Create array of action/RandomWalk messages.
/**
 * It allocates the memory for the array and calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence *
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RandomWalk messages.
/**
 * It calls
 * reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
void
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__destroy(reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * array);

/// Check for action/RandomWalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
bool
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__are_equal(const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * lhs, const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RandomWalk messages.
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
reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__copy(
  const reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * input,
  reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__FUNCTIONS_H_
