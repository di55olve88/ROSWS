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
 * Auto-generated by genmsg_cpp from file /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins/srv/SetBias.srv
 *
 */


#ifndef CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIASREQUEST_H
#define CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIASREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace cvg_sim_gazebo_plugins
{
template <class ContainerAllocator>
struct SetBiasRequest_
{
  typedef SetBiasRequest_<ContainerAllocator> Type;

  SetBiasRequest_()
    : bias()  {
    }
  SetBiasRequest_(const ContainerAllocator& _alloc)
    : bias(_alloc)  {
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bias_type;
  _bias_type bias;




  typedef boost::shared_ptr< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetBiasRequest_

typedef ::cvg_sim_gazebo_plugins::SetBiasRequest_<std::allocator<void> > SetBiasRequest;

typedef boost::shared_ptr< ::cvg_sim_gazebo_plugins::SetBiasRequest > SetBiasRequestPtr;
typedef boost::shared_ptr< ::cvg_sim_gazebo_plugins::SetBiasRequest const> SetBiasRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cvg_sim_gazebo_plugins

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af1f260075d9ba9bd73ca10c6a45df07";
  }

  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf1f260075d9ba9bULL;
  static const uint64_t static_value2 = 0xd73ca10c6a45df07ULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cvg_sim_gazebo_plugins/SetBiasRequest";
  }

  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 bias\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bias);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetBiasRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cvg_sim_gazebo_plugins::SetBiasRequest_<ContainerAllocator>& v)
  {
    s << indent << "bias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.bias);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIASREQUEST_H
