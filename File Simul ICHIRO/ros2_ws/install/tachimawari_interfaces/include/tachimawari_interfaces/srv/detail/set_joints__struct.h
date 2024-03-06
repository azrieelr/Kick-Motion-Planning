// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_H_
#define TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
#include "tachimawari_interfaces/msg/detail/joint__struct.h"

// Struct defined in srv/SetJoints in the package tachimawari_interfaces.
typedef struct tachimawari_interfaces__srv__SetJoints_Request
{
  tachimawari_interfaces__msg__Joint__Sequence joints;
} tachimawari_interfaces__srv__SetJoints_Request;

// Struct for a sequence of tachimawari_interfaces__srv__SetJoints_Request.
typedef struct tachimawari_interfaces__srv__SetJoints_Request__Sequence
{
  tachimawari_interfaces__srv__SetJoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tachimawari_interfaces__srv__SetJoints_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetJoints in the package tachimawari_interfaces.
typedef struct tachimawari_interfaces__srv__SetJoints_Response
{
  int8_t status;
} tachimawari_interfaces__srv__SetJoints_Response;

// Struct for a sequence of tachimawari_interfaces__srv__SetJoints_Response.
typedef struct tachimawari_interfaces__srv__SetJoints_Response__Sequence
{
  tachimawari_interfaces__srv__SetJoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tachimawari_interfaces__srv__SetJoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_H_
