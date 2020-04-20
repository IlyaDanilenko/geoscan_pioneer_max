// Generated by gencpp from file gs_service/AclResponse.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_ACLRESPONSE_H
#define GS_SERVICE_MESSAGE_ACLRESPONSE_H


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
struct AclResponse_
{
  typedef AclResponse_<ContainerAllocator> Type;

  AclResponse_()
    : ax(0.0)
    , ay(0.0)
    , az(0.0)  {
    }
  AclResponse_(const ContainerAllocator& _alloc)
    : ax(0.0)
    , ay(0.0)
    , az(0.0)  {
  (void)_alloc;
    }



   typedef float _ax_type;
  _ax_type ax;

   typedef float _ay_type;
  _ay_type ay;

   typedef float _az_type;
  _az_type az;





  typedef boost::shared_ptr< ::gs_service::AclResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_service::AclResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AclResponse_

typedef ::gs_service::AclResponse_<std::allocator<void> > AclResponse;

typedef boost::shared_ptr< ::gs_service::AclResponse > AclResponsePtr;
typedef boost::shared_ptr< ::gs_service::AclResponse const> AclResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_service::AclResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_service::AclResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsMessage< ::gs_service::AclResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_service::AclResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::AclResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_service::AclResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::AclResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_service::AclResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_service::AclResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4db697ac4c812d3e6d71960ec5bffe0c";
  }

  static const char* value(const ::gs_service::AclResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4db697ac4c812d3eULL;
  static const uint64_t static_value2 = 0x6d71960ec5bffe0cULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_service::AclResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_service/AclResponse";
  }

  static const char* value(const ::gs_service::AclResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_service::AclResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 ax\n"
"float32 ay\n"
"float32 az\n"
;
  }

  static const char* value(const ::gs_service::AclResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_service::AclResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ax);
      stream.next(m.ay);
      stream.next(m.az);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AclResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_service::AclResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_service::AclResponse_<ContainerAllocator>& v)
  {
    s << indent << "ax: ";
    Printer<float>::stream(s, indent + "  ", v.ax);
    s << indent << "ay: ";
    Printer<float>::stream(s, indent + "  ", v.ay);
    s << indent << "az: ";
    Printer<float>::stream(s, indent + "  ", v.az);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_SERVICE_MESSAGE_ACLRESPONSE_H
