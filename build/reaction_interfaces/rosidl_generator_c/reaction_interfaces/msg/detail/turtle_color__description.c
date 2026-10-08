// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

#include "reaction_interfaces/msg/detail/turtle_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_reaction_interfaces
const rosidl_type_hash_t *
reaction_interfaces__msg__TurtleColor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xe8, 0xcc, 0x8c, 0x1a, 0x9d, 0xd6, 0x69,
      0x23, 0xc7, 0xf0, 0x64, 0x8a, 0xab, 0x34, 0x52,
      0x41, 0x2f, 0x44, 0x4d, 0xed, 0xa8, 0xda, 0x8f,
      0xf9, 0x77, 0xf6, 0x6b, 0x57, 0x0d, 0x8e, 0xcc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char reaction_interfaces__msg__TurtleColor__TYPE_NAME[] = "reaction_interfaces/msg/TurtleColor";

// Define type names, field names, and default values
static char reaction_interfaces__msg__TurtleColor__FIELD_NAME__name[] = "name";
static char reaction_interfaces__msg__TurtleColor__FIELD_NAME__r[] = "r";
static char reaction_interfaces__msg__TurtleColor__FIELD_NAME__g[] = "g";
static char reaction_interfaces__msg__TurtleColor__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field reaction_interfaces__msg__TurtleColor__FIELDS[] = {
  {
    {reaction_interfaces__msg__TurtleColor__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {reaction_interfaces__msg__TurtleColor__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {reaction_interfaces__msg__TurtleColor__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {reaction_interfaces__msg__TurtleColor__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
reaction_interfaces__msg__TurtleColor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {reaction_interfaces__msg__TurtleColor__TYPE_NAME, 35, 35},
      {reaction_interfaces__msg__TurtleColor__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "uint8 r\n"
  "uint8 g\n"
  "uint8 b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
reaction_interfaces__msg__TurtleColor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {reaction_interfaces__msg__TurtleColor__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
reaction_interfaces__msg__TurtleColor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *reaction_interfaces__msg__TurtleColor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
