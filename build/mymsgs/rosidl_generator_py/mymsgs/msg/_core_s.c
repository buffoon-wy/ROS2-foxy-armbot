// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mymsgs:msg/Core.idl
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
#include "mymsgs/msg/detail/core__struct.h"
#include "mymsgs/msg/detail/core__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mymsgs__msg__core__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mymsgs.msg._core.Core", full_classname_dest, 21) == 0);
  }
  mymsgs__msg__Core * ros_message = _ros_message;
  {  // time_boot_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_boot_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_boot_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // onboard_control_sensors_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "onboard_control_sensors_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->onboard_control_sensors_health = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load
    PyObject * field = PyObject_GetAttrString(_pymsg, "load");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_battery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_battery = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_battery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_battery = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_remaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_remaining");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_remaining = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsgs__msg__core__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Core */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsgs.msg._core");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Core");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsgs__msg__Core * ros_message = (mymsgs__msg__Core *)raw_ros_message;
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
  {  // onboard_control_sensors_health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->onboard_control_sensors_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "onboard_control_sensors_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_battery
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_battery
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_remaining
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_remaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_remaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
