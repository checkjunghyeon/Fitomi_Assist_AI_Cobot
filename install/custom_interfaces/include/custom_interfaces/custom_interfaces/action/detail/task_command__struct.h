// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:action/TaskCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__TASK_COMMAND__STRUCT_H_
#define CUSTOM_INTERFACES__ACTION__DETAIL__TASK_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'keyword_type'
// Member 'keyword'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_Goal
{
  /// 냉장고 or 옷장
  rosidl_runtime_c__String keyword_type;
  /// ex) [],, ['반팔', '반바지'], ...
  rosidl_runtime_c__String__Sequence keyword;
} custom_interfaces__action__TaskCommand_Goal;

// Struct for a sequence of custom_interfaces__action__TaskCommand_Goal.
typedef struct custom_interfaces__action__TaskCommand_Goal__Sequence
{
  custom_interfaces__action__TaskCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'scan_list'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_Result
{
  /// 0: fail, 1: success
  bool success;
  /// ex) 냉장고 스캔된 항목
  rosidl_runtime_c__String__Sequence scan_list;
} custom_interfaces__action__TaskCommand_Result;

// Struct for a sequence of custom_interfaces__action__TaskCommand_Result.
typedef struct custom_interfaces__action__TaskCommand_Result__Sequence
{
  custom_interfaces__action__TaskCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_Feedback
{
  /// 동작에 대한 설명
  rosidl_runtime_c__String message;
} custom_interfaces__action__TaskCommand_Feedback;

// Struct for a sequence of custom_interfaces__action__TaskCommand_Feedback.
typedef struct custom_interfaces__action__TaskCommand_Feedback__Sequence
{
  custom_interfaces__action__TaskCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_interfaces/action/detail/task_command__struct.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__TaskCommand_Goal goal;
} custom_interfaces__action__TaskCommand_SendGoal_Request;

// Struct for a sequence of custom_interfaces__action__TaskCommand_SendGoal_Request.
typedef struct custom_interfaces__action__TaskCommand_SendGoal_Request__Sequence
{
  custom_interfaces__action__TaskCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_interfaces__action__TaskCommand_SendGoal_Response;

// Struct for a sequence of custom_interfaces__action__TaskCommand_SendGoal_Response.
typedef struct custom_interfaces__action__TaskCommand_SendGoal_Response__Sequence
{
  custom_interfaces__action__TaskCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_interfaces__action__TaskCommand_GetResult_Request;

// Struct for a sequence of custom_interfaces__action__TaskCommand_GetResult_Request.
typedef struct custom_interfaces__action__TaskCommand_GetResult_Request__Sequence
{
  custom_interfaces__action__TaskCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_GetResult_Response
{
  int8_t status;
  custom_interfaces__action__TaskCommand_Result result;
} custom_interfaces__action__TaskCommand_GetResult_Response;

// Struct for a sequence of custom_interfaces__action__TaskCommand_GetResult_Response.
typedef struct custom_interfaces__action__TaskCommand_GetResult_Response__Sequence
{
  custom_interfaces__action__TaskCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"

/// Struct defined in action/TaskCommand in the package custom_interfaces.
typedef struct custom_interfaces__action__TaskCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__TaskCommand_Feedback feedback;
} custom_interfaces__action__TaskCommand_FeedbackMessage;

// Struct for a sequence of custom_interfaces__action__TaskCommand_FeedbackMessage.
typedef struct custom_interfaces__action__TaskCommand_FeedbackMessage__Sequence
{
  custom_interfaces__action__TaskCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__TaskCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__TASK_COMMAND__STRUCT_H_
