// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tachimawari_interfaces/srv/detail/set_joints__struct.h"
#include "tachimawari_interfaces/srv/detail/set_joints__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tachimawari_interfaces/msg/detail/joint__functions.h"
// end nested array functions include
bool tachimawari_interfaces__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tachimawari_interfaces__msg__joint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tachimawari_interfaces__srv__set_joints__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tachimawari_interfaces.srv._set_joints.SetJoints_Request", full_classname_dest, 56) == 0);
  }
  tachimawari_interfaces__srv__SetJoints_Request * ros_message = _ros_message;
  {  // joints
    PyObject * field = PyObject_GetAttrString(_pymsg, "joints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joints'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tachimawari_interfaces__msg__Joint__Sequence__init(&(ros_message->joints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tachimawari_interfaces__msg__Joint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tachimawari_interfaces__msg__Joint * dest = ros_message->joints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tachimawari_interfaces__msg__joint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tachimawari_interfaces__srv__set_joints__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetJoints_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tachimawari_interfaces.srv._set_joints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetJoints_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tachimawari_interfaces__srv__SetJoints_Request * ros_message = (tachimawari_interfaces__srv__SetJoints_Request *)raw_ros_message;
  {  // joints
    PyObject * field = NULL;
    size_t size = ros_message->joints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tachimawari_interfaces__msg__Joint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->joints.data[i]);
      PyObject * pyitem = tachimawari_interfaces__msg__joint__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "joints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__struct.h"
// already included above
// #include "tachimawari_interfaces/srv/detail/set_joints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tachimawari_interfaces__srv__set_joints__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tachimawari_interfaces.srv._set_joints.SetJoints_Response", full_classname_dest, 57) == 0);
  }
  tachimawari_interfaces__srv__SetJoints_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tachimawari_interfaces__srv__set_joints__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetJoints_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tachimawari_interfaces.srv._set_joints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetJoints_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tachimawari_interfaces__srv__SetJoints_Response * ros_message = (tachimawari_interfaces__srv__SetJoints_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
