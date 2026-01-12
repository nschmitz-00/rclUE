// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clf_ue_audio_msgs:action/AudioStreaming.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/action/audio_streaming.hpp"


#ifndef CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__BUILDER_HPP_
#define CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clf_ue_audio_msgs/action/detail/audio_streaming__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_Goal_data
{
public:
  explicit Init_AudioStreaming_Goal_data(::clf_ue_audio_msgs::action::AudioStreaming_Goal & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_Goal data(::clf_ue_audio_msgs::action::AudioStreaming_Goal::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_Goal msg_;
};

class Init_AudioStreaming_Goal_info
{
public:
  Init_AudioStreaming_Goal_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_Goal_data info(::clf_ue_audio_msgs::action::AudioStreaming_Goal::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AudioStreaming_Goal_data(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_Goal>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_Goal_info();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_Result_return_code
{
public:
  Init_AudioStreaming_Result_return_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_Result return_code(::clf_ue_audio_msgs::action::AudioStreaming_Result::_return_code_type arg)
  {
    msg_.return_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_Result>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_Result_return_code();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_Feedback_status
{
public:
  Init_AudioStreaming_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_Feedback status(::clf_ue_audio_msgs::action::AudioStreaming_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_Feedback>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_Feedback_status();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_SendGoal_Request_goal
{
public:
  explicit Init_AudioStreaming_SendGoal_Request_goal(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request goal(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request msg_;
};

class Init_AudioStreaming_SendGoal_Request_goal_id
{
public:
  Init_AudioStreaming_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_SendGoal_Request_goal goal_id(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AudioStreaming_SendGoal_Request_goal(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Request>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_SendGoal_Request_goal_id();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_SendGoal_Response_stamp
{
public:
  explicit Init_AudioStreaming_SendGoal_Response_stamp(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response stamp(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response msg_;
};

class Init_AudioStreaming_SendGoal_Response_accepted
{
public:
  Init_AudioStreaming_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_SendGoal_Response_stamp accepted(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AudioStreaming_SendGoal_Response_stamp(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Response>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_SendGoal_Response_accepted();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_SendGoal_Event_response
{
public:
  explicit Init_AudioStreaming_SendGoal_Event_response(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event response(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event msg_;
};

class Init_AudioStreaming_SendGoal_Event_request
{
public:
  explicit Init_AudioStreaming_SendGoal_Event_request(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_AudioStreaming_SendGoal_Event_response request(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AudioStreaming_SendGoal_Event_response(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event msg_;
};

class Init_AudioStreaming_SendGoal_Event_info
{
public:
  Init_AudioStreaming_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_SendGoal_Event_request info(::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AudioStreaming_SendGoal_Event_request(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_SendGoal_Event>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_SendGoal_Event_info();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_GetResult_Request_goal_id
{
public:
  Init_AudioStreaming_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Request goal_id(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Request>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_GetResult_Request_goal_id();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_GetResult_Response_result
{
public:
  explicit Init_AudioStreaming_GetResult_Response_result(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response result(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response msg_;
};

class Init_AudioStreaming_GetResult_Response_status
{
public:
  Init_AudioStreaming_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_GetResult_Response_result status(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AudioStreaming_GetResult_Response_result(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Response>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_GetResult_Response_status();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_GetResult_Event_response
{
public:
  explicit Init_AudioStreaming_GetResult_Event_response(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event response(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event msg_;
};

class Init_AudioStreaming_GetResult_Event_request
{
public:
  explicit Init_AudioStreaming_GetResult_Event_request(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_AudioStreaming_GetResult_Event_response request(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AudioStreaming_GetResult_Event_response(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event msg_;
};

class Init_AudioStreaming_GetResult_Event_info
{
public:
  Init_AudioStreaming_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_GetResult_Event_request info(::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AudioStreaming_GetResult_Event_request(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_GetResult_Event>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_GetResult_Event_info();
}

}  // namespace clf_ue_audio_msgs


namespace clf_ue_audio_msgs
{

namespace action
{

namespace builder
{

class Init_AudioStreaming_FeedbackMessage_feedback
{
public:
  explicit Init_AudioStreaming_FeedbackMessage_feedback(::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage feedback(::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage msg_;
};

class Init_AudioStreaming_FeedbackMessage_goal_id
{
public:
  Init_AudioStreaming_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStreaming_FeedbackMessage_feedback goal_id(::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AudioStreaming_FeedbackMessage_feedback(msg_);
  }

private:
  ::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clf_ue_audio_msgs::action::AudioStreaming_FeedbackMessage>()
{
  return clf_ue_audio_msgs::action::builder::Init_AudioStreaming_FeedbackMessage_goal_id();
}

}  // namespace clf_ue_audio_msgs

#endif  // CLF_UE_AUDIO_MSGS__ACTION__DETAIL__AUDIO_STREAMING__BUILDER_HPP_
