// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SrvDepthPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/srv_depth_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SrvDepthPosition_Request_target
{
public:
  Init_SrvDepthPosition_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SrvDepthPosition_Request target(::custom_interfaces::srv::SrvDepthPosition_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SrvDepthPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SrvDepthPosition_Request>()
{
  return custom_interfaces::srv::builder::Init_SrvDepthPosition_Request_target();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SrvDepthPosition_Response_depth_position
{
public:
  Init_SrvDepthPosition_Response_depth_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SrvDepthPosition_Response depth_position(::custom_interfaces::srv::SrvDepthPosition_Response::_depth_position_type arg)
  {
    msg_.depth_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SrvDepthPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SrvDepthPosition_Response>()
{
  return custom_interfaces::srv::builder::Init_SrvDepthPosition_Response_depth_position();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__BUILDER_HPP_
