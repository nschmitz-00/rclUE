// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/return_code.hpp"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__BUILDER_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clf_ue_audio_msgs/msg/detail/return_code__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clf_ue_audio_msgs
{

namespace msg
{

namespace builder
{

class Init_ReturnCode_code
{
public:
  Init_ReturnCode_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_ue_audio_msgs::msg::ReturnCode code(::clf_ue_audio_msgs::msg::ReturnCode::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::msg::ReturnCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::msg::ReturnCode>()
{
  return clf_ue_audio_msgs::msg::builder::Init_ReturnCode_code();
}

}  // namespace clf_ue_audio_msgs

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__BUILDER_HPP_
