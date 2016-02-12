// Generated by gencpp from file tum_ardrone/SetInitialReachDistanceResponse.msg
// DO NOT EDIT!


#ifndef TUM_ARDRONE_MESSAGE_SETINITIALREACHDISTANCERESPONSE_H
#define TUM_ARDRONE_MESSAGE_SETINITIALREACHDISTANCERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tum_ardrone
{
template <class ContainerAllocator>
struct SetInitialReachDistanceResponse_
{
  typedef SetInitialReachDistanceResponse_<ContainerAllocator> Type;

  SetInitialReachDistanceResponse_()
    : status(false)  {
    }
  SetInitialReachDistanceResponse_(const ContainerAllocator& _alloc)
    : status(false)  {
    }



   typedef uint8_t _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetInitialReachDistanceResponse_

typedef ::tum_ardrone::SetInitialReachDistanceResponse_<std::allocator<void> > SetInitialReachDistanceResponse;

typedef boost::shared_ptr< ::tum_ardrone::SetInitialReachDistanceResponse > SetInitialReachDistanceResponsePtr;
typedef boost::shared_ptr< ::tum_ardrone::SetInitialReachDistanceResponse const> SetInitialReachDistanceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tum_ardrone

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'tum_ardrone': ['/home/dualboot/AKILAWS/ROSWS/tumws/src/tum_ardrone/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a1255d4d998bd4d6585c64639b5ee9a";
  }

  static const char* value(const ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a1255d4d998bd4dULL;
  static const uint64_t static_value2 = 0x6585c64639b5ee9aULL;
};

template<class ContainerAllocator>
struct DataType< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tum_ardrone/SetInitialReachDistanceResponse";
  }

  static const char* value(const ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool status\n\
\n\
\n\
";
  }

  static const char* value(const ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetInitialReachDistanceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tum_ardrone::SetInitialReachDistanceResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUM_ARDRONE_MESSAGE_SETINITIALREACHDISTANCERESPONSE_H
