// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice
#include "kansei_interfaces/msg/detail/unit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
kansei_interfaces__msg__Unit__init(kansei_interfaces__msg__Unit * msg)
{
  if (!msg) {
    return false;
  }
  // gyro
  // accelero
  return true;
}

void
kansei_interfaces__msg__Unit__fini(kansei_interfaces__msg__Unit * msg)
{
  if (!msg) {
    return;
  }
  // gyro
  // accelero
}

kansei_interfaces__msg__Unit *
kansei_interfaces__msg__Unit__create()
{
  kansei_interfaces__msg__Unit * msg = (kansei_interfaces__msg__Unit *)malloc(sizeof(kansei_interfaces__msg__Unit));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kansei_interfaces__msg__Unit));
  bool success = kansei_interfaces__msg__Unit__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kansei_interfaces__msg__Unit__destroy(kansei_interfaces__msg__Unit * msg)
{
  if (msg) {
    kansei_interfaces__msg__Unit__fini(msg);
  }
  free(msg);
}


bool
kansei_interfaces__msg__Unit__Sequence__init(kansei_interfaces__msg__Unit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kansei_interfaces__msg__Unit * data = NULL;
  if (size) {
    data = (kansei_interfaces__msg__Unit *)calloc(size, sizeof(kansei_interfaces__msg__Unit));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kansei_interfaces__msg__Unit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kansei_interfaces__msg__Unit__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kansei_interfaces__msg__Unit__Sequence__fini(kansei_interfaces__msg__Unit__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kansei_interfaces__msg__Unit__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kansei_interfaces__msg__Unit__Sequence *
kansei_interfaces__msg__Unit__Sequence__create(size_t size)
{
  kansei_interfaces__msg__Unit__Sequence * array = (kansei_interfaces__msg__Unit__Sequence *)malloc(sizeof(kansei_interfaces__msg__Unit__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kansei_interfaces__msg__Unit__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kansei_interfaces__msg__Unit__Sequence__destroy(kansei_interfaces__msg__Unit__Sequence * array)
{
  if (array) {
    kansei_interfaces__msg__Unit__Sequence__fini(array);
  }
  free(array);
}
