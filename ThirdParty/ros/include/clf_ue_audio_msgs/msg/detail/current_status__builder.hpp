// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/current_status.hpp"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__BUILDER_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clf_ue_audio_msgs/msg/detail/current_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clf_ue_audio_msgs
{

namespace msg
{

namespace builder
{

class Init_CurrentStatus_code
{
public:
  Init_CurrentStatus_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_ue_audio_msgs::msg::CurrentStatus code(::clf_ue_audio_msgs::msg::CurrentStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::msg::CurrentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::msg::CurrentStatus>()
{
  return clf_ue_audio_msgs::msg::builder::Init_CurrentStatus_code();
}

}  // namespace clf_ue_audio_msgs

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__BUILDER_HPP_
