// Generated by gencpp from file gs_service/PosResponse.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_POSRESPONSE_H
#define GS_SERVICE_MESSAGE_POSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gs_service
{
template <class ContainerAllocator>
struct PosResponse_
{
  typedef PosResponse_<ContainerAllocator> Type;

  PosResponse_()
    : status(false)  {
    }
  PosResponse_(const ContainerAllocator& _alloc)
    : status(false)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::gs_service::PosResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::PosResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PosResponse_

typedef ::gs_service::PosResponse_<std::allocator<void> > PosResponse;

typedef boost::shared_ptr< ::gs_service::PosResponse > PosResponsePtr;
typedef boost::shared_ptr< ::gs_service::PosResponse const> PosResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::PosResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::PosResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gs_service

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'gs_service': ['/home/ubuntu/geoscan_ws/src/gs_service/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::gs_service::PosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::PosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::PosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::PosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::PosResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::PosResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::PosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a1255d4d998bd4d6585c64639b5ee9a";
  }

  static const char* value(const ::gs_service::PosResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a1255d4d998bd4dULL;
  static const uint64_t static_value2 = 0x6585c64639b5ee9aULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::PosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/PosResponse";
  }

  static const char* value(const ::gs_service::PosResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::PosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool status\n"
;
  }

  static const char* value(const ::gs_service::PosResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::PosResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PosResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::PosResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_service::PosResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_POSRESPONSE_H
