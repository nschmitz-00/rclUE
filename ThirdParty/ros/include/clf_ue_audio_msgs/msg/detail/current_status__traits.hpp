// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/current_status.hpp"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__TRAITS_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clf_ue_audio_msgs/msg/detail/current_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clf_ue_audio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace clf_ue_audio_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clf_ue_audio_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clf_ue_audio_msgs::msg::CurrentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  clf_ue_audio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clf_ue_audio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clf_ue_audio_msgs::msg::CurrentStatus & msg)
{
  return clf_ue_audio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clf_ue_audio_msgs::msg::CurrentStatus>()
{
  return "clf_ue_audio_msgs::msg::CurrentStatus";
}

template<>
inline const char * name<clf_ue_audio_msgs::msg::CurrentStatus>()
{
  return "clf_ue_audio_msgs/msg/CurrentStatus";
}

template<>
struct has_fixed_size<clf_ue_audio_msgs::msg::CurrentStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<clf_ue_audio_msgs::msg::CurrentStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<clf_ue_audio_msgs::msg::CurrentStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__TRAITS_HPP_
