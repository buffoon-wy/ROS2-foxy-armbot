// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mymsgs:msg/Attitued.idl
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
#include "mymsgs/msg/detail/attitued__struct.h"
#include "mymsgs/msg/detail/attitued__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mymsgs__msg__attitued__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("mymsgs.msg._attitued.Attitued", full_classname_dest, 29) == 0);
  }
  mymsgs__msg__Attitued * ros_message = _ros_message;
  {  // time_boot_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_boot_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_boot_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rollspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rollspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rollspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitchspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitchspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitchspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsgs__msg__attitued__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attitued */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsgs.msg._attitued");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attitued");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsgs__msg__Attitued * ros_message = (mymsgs__msg__Attitued *)raw_ros_message;
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
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rollspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rollspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rollspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitchspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitchspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitchspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
