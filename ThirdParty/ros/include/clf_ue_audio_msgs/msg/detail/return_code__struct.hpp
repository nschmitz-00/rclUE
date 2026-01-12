// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clf_ue_audio_msgs:msg/ReturnCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clf_ue_audio_msgs/msg/return_code.hpp"


#ifndef CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_HPP_
#define CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clf_ue_audio_msgs__msg__ReturnCode __attribute__((deprecated))
#else
# define DEPRECATED__clf_ue_audio_msgs__msg__ReturnCode __declspec(deprecated)
#endif

namespace clf_ue_audio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReturnCode_
{
  using Type = ReturnCode_<ContainerAllocator>;

  explicit ReturnCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  explicit ReturnCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t SUCCESS =
    0;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr int8_t ERROR =
    1;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clf_ue_audio_msgs__msg__ReturnCode
    std::shared_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clf_ue_audio_msgs__msg__ReturnCode
    std::shared_ptr<clf_ue_audio_msgs::msg::ReturnCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnCode_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnCode_

// alias to use template instance with default allocator
using ReturnCode =
  clf_ue_audio_msgs::msg::ReturnCode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ReturnCode_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ReturnCode_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace clf_ue_audio_msgs

#endif  // CLF_UE_AUDIO_MSGS__MSG__DETAIL__RETURN_CODE__STRUCT_HPP_
