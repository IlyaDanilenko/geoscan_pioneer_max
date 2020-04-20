// Generated by gencpp from file gs_vision/ArUco_array.msg
// DO NOT EDIT!


#ifndef GS_VISION_MESSAGE_ARUCO_ARRAY_H
#define GS_VISION_MESSAGE_ARUCO_ARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gs_vision/ArUco.h>

namespace gs_vision
{
template <class ContainerAllocator>
struct ArUco_array_
{
  typedef ArUco_array_<ContainerAllocator> Type;

  ArUco_array_()
    : arucos()  {
    }
  ArUco_array_(const ContainerAllocator& _alloc)
    : arucos(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gs_vision::ArUco_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gs_vision::ArUco_<ContainerAllocator> >::other >  _arucos_type;
  _arucos_type arucos;





  typedef boost::shared_ptr< ::gs_vision::ArUco_array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_vision::ArUco_array_<ContainerAllocator> const> ConstPtr;

}; // struct ArUco_array_

typedef ::gs_vision::ArUco_array_<std::allocator<void> > ArUco_array;

typedef boost::shared_ptr< ::gs_vision::ArUco_array > ArUco_arrayPtr;
typedef boost::shared_ptr< ::gs_vision::ArUco_array const> ArUco_arrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_vision::ArUco_array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_vision::ArUco_array_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gs_vision

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'gs_vision': ['/home/ubuntu/geoscan_ws/src/gs_vision/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::gs_vision::ArUco_array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_vision::ArUco_array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_vision::ArUco_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_vision::ArUco_array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_vision::ArUco_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_vision::ArUco_array_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_vision::ArUco_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "953ee5206a9a587ec30074fd93cdec00";
  }

  static const char* value(const ::gs_vision::ArUco_array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x953ee5206a9a587eULL;
  static const uint64_t static_value2 = 0xc30074fd93cdec00ULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_vision::ArUco_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_vision/ArUco_array";
  }

  static const char* value(const ::gs_vision::ArUco_array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_vision::ArUco_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ArUco[] arucos\n"
"================================================================================\n"
"MSG: gs_vision/ArUco\n"
"int32 id\n"
"float32 x1\n"
"float32 y1\n"
"float32 x2\n"
"float32 y2\n"
"float32 x3\n"
"float32 y3\n"
"float32 x4\n"
"float32 y4\n"
;
  }

  static const char* value(const ::gs_vision::ArUco_array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_vision::ArUco_array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.arucos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArUco_array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_vision::ArUco_array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_vision::ArUco_array_<ContainerAllocator>& v)
  {
    s << indent << "arucos[]" << std::endl;
    for (size_t i = 0; i < v.arucos.size(); ++i)
    {
      s << indent << "  arucos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gs_vision::ArUco_<ContainerAllocator> >::stream(s, indent + "    ", v.arucos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_VISION_MESSAGE_ARUCO_ARRAY_H
