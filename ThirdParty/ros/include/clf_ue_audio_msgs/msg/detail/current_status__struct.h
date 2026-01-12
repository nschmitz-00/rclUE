// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/current_status.h"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_H_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TALKING'.
enum
{
  clf_ue_audio_msgs__msg__CurrentStatus__TALKING = 0
};

/// Struct defined in msg/CurrentStatus in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__msg__CurrentStatus
{
  int8_t code;
} clf_ue_audio_msgs__msg__CurrentStatus;

// Struct for a sequence of clf_ue_audio_msgs__msg__CurrentStatus.
typedef struct clf_ue_audio_msgs__msg__CurrentStatus__Sequence
{
  clf_ue_audio_msgs__msg__CurrentStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__msg__CurrentStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_H_
