// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice

#include "clf_ue_audio_msgs/msg/detail/current_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
const rosidl_type_hash_t *
clf_ue_audio_msgs__msg__CurrentStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x78, 0x74, 0x8f, 0x14, 0xce, 0x2f, 0xce,
      0x7c, 0xab, 0x22, 0x8b, 0x27, 0x08, 0xbd, 0xd0,
      0x4c, 0x3a, 0xbf, 0x15, 0x20, 0xd3, 0x16, 0x8f,
      0x44, 0x22, 0xb6, 0x17, 0x5c, 0xdf, 0x24, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clf_ue_audio_msgs__msg__CurrentStatus__TYPE_NAME[] = "clf_ue_audio_msgs/msg/CurrentStatus";

// Define type names, field names, and default values
static char clf_ue_audio_msgs__msg__CurrentStatus__FIELD_NAME__code[] = "code";

static rosidl_runtime_c__type_description__Field clf_ue_audio_msgs__msg__CurrentStatus__FIELDS[] = {
  {
    {clf_ue_audio_msgs__msg__CurrentStatus__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clf_ue_audio_msgs__msg__CurrentStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clf_ue_audio_msgs__msg__CurrentStatus__TYPE_NAME, 35, 35},
      {clf_ue_audio_msgs__msg__CurrentStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 TALKING=0\n"
  "int8 code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clf_ue_audio_msgs__msg__CurrentStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clf_ue_audio_msgs__msg__CurrentStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clf_ue_audio_msgs__msg__CurrentStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clf_ue_audio_msgs__msg__CurrentStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
