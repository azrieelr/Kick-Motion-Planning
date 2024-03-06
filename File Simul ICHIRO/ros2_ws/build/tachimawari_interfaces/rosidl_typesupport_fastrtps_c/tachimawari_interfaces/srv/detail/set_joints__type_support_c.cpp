// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice
#include "tachimawari_interfaces/srv/detail/set_joints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tachimawari_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tachimawari_interfaces/srv/detail/set_joints__struct.h"
#include "tachimawari_interfaces/srv/detail/set_joints__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tachimawari_interfaces/msg/detail/joint__functions.h"  // joints

// forward declare type support functions
size_t get_serialized_size_tachimawari_interfaces__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tachimawari_interfaces__msg__Joint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, msg, Joint)();


using _SetJoints_Request__ros_msg_type = tachimawari_interfaces__srv__SetJoints_Request;

static bool _SetJoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetJoints_Request__ros_msg_type * ros_message = static_cast<const _SetJoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tachimawari_interfaces, msg, Joint
      )()->data);
    size_t size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SetJoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetJoints_Request__ros_msg_type * ros_message = static_cast<_SetJoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tachimawari_interfaces, msg, Joint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joints.data) {
      tachimawari_interfaces__msg__Joint__Sequence__fini(&ros_message->joints);
    }
    if (!tachimawari_interfaces__msg__Joint__Sequence__init(&ros_message->joints, size)) {
      return "failed to create array for field 'joints'";
    }
    auto array_ptr = ros_message->joints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tachimawari_interfaces
size_t get_serialized_size_tachimawari_interfaces__srv__SetJoints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJoints_Request__ros_msg_type * ros_message = static_cast<const _SetJoints_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joints
  {
    size_t array_size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tachimawari_interfaces__msg__Joint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetJoints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tachimawari_interfaces__srv__SetJoints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tachimawari_interfaces
size_t max_serialized_size_tachimawari_interfaces__srv__SetJoints_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tachimawari_interfaces__msg__Joint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetJoints_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tachimawari_interfaces__srv__SetJoints_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetJoints_Request = {
  "tachimawari_interfaces::srv",
  "SetJoints_Request",
  _SetJoints_Request__cdr_serialize,
  _SetJoints_Request__cdr_deserialize,
  _SetJoints_Request__get_serialized_size,
  _SetJoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetJoints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetJoints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, srv, SetJoints_Request)() {
  return &_SetJoints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tachimawari_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__struct.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetJoints_Response__ros_msg_type = tachimawari_interfaces__srv__SetJoints_Response;

static bool _SetJoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetJoints_Response__ros_msg_type * ros_message = static_cast<const _SetJoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _SetJoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetJoints_Response__ros_msg_type * ros_message = static_cast<_SetJoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tachimawari_interfaces
size_t get_serialized_size_tachimawari_interfaces__srv__SetJoints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJoints_Response__ros_msg_type * ros_message = static_cast<const _SetJoints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetJoints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tachimawari_interfaces__srv__SetJoints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tachimawari_interfaces
size_t max_serialized_size_tachimawari_interfaces__srv__SetJoints_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetJoints_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tachimawari_interfaces__srv__SetJoints_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetJoints_Response = {
  "tachimawari_interfaces::srv",
  "SetJoints_Response",
  _SetJoints_Response__cdr_serialize,
  _SetJoints_Response__cdr_deserialize,
  _SetJoints_Response__get_serialized_size,
  _SetJoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetJoints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetJoints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, srv, SetJoints_Response)() {
  return &_SetJoints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tachimawari_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tachimawari_interfaces/srv/set_joints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetJoints__callbacks = {
  "tachimawari_interfaces::srv",
  "SetJoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, srv, SetJoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, srv, SetJoints_Response)(),
};

static rosidl_service_type_support_t SetJoints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetJoints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tachimawari_interfaces, srv, SetJoints)() {
  return &SetJoints__handle;
}

#if defined(__cplusplus)
}
#endif
