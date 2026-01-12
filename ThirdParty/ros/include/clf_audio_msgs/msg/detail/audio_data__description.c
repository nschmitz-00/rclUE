// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clf_audio_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#include "clf_audio_msgs/msg/detail/audio_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clf_audio_msgs
const rosidl_type_hash_t *
clf_audio_msgs__msg__AudioData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x8a, 0x1b, 0x78, 0xdb, 0x35, 0xf0, 0x6e,
      0xd8, 0x5b, 0x05, 0xaf, 0x24, 0x7d, 0x46, 0xd1,
      0xeb, 0x79, 0x4d, 0xfe, 0x98, 0xb6, 0x2a, 0xd6,
      0xe2, 0x9e, 0x53, 0xcf, 0xcf, 0x97, 0x14, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clf_audio_msgs__msg__AudioData__TYPE_NAME[] = "clf_audio_msgs/msg/AudioData";

// Define type names, field names, and default values
static char clf_audio_msgs__msg__AudioData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field clf_audio_msgs__msg__AudioData__FIELDS[] = {
  {
    {clf_audio_msgs__msg__AudioData__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clf_audio_msgs__msg__AudioData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clf_audio_msgs__msg__AudioData__TYPE_NAME, 28, 28},
      {clf_audio_msgs__msg__AudioData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# AudioData\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clf_audio_msgs__msg__AudioData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clf_audio_msgs__msg__AudioData__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clf_audio_msgs__msg__AudioData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clf_audio_msgs__msg__AudioData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
