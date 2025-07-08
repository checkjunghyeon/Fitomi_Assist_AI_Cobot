// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_interfaces:action/TaskCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/action/detail/task_command__struct.h"
#include "custom_interfaces/action/detail/task_command__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_Goal_type_support_ids_t;

static const _TaskCommand_Goal_type_support_ids_t _TaskCommand_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_Goal_type_support_symbol_names_t _TaskCommand_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_Goal)),
  }
};

typedef struct _TaskCommand_Goal_type_support_data_t
{
  void * data[2];
} _TaskCommand_Goal_type_support_data_t;

static _TaskCommand_Goal_type_support_data_t _TaskCommand_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_Goal_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_Goal)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_Result_type_support_ids_t;

static const _TaskCommand_Result_type_support_ids_t _TaskCommand_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_Result_type_support_symbol_names_t _TaskCommand_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_Result)),
  }
};

typedef struct _TaskCommand_Result_type_support_data_t
{
  void * data[2];
} _TaskCommand_Result_type_support_data_t;

static _TaskCommand_Result_type_support_data_t _TaskCommand_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_Result_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_Result)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_Feedback_type_support_ids_t;

static const _TaskCommand_Feedback_type_support_ids_t _TaskCommand_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_Feedback_type_support_symbol_names_t _TaskCommand_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_Feedback)),
  }
};

typedef struct _TaskCommand_Feedback_type_support_data_t
{
  void * data[2];
} _TaskCommand_Feedback_type_support_data_t;

static _TaskCommand_Feedback_type_support_data_t _TaskCommand_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_Feedback_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_Feedback)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_SendGoal_Request_type_support_ids_t;

static const _TaskCommand_SendGoal_Request_type_support_ids_t _TaskCommand_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_SendGoal_Request_type_support_symbol_names_t _TaskCommand_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_SendGoal_Request)),
  }
};

typedef struct _TaskCommand_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TaskCommand_SendGoal_Request_type_support_data_t;

static _TaskCommand_SendGoal_Request_type_support_data_t _TaskCommand_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_SendGoal_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_SendGoal_Request)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_SendGoal_Response_type_support_ids_t;

static const _TaskCommand_SendGoal_Response_type_support_ids_t _TaskCommand_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_SendGoal_Response_type_support_symbol_names_t _TaskCommand_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_SendGoal_Response)),
  }
};

typedef struct _TaskCommand_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TaskCommand_SendGoal_Response_type_support_data_t;

static _TaskCommand_SendGoal_Response_type_support_data_t _TaskCommand_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_SendGoal_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_SendGoal_Response)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_SendGoal_type_support_ids_t;

static const _TaskCommand_SendGoal_type_support_ids_t _TaskCommand_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_SendGoal_type_support_symbol_names_t _TaskCommand_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_SendGoal)),
  }
};

typedef struct _TaskCommand_SendGoal_type_support_data_t
{
  void * data[2];
} _TaskCommand_SendGoal_type_support_data_t;

static _TaskCommand_SendGoal_type_support_data_t _TaskCommand_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_SendGoal_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TaskCommand_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_SendGoal)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_GetResult_Request_type_support_ids_t;

static const _TaskCommand_GetResult_Request_type_support_ids_t _TaskCommand_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_GetResult_Request_type_support_symbol_names_t _TaskCommand_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_GetResult_Request)),
  }
};

typedef struct _TaskCommand_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TaskCommand_GetResult_Request_type_support_data_t;

static _TaskCommand_GetResult_Request_type_support_data_t _TaskCommand_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_GetResult_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_GetResult_Request)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_GetResult_Response_type_support_ids_t;

static const _TaskCommand_GetResult_Response_type_support_ids_t _TaskCommand_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_GetResult_Response_type_support_symbol_names_t _TaskCommand_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_GetResult_Response)),
  }
};

typedef struct _TaskCommand_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TaskCommand_GetResult_Response_type_support_data_t;

static _TaskCommand_GetResult_Response_type_support_data_t _TaskCommand_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_GetResult_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_GetResult_Response)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_GetResult_type_support_ids_t;

static const _TaskCommand_GetResult_type_support_ids_t _TaskCommand_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_GetResult_type_support_symbol_names_t _TaskCommand_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_GetResult)),
  }
};

typedef struct _TaskCommand_GetResult_type_support_data_t
{
  void * data[2];
} _TaskCommand_GetResult_type_support_data_t;

static _TaskCommand_GetResult_type_support_data_t _TaskCommand_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_GetResult_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TaskCommand_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_GetResult)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__struct.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TaskCommand_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskCommand_FeedbackMessage_type_support_ids_t;

static const _TaskCommand_FeedbackMessage_type_support_ids_t _TaskCommand_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskCommand_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskCommand_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskCommand_FeedbackMessage_type_support_symbol_names_t _TaskCommand_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, TaskCommand_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, TaskCommand_FeedbackMessage)),
  }
};

typedef struct _TaskCommand_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TaskCommand_FeedbackMessage_type_support_data_t;

static _TaskCommand_FeedbackMessage_type_support_data_t _TaskCommand_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskCommand_FeedbackMessage_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_TaskCommand_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TaskCommand_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TaskCommand_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskCommand_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskCommand_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, TaskCommand_FeedbackMessage)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::TaskCommand_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "custom_interfaces/action/task_command.h"
// already included above
// #include "custom_interfaces/action/detail/task_command__type_support.h"

static rosidl_action_type_support_t _custom_interfaces__action__TaskCommand__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, custom_interfaces, action, TaskCommand)()
{
  // Thread-safe by always writing the same values to the static struct
  _custom_interfaces__action__TaskCommand__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, TaskCommand_SendGoal)();
  _custom_interfaces__action__TaskCommand__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, TaskCommand_GetResult)();
  _custom_interfaces__action__TaskCommand__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _custom_interfaces__action__TaskCommand__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, TaskCommand_FeedbackMessage)();
  _custom_interfaces__action__TaskCommand__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_custom_interfaces__action__TaskCommand__typesupport_c;
}

#ifdef __cplusplus
}
#endif
