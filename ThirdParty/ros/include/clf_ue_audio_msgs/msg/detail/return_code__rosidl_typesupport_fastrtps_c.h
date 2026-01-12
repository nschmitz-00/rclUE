// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice
#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "clf_ue_audio_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "clf_ue_audio_msgs/msg/detail/return_code__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
bool cdr_serialize_clf_ue_audio_msgs__msg__ReturnCode(
  const clf_ue_audio_msgs__msg__ReturnCode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
bool cdr_deserialize_clf_ue_audio_msgs__msg__ReturnCode(
  eprosima::fastcdr::Cdr &,
  clf_ue_audio_msgs__msg__ReturnCode * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
size_t get_serialized_size_clf_ue_audio_msgs__msg__ReturnCode(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
size_t max_serialized_size_clf_ue_audio_msgs__msg__ReturnCode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
bool cdr_serialize_key_clf_ue_audio_msgs__msg__ReturnCode(
  const clf_ue_audio_msgs__msg__ReturnCode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
size_t get_serialized_size_key_clf_ue_audio_msgs__msg__ReturnCode(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
size_t max_serialized_size_key_clf_ue_audio_msgs__msg__ReturnCode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clf_ue_audio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, clf_ue_audio_msgs, msg, ReturnCode)();

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
