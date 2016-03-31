# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ardrone_autonomy/navdata_magneto.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ardrone_autonomy.msg
import std_msgs.msg

class navdata_magneto(genpy.Message):
  _md5sum = "c256b1c1d1ff0cb12a13c36720b3e224"
  _type = "ardrone_autonomy/navdata_magneto"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
float64 drone_time
uint16 tag
uint16 size
int16 mx
int16 my
int16 mz
vector31 magneto_raw
vector31 magneto_rectified
vector31 magneto_offset
float32 heading_unwrapped
float32 heading_gyro_unwrapped
float32 heading_fusion_unwrapped
uint8 magneto_calibration_ok
uint32 magneto_state
float32 magneto_radius
float32 error_mean
float32 error_var

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: ardrone_autonomy/vector31
float32 x
float32 y
float32 z
"""
  __slots__ = ['header','drone_time','tag','size','mx','my','mz','magneto_raw','magneto_rectified','magneto_offset','heading_unwrapped','heading_gyro_unwrapped','heading_fusion_unwrapped','magneto_calibration_ok','magneto_state','magneto_radius','error_mean','error_var']
  _slot_types = ['std_msgs/Header','float64','uint16','uint16','int16','int16','int16','ardrone_autonomy/vector31','ardrone_autonomy/vector31','ardrone_autonomy/vector31','float32','float32','float32','uint8','uint32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,drone_time,tag,size,mx,my,mz,magneto_raw,magneto_rectified,magneto_offset,heading_unwrapped,heading_gyro_unwrapped,heading_fusion_unwrapped,magneto_calibration_ok,magneto_state,magneto_radius,error_mean,error_var

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(navdata_magneto, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.drone_time is None:
        self.drone_time = 0.
      if self.tag is None:
        self.tag = 0
      if self.size is None:
        self.size = 0
      if self.mx is None:
        self.mx = 0
      if self.my is None:
        self.my = 0
      if self.mz is None:
        self.mz = 0
      if self.magneto_raw is None:
        self.magneto_raw = ardrone_autonomy.msg.vector31()
      if self.magneto_rectified is None:
        self.magneto_rectified = ardrone_autonomy.msg.vector31()
      if self.magneto_offset is None:
        self.magneto_offset = ardrone_autonomy.msg.vector31()
      if self.heading_unwrapped is None:
        self.heading_unwrapped = 0.
      if self.heading_gyro_unwrapped is None:
        self.heading_gyro_unwrapped = 0.
      if self.heading_fusion_unwrapped is None:
        self.heading_fusion_unwrapped = 0.
      if self.magneto_calibration_ok is None:
        self.magneto_calibration_ok = 0
      if self.magneto_state is None:
        self.magneto_state = 0
      if self.magneto_radius is None:
        self.magneto_radius = 0.
      if self.error_mean is None:
        self.error_mean = 0.
      if self.error_var is None:
        self.error_var = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.drone_time = 0.
      self.tag = 0
      self.size = 0
      self.mx = 0
      self.my = 0
      self.mz = 0
      self.magneto_raw = ardrone_autonomy.msg.vector31()
      self.magneto_rectified = ardrone_autonomy.msg.vector31()
      self.magneto_offset = ardrone_autonomy.msg.vector31()
      self.heading_unwrapped = 0.
      self.heading_gyro_unwrapped = 0.
      self.heading_fusion_unwrapped = 0.
      self.magneto_calibration_ok = 0
      self.magneto_state = 0
      self.magneto_radius = 0.
      self.error_mean = 0.
      self.error_var = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d2H3h12fBI3f.pack(_x.drone_time, _x.tag, _x.size, _x.mx, _x.my, _x.mz, _x.magneto_raw.x, _x.magneto_raw.y, _x.magneto_raw.z, _x.magneto_rectified.x, _x.magneto_rectified.y, _x.magneto_rectified.z, _x.magneto_offset.x, _x.magneto_offset.y, _x.magneto_offset.z, _x.heading_unwrapped, _x.heading_gyro_unwrapped, _x.heading_fusion_unwrapped, _x.magneto_calibration_ok, _x.magneto_state, _x.magneto_radius, _x.error_mean, _x.error_var))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.magneto_raw is None:
        self.magneto_raw = ardrone_autonomy.msg.vector31()
      if self.magneto_rectified is None:
        self.magneto_rectified = ardrone_autonomy.msg.vector31()
      if self.magneto_offset is None:
        self.magneto_offset = ardrone_autonomy.msg.vector31()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 83
      (_x.drone_time, _x.tag, _x.size, _x.mx, _x.my, _x.mz, _x.magneto_raw.x, _x.magneto_raw.y, _x.magneto_raw.z, _x.magneto_rectified.x, _x.magneto_rectified.y, _x.magneto_rectified.z, _x.magneto_offset.x, _x.magneto_offset.y, _x.magneto_offset.z, _x.heading_unwrapped, _x.heading_gyro_unwrapped, _x.heading_fusion_unwrapped, _x.magneto_calibration_ok, _x.magneto_state, _x.magneto_radius, _x.error_mean, _x.error_var,) = _struct_d2H3h12fBI3f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d2H3h12fBI3f.pack(_x.drone_time, _x.tag, _x.size, _x.mx, _x.my, _x.mz, _x.magneto_raw.x, _x.magneto_raw.y, _x.magneto_raw.z, _x.magneto_rectified.x, _x.magneto_rectified.y, _x.magneto_rectified.z, _x.magneto_offset.x, _x.magneto_offset.y, _x.magneto_offset.z, _x.heading_unwrapped, _x.heading_gyro_unwrapped, _x.heading_fusion_unwrapped, _x.magneto_calibration_ok, _x.magneto_state, _x.magneto_radius, _x.error_mean, _x.error_var))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.magneto_raw is None:
        self.magneto_raw = ardrone_autonomy.msg.vector31()
      if self.magneto_rectified is None:
        self.magneto_rectified = ardrone_autonomy.msg.vector31()
      if self.magneto_offset is None:
        self.magneto_offset = ardrone_autonomy.msg.vector31()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 83
      (_x.drone_time, _x.tag, _x.size, _x.mx, _x.my, _x.mz, _x.magneto_raw.x, _x.magneto_raw.y, _x.magneto_raw.z, _x.magneto_rectified.x, _x.magneto_rectified.y, _x.magneto_rectified.z, _x.magneto_offset.x, _x.magneto_offset.y, _x.magneto_offset.z, _x.heading_unwrapped, _x.heading_gyro_unwrapped, _x.heading_fusion_unwrapped, _x.magneto_calibration_ok, _x.magneto_state, _x.magneto_radius, _x.error_mean, _x.error_var,) = _struct_d2H3h12fBI3f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_d2H3h12fBI3f = struct.Struct("<d2H3h12fBI3f")
