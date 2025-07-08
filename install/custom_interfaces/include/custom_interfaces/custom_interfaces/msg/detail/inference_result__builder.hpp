// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/inference_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_InferenceResult_confidence
{
public:
  explicit Init_InferenceResult_confidence(::custom_interfaces::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::InferenceResult confidence(::custom_interfaces::msg::InferenceResult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::InferenceResult msg_;
};

class Init_InferenceResult_coordinates
{
public:
  explicit Init_InferenceResult_coordinates(::custom_interfaces::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_confidence coordinates(::custom_interfaces::msg::InferenceResult::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_InferenceResult_confidence(msg_);
  }

private:
  ::custom_interfaces::msg::InferenceResult msg_;
};

class Init_InferenceResult_class_name
{
public:
  Init_InferenceResult_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InferenceResult_coordinates class_name(::custom_interfaces::msg::InferenceResult::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_InferenceResult_coordinates(msg_);
  }

private:
  ::custom_interfaces::msg::InferenceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::InferenceResult>()
{
  return custom_interfaces::msg::builder::Init_InferenceResult_class_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
