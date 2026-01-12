// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clf_audio_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_audio_msgs/msg/audio_data.h"


#ifndef CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
#define CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AudioData in the package clf_audio_msgs.
/**
  * AudioData
 */
typedef struct clf_audio_msgs__msg__AudioData
{
  rosidl_runtime_c__uint8__Sequence data;
} clf_audio_msgs__msg__AudioData;

// Struct for a sequence of clf_audio_msgs__msg__AudioData.
typedef struct clf_audio_msgs__msg__AudioData__Sequence
{
  clf_audio_msgs__msg__AudioData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_audio_msgs__msg__AudioData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
