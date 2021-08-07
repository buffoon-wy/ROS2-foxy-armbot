# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Imu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Imu(type):
    """Metaclass of message 'Imu'."""

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
                'mymsgs.msg.Imu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imu(metaclass=Metaclass_Imu):
    """Message class 'Imu'."""

    __slots__ = [
        '_time_boot_ms',
        '_xacc',
        '_yacc',
        '_zacc',
        '_xgyro',
        '_ygyro',
        '_zgyro',
        '_xmag',
        '_ymag',
        '_zmag',
    ]

    _fields_and_field_types = {
        'time_boot_ms': 'uint32',
        'xacc': 'int16',
        'yacc': 'int16',
        'zacc': 'int16',
        'xgyro': 'int16',
        'ygyro': 'int16',
        'zgyro': 'int16',
        'xmag': 'int16',
        'ymag': 'int16',
        'zmag': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_boot_ms = kwargs.get('time_boot_ms', int())
        self.xacc = kwargs.get('xacc', int())
        self.yacc = kwargs.get('yacc', int())
        self.zacc = kwargs.get('zacc', int())
        self.xgyro = kwargs.get('xgyro', int())
        self.ygyro = kwargs.get('ygyro', int())
        self.zgyro = kwargs.get('zgyro', int())
        self.xmag = kwargs.get('xmag', int())
        self.ymag = kwargs.get('ymag', int())
        self.zmag = kwargs.get('zmag', int())

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
        if self.xacc != other.xacc:
            return False
        if self.yacc != other.yacc:
            return False
        if self.zacc != other.zacc:
            return False
        if self.xgyro != other.xgyro:
            return False
        if self.ygyro != other.ygyro:
            return False
        if self.zgyro != other.zgyro:
            return False
        if self.xmag != other.xmag:
            return False
        if self.ymag != other.ymag:
            return False
        if self.zmag != other.zmag:
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
    def xacc(self):
        """Message field 'xacc'."""
        return self._xacc

    @xacc.setter
    def xacc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xacc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'xacc' field must be an integer in [-32768, 32767]"
        self._xacc = value

    @property
    def yacc(self):
        """Message field 'yacc'."""
        return self._yacc

    @yacc.setter
    def yacc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yacc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'yacc' field must be an integer in [-32768, 32767]"
        self._yacc = value

    @property
    def zacc(self):
        """Message field 'zacc'."""
        return self._zacc

    @zacc.setter
    def zacc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zacc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'zacc' field must be an integer in [-32768, 32767]"
        self._zacc = value

    @property
    def xgyro(self):
        """Message field 'xgyro'."""
        return self._xgyro

    @xgyro.setter
    def xgyro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xgyro' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'xgyro' field must be an integer in [-32768, 32767]"
        self._xgyro = value

    @property
    def ygyro(self):
        """Message field 'ygyro'."""
        return self._ygyro

    @ygyro.setter
    def ygyro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ygyro' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ygyro' field must be an integer in [-32768, 32767]"
        self._ygyro = value

    @property
    def zgyro(self):
        """Message field 'zgyro'."""
        return self._zgyro

    @zgyro.setter
    def zgyro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zgyro' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'zgyro' field must be an integer in [-32768, 32767]"
        self._zgyro = value

    @property
    def xmag(self):
        """Message field 'xmag'."""
        return self._xmag

    @xmag.setter
    def xmag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xmag' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'xmag' field must be an integer in [-32768, 32767]"
        self._xmag = value

    @property
    def ymag(self):
        """Message field 'ymag'."""
        return self._ymag

    @ymag.setter
    def ymag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ymag' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ymag' field must be an integer in [-32768, 32767]"
        self._ymag = value

    @property
    def zmag(self):
        """Message field 'zmag'."""
        return self._zmag

    @zmag.setter
    def zmag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zmag' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'zmag' field must be an integer in [-32768, 32767]"
        self._zmag = value
