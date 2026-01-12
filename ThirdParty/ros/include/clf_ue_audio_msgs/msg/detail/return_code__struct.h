// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/return_code.h"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_H_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  clf_ue_audio_msgs__msg__ReturnCode__SUCCESS = 0
};

/// Constant 'ERROR'.
enum
{
  clf_ue_audio_msgs__msg__ReturnCode__ERROR = 1
};

/// Struct defined in msg/ReturnCode in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__msg__ReturnCode
{
  int8_t code;
} clf_ue_audio_msgs__msg__ReturnCode;

// Struct for a sequence of clf_ue_audio_msgs__msg__ReturnCode.
typedef struct clf_ue_audio_msgs__msg__ReturnCode__Sequence
{
  clf_ue_audio_msgs__msg__ReturnCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__msg__ReturnCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_H_
