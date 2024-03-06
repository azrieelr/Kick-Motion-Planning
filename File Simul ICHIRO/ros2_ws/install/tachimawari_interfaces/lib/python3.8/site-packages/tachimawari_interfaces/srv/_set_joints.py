# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tachimawari_interfaces:srv/SetJoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJoints_Request(type):
    """Metaclass of message 'SetJoints_Request'."""

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
            module = import_type_support('tachimawari_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tachimawari_interfaces.srv.SetJoints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joints__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joints__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joints__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joints__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joints__request

            from tachimawari_interfaces.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJoints_Request(metaclass=Metaclass_SetJoints_Request):
    """Message class 'SetJoints_Request'."""

    __slots__ = [
        '_joints',
    ]

    _fields_and_field_types = {
        'joints': 'sequence<tachimawari_interfaces/Joint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tachimawari_interfaces', 'msg'], 'Joint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joints = kwargs.get('joints', [])

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
        if self.joints != other.joints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joints(self):
        """Message field 'joints'."""
        return self._joints

    @joints.setter
    def joints(self, value):
        if __debug__:
            from tachimawari_interfaces.msg import Joint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Joint) for v in value) and
                 True), \
                "The 'joints' field must be a set or sequence and each value of type 'Joint'"
        self._joints = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJoints_Response(type):
    """Metaclass of message 'SetJoints_Response'."""

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
            module = import_type_support('tachimawari_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tachimawari_interfaces.srv.SetJoints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joints__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joints__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joints__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joints__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joints__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJoints_Response(metaclass=Metaclass_SetJoints_Response):
    """Message class 'SetJoints_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value


class Metaclass_SetJoints(type):
    """Metaclass of service 'SetJoints'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tachimawari_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tachimawari_interfaces.srv.SetJoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joints

            from tachimawari_interfaces.srv import _set_joints
            if _set_joints.Metaclass_SetJoints_Request._TYPE_SUPPORT is None:
                _set_joints.Metaclass_SetJoints_Request.__import_type_support__()
            if _set_joints.Metaclass_SetJoints_Response._TYPE_SUPPORT is None:
                _set_joints.Metaclass_SetJoints_Response.__import_type_support__()


class SetJoints(metaclass=Metaclass_SetJoints):
    from tachimawari_interfaces.srv._set_joints import SetJoints_Request as Request
    from tachimawari_interfaces.srv._set_joints import SetJoints_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
