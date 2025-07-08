// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SendImg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/SendImg in the package custom_interfaces.
typedef struct custom_interfaces__msg__SendImg
{
  sensor_msgs__msg__Image img;
} custom_interfaces__msg__SendImg;

// Struct for a sequence of custom_interfaces__msg__SendImg.
typedef struct custom_interfaces__msg__SendImg__Sequence
{
  custom_interfaces__msg__SendImg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SendImg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_IMG__STRUCT_H_
