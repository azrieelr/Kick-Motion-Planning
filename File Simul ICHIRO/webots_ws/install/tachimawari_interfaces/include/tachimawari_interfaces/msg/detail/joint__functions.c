// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice
#include "tachimawari_interfaces/msg/detail/joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
tachimawari_interfaces__msg__Joint__init(tachimawari_interfaces__msg__Joint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tachimawari_interfaces__msg__Joint__fini(msg);
    return false;
  }
  // position
  // speed
  msg->speed = 1.0f;
  return true;
}

void
tachimawari_interfaces__msg__Joint__fini(tachimawari_interfaces__msg__Joint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // position
  // speed
}

tachimawari_interfaces__msg__Joint *
tachimawari_interfaces__msg__Joint__create()
{
  tachimawari_interfaces__msg__Joint * msg = (tachimawari_interfaces__msg__Joint *)malloc(sizeof(tachimawari_interfaces__msg__Joint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tachimawari_interfaces__msg__Joint));
  bool success = tachimawari_interfaces__msg__Joint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tachimawari_interfaces__msg__Joint__destroy(tachimawari_interfaces__msg__Joint * msg)
{
  if (msg) {
    tachimawari_interfaces__msg__Joint__fini(msg);
  }
  free(msg);
}


bool
tachimawari_interfaces__msg__Joint__Sequence__init(tachimawari_interfaces__msg__Joint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tachimawari_interfaces__msg__Joint * data = NULL;
  if (size) {
    data = (tachimawari_interfaces__msg__Joint *)calloc(size, sizeof(tachimawari_interfaces__msg__Joint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tachimawari_interfaces__msg__Joint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tachimawari_interfaces__msg__Joint__fini(&data[i - 1]);
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
tachimawari_interfaces__msg__Joint__Sequence__fini(tachimawari_interfaces__msg__Joint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tachimawari_interfaces__msg__Joint__fini(&array->data[i]);
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

tachimawari_interfaces__msg__Joint__Sequence *
tachimawari_interfaces__msg__Joint__Sequence__create(size_t size)
{
  tachimawari_interfaces__msg__Joint__Sequence * array = (tachimawari_interfaces__msg__Joint__Sequence *)malloc(sizeof(tachimawari_interfaces__msg__Joint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tachimawari_interfaces__msg__Joint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tachimawari_interfaces__msg__Joint__Sequence__destroy(tachimawari_interfaces__msg__Joint__Sequence * array)
{
  if (array) {
    tachimawari_interfaces__msg__Joint__Sequence__fini(array);
  }
  free(array);
}
