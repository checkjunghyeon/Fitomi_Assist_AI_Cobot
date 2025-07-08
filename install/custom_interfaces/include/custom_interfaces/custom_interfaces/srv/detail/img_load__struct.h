// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/ImgLoad.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ImgLoad in the package custom_interfaces.
typedef struct custom_interfaces__srv__ImgLoad_Request
{
  uint8_t structure_needs_at_least_one_member;
} custom_interfaces__srv__ImgLoad_Request;

// Struct for a sequence of custom_interfaces__srv__ImgLoad_Request.
typedef struct custom_interfaces__srv__ImgLoad_Request__Sequence
{
  custom_interfaces__srv__ImgLoad_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ImgLoad_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/ImgLoad in the package custom_interfaces.
typedef struct custom_interfaces__srv__ImgLoad_Response
{
  sensor_msgs__msg__Image img;
} custom_interfaces__srv__ImgLoad_Response;

// Struct for a sequence of custom_interfaces__srv__ImgLoad_Response.
typedef struct custom_interfaces__srv__ImgLoad_Response__Sequence
{
  custom_interfaces__srv__ImgLoad_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ImgLoad_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMG_LOAD__STRUCT_H_
