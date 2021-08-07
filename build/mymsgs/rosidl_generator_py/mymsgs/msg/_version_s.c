// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mymsgs:msg/Version.idl
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
#include "mymsgs/msg/detail/version__struct.h"
#include "mymsgs/msg/detail/version__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mymsgs__msg__version__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
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
    assert(strncmp("mymsgs.msg._version.Version", full_classname_dest, 27) == 0);
  }
  mymsgs__msg__Version * ros_message = _ros_message;
  {  // hardware_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "hardware_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hardware_ver = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_ver = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // uiud
    PyObject * field = PyObject_GetAttrString(_pymsg, "uiud");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uiud = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsgs__msg__version__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Version */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsgs.msg._version");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Version");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsgs__msg__Version * ros_message = (mymsgs__msg__Version *)raw_ros_message;
  {  // hardware_ver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hardware_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hardware_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_ver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uiud
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uiud);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uiud", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
