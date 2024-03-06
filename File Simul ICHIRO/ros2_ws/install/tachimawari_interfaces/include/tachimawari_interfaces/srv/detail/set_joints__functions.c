// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice
#include "tachimawari_interfaces/srv/detail/set_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `joints`
#include "tachimawari_interfaces/msg/detail/joint__functions.h"

bool
tachimawari_interfaces__srv__SetJoints_Request__init(tachimawari_interfaces__srv__SetJoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joints
  if (!tachimawari_interfaces__msg__Joint__Sequence__init(&msg->joints, 0)) {
    tachimawari_interfaces__srv__SetJoints_Request__fini(msg);
    return false;
  }
  return true;
}

void
tachimawari_interfaces__srv__SetJoints_Request__fini(tachimawari_interfaces__srv__SetJoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // joints
  tachimawari_interfaces__msg__Joint__Sequence__fini(&msg->joints);
}

tachimawari_interfaces__srv__SetJoints_Request *
tachimawari_interfaces__srv__SetJoints_Request__create()
{
  tachimawari_interfaces__srv__SetJoints_Request * msg = (tachimawari_interfaces__srv__SetJoints_Request *)malloc(sizeof(tachimawari_interfaces__srv__SetJoints_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tachimawari_interfaces__srv__SetJoints_Request));
  bool success = tachimawari_interfaces__srv__SetJoints_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tachimawari_interfaces__srv__SetJoints_Request__destroy(tachimawari_interfaces__srv__SetJoints_Request * msg)
{
  if (msg) {
    tachimawari_interfaces__srv__SetJoints_Request__fini(msg);
  }
  free(msg);
}


bool
tachimawari_interfaces__srv__SetJoints_Request__Sequence__init(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tachimawari_interfaces__srv__SetJoints_Request * data = NULL;
  if (size) {
    data = (tachimawari_interfaces__srv__SetJoints_Request *)calloc(size, sizeof(tachimawari_interfaces__srv__SetJoints_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tachimawari_interfaces__srv__SetJoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tachimawari_interfaces__srv__SetJoints_Request__fini(&data[i - 1]);
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
tachimawari_interfaces__srv__SetJoints_Request__Sequence__fini(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tachimawari_interfaces__srv__SetJoints_Request__fini(&array->data[i]);
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

tachimawari_interfaces__srv__SetJoints_Request__Sequence *
tachimawari_interfaces__srv__SetJoints_Request__Sequence__create(size_t size)
{
  tachimawari_interfaces__srv__SetJoints_Request__Sequence * array = (tachimawari_interfaces__srv__SetJoints_Request__Sequence *)malloc(sizeof(tachimawari_interfaces__srv__SetJoints_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tachimawari_interfaces__srv__SetJoints_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tachimawari_interfaces__srv__SetJoints_Request__Sequence__destroy(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array)
{
  if (array) {
    tachimawari_interfaces__srv__SetJoints_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tachimawari_interfaces__srv__SetJoints_Response__init(tachimawari_interfaces__srv__SetJoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
tachimawari_interfaces__srv__SetJoints_Response__fini(tachimawari_interfaces__srv__SetJoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

tachimawari_interfaces__srv__SetJoints_Response *
tachimawari_interfaces__srv__SetJoints_Response__create()
{
  tachimawari_interfaces__srv__SetJoints_Response * msg = (tachimawari_interfaces__srv__SetJoints_Response *)malloc(sizeof(tachimawari_interfaces__srv__SetJoints_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tachimawari_interfaces__srv__SetJoints_Response));
  bool success = tachimawari_interfaces__srv__SetJoints_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tachimawari_interfaces__srv__SetJoints_Response__destroy(tachimawari_interfaces__srv__SetJoints_Response * msg)
{
  if (msg) {
    tachimawari_interfaces__srv__SetJoints_Response__fini(msg);
  }
  free(msg);
}


bool
tachimawari_interfaces__srv__SetJoints_Response__Sequence__init(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tachimawari_interfaces__srv__SetJoints_Response * data = NULL;
  if (size) {
    data = (tachimawari_interfaces__srv__SetJoints_Response *)calloc(size, sizeof(tachimawari_interfaces__srv__SetJoints_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tachimawari_interfaces__srv__SetJoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tachimawari_interfaces__srv__SetJoints_Response__fini(&data[i - 1]);
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
tachimawari_interfaces__srv__SetJoints_Response__Sequence__fini(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tachimawari_interfaces__srv__SetJoints_Response__fini(&array->data[i]);
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

tachimawari_interfaces__srv__SetJoints_Response__Sequence *
tachimawari_interfaces__srv__SetJoints_Response__Sequence__create(size_t size)
{
  tachimawari_interfaces__srv__SetJoints_Response__Sequence * array = (tachimawari_interfaces__srv__SetJoints_Response__Sequence *)malloc(sizeof(tachimawari_interfaces__srv__SetJoints_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tachimawari_interfaces__srv__SetJoints_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tachimawari_interfaces__srv__SetJoints_Response__Sequence__destroy(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array)
{
  if (array) {
    tachimawari_interfaces__srv__SetJoints_Response__Sequence__fini(array);
  }
  free(array);
}
