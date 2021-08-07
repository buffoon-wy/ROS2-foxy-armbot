# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Version.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Version(type):
    """Metaclass of message 'Version'."""

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
                'mymsgs.msg.Version')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__version
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__version
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__version
            cls._TYPE_SUPPORT = module.type_support_msg__msg__version
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__version

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Version(metaclass=Metaclass_Version):
    """Message class 'Version'."""

    __slots__ = [
        '_hardware_ver',
        '_software_ver',
        '_uiud',
    ]

    _fields_and_field_types = {
        'hardware_ver': 'uint32',
        'software_ver': 'uint32',
        'uiud': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hardware_ver = kwargs.get('hardware_ver', int())
        self.software_ver = kwargs.get('software_ver', int())
        self.uiud = kwargs.get('uiud', int())

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
        if self.hardware_ver != other.hardware_ver:
            return False
        if self.software_ver != other.software_ver:
            return False
        if self.uiud != other.uiud:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def hardware_ver(self):
        """Message field 'hardware_ver'."""
        return self._hardware_ver

    @hardware_ver.setter
    def hardware_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hardware_ver' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hardware_ver' field must be an unsigned integer in [0, 4294967295]"
        self._hardware_ver = value

    @property
    def software_ver(self):
        """Message field 'software_ver'."""
        return self._software_ver

    @software_ver.setter
    def software_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'software_ver' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'software_ver' field must be an unsigned integer in [0, 4294967295]"
        self._software_ver = value

    @property
    def uiud(self):
        """Message field 'uiud'."""
        return self._uiud

    @uiud.setter
    def uiud(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uiud' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uiud' field must be an unsigned integer in [0, 4294967295]"
        self._uiud = value
