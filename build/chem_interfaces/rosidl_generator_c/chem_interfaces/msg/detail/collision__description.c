// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

#include "chem_interfaces/msg/detail/collision__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_chem_interfaces
const rosidl_type_hash_t *
chem_interfaces__msg__Collision__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0xdd, 0xde, 0xd2, 0x21, 0xcb, 0x3c, 0xe6,
      0x07, 0x3d, 0x24, 0xe4, 0xcf, 0x71, 0x06, 0x60,
      0x2e, 0x08, 0xe0, 0x9f, 0xb6, 0x9c, 0xfb, 0x36,
      0x85, 0xf4, 0x58, 0x2b, 0x34, 0xd7, 0x28, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char chem_interfaces__msg__Collision__TYPE_NAME[] = "chem_interfaces/msg/Collision";

// Define type names, field names, and default values
static char chem_interfaces__msg__Collision__FIELD_NAME__kind[] = "kind";
static char chem_interfaces__msg__Collision__FIELD_NAME__turtles[] = "turtles";
static char chem_interfaces__msg__Collision__FIELD_NAME__x[] = "x";
static char chem_interfaces__msg__Collision__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field chem_interfaces__msg__Collision__FIELDS[] = {
  {
    {chem_interfaces__msg__Collision__FIELD_NAME__kind, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chem_interfaces__msg__Collision__FIELD_NAME__turtles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chem_interfaces__msg__Collision__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chem_interfaces__msg__Collision__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chem_interfaces__msg__Collision__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chem_interfaces__msg__Collision__TYPE_NAME, 29, 29},
      {chem_interfaces__msg__Collision__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xd0\\x9a\\xd0\\xb0\\xd1\\x81\\xd0\\xb0\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd1\\x87\\xd0\\xb5\\xd1\\x80\\xd0\\xb5\\xd0\\xbf\\xd0\\xb0\\xd1\\x85\n"
  "uint8 PAIR=2\n"
  "uint8 TRIPLE=3\n"
  "\n"
  "uint8 kind          # PAIR \\xd0\\xb8\\xd0\\xbb\\xd0\\xb8 TRIPLE\n"
  "string[] turtles    # \\xd0\\xb8\\xd0\\xbc\\xd0\\xb5\\xd0\\xbd\\xd0\\xb0 \\xd1\\x87\\xd0\\xb5\\xd1\\x80\\xd0\\xb5\\xd0\\xbf\\xd0\\xb0\\xd1\\x85, \\xd1\\x83\\xd1\\x87\\xd0\\xb0\\xd1\\x81\\xd1\\x82\\xd0\\xb2\\xd1\\x83\\xd1\\x8e\\xd1\\x89\\xd0\\xb8\\xd1\\x85 \\xd0\\xb2 \\xd0\\xba\\xd0\\xb0\\xd1\\x81\\xd0\\xb0\\xd0\\xbd\\xd0\\xb8\\xd0\\xb8\n"
  "float32 x           # \\xd1\\x86\\xd0\\xb5\\xd0\\xbd\\xd1\\x82\\xd1\\x80 \\xd1\\x82\\xd0\\xbe\\xd1\\x87\\xd0\\xba\\xd0\\xb8 \\xd0\\xba\\xd0\\xb0\\xd1\\x81\\xd0\\xb0\\xd0\\xbd\\xd0\\xb8\\xd1\\x8f\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
chem_interfaces__msg__Collision__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chem_interfaces__msg__Collision__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 196, 196},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chem_interfaces__msg__Collision__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chem_interfaces__msg__Collision__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
