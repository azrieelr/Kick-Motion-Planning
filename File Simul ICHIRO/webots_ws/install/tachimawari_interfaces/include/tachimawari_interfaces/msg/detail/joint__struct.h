// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__STRUCT_H_
#define TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Joint in the package tachimawari_interfaces.
typedef struct tachimawari_interfaces__msg__Joint
{
  rosidl_runtime_c__String name;
  float position;
  float speed;
} tachimawari_interfaces__msg__Joint;

// Struct for a sequence of tachimawari_interfaces__msg__Joint.
typedef struct tachimawari_interfaces__msg__Joint__Sequence
{
  tachimawari_interfaces__msg__Joint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tachimawari_interfaces__msg__Joint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__STRUCT_H_
