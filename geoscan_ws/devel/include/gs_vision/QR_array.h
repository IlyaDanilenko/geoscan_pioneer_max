// Generated by gencpp from file gs_vision/QR_array.msg
// DO NOT EDIT!


#ifndef GS_VISION_MESSAGE_QR_ARRAY_H
#define GS_VISION_MESSAGE_QR_ARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gs_vision/QR.h>

namespace gs_vision
{
template <class ContainerAllocator>
struct QR_array_
{
  typedef QR_array_<ContainerAllocator> Type;

  QR_array_()
    : qrs()  {
    }
  QR_array_(const ContainerAllocator& _alloc)
    : qrs(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gs_vision::QR_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gs_vision::QR_<ContainerAllocator> >::other >  _qrs_type;
  _qrs_type qrs;





  typedef boost::shared_ptr< ::gs_vision::QR_array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gs_vision::QR_array_<ContainerAllocator> const> ConstPtr;

}; // struct QR_array_

typedef ::gs_vision::QR_array_<std::allocator<void> > QR_array;

typedef boost::shared_ptr< ::gs_vision::QR_array > QR_arrayPtr;
typedef boost::shared_ptr< ::gs_vision::QR_array const> QR_arrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gs_vision::QR_array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gs_vision::QR_array_<ContainerAllocator> >::stream(s, "", v);
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
struct IsMessage< ::gs_vision::QR_array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gs_vision::QR_array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_vision::QR_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gs_vision::QR_array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_vision::QR_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gs_vision::QR_array_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gs_vision::QR_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2cc8666bc7a2bbd9d5b119ac5932231";
  }

  static const char* value(const ::gs_vision::QR_array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2cc8666bc7a2bbdULL;
  static const uint64_t static_value2 = 0x9d5b119ac5932231ULL;
};

template<class ContainerAllocator>
struct DataType< ::gs_vision::QR_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gs_vision/QR_array";
  }

  static const char* value(const ::gs_vision::QR_array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gs_vision::QR_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "QR[] qrs\n"
"================================================================================\n"
"MSG: gs_vision/QR\n"
"string data\n"
"int32 left\n"
"int32 top\n"
"int32 width\n"
"int32 height\n"
"int32 x1\n"
"int32 y1\n"
"int32 x2\n"
"int32 y2\n"
"int32 x3\n"
"int32 y3\n"
"int32 x4\n"
"int32 y4\n"
;
  }

  static const char* value(const ::gs_vision::QR_array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gs_vision::QR_array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.qrs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QR_array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gs_vision::QR_array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gs_vision::QR_array_<ContainerAllocator>& v)
  {
    s << indent << "qrs[]" << std::endl;
    for (size_t i = 0; i < v.qrs.size(); ++i)
    {
      s << indent << "  qrs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gs_vision::QR_<ContainerAllocator> >::stream(s, indent + "    ", v.qrs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GS_VISION_MESSAGE_QR_ARRAY_H
