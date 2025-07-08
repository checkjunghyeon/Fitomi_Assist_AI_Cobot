// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/SendImg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__SendImg __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__SendImg __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SendImg_
{
  using Type = SendImg_<ContainerAllocator>;

  explicit SendImg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit SendImg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::SendImg_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::SendImg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendImg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendImg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__SendImg
    std::shared_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__SendImg
    std::shared_ptr<custom_interfaces::msg::SendImg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendImg_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendImg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendImg_

// alias to use template instance with default allocator
using SendImg =
  custom_interfaces::msg::SendImg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_HPP_
