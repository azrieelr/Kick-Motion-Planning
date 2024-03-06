// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__FALLEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__FALLEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kansei_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "kansei_interfaces/msg/detail/fallen__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace kansei_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kansei_interfaces
cdr_serialize(
  const kansei_interfaces::msg::Fallen & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kansei_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kansei_interfaces::msg::Fallen & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kansei_interfaces
get_serialized_size(
  const kansei_interfaces::msg::Fallen & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kansei_interfaces
max_serialized_size_Fallen(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kansei_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kansei_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kansei_interfaces, msg, Fallen)();

#ifdef __cplusplus
}
#endif

#endif  // KANSEI_INTERFACES__MSG__DETAIL__FALLEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_