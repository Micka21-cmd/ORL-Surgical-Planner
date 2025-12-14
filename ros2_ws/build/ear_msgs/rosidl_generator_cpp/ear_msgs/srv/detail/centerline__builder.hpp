// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/centerline.hpp"


#ifndef EAR_MSGS__SRV__DETAIL__CENTERLINE__BUILDER_HPP_
#define EAR_MSGS__SRV__DETAIL__CENTERLINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ear_msgs/srv/detail/centerline__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Centerline_Request_mask_path
{
public:
  Init_Centerline_Request_mask_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::srv::Centerline_Request mask_path(::ear_msgs::srv::Centerline_Request::_mask_path_type arg)
  {
    msg_.mask_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Centerline_Request>()
{
  return ear_msgs::srv::builder::Init_Centerline_Request_mask_path();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Centerline_Response_sdf_path
{
public:
  explicit Init_Centerline_Response_sdf_path(::ear_msgs::srv::Centerline_Response & msg)
  : msg_(msg)
  {}
  ::ear_msgs::srv::Centerline_Response sdf_path(::ear_msgs::srv::Centerline_Response::_sdf_path_type arg)
  {
    msg_.sdf_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Response msg_;
};

class Init_Centerline_Response_centerline
{
public:
  Init_Centerline_Response_centerline()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Centerline_Response_sdf_path centerline(::ear_msgs::srv::Centerline_Response::_centerline_type arg)
  {
    msg_.centerline = std::move(arg);
    return Init_Centerline_Response_sdf_path(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Centerline_Response>()
{
  return ear_msgs::srv::builder::Init_Centerline_Response_centerline();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Centerline_Event_response
{
public:
  explicit Init_Centerline_Event_response(::ear_msgs::srv::Centerline_Event & msg)
  : msg_(msg)
  {}
  ::ear_msgs::srv::Centerline_Event response(::ear_msgs::srv::Centerline_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Event msg_;
};

class Init_Centerline_Event_request
{
public:
  explicit Init_Centerline_Event_request(::ear_msgs::srv::Centerline_Event & msg)
  : msg_(msg)
  {}
  Init_Centerline_Event_response request(::ear_msgs::srv::Centerline_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Centerline_Event_response(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Event msg_;
};

class Init_Centerline_Event_info
{
public:
  Init_Centerline_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Centerline_Event_request info(::ear_msgs::srv::Centerline_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Centerline_Event_request(msg_);
  }

private:
  ::ear_msgs::srv::Centerline_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Centerline_Event>()
{
  return ear_msgs::srv::builder::Init_Centerline_Event_info();
}

}  // namespace ear_msgs

#endif  // EAR_MSGS__SRV__DETAIL__CENTERLINE__BUILDER_HPP_
