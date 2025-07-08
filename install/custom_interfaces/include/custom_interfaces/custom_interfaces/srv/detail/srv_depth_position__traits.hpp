// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/SrvDepthPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/srv_depth_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvDepthPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvDepthPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvDepthPosition_Request & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::SrvDepthPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::SrvDepthPosition_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::SrvDepthPosition_Request>()
{
  return "custom_interfaces::srv::SrvDepthPosition_Request";
}

template<>
inline const char * name<custom_interfaces::srv::SrvDepthPosition_Request>()
{
  return "custom_interfaces/srv/SrvDepthPosition_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SrvDepthPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SrvDepthPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::SrvDepthPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvDepthPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: depth_position
  {
    if (msg.depth_position.size() == 0) {
      out << "depth_position: []";
    } else {
      out << "depth_position: [";
      size_t pending_items = msg.depth_position.size();
      for (auto item : msg.depth_position) {
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
  const SrvDepthPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: depth_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depth_position.size() == 0) {
      out << "depth_position: []\n";
    } else {
      out << "depth_position:\n";
      for (auto item : msg.depth_position) {
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

inline std::string to_yaml(const SrvDepthPosition_Response & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::SrvDepthPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::SrvDepthPosition_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::SrvDepthPosition_Response>()
{
  return "custom_interfaces::srv::SrvDepthPosition_Response";
}

template<>
inline const char * name<custom_interfaces::srv::SrvDepthPosition_Response>()
{
  return "custom_interfaces/srv/SrvDepthPosition_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SrvDepthPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SrvDepthPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::SrvDepthPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SrvDepthPosition>()
{
  return "custom_interfaces::srv::SrvDepthPosition";
}

template<>
inline const char * name<custom_interfaces::srv::SrvDepthPosition>()
{
  return "custom_interfaces/srv/SrvDepthPosition";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SrvDepthPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::SrvDepthPosition_Request>::value &&
    has_fixed_size<custom_interfaces::srv::SrvDepthPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::SrvDepthPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::SrvDepthPosition_Request>::value &&
    has_bounded_size<custom_interfaces::srv::SrvDepthPosition_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::SrvDepthPosition>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::SrvDepthPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::SrvDepthPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SRV_DEPTH_POSITION__TRAITS_HPP_
