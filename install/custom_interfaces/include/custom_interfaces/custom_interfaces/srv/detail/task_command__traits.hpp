// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/TaskCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/task_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TaskCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TaskCommand_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TaskCommand_Request>()
{
  return "custom_interfaces::srv::TaskCommand_Request";
}

template<>
inline const char * name<custom_interfaces::srv::TaskCommand_Request>()
{
  return "custom_interfaces/srv/TaskCommand_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TaskCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TaskCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::TaskCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << ", ";
  }

  // member: message
  {
    if (msg.message.size() == 0) {
      out << "message: []";
    } else {
      out << "message: [";
      size_t pending_items = msg.message.size();
      for (auto item : msg.message) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.message.size() == 0) {
      out << "message: []\n";
    } else {
      out << "message:\n";
      for (auto item : msg.message) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TaskCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TaskCommand_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TaskCommand_Response>()
{
  return "custom_interfaces::srv::TaskCommand_Response";
}

template<>
inline const char * name<custom_interfaces::srv::TaskCommand_Response>()
{
  return "custom_interfaces/srv/TaskCommand_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TaskCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TaskCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::TaskCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::TaskCommand>()
{
  return "custom_interfaces::srv::TaskCommand";
}

template<>
inline const char * name<custom_interfaces::srv::TaskCommand>()
{
  return "custom_interfaces/srv/TaskCommand";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TaskCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::TaskCommand_Request>::value &&
    has_fixed_size<custom_interfaces::srv::TaskCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::TaskCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::TaskCommand_Request>::value &&
    has_bounded_size<custom_interfaces::srv::TaskCommand_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::TaskCommand>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::TaskCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::TaskCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TASK_COMMAND__TRAITS_HPP_
