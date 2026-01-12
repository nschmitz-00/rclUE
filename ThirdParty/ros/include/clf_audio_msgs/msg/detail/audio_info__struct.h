// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clf_audio_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_audio_msgs/msg/audio_info.h"


#ifndef CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
#define CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sample_format'
// Member 'coding_format'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AudioInfo in the package clf_audio_msgs.
/**
  * Number of channels
 */
typedef struct clf_audio_msgs__msg__AudioInfo
{
  uint8_t channels;
  /// Sampling rate
  uint32_t sample_rate;
  /// Audio format (e.g. S16LE)
  rosidl_runtime_c__String sample_format;
  /// Amount of audio data per second
  uint32_t bitrate;
  /// Audio coding format (e.g. WAVE, MP3)
  rosidl_runtime_c__String coding_format;
} clf_audio_msgs__msg__AudioInfo;

// Struct for a sequence of clf_audio_msgs__msg__AudioInfo.
typedef struct clf_audio_msgs__msg__AudioInfo__Sequence
{
  clf_audio_msgs__msg__AudioInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_audio_msgs__msg__AudioInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
