# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ear_msgs:srv/SegmentEar.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SegmentEar_Request(type):
    """Metaclass of message 'SegmentEar_Request'."""

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
            module = import_type_support('ear_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ear_msgs.srv.SegmentEar_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__segment_ear__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__segment_ear__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__segment_ear__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__segment_ear__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__segment_ear__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentEar_Request(metaclass=Metaclass_SegmentEar_Request):
    """Message class 'SegmentEar_Request'."""

    __slots__ = [
        '_mri_path',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'mri_path': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mri_path = kwargs.get('mri_path', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mri_path != other.mri_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mri_path(self):
        """Message field 'mri_path'."""
        return self._mri_path

    @mri_path.setter
    def mri_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mri_path' field must be of type 'str'"
        self._mri_path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SegmentEar_Response(type):
    """Metaclass of message 'SegmentEar_Response'."""

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
            module = import_type_support('ear_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ear_msgs.srv.SegmentEar_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__segment_ear__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__segment_ear__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__segment_ear__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__segment_ear__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__segment_ear__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentEar_Response(metaclass=Metaclass_SegmentEar_Response):
    """Message class 'SegmentEar_Response'."""

    __slots__ = [
        '_mask_path',
        '_mesh_path',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'mask_path': 'string',
        'mesh_path': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mask_path = kwargs.get('mask_path', str())
        self.mesh_path = kwargs.get('mesh_path', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mask_path != other.mask_path:
            return False
        if self.mesh_path != other.mesh_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mask_path(self):
        """Message field 'mask_path'."""
        return self._mask_path

    @mask_path.setter
    def mask_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mask_path' field must be of type 'str'"
        self._mask_path = value

    @builtins.property
    def mesh_path(self):
        """Message field 'mesh_path'."""
        return self._mesh_path

    @mesh_path.setter
    def mesh_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mesh_path' field must be of type 'str'"
        self._mesh_path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SegmentEar_Event(type):
    """Metaclass of message 'SegmentEar_Event'."""

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
            module = import_type_support('ear_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ear_msgs.srv.SegmentEar_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__segment_ear__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__segment_ear__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__segment_ear__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__segment_ear__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__segment_ear__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentEar_Event(metaclass=Metaclass_SegmentEar_Event):
    """Message class 'SegmentEar_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ear_msgs/SegmentEar_Request, 1>',
        'response': 'sequence<ear_msgs/SegmentEar_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ear_msgs', 'srv'], 'SegmentEar_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ear_msgs', 'srv'], 'SegmentEar_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from ear_msgs.srv import SegmentEar_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SegmentEar_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SegmentEar_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ear_msgs.srv import SegmentEar_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SegmentEar_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SegmentEar_Response'"
        self._response = value


class Metaclass_SegmentEar(type):
    """Metaclass of service 'SegmentEar'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ear_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ear_msgs.srv.SegmentEar')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__segment_ear

            from ear_msgs.srv import _segment_ear
            if _segment_ear.Metaclass_SegmentEar_Request._TYPE_SUPPORT is None:
                _segment_ear.Metaclass_SegmentEar_Request.__import_type_support__()
            if _segment_ear.Metaclass_SegmentEar_Response._TYPE_SUPPORT is None:
                _segment_ear.Metaclass_SegmentEar_Response.__import_type_support__()
            if _segment_ear.Metaclass_SegmentEar_Event._TYPE_SUPPORT is None:
                _segment_ear.Metaclass_SegmentEar_Event.__import_type_support__()


class SegmentEar(metaclass=Metaclass_SegmentEar):
    from ear_msgs.srv._segment_ear import SegmentEar_Request as Request
    from ear_msgs.srv._segment_ear import SegmentEar_Response as Response
    from ear_msgs.srv._segment_ear import SegmentEar_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
