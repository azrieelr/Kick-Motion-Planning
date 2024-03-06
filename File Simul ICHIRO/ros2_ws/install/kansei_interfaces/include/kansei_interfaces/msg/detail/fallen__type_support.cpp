// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kansei_interfaces/msg/detail/fallen__struct.hpp"
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

void Fallen_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kansei_interfaces::msg::Fallen(_init);
}

void Fallen_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kansei_interfaces::msg::Fallen *>(message_memory);
  typed_message->~Fallen();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Fallen_message_member_array[1] = {
  {
    "fallen_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kansei_interfaces::msg::Fallen, fallen_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Fallen_message_members = {
  "kansei_interfaces::msg",  // message namespace
  "Fallen",  // message name
  1,  // number of fields
  sizeof(kansei_interfaces::msg::Fallen),
  Fallen_message_member_array,  // message members
  Fallen_init_function,  // function to initialize message memory (memory has to be allocated)
  Fallen_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Fallen_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Fallen_message_members,
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
get_message_type_support_handle<kansei_interfaces::msg::Fallen>()
{
  return &::kansei_interfaces::msg::rosidl_typesupport_introspection_cpp::Fallen_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kansei_interfaces, msg, Fallen)() {
  return &::kansei_interfaces::msg::rosidl_typesupport_introspection_cpp::Fallen_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
