# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Twis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Twis(type):
    """Metaclass of message 'Twis'."""

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
                'mymsgs.msg.Twis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__twis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__twis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__twis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__twis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__twis

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Twis(metaclass=Metaclass_Twis):
    """Message class 'Twis'."""

    __slots__ = [
        '_time_boot_ms',
        '_vx',
        '_vy',
        '_vz',
        '_wx',
        '_wy',
        '_wz',
    ]

    _fields_and_field_types = {
        'time_boot_ms': 'uint32',
        'vx': 'double',
        'vy': 'double',
        'vz': 'double',
        'wx': 'double',
        'wy': 'double',
        'wz': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_boot_ms = kwargs.get('time_boot_ms', int())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.wx = kwargs.get('wx', float())
        self.wy = kwargs.get('wy', float())
        self.wz = kwargs.get('wz', float())

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
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.wx != other.wx:
            return False
        if self.wy != other.wy:
            return False
        if self.wz != other.wz:
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
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
        self._vx = value

    @property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
        self._vy = value

    @property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
        self._vz = value

    @property
    def wx(self):
        """Message field 'wx'."""
        return self._wx

    @wx.setter
    def wx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wx' field must be of type 'float'"
        self._wx = value

    @property
    def wy(self):
        """Message field 'wy'."""
        return self._wy

    @wy.setter
    def wy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wy' field must be of type 'float'"
        self._wy = value

    @property
    def wz(self):
        """Message field 'wz'."""
        return self._wz

    @wz.setter
    def wz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wz' field must be of type 'float'"
        self._wz = value
