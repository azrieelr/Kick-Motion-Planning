// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kansei_interfaces:msg/Orientation.idl
// generated code does not contain a copyright notice
#include "kansei_interfaces/msg/detail/orientation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
kansei_interfaces__msg__Orientation__init(kansei_interfaces__msg__Orientation * msg)
{
  if (!msg) {
    return false;
  }
  // orientation
  return true;
}

void
kansei_interfaces__msg__Orientation__fini(kansei_interfaces__msg__Orientation * msg)
{
  if (!msg) {
    return;
  }
  // orientation
}

kansei_interfaces__msg__Orientation *
kansei_interfaces__msg__Orientation__create()
{
  kansei_interfaces__msg__Orientation * msg = (kansei_interfaces__msg__Orientation *)malloc(sizeof(kansei_interfaces__msg__Orientation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kansei_interfaces__msg__Orientation));
  bool success = kansei_interfaces__msg__Orientation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kansei_interfaces__msg__Orientation__destroy(kansei_interfaces__msg__Orientation * msg)
{
  if (msg) {
    kansei_interfaces__msg__Orientation__fini(msg);
  }
  free(msg);
}


bool
kansei_interfaces__msg__Orientation__Sequence__init(kansei_interfaces__msg__Orientation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kansei_interfaces__msg__Orientation * data = NULL;
  if (size) {
    data = (kansei_interfaces__msg__Orientation *)calloc(size, sizeof(kansei_interfaces__msg__Orientation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kansei_interfaces__msg__Orientation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kansei_interfaces__msg__Orientation__fini(&data[i - 1]);
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
kansei_interfaces__msg__Orientation__Sequence__fini(kansei_interfaces__msg__Orientation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kansei_interfaces__msg__Orientation__fini(&array->data[i]);
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

kansei_interfaces__msg__Orientation__Sequence *
kansei_interfaces__msg__Orientation__Sequence__create(size_t size)
{
  kansei_interfaces__msg__Orientation__Sequence * array = (kansei_interfaces__msg__Orientation__Sequence *)malloc(sizeof(kansei_interfaces__msg__Orientation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kansei_interfaces__msg__Orientation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kansei_interfaces__msg__Orientation__Sequence__destroy(kansei_interfaces__msg__Orientation__Sequence * array)
{
  if (array) {
    kansei_interfaces__msg__Orientation__Sequence__fini(array);
  }
  free(array);
}
