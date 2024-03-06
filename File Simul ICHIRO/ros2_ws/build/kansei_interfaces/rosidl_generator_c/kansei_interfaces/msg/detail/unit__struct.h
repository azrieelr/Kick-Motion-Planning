// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_H_
#define KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Unit in the package kansei_interfaces.
typedef struct kansei_interfaces__msg__Unit
{
  float gyro[3];
  float accelero[3];
} kansei_interfaces__msg__Unit;

// Struct for a sequence of kansei_interfaces__msg__Unit.
typedef struct kansei_interfaces__msg__Unit__Sequence
{
  kansei_interfaces__msg__Unit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kansei_interfaces__msg__Unit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_H_
