// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/TaskCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/task_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskCommand_Request_request
{
public:
  Init_TaskCommand_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::TaskCommand_Request request(::custom_interfaces::srv::TaskCommand_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::TaskCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::TaskCommand_Request>()
{
  return custom_interfaces::srv::builder::Init_TaskCommand_Request_request();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskCommand_Response_message
{
public:
  explicit Init_TaskCommand_Response_message(::custom_interfaces::srv::TaskCommand_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::TaskCommand_Response message(::custom_interfaces::srv::TaskCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::TaskCommand_Response msg_;
};

class Init_TaskCommand_Response_answer
{
public:
  Init_TaskCommand_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCommand_Response_message answer(::custom_interfaces::srv::TaskCommand_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return Init_TaskCommand_Response_message(msg_);
  }

private:
  ::custom_interfaces::srv::TaskCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::TaskCommand_Response>()
{
  return custom_interfaces::srv::builder::Init_TaskCommand_Response_answer();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__BUILDER_HPP_
