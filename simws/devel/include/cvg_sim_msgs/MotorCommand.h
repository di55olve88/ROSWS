/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg
 *
 */


#ifndef CVG_SIM_MSGS_MESSAGE_MOTORCOMMAND_H
#define CVG_SIM_MSGS_MESSAGE_MOTORCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cvg_sim_msgs
{
template <class ContainerAllocator>
struct MotorCommand_
{
  typedef MotorCommand_<ContainerAllocator> Type;

  MotorCommand_()
    : header()
    , force()
    , torque()
    , frequency()
    , voltage()  {
    }
  MotorCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , force(_alloc)
    , torque(_alloc)
    , frequency(_alloc)
    , voltage(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _force_type;
  _force_type force;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _torque_type;
  _torque_type torque;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _frequency_type;
  _frequency_type frequency;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _voltage_type;
  _voltage_type voltage;




  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> const> ConstPtr;

}; // struct MotorCommand_

typedef ::cvg_sim_msgs::MotorCommand_<std::allocator<void> > MotorCommand;

typedef boost::shared_ptr< ::cvg_sim_msgs::MotorCommand > MotorCommandPtr;
typedef boost::shared_ptr< ::cvg_sim_msgs::MotorCommand const> MotorCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cvg_sim_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cvg_sim_msgs': ['/home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccd4d4d4606731d1c73409e9bfa55808";
  }

  static const char* value(const ::cvg_sim_msgs::MotorCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccd4d4d4606731d1ULL;
  static const uint64_t static_value2 = 0xc73409e9bfa55808ULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cvg_sim_msgs/MotorCommand";
  }

  static const char* value(const ::cvg_sim_msgs::MotorCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32[] force\n\
float32[] torque\n\
float32[] frequency\n\
float32[] voltage\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::cvg_sim_msgs::MotorCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.force);
      stream.next(m.torque);
      stream.next(m.frequency);
      stream.next(m.voltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MotorCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_msgs::MotorCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cvg_sim_msgs::MotorCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "force[]" << std::endl;
    for (size_t i = 0; i < v.force.size(); ++i)
    {
      s << indent << "  force[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.force[i]);
    }
    s << indent << "torque[]" << std::endl;
    for (size_t i = 0; i < v.torque.size(); ++i)
    {
      s << indent << "  torque[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.torque[i]);
    }
    s << indent << "frequency[]" << std::endl;
    for (size_t i = 0; i < v.frequency.size(); ++i)
    {
      s << indent << "  frequency[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.frequency[i]);
    }
    s << indent << "voltage[]" << std::endl;
    for (size_t i = 0; i < v.voltage.size(); ++i)
    {
      s << indent << "  voltage[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.voltage[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_MSGS_MESSAGE_MOTORCOMMAND_H
