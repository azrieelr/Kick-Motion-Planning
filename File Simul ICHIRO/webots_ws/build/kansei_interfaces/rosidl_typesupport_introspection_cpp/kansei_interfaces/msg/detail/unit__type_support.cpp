// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kansei_interfaces/msg/detail/unit__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kansei_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Unit_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kansei_interfaces::msg::Unit(_init);
}

void Unit_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kansei_interfaces::msg::Unit *>(message_memory);
  typed_message->~Unit();
}

size_t size_function__Unit__gyro(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Unit__gyro(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Unit__gyro(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Unit__accelero(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Unit__accelero(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Unit__accelero(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Unit_message_member_array[2] = {
  {
    "gyro",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kansei_interfaces::msg::Unit, gyro),  // bytes offset in struct
    nullptr,  // default value
    size_function__Unit__gyro,  // size() function pointer
    get_const_function__Unit__gyro,  // get_const(index) function pointer
    get_function__Unit__gyro,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accelero",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kansei_interfaces::msg::Unit, accelero),  // bytes offset in struct
    nullptr,  // default value
    size_function__Unit__accelero,  // size() function pointer
    get_const_function__Unit__accelero,  // get_const(index) function pointer
    get_function__Unit__accelero,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Unit_message_members = {
  "kansei_interfaces::msg",  // message namespace
  "Unit",  // message name
  2,  // number of fields
  sizeof(kansei_interfaces::msg::Unit),
  Unit_message_member_array,  // message members
  Unit_init_function,  // function to initialize message memory (memory has to be allocated)
  Unit_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Unit_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Unit_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kansei_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kansei_interfaces::msg::Unit>()
{
  return &::kansei_interfaces::msg::rosidl_typesupport_introspection_cpp::Unit_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kansei_interfaces, msg, Unit)() {
  return &::kansei_interfaces::msg::rosidl_typesupport_introspection_cpp::Unit_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
