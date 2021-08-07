// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mymsgs:msg/Twis.idl
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
#include "mymsgs/msg/detail/twis__struct.h"
#include "mymsgs/msg/detail/twis__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mymsgs__msg__twis__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[22];
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
    assert(strncmp("mymsgs.msg._twis.Twis", full_classname_dest, 21) == 0);
  }
  mymsgs__msg__Twis * ros_message = _ros_message;
  {  // time_boot_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_boot_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_boot_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wx
    PyObject * field = PyObject_GetAttrString(_pymsg, "wx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wy
    PyObject * field = PyObject_GetAttrString(_pymsg, "wy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wz
    PyObject * field = PyObject_GetAttrString(_pymsg, "wz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsgs__msg__twis__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Twis */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsgs.msg._twis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Twis");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsgs__msg__Twis * ros_message = (mymsgs__msg__Twis *)raw_ros_message;
  {  // time_boot_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_boot_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_boot_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
