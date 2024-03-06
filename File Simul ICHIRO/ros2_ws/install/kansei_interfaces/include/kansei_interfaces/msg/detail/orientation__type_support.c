// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kansei_interfaces:msg/Orientation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kansei_interfaces/msg/detail/orientation__rosidl_typesupport_introspection_c.h"
#include "kansei_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kansei_interfaces/msg/detail/orientation__functions.h"
#include "kansei_interfaces/msg/detail/orientation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Orientation__rosidl_typesupport_introspection_c__Orientation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kansei_interfaces__msg__Orientation__init(message_memory);
}

void Orientation__rosidl_typesupport_introspection_c__Orientation_fini_function(void * message_memory)
{
  kansei_interfaces__msg__Orientation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Orientation__rosidl_typesupport_introspection_c__Orientation_message_member_array[1] = {
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kansei_interfaces__msg__Orientation, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Orientation__rosidl_typesupport_introspection_c__Orientation_message_members = {
  "kansei_interfaces__msg",  // message namespace
  "Orientation",  // message name
  1,  // number of fields
  sizeof(kansei_interfaces__msg__Orientation),
  Orientation__rosidl_typesupport_introspection_c__Orientation_message_member_array,  // message members
  Orientation__rosidl_typesupport_introspection_c__Orientation_init_function,  // function to initialize message memory (memory has to be allocated)
  Orientation__rosidl_typesupport_introspection_c__Orientation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Orientation__rosidl_typesupport_introspection_c__Orientation_message_type_support_handle = {
  0,
  &Orientation__rosidl_typesupport_introspection_c__Orientation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kansei_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kansei_interfaces, msg, Orientation)() {
  if (!Orientation__rosidl_typesupport_introspection_c__Orientation_message_type_support_handle.typesupport_identifier) {
    Orientation__rosidl_typesupport_introspection_c__Orientation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Orientation__rosidl_typesupport_introspection_c__Orientation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif