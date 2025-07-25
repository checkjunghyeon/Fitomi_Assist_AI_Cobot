cmake_minimum_required(VERSION 3.8)
project(custom_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# dependencies
find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)
ament_export_dependencies(rosidl_default_runtime)

# Interface files

set(msg_files
  "msg/SendImg.msg"
  "msg/InferenceResult.msg"
  "msg/Yolov8Inference.msg"
)

set(srv_files
  "srv/ImgLoad.srv"
  "srv/LogMessage.srv"
  "srv/TaskCommand.srv"
  "srv/SrvDepthPosition.srv"
)


set(action_files
  "action/TaskCommand.action"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES builtin_interfaces
  DEPENDENCIES builtin_interfaces sensor_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

