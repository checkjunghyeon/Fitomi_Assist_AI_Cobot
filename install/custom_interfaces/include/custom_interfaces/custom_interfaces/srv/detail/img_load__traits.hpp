// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/ImgLoad.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/img_load__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImgLoad_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImgLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImgLoad_Request & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::ImgLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::ImgLoad_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::ImgLoad_Request>()
{
  return "custom_interfaces::srv::ImgLoad_Request";
}

template<>
inline const char * name<custom_interfaces::srv::ImgLoad_Request>()
{
  return "custom_interfaces/srv/ImgLoad_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImgLoad_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ImgLoad_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ImgLoad_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImgLoad_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImgLoad_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImgLoad_Response & msg, bool use_flow_style = false)
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
  const custom_interfaces::srv::ImgLoad_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::ImgLoad_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::ImgLoad_Response>()
{
  return "custom_interfaces::srv::ImgLoad_Response";
}

template<>
inline const char * name<custom_interfaces::srv::ImgLoad_Response>()
{
  return "custom_interfaces/srv/ImgLoad_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImgLoad_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ImgLoad_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custom_interfaces::srv::ImgLoad_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ImgLoad>()
{
  return "custom_interfaces::srv::ImgLoad";
}

template<>
inline const char * name<custom_interfaces::srv::ImgLoad>()
{
  return "custom_interfaces/srv/ImgLoad";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImgLoad>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::ImgLoad_Request>::value &&
    has_fixed_size<custom_interfaces::srv::ImgLoad_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::ImgLoad>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::ImgLoad_Request>::value &&
    has_bounded_size<custom_interfaces::srv::ImgLoad_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::ImgLoad>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::ImgLoad_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::ImgLoad_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__TRAITS_HPP_
