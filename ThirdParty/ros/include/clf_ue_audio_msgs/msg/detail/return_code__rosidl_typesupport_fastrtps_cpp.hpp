// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "clf_ue_audio_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "clf_ue_audio_msgs/msg/detail/return_code__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace clf_ue_audio_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
cdr_serialize(
  const clf_ue_audio_msgs::msg::ReturnCode & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  clf_ue_audio_msgs::msg::ReturnCode & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
get_serialized_size(
  const clf_ue_audio_msgs::msg::ReturnCode & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
max_serialized_size_ReturnCode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
cdr_serialize_key(
  const clf_ue_audio_msgs::msg::ReturnCode & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
get_serialized_size_key(
  const clf_ue_audio_msgs::msg::ReturnCode & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
max_serialized_size_key_ReturnCode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace clf_ue_audio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clf_ue_audio_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clf_ue_audio_msgs, msg, ReturnCode)();

#ifdef __cplusplus
}
#endif

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
