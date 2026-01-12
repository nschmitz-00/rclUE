// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/return_code.h"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__FUNCTIONS_H_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "clf_ue_audio_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "clf_ue_audio_msgs/msg/detail/return_code__struct.h"

/// Initialize msg/ReturnCode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clf_ue_audio_msgs__msg__ReturnCode
 * )) before or use
 * clf_ue_audio_msgs__msg__ReturnCode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__init(clf_ue_audio_msgs__msg__ReturnCode * msg);

/// Finalize msg/ReturnCode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
void
clf_ue_audio_msgs__msg__ReturnCode__fini(clf_ue_audio_msgs__msg__ReturnCode * msg);

/// Create msg/ReturnCode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clf_ue_audio_msgs__msg__ReturnCode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
clf_ue_audio_msgs__msg__ReturnCode *
clf_ue_audio_msgs__msg__ReturnCode__create(void);

/// Destroy msg/ReturnCode message.
/**
 * It calls
 * clf_ue_audio_msgs__msg__ReturnCode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
void
clf_ue_audio_msgs__msg__ReturnCode__destroy(clf_ue_audio_msgs__msg__ReturnCode * msg);

/// Check for msg/ReturnCode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__are_equal(const clf_ue_audio_msgs__msg__ReturnCode * lhs, const clf_ue_audio_msgs__msg__ReturnCode * rhs);

/// Copy a msg/ReturnCode message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__copy(
  const clf_ue_audio_msgs__msg__ReturnCode * input,
  clf_ue_audio_msgs__msg__ReturnCode * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
const rosidl_type_hash_t *
clf_ue_audio_msgs__msg__ReturnCode__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
const rosidl_runtime_c__type_description__TypeDescription *
clf_ue_audio_msgs__msg__ReturnCode__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
const rosidl_runtime_c__type_description__TypeSource *
clf_ue_audio_msgs__msg__ReturnCode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
clf_ue_audio_msgs__msg__ReturnCode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ReturnCode messages.
/**
 * It allocates the memory for the number of elements and calls
 * clf_ue_audio_msgs__msg__ReturnCode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__Sequence__init(clf_ue_audio_msgs__msg__ReturnCode__Sequence * array, size_t size);

/// Finalize array of msg/ReturnCode messages.
/**
 * It calls
 * clf_ue_audio_msgs__msg__ReturnCode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
void
clf_ue_audio_msgs__msg__ReturnCode__Sequence__fini(clf_ue_audio_msgs__msg__ReturnCode__Sequence * array);

/// Create array of msg/ReturnCode messages.
/**
 * It allocates the memory for the array and calls
 * clf_ue_audio_msgs__msg__ReturnCode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
clf_ue_audio_msgs__msg__ReturnCode__Sequence *
clf_ue_audio_msgs__msg__ReturnCode__Sequence__create(size_t size);

/// Destroy array of msg/ReturnCode messages.
/**
 * It calls
 * clf_ue_audio_msgs__msg__ReturnCode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
void
clf_ue_audio_msgs__msg__ReturnCode__Sequence__destroy(clf_ue_audio_msgs__msg__ReturnCode__Sequence * array);

/// Check for msg/ReturnCode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__Sequence__are_equal(const clf_ue_audio_msgs__msg__ReturnCode__Sequence * lhs, const clf_ue_audio_msgs__msg__ReturnCode__Sequence * rhs);

/// Copy an array of msg/ReturnCode messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clf_ue_audio_msgs
bool
clf_ue_audio_msgs__msg__ReturnCode__Sequence__copy(
  const clf_ue_audio_msgs__msg__ReturnCode__Sequence * input,
  clf_ue_audio_msgs__msg__ReturnCode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__FUNCTIONS_H_
