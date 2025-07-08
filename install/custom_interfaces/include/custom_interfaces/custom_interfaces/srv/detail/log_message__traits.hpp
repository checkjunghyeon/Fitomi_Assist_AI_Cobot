// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/LogMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__LOG_MESSAGE__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__LOG_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/log_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LogMessage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: log
  {
    out << "log: ";
    rosidl_generator_traits::value_to_yaml(msg.log, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: log
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log: ";
    rosidl_generator_traits::value_to_yaml(msg.log, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogMessage_Request & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::LogMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::LogMessage_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::LogMessage_Request>()
{
  return "custom_interfaces::srv::LogMessage_Request";
}

template<>
inline const char * name<custom_interfaces::srv::LogMessage_Request>()
{
  return "custom_interfaces/srv/LogMessage_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::LogMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::LogMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::LogMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LogMessage_Response & msg,
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
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogMessage_Response & msg,
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
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogMessage_Response & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::LogMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::LogMessage_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::LogMessage_Response>()
{
  return "custom_interfaces::srv::LogMessage_Response";
}

template<>
inline const char * name<custom_interfaces::srv::LogMessage_Response>()
{
  return "custom_interfaces/srv/LogMessage_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::LogMessage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::LogMessage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::LogMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::LogMessage>()
{
  return "custom_interfaces::srv::LogMessage";
}

template<>
inline const char * name<custom_interfaces::srv::LogMessage>()
{
  return "custom_interfaces/srv/LogMessage";
}

template<>
struct has_fixed_size<custom_interfaces::srv::LogMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::LogMessage_Request>::value &&
    has_fixed_size<custom_interfaces::srv::LogMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::LogMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::LogMessage_Request>::value &&
    has_bounded_size<custom_interfaces::srv::LogMessage_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::LogMessage>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::LogMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::LogMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__LOG_MESSAGE__TRAITS_HPP_
