// Generated by gencpp from file gs_service/RangeResponse.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_RANGERESPONSE_H
#define GS_SERVICE_MESSAGE_RANGERESPONSE_H


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
struct RangeResponse_
{
  typedef RangeResponse_<ContainerAllocator> Type;

  RangeResponse_()
    : distance1(0.0)
    , distance2(0.0)
    , distance3(0.0)
    , distance4(0.0)
    , distance5(0.0)  {
    }
  RangeResponse_(const ContainerAllocator& _alloc)
    : distance1(0.0)
    , distance2(0.0)
    , distance3(0.0)
    , distance4(0.0)
    , distance5(0.0)  {
  (void)_alloc;
    }



   typedef float _distance1_type;
  _distance1_type distance1;

   typedef float _distance2_type;
  _distance2_type distance2;

   typedef float _distance3_type;
  _distance3_type distance3;

   typedef float _distance4_type;
  _distance4_type distance4;

   typedef float _distance5_type;
  _distance5_type distance5;





  typedef boost::shared_ptr< ::gs_service::RangeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::RangeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RangeResponse_

typedef ::gs_service::RangeResponse_<std::allocator<void> > RangeResponse;

typedef boost::shared_ptr< ::gs_service::RangeResponse > RangeResponsePtr;
typedef boost::shared_ptr< ::gs_service::RangeResponse const> RangeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::RangeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::RangeResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsMessage< ::gs_service::RangeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::RangeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::RangeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::RangeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::RangeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::RangeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::RangeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22fa633ab47d5522f6597a4b0a3bd94d";
  }

  static const char* value(const ::gs_service::RangeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22fa633ab47d5522ULL;
  static const uint64_t static_value2 = 0xf6597a4b0a3bd94dULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::RangeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/RangeResponse";
  }

  static const char* value(const ::gs_service::RangeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::RangeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 distance1\n"
"float32 distance2\n"
"float32 distance3\n"
"float32 distance4\n"
"float32 distance5\n"
;
  }

  static const char* value(const ::gs_service::RangeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::RangeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance1);
      stream.next(m.distance2);
      stream.next(m.distance3);
      stream.next(m.distance4);
      stream.next(m.distance5);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RangeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::RangeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_service::RangeResponse_<ContainerAllocator>& v)
  {
    s << indent << "distance1: ";
    Printer<float>::stream(s, indent + "  ", v.distance1);
    s << indent << "distance2: ";
    Printer<float>::stream(s, indent + "  ", v.distance2);
    s << indent << "distance3: ";
    Printer<float>::stream(s, indent + "  ", v.distance3);
    s << indent << "distance4: ";
    Printer<float>::stream(s, indent + "  ", v.distance4);
    s << indent << "distance5: ";
    Printer<float>::stream(s, indent + "  ", v.distance5);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_RANGERESPONSE_H
