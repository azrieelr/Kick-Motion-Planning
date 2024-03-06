// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tachimawari_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetJoints_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tachimawari_interfaces::srv::SetJoints_Request(_init);
}

void SetJoints_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tachimawari_interfaces::srv::SetJoints_Request *>(message_memory);
  typed_message->~SetJoints_Request();
}

size_t size_function__SetJoints_Request__joints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tachimawari_interfaces::msg::Joint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetJoints_Request__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tachimawari_interfaces::msg::Joint> *>(untyped_member);
  return &member[index];
}

void * get_function__SetJoints_Request__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tachimawari_interfaces::msg::Joint> *>(untyped_member);
  return &member[index];
}

void resize_function__SetJoints_Request__joints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tachimawari_interfaces::msg::Joint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetJoints_Request_message_member_array[1] = {
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tachimawari_interfaces::msg::Joint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces::srv::SetJoints_Request, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetJoints_Request__joints,  // size() function pointer
    get_const_function__SetJoints_Request__joints,  // get_const(index) function pointer
    get_function__SetJoints_Request__joints,  // get(index) function pointer
    resize_function__SetJoints_Request__joints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetJoints_Request_message_members = {
  "tachimawari_interfaces::srv",  // message namespace
  "SetJoints_Request",  // message name
  1,  // number of fields
  sizeof(tachimawari_interfaces::srv::SetJoints_Request),
  SetJoints_Request_message_member_array,  // message members
  SetJoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetJoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetJoints_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetJoints_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tachimawari_interfaces::srv::SetJoints_Request>()
{
  return &::tachimawari_interfaces::srv::rosidl_typesupport_introspection_cpp::SetJoints_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tachimawari_interfaces, srv, SetJoints_Request)() {
  return &::tachimawari_interfaces::srv::rosidl_typesupport_introspection_cpp::SetJoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tachimawari_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetJoints_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tachimawari_interfaces::srv::SetJoints_Response(_init);
}

void SetJoints_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tachimawari_interfaces::srv::SetJoints_Response *>(message_memory);
  typed_message->~SetJoints_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetJoints_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces::srv::SetJoints_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetJoints_Response_message_members = {
  "tachimawari_interfaces::srv",  // message namespace
  "SetJoints_Response",  // message name
  1,  // number of fields
  sizeof(tachimawari_interfaces::srv::SetJoints_Response),
  SetJoints_Response_message_member_array,  // message members
  SetJoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetJoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetJoints_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetJoints_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tachimawari_interfaces::srv::SetJoints_Response>()
{
  return &::tachimawari_interfaces::srv::rosidl_typesupport_introspection_cpp::SetJoints_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tachimawari_interfaces, srv, SetJoints_Response)() {
  return &::tachimawari_interfaces::srv::rosidl_typesupport_introspection_cpp::SetJoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tachimawari_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetJoints_service_members = {
  "tachimawari_interfaces::srv",  // service namespace
  "SetJoints",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tachimawari_interfaces::srv::SetJoints>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetJoints_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetJoints_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tachimawari_interfaces::srv::SetJoints>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tachimawari_interfaces::srv::rosidl_typesupport_introspection_cpp::SetJoints_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tachimawari_interfaces::srv::SetJoints_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tachimawari_interfaces::srv::SetJoints_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tachimawari_interfaces, srv, SetJoints)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tachimawari_interfaces::srv::SetJoints>();
}

#ifdef __cplusplus
}
#endif
