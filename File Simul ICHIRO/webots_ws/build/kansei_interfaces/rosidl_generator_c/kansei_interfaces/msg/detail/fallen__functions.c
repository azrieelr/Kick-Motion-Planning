// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice
#include "kansei_interfaces/msg/detail/fallen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
kansei_interfaces__msg__Fallen__init(kansei_interfaces__msg__Fallen * msg)
{
  if (!msg) {
    return false;
  }
  // fallen_status
  return true;
}

void
kansei_interfaces__msg__Fallen__fini(kansei_interfaces__msg__Fallen * msg)
{
  if (!msg) {
    return;
  }
  // fallen_status
}

kansei_interfaces__msg__Fallen *
kansei_interfaces__msg__Fallen__create()
{
  kansei_interfaces__msg__Fallen * msg = (kansei_interfaces__msg__Fallen *)malloc(sizeof(kansei_interfaces__msg__Fallen));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kansei_interfaces__msg__Fallen));
  bool success = kansei_interfaces__msg__Fallen__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kansei_interfaces__msg__Fallen__destroy(kansei_interfaces__msg__Fallen * msg)
{
  if (msg) {
    kansei_interfaces__msg__Fallen__fini(msg);
  }
  free(msg);
}


bool
kansei_interfaces__msg__Fallen__Sequence__init(kansei_interfaces__msg__Fallen__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kansei_interfaces__msg__Fallen * data = NULL;
  if (size) {
    data = (kansei_interfaces__msg__Fallen *)calloc(size, sizeof(kansei_interfaces__msg__Fallen));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kansei_interfaces__msg__Fallen__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kansei_interfaces__msg__Fallen__fini(&data[i - 1]);
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
kansei_interfaces__msg__Fallen__Sequence__fini(kansei_interfaces__msg__Fallen__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kansei_interfaces__msg__Fallen__fini(&array->data[i]);
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

kansei_interfaces__msg__Fallen__Sequence *
kansei_interfaces__msg__Fallen__Sequence__create(size_t size)
{
  kansei_interfaces__msg__Fallen__Sequence * array = (kansei_interfaces__msg__Fallen__Sequence *)malloc(sizeof(kansei_interfaces__msg__Fallen__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kansei_interfaces__msg__Fallen__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kansei_interfaces__msg__Fallen__Sequence__destroy(kansei_interfaces__msg__Fallen__Sequence * array)
{
  if (array) {
    kansei_interfaces__msg__Fallen__Sequence__fini(array);
  }
  free(array);
}
