// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clf_audio_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_audio_msgs/msg/audio_data.hpp"


#ifndef CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
#define CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clf_audio_msgs/msg/detail/audio_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clf_audio_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioData_data
{
public:
  Init_AudioData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_audio_msgs::msg::AudioData data(::clf_audio_msgs::msg::AudioData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_audio_msgs::msg::AudioData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_audio_msgs::msg::AudioData>()
{
  return clf_audio_msgs::msg::builder::Init_AudioData_data();
}

}  // namespace clf_audio_msgs

#endif  // CLF_AUDIO_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
