// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ImgLoad.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/img_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ImgLoad_Request>()
{
  return ::custom_interfaces::srv::ImgLoad_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImgLoad_Response_img
{
public:
  Init_ImgLoad_Response_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ImgLoad_Response img(::custom_interfaces::srv::ImgLoad_Response::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ImgLoad_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ImgLoad_Response>()
{
  return custom_interfaces::srv::builder::Init_ImgLoad_Response_img();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__BUILDER_HPP_
