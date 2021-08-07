# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Core.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Core(type):
    """Metaclass of message 'Core'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsgs.msg.Core')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__core
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__core
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__core
            cls._TYPE_SUPPORT = module.type_support_msg__msg__core
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__core

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Core(metaclass=Metaclass_Core):
    """Message class 'Core'."""

    __slots__ = [
        '_time_boot_ms',
        '_onboard_control_sensors_health',
        '_load',
        '_voltage_battery',
        '_current_battery',
        '_battery_remaining',
    ]

    _fields_and_field_types = {
        'time_boot_ms': 'uint32',
        'onboard_control_sensors_health': 'uint32',
        'load': 'uint16',
        'voltage_battery': 'uint16',
        'current_battery': 'int16',
        'battery_remaining': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_boot_ms = kwargs.get('time_boot_ms', int())
        self.onboard_control_sensors_health = kwargs.get('onboard_control_sensors_health', int())
        self.load = kwargs.get('load', int())
        self.voltage_battery = kwargs.get('voltage_battery', int())
        self.current_battery = kwargs.get('current_battery', int())
        self.battery_remaining = kwargs.get('battery_remaining', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.time_boot_ms != other.time_boot_ms:
            return False
        if self.onboard_control_sensors_health != other.onboard_control_sensors_health:
            return False
        if self.load != other.load:
            return False
        if self.voltage_battery != other.voltage_battery:
            return False
        if self.current_battery != other.current_battery:
            return False
        if self.battery_remaining != other.battery_remaining:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_boot_ms(self):
        """Message field 'time_boot_ms'."""
        return self._time_boot_ms

    @time_boot_ms.setter
    def time_boot_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_boot_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_boot_ms' field must be an unsigned integer in [0, 4294967295]"
        self._time_boot_ms = value

    @property
    def onboard_control_sensors_health(self):
        """Message field 'onboard_control_sensors_health'."""
        return self._onboard_control_sensors_health

    @onboard_control_sensors_health.setter
    def onboard_control_sensors_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'onboard_control_sensors_health' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'onboard_control_sensors_health' field must be an unsigned integer in [0, 4294967295]"
        self._onboard_control_sensors_health = value

    @property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'load' field must be an unsigned integer in [0, 65535]"
        self._load = value

    @property
    def voltage_battery(self):
        """Message field 'voltage_battery'."""
        return self._voltage_battery

    @voltage_battery.setter
    def voltage_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_battery' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'voltage_battery' field must be an unsigned integer in [0, 65535]"
        self._voltage_battery = value

    @property
    def current_battery(self):
        """Message field 'current_battery'."""
        return self._current_battery

    @current_battery.setter
    def current_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_battery' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'current_battery' field must be an integer in [-32768, 32767]"
        self._current_battery = value

    @property
    def battery_remaining(self):
        """Message field 'battery_remaining'."""
        return self._battery_remaining

    @battery_remaining.setter
    def battery_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_remaining' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'battery_remaining' field must be an integer in [-128, 127]"
        self._battery_remaining = value
