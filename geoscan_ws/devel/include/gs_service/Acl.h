// Generated by gencpp from file gs_service/Acl.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_ACL_H
#define GS_SERVICE_MESSAGE_ACL_H

#include <ros/service_traits.h>


#include <gs_service/AclRequest.h>
#include <gs_service/AclResponse.h>


namespace gs_service
{

struct Acl
{

typedef AclRequest Request;
typedef AclResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Acl
} // namespace gs_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gs_service::Acl > {
  static const char* value()
  {
    return "4db697ac4c812d3e6d71960ec5bffe0c";
  }

  static const char* value(const ::gs_service::Acl&) { return value(); }
};

template<>
struct DataType< ::gs_service::Acl > {
  static const char* value()
  {
    return "gs_service/Acl";
  }

  static const char* value(const ::gs_service::Acl&) { return value(); }
};


// service_traits::MD5Sum< ::gs_service::AclRequest> should match 
// service_traits::MD5Sum< ::gs_service::Acl > 
template<>
struct MD5Sum< ::gs_service::AclRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Acl >::value();
  }
  static const char* value(const ::gs_service::AclRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::AclRequest> should match 
// service_traits::DataType< ::gs_service::Acl > 
template<>
struct DataType< ::gs_service::AclRequest>
{
  static const char* value()
  {
    return DataType< ::gs_service::Acl >::value();
  }
  static const char* value(const ::gs_service::AclRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gs_service::AclResponse> should match 
// service_traits::MD5Sum< ::gs_service::Acl > 
template<>
struct MD5Sum< ::gs_service::AclResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Acl >::value();
  }
  static const char* value(const ::gs_service::AclResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::AclResponse> should match 
// service_traits::DataType< ::gs_service::Acl > 
template<>
struct DataType< ::gs_service::AclResponse>
{
  static const char* value()
  {
    return DataType< ::gs_service::Acl >::value();
  }
  static const char* value(const ::gs_service::AclResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GS_SERVICE_MESSAGE_ACL_H
