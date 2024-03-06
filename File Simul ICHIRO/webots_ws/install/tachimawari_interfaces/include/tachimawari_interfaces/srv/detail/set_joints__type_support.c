// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tachimawari_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
#include "tachimawari_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tachimawari_interfaces/srv/detail/set_joints__functions.h"
#include "tachimawari_interfaces/srv/detail/set_joints__struct.h"


// Include directives for member types
// Member `joints`
#include "tachimawari_interfaces/msg/joint.h"
// Member `joints`
#include "tachimawari_interfaces/msg/detail/joint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tachimawari_interfaces__srv__SetJoints_Request__init(message_memory);
}

void SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_fini_function(void * message_memory)
{
  tachimawari_interfaces__srv__SetJoints_Request__fini(message_memory);
}

size_t SetJoints_Request__rosidl_typesupport_introspection_c__size_function__Joint__joints(
  const void * untyped_member)
{
  const tachimawari_interfaces__msg__Joint__Sequence * member =
    (const tachimawari_interfaces__msg__Joint__Sequence *)(untyped_member);
  return member->size;
}

const void * SetJoints_Request__rosidl_typesupport_introspection_c__get_const_function__Joint__joints(
  const void * untyped_member, size_t index)
{
  const tachimawari_interfaces__msg__Joint__Sequence * member =
    (const tachimawari_interfaces__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetJoints_Request__rosidl_typesupport_introspection_c__get_function__Joint__joints(
  void * untyped_member, size_t index)
{
  tachimawari_interfaces__msg__Joint__Sequence * member =
    (tachimawari_interfaces__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetJoints_Request__rosidl_typesupport_introspection_c__resize_function__Joint__joints(
  void * untyped_member, size_t size)
{
  tachimawari_interfaces__msg__Joint__Sequence * member =
    (tachimawari_interfaces__msg__Joint__Sequence *)(untyped_member);
  tachimawari_interfaces__msg__Joint__Sequence__fini(member);
  return tachimawari_interfaces__msg__Joint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_member_array[1] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces__srv__SetJoints_Request, joints),  // bytes offset in struct
    NULL,  // default value
    SetJoints_Request__rosidl_typesupport_introspection_c__size_function__Joint__joints,  // size() function pointer
    SetJoints_Request__rosidl_typesupport_introspection_c__get_const_function__Joint__joints,  // get_const(index) function pointer
    SetJoints_Request__rosidl_typesupport_introspection_c__get_function__Joint__joints,  // get(index) function pointer
    SetJoints_Request__rosidl_typesupport_introspection_c__resize_function__Joint__joints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_members = {
  "tachimawari_interfaces__srv",  // message namespace
  "SetJoints_Request",  // message name
  1,  // number of fields
  sizeof(tachimawari_interfaces__srv__SetJoints_Request),
  SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_member_array,  // message members
  SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle = {
  0,
  &SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tachimawari_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Request)() {
  SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, msg, Joint)();
  if (!SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle.typesupport_identifier) {
    SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tachimawari_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__functions.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tachimawari_interfaces__srv__SetJoints_Response__init(message_memory);
}

void SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_fini_function(void * message_memory)
{
  tachimawari_interfaces__srv__SetJoints_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces__srv__SetJoints_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_members = {
  "tachimawari_interfaces__srv",  // message namespace
  "SetJoints_Response",  // message name
  1,  // number of fields
  sizeof(tachimawari_interfaces__srv__SetJoints_Response),
  SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_member_array,  // message members
  SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle = {
  0,
  &SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tachimawari_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Response)() {
  if (!SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle.typesupport_identifier) {
    SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tachimawari_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_members = {
  "tachimawari_interfaces__srv",  // service namespace
  "SetJoints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle,
  NULL  // response message
  // tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle
};

static rosidl_service_type_support_t tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle = {
  0,
  &tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tachimawari_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints)() {
  if (!tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.typesupport_identifier) {
    tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, srv, SetJoints_Response)()->data;
  }

  return &tachimawari_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle;
}
