; Auto-generated. Do not edit!


(cl:in-package ardrone_autonomy-msg)


;//! \htmlinclude navdata_vision_of.msg.html

(cl:defclass <navdata_vision_of> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (drone_time
    :reader drone_time
    :initarg :drone_time
    :type cl:float
    :initform 0.0)
   (tag
    :reader tag
    :initarg :tag
    :type cl:fixnum
    :initform 0)
   (size
    :reader size
    :initarg :size
    :type cl:fixnum
    :initform 0)
   (of_dx
    :reader of_dx
    :initarg :of_dx
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (of_dy
    :reader of_dy
    :initarg :of_dy
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass navdata_vision_of (<navdata_vision_of>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <navdata_vision_of>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'navdata_vision_of)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ardrone_autonomy-msg:<navdata_vision_of> is deprecated: use ardrone_autonomy-msg:navdata_vision_of instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:header-val is deprecated.  Use ardrone_autonomy-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'drone_time-val :lambda-list '(m))
(cl:defmethod drone_time-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:drone_time-val is deprecated.  Use ardrone_autonomy-msg:drone_time instead.")
  (drone_time m))

(cl:ensure-generic-function 'tag-val :lambda-list '(m))
(cl:defmethod tag-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:tag-val is deprecated.  Use ardrone_autonomy-msg:tag instead.")
  (tag m))

(cl:ensure-generic-function 'size-val :lambda-list '(m))
(cl:defmethod size-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:size-val is deprecated.  Use ardrone_autonomy-msg:size instead.")
  (size m))

(cl:ensure-generic-function 'of_dx-val :lambda-list '(m))
(cl:defmethod of_dx-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:of_dx-val is deprecated.  Use ardrone_autonomy-msg:of_dx instead.")
  (of_dx m))

(cl:ensure-generic-function 'of_dy-val :lambda-list '(m))
(cl:defmethod of_dy-val ((m <navdata_vision_of>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ardrone_autonomy-msg:of_dy-val is deprecated.  Use ardrone_autonomy-msg:of_dy instead.")
  (of_dy m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <navdata_vision_of>) ostream)
  "Serializes a message object of type '<navdata_vision_of>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'drone_time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'tag)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'tag)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'size)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'size)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'of_dx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'of_dx))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'of_dy))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'of_dy))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <navdata_vision_of>) istream)
  "Deserializes a message object of type '<navdata_vision_of>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drone_time) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'tag)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'tag)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'size)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'size)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'of_dx) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'of_dx)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'of_dy) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'of_dy)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<navdata_vision_of>)))
  "Returns string type for a message object of type '<navdata_vision_of>"
  "ardrone_autonomy/navdata_vision_of")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'navdata_vision_of)))
  "Returns string type for a message object of type 'navdata_vision_of"
  "ardrone_autonomy/navdata_vision_of")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<navdata_vision_of>)))
  "Returns md5sum for a message object of type '<navdata_vision_of>"
  "76d31747173a842fbf71db03104edecd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'navdata_vision_of)))
  "Returns md5sum for a message object of type 'navdata_vision_of"
  "76d31747173a842fbf71db03104edecd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<navdata_vision_of>)))
  "Returns full string definition for message of type '<navdata_vision_of>"
  (cl:format cl:nil "Header header~%float64 drone_time~%uint16 tag~%uint16 size~%float32[] of_dx~%float32[] of_dy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'navdata_vision_of)))
  "Returns full string definition for message of type 'navdata_vision_of"
  (cl:format cl:nil "Header header~%float64 drone_time~%uint16 tag~%uint16 size~%float32[] of_dx~%float32[] of_dy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <navdata_vision_of>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
     2
     2
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'of_dx) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'of_dy) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <navdata_vision_of>))
  "Converts a ROS message object to a list"
  (cl:list 'navdata_vision_of
    (cl:cons ':header (header msg))
    (cl:cons ':drone_time (drone_time msg))
    (cl:cons ':tag (tag msg))
    (cl:cons ':size (size msg))
    (cl:cons ':of_dx (of_dx msg))
    (cl:cons ':of_dy (of_dy msg))
))
