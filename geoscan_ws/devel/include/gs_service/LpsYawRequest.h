// Generated by gencpp from file gs_service/LpsYawRequest.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_LPSYAWREQUEST_H
#define GS_SERVICE_MESSAGE_LPSYAWREQUEST_H


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
struct LpsYawRequest_
{
  typedef LpsYawRequest_<ContainerAllocator> Type;

  LpsYawRequest_()
    {
    }
  LpsYawRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::gs_service::LpsYawRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::LpsYawRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LpsYawRequest_

typedef ::gs_service::LpsYawRequest_<std::allocator<void> > LpsYawRequest;

typedef boost::shared_ptr< ::gs_service::LpsYawRequest > LpsYawRequestPtr;
typedef boost::shared_ptr< ::gs_service::LpsYawRequest const> LpsYawRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::LpsYawRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::LpsYawRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsMessage< ::gs_service::LpsYawRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::LpsYawRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::LpsYawRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::LpsYawRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::LpsYawRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::LpsYawRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::LpsYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::gs_service::LpsYawRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::LpsYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/LpsYawRequest";
  }

  static const char* value(const ::gs_service::LpsYawRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::LpsYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::gs_service::LpsYawRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::LpsYawRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LpsYawRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::LpsYawRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::gs_service::LpsYawRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_LPSYAWREQUEST_H
