// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SendImg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/send_img__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SendImg_img
{
public:
  Init_SendImg_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::SendImg img(::custom_interfaces::msg::SendImg::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SendImg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SendImg>()
{
  return custom_interfaces::msg::builder::Init_SendImg_img();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__BUILDER_HPP_
