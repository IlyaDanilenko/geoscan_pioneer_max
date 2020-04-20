// Generated by gencpp from file gs_service/GyroResponse.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_GYRORESPONSE_H
#define GS_SERVICE_MESSAGE_GYRORESPONSE_H


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
struct GyroResponse_
{
  typedef GyroResponse_<ContainerAllocator> Type;

  GyroResponse_()
    : gx(0.0)
    , gy(0.0)
    , gz(0.0)  {
    }
  GyroResponse_(const ContainerAllocator& _alloc)
    : gx(0.0)
    , gy(0.0)
    , gz(0.0)  {
  (void)_alloc;
    }



   typedef float _gx_type;
  _gx_type gx;

   typedef float _gy_type;
  _gy_type gy;

   typedef float _gz_type;
  _gz_type gz;





  typedef boost::shared_ptr< ::gs_service::GyroResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::GyroResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GyroResponse_

typedef ::gs_service::GyroResponse_<std::allocator<void> > GyroResponse;

typedef boost::shared_ptr< ::gs_service::GyroResponse > GyroResponsePtr;
typedef boost::shared_ptr< ::gs_service::GyroResponse const> GyroResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::GyroResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::GyroResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsMessage< ::gs_service::GyroResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::GyroResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::GyroResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::GyroResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::GyroResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::GyroResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::GyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33b4fb692079f88afc254f2cb9ee8d63";
  }

  static const char* value(const ::gs_service::GyroResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33b4fb692079f88aULL;
  static const uint64_t static_value2 = 0xfc254f2cb9ee8d63ULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::GyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/GyroResponse";
  }

  static const char* value(const ::gs_service::GyroResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::GyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 gx\n"
"float32 gy\n"
"float32 gz\n"
;
  }

  static const char* value(const ::gs_service::GyroResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::GyroResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gx);
      stream.next(m.gy);
      stream.next(m.gz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GyroResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::GyroResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_service::GyroResponse_<ContainerAllocator>& v)
  {
    s << indent << "gx: ";
    Printer<float>::stream(s, indent + "  ", v.gx);
    s << indent << "gy: ";
    Printer<float>::stream(s, indent + "  ", v.gy);
    s << indent << "gz: ";
    Printer<float>::stream(s, indent + "  ", v.gz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_GYRORESPONSE_H
