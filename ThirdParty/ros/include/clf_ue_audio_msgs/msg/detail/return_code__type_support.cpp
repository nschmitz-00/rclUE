// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clf_ue_audio_msgs/msg/detail/return_code__functions.h"
#include "clf_ue_audio_msgs/msg/detail/return_code__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clf_ue_audio_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ReturnCode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clf_ue_audio_msgs::msg::ReturnCode(_init);
}

void ReturnCode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clf_ue_audio_msgs::msg::ReturnCode *>(message_memory);
  typed_message->~ReturnCode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReturnCode_message_member_array[1] = {
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clf_ue_audio_msgs::msg::ReturnCode, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReturnCode_message_members = {
  "clf_ue_audio_msgs::msg",  // message namespace
  "ReturnCode",  // message name
  1,  // number of fields
  sizeof(clf_ue_audio_msgs::msg::ReturnCode),
  false,  // has_any_key_member_
  ReturnCode_message_member_array,  // message members
  ReturnCode_init_function,  // function to initialize message memory (memory has to be allocated)
  ReturnCode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReturnCode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReturnCode_message_members,
  get_message_typesupport_handle_function,
  &clf_ue_audio_msgs__msg__ReturnCode__get_type_hash,
  &clf_ue_audio_msgs__msg__ReturnCode__get_type_description,
  &clf_ue_audio_msgs__msg__ReturnCode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clf_ue_audio_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clf_ue_audio_msgs::msg::ReturnCode>()
{
  return &::clf_ue_audio_msgs::msg::rosidl_typesupport_introspection_cpp::ReturnCode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clf_ue_audio_msgs, msg, ReturnCode)() {
  return &::clf_ue_audio_msgs::msg::rosidl_typesupport_introspection_cpp::ReturnCode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
