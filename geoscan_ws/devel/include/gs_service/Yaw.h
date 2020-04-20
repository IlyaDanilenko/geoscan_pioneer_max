// Generated by gencpp from file gs_service/Yaw.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_YAW_H
#define GS_SERVICE_MESSAGE_YAW_H

#include <ros/service_traits.h>


#include <gs_service/YawRequest.h>
#include <gs_service/YawResponse.h>


namespace gs_service
{

struct Yaw
{

typedef YawRequest Request;
typedef YawResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Yaw
} // namespace gs_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gs_service::Yaw > {
  static const char* value()
  {
    return "d9f1e2fc8e87220228024457fb6ab7f5";
  }

  static const char* value(const ::gs_service::Yaw&) { return value(); }
};

template<>
struct DataType< ::gs_service::Yaw > {
  static const char* value()
  {
    return "gs_service/Yaw";
  }

  static const char* value(const ::gs_service::Yaw&) { return value(); }
};


// service_traits::MD5Sum< ::gs_service::YawRequest> should match 
// service_traits::MD5Sum< ::gs_service::Yaw > 
template<>
struct MD5Sum< ::gs_service::YawRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Yaw >::value();
  }
  static const char* value(const ::gs_service::YawRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::YawRequest> should match 
// service_traits::DataType< ::gs_service::Yaw > 
template<>
struct DataType< ::gs_service::YawRequest>
{
  static const char* value()
  {
    return DataType< ::gs_service::Yaw >::value();
  }
  static const char* value(const ::gs_service::YawRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gs_service::YawResponse> should match 
// service_traits::MD5Sum< ::gs_service::Yaw > 
template<>
struct MD5Sum< ::gs_service::YawResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Yaw >::value();
  }
  static const char* value(const ::gs_service::YawResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::YawResponse> should match 
// service_traits::DataType< ::gs_service::Yaw > 
template<>
struct DataType< ::gs_service::YawResponse>
{
  static const char* value()
  {
    return DataType< ::gs_service::Yaw >::value();
  }
  static const char* value(const ::gs_service::YawResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GS_SERVICE_MESSAGE_YAW_H
