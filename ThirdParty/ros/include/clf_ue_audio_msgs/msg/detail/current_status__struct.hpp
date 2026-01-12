// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/current_status.hpp"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clf_ue_audio_msgs__msg__CurrentStatus __attribute__((deprecated))
#else
# define DEPRECATED__clf_ue_audio_msgs__msg__CurrentStatus __declspec(deprecated)
#endif

namespace clf_ue_audio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentStatus_
{
  using Type = CurrentStatus_<ContainerAllocator>;

  explicit CurrentStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  explicit CurrentStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  // field types and members
  using _code_type =
    int8_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const int8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TALKING =
    0;

  // pointer types
  using RawPtr =
    clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clf_ue_audio_msgs__msg__CurrentStatus
    std::shared_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clf_ue_audio_msgs__msg__CurrentStatus
    std::shared_ptr<clf_ue_audio_msgs::msg::CurrentStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentStatus_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentStatus_

// alias to use template instance with default allocator
using CurrentStatus =
  clf_ue_audio_msgs::msg::CurrentStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CurrentStatus_<ContainerAllocator>::TALKING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clf_ue_audio_msgs

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__CURRENT_STATUS__STRUCT_HPP_
