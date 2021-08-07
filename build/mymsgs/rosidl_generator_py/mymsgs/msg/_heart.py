# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgs:msg/Heart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Heart(type):
    """Metaclass of message 'Heart'."""

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
                'mymsgs.msg.Heart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heart
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heart
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heart
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heart
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heart

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Heart(metaclass=Metaclass_Heart):
    """Message class 'Heart'."""

    __slots__ = [
        '_error_code',
        '_type',
        '_base_mode',
        '_system_status',
    ]

    _fields_and_field_types = {
        'error_code': 'uint32',
        'type': 'uint8',
        'base_mode': 'uint8',
        'system_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_code = kwargs.get('error_code', int())
        self.type = kwargs.get('type', int())
        self.base_mode = kwargs.get('base_mode', int())
        self.system_status = kwargs.get('system_status', int())

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
        if self.error_code != other.error_code:
            return False
        if self.type != other.type:
            return False
        if self.base_mode != other.base_mode:
            return False
        if self.system_status != other.system_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_code' field must be an unsigned integer in [0, 4294967295]"
        self._error_code = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def base_mode(self):
        """Message field 'base_mode'."""
        return self._base_mode

    @base_mode.setter
    def base_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'base_mode' field must be an unsigned integer in [0, 255]"
        self._base_mode = value

    @property
    def system_status(self):
        """Message field 'system_status'."""
        return self._system_status

    @system_status.setter
    def system_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_status' field must be an unsigned integer in [0, 255]"
        self._system_status = value
