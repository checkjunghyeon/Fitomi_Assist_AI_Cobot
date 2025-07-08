// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/SendImg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/send_img__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SendImg & msg,
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
  const SendImg & msg,
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

inline std::string to_yaml(const SendImg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::SendImg & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::SendImg & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::SendImg>()
{
  return "custom_interfaces::msg::SendImg";
}

template<>
inline const char * name<custom_interfaces::msg::SendImg>()
{
  return "custom_interfaces/msg/SendImg";
}

template<>
struct has_fixed_size<custom_interfaces::msg::SendImg>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custom_interfaces::msg::SendImg>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custom_interfaces::msg::SendImg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__TRAITS_HPP_
