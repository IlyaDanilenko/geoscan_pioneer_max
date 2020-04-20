// Generated by gencpp from file gs_service/LedRequest.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_LEDREQUEST_H
#define GS_SERVICE_MESSAGE_LEDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gs_service/RGBgs.h>

namespace gs_service
{
template <class ContainerAllocator>
struct LedRequest_
{
  typedef LedRequest_<ContainerAllocator> Type;

  LedRequest_()
    : leds()  {
    }
  LedRequest_(const ContainerAllocator& _alloc)
    : leds(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gs_service::RGBgs_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gs_service::RGBgs_<ContainerAllocator> >::other >  _leds_type;
  _leds_type leds;





  typedef boost::shared_ptr< ::gs_service::LedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::LedRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LedRequest_

typedef ::gs_service::LedRequest_<std::allocator<void> > LedRequest;

typedef boost::shared_ptr< ::gs_service::LedRequest > LedRequestPtr;
typedef boost::shared_ptr< ::gs_service::LedRequest const> LedRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::LedRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::LedRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gs_service

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'gs_service': ['/home/ubuntu/geoscan_ws/src/gs_service/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::gs_service::LedRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::LedRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::LedRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::LedRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::LedRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::LedRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::LedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf20082c082835cb52b25d207098d8e0";
  }

  static const char* value(const ::gs_service::LedRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf20082c082835cbULL;
  static const uint64_t static_value2 = 0x52b25d207098d8e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::LedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/LedRequest";
  }

  static const char* value(const ::gs_service::LedRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::LedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RGBgs[] leds\n"
"\n"
"\n"
"================================================================================\n"
"MSG: gs_service/RGBgs\n"
"bool r\n"
"bool g\n"
"bool b\n"
;
  }

  static const char* value(const ::gs_service::LedRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::LedRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leds);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::LedRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_service::LedRequest_<ContainerAllocator>& v)
  {
    s << indent << "leds[]" << std::endl;
    for (size_t i = 0; i < v.leds.size(); ++i)
    {
      s << indent << "  leds[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gs_service::RGBgs_<ContainerAllocator> >::stream(s, indent + "    ", v.leds[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_LEDREQUEST_H
