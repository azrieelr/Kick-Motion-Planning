// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tachimawari_interfaces/msg/detail/joint__rosidl_typesupport_introspection_c.h"
#include "tachimawari_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tachimawari_interfaces/msg/detail/joint__functions.h"
#include "tachimawari_interfaces/msg/detail/joint__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Joint__rosidl_typesupport_introspection_c__Joint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tachimawari_interfaces__msg__Joint__init(message_memory);
}

void Joint__rosidl_typesupport_introspection_c__Joint_fini_function(void * message_memory)
{
  tachimawari_interfaces__msg__Joint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces__msg__Joint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces__msg__Joint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tachimawari_interfaces__msg__Joint, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Joint__rosidl_typesupport_introspection_c__Joint_message_members = {
  "tachimawari_interfaces__msg",  // message namespace
  "Joint",  // message name
  3,  // number of fields
  sizeof(tachimawari_interfaces__msg__Joint),
  Joint__rosidl_typesupport_introspection_c__Joint_message_member_array,  // message members
  Joint__rosidl_typesupport_introspection_c__Joint_init_function,  // function to initialize message memory (memory has to be allocated)
  Joint__rosidl_typesupport_introspection_c__Joint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle = {
  0,
  &Joint__rosidl_typesupport_introspection_c__Joint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tachimawari_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tachimawari_interfaces, msg, Joint)() {
  if (!Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier) {
    Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
