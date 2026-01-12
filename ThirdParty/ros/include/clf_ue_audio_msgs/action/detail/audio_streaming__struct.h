// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clf_ue_audio_msgs:action/AudioStreaming.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/action/audio_streaming.h"


#ifndef CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__STRUCT_H_
#define CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "clf_audio_msgs/msg/detail/audio_info__struct.h"
// Member 'data'
#include "clf_audio_msgs/msg/detail/audio_data__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Goal
{
  clf_audio_msgs__msg__AudioInfo info;
  clf_audio_msgs__msg__AudioData data;
} clf_ue_audio_msgs__action__AudioStreaming_Goal;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_Goal.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Goal__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'return_code'
#include "clf_ue_audio_msgs/msg/detail/return_code__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Result
{
  clf_ue_audio_msgs__msg__ReturnCode return_code;
} clf_ue_audio_msgs__action__AudioStreaming_Result;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_Result.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Result__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "clf_ue_audio_msgs/msg/detail/current_status__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Feedback
{
  clf_ue_audio_msgs__msg__CurrentStatus status;
} clf_ue_audio_msgs__action__AudioStreaming_Feedback;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_Feedback.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_Feedback__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "clf_ue_audio_msgs/action/detail/audio_streaming__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  clf_ue_audio_msgs__action__AudioStreaming_Goal goal;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Request__Sequence request;
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Response__Sequence response;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "clf_ue_audio_msgs/action/detail/audio_streaming__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response
{
  int8_t status;
  clf_ue_audio_msgs__action__AudioStreaming_Result result;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Request__Sequence request;
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Response__Sequence response;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "clf_ue_audio_msgs/action/detail/audio_streaming__struct.h"

/// Struct defined in action/AudioStreaming in the package clf_ue_audio_msgs.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  clf_ue_audio_msgs__action__AudioStreaming_Feedback feedback;
} clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage;

// Struct for a sequence of clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage.
typedef struct clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage__Sequence
{
  clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clf_ue_audio_msgs__action__AudioStreaming_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__STRUCT_H_
