// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clf_audio_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#include "clf_audio_msgs/msg/detail/audio_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clf_audio_msgs
const rosidl_type_hash_t *
clf_audio_msgs__msg__AudioInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xe2, 0x08, 0x09, 0xb3, 0x48, 0x6e, 0x05,
      0x5e, 0x25, 0x0a, 0x39, 0x07, 0xe9, 0xb4, 0x7a,
      0x29, 0xe7, 0x35, 0xda, 0x52, 0xc1, 0x9d, 0x7d,
      0xac, 0x58, 0x8e, 0x1f, 0x34, 0x0d, 0x1f, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clf_audio_msgs__msg__AudioInfo__TYPE_NAME[] = "clf_audio_msgs/msg/AudioInfo";

// Define type names, field names, and default values
static char clf_audio_msgs__msg__AudioInfo__FIELD_NAME__channels[] = "channels";
static char clf_audio_msgs__msg__AudioInfo__FIELD_NAME__sample_rate[] = "sample_rate";
static char clf_audio_msgs__msg__AudioInfo__FIELD_NAME__sample_format[] = "sample_format";
static char clf_audio_msgs__msg__AudioInfo__FIELD_NAME__bitrate[] = "bitrate";
static char clf_audio_msgs__msg__AudioInfo__FIELD_NAME__coding_format[] = "coding_format";

static rosidl_runtime_c__type_description__Field clf_audio_msgs__msg__AudioInfo__FIELDS[] = {
  {
    {clf_audio_msgs__msg__AudioInfo__FIELD_NAME__channels, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clf_audio_msgs__msg__AudioInfo__FIELD_NAME__sample_rate, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clf_audio_msgs__msg__AudioInfo__FIELD_NAME__sample_format, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clf_audio_msgs__msg__AudioInfo__FIELD_NAME__bitrate, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clf_audio_msgs__msg__AudioInfo__FIELD_NAME__coding_format, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clf_audio_msgs__msg__AudioInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clf_audio_msgs__msg__AudioInfo__TYPE_NAME, 28, 28},
      {clf_audio_msgs__msg__AudioInfo__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Number of channels\n"
  "uint8 channels\n"
  "# Sampling rate [Hz]\n"
  "uint32 sample_rate\n"
  "# Audio format (e.g. S16LE)\n"
  "string sample_format\n"
  "# Amount of audio data per second [bits/s]\n"
  "uint32 bitrate\n"
  "# Audio coding format (e.g. WAVE, MP3)\n"
  "string coding_format";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clf_audio_msgs__msg__AudioInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clf_audio_msgs__msg__AudioInfo__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 242, 242},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clf_audio_msgs__msg__AudioInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clf_audio_msgs__msg__AudioInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
