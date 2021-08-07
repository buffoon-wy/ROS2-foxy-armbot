# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Attitued.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Attitued(type):
    """Metaclass of message 'Attitued'."""

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
                'mymsgs.msg.Attitued')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attitued
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attitued
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attitued
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attitued
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attitued

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Attitued(metaclass=Metaclass_Attitued):
    """Message class 'Attitued'."""

    __slots__ = [
        '_time_boot_ms',
        '_roll',
        '_pitch',
        '_yaw',
        '_rollspeed',
        '_pitchspeed',
        '_yawspeed',
    ]

    _fields_and_field_types = {
        'time_boot_ms': 'uint32',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
        'rollspeed': 'float',
        'pitchspeed': 'float',
        'yawspeed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_boot_ms = kwargs.get('time_boot_ms', int())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.rollspeed = kwargs.get('rollspeed', float())
        self.pitchspeed = kwargs.get('pitchspeed', float())
        self.yawspeed = kwargs.get('yawspeed', float())

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
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.rollspeed != other.rollspeed:
            return False
        if self.pitchspeed != other.pitchspeed:
            return False
        if self.yawspeed != other.yawspeed:
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
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def rollspeed(self):
        """Message field 'rollspeed'."""
        return self._rollspeed

    @rollspeed.setter
    def rollspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rollspeed' field must be of type 'float'"
        self._rollspeed = value

    @property
    def pitchspeed(self):
        """Message field 'pitchspeed'."""
        return self._pitchspeed

    @pitchspeed.setter
    def pitchspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitchspeed' field must be of type 'float'"
        self._pitchspeed = value

    @property
    def yawspeed(self):
        """Message field 'yawspeed'."""
        return self._yawspeed

    @yawspeed.setter
    def yawspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawspeed' field must be of type 'float'"
        self._yawspeed = value
