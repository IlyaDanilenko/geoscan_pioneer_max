// Generated by gencpp from file gs_service/Alt.msg
// DO NOT EDIT!


#ifndef GS_SERVICE_MESSAGE_ALT_H
#define GS_SERVICE_MESSAGE_ALT_H

#include <ros/service_traits.h>


#include <gs_service/AltRequest.h>
#include <gs_service/AltResponse.h>


namespace gs_service
{

struct Alt
{

typedef AltRequest Request;
typedef AltResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Alt
} // namespace gs_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gs_service::Alt > {
  static const char* value()
  {
    return "6e65a95f8aa933dff5e33d16e05a9392";
  }

  static const char* value(const ::gs_service::Alt&) { return value(); }
};

template<>
struct DataType< ::gs_service::Alt > {
  static const char* value()
  {
    return "gs_service/Alt";
  }

  static const char* value(const ::gs_service::Alt&) { return value(); }
};


// service_traits::MD5Sum< ::gs_service::AltRequest> should match 
// service_traits::MD5Sum< ::gs_service::Alt > 
template<>
struct MD5Sum< ::gs_service::AltRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Alt >::value();
  }
  static const char* value(const ::gs_service::AltRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::AltRequest> should match 
// service_traits::DataType< ::gs_service::Alt > 
template<>
struct DataType< ::gs_service::AltRequest>
{
  static const char* value()
  {
    return DataType< ::gs_service::Alt >::value();
  }
  static const char* value(const ::gs_service::AltRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gs_service::AltResponse> should match 
// service_traits::MD5Sum< ::gs_service::Alt > 
template<>
struct MD5Sum< ::gs_service::AltResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gs_service::Alt >::value();
  }
  static const char* value(const ::gs_service::AltResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gs_service::AltResponse> should match 
// service_traits::DataType< ::gs_service::Alt > 
template<>
struct DataType< ::gs_service::AltResponse>
{
  static const char* value()
  {
    return DataType< ::gs_service::Alt >::value();
  }
  static const char* value(const ::gs_service::AltResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GS_SERVICE_MESSAGE_ALT_H
