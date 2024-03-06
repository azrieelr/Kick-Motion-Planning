// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice
#include "tachimawari_interfaces/srv/detail/set_joints__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tachimawari_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tachimawari_interfaces::msg::Joint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tachimawari_interfaces::msg::Joint &);
size_t get_serialized_size(
  const tachimawari_interfaces::msg::Joint &,
  size_t current_alignment);
size_t
max_serialized_size_Joint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tachimawari_interfaces


namespace tachimawari_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
cdr_serialize(
  const tachimawari_interfaces::srv::SetJoints_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joints
  {
    size_t size = ros_message.joints.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tachimawari_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.joints[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tachimawari_interfaces::srv::SetJoints_Request & ros_message)
{
  // Member: joints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.joints.resize(size);
    for (size_t i = 0; i < size; i++) {
      tachimawari_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.joints[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
get_serialized_size(
  const tachimawari_interfaces::srv::SetJoints_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joints
  {
    size_t array_size = ros_message.joints.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tachimawari_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.joints[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
max_serialized_size_SetJoints_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: joints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tachimawari_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Joint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SetJoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tachimawari_interfaces::srv::SetJoints_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetJoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tachimawari_interfaces::srv::SetJoints_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetJoints_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tachimawari_interfaces::srv::SetJoints_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetJoints_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetJoints_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetJoints_Request__callbacks = {
  "tachimawari_interfaces::srv",
  "SetJoints_Request",
  _SetJoints_Request__cdr_serialize,
  _SetJoints_Request__cdr_deserialize,
  _SetJoints_Request__get_serialized_size,
  _SetJoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetJoints_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetJoints_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tachimawari_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tachimawari_interfaces::srv::SetJoints_Request>()
{
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tachimawari_interfaces, srv, SetJoints_Request)() {
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tachimawari_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
cdr_serialize(
  const tachimawari_interfaces::srv::SetJoints_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tachimawari_interfaces::srv::SetJoints_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
get_serialized_size(
  const tachimawari_interfaces::srv::SetJoints_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tachimawari_interfaces
max_serialized_size_SetJoints_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetJoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tachimawari_interfaces::srv::SetJoints_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetJoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tachimawari_interfaces::srv::SetJoints_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetJoints_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tachimawari_interfaces::srv::SetJoints_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetJoints_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetJoints_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetJoints_Response__callbacks = {
  "tachimawari_interfaces::srv",
  "SetJoints_Response",
  _SetJoints_Response__cdr_serialize,
  _SetJoints_Response__cdr_deserialize,
  _SetJoints_Response__get_serialized_size,
  _SetJoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetJoints_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetJoints_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tachimawari_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tachimawari_interfaces::srv::SetJoints_Response>()
{
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tachimawari_interfaces, srv, SetJoints_Response)() {
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tachimawari_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetJoints__callbacks = {
  "tachimawari_interfaces::srv",
  "SetJoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tachimawari_interfaces, srv, SetJoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tachimawari_interfaces, srv, SetJoints_Response)(),
};

static rosidl_service_type_support_t _SetJoints__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetJoints__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tachimawari_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tachimawari_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<tachimawari_interfaces::srv::SetJoints>()
{
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tachimawari_interfaces, srv, SetJoints)() {
  return &tachimawari_interfaces::srv::typesupport_fastrtps_cpp::_SetJoints__handle;
}

#ifdef __cplusplus
}
#endif
