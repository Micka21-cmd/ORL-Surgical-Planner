// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ear_msgs:srv/SegmentEar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/segment_ear.hpp"


#ifndef EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__BUILDER_HPP_
#define EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ear_msgs/srv/detail/segment_ear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_SegmentEar_Request_mri_path
{
public:
  Init_SegmentEar_Request_mri_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::srv::SegmentEar_Request mri_path(::ear_msgs::srv::SegmentEar_Request::_mri_path_type arg)
  {
    msg_.mri_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::SegmentEar_Request>()
{
  return ear_msgs::srv::builder::Init_SegmentEar_Request_mri_path();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_SegmentEar_Response_mesh_path
{
public:
  explicit Init_SegmentEar_Response_mesh_path(::ear_msgs::srv::SegmentEar_Response & msg)
  : msg_(msg)
  {}
  ::ear_msgs::srv::SegmentEar_Response mesh_path(::ear_msgs::srv::SegmentEar_Response::_mesh_path_type arg)
  {
    msg_.mesh_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Response msg_;
};

class Init_SegmentEar_Response_mask_path
{
public:
  Init_SegmentEar_Response_mask_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegmentEar_Response_mesh_path mask_path(::ear_msgs::srv::SegmentEar_Response::_mask_path_type arg)
  {
    msg_.mask_path = std::move(arg);
    return Init_SegmentEar_Response_mesh_path(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::SegmentEar_Response>()
{
  return ear_msgs::srv::builder::Init_SegmentEar_Response_mask_path();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_SegmentEar_Event_response
{
public:
  explicit Init_SegmentEar_Event_response(::ear_msgs::srv::SegmentEar_Event & msg)
  : msg_(msg)
  {}
  ::ear_msgs::srv::SegmentEar_Event response(::ear_msgs::srv::SegmentEar_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Event msg_;
};

class Init_SegmentEar_Event_request
{
public:
  explicit Init_SegmentEar_Event_request(::ear_msgs::srv::SegmentEar_Event & msg)
  : msg_(msg)
  {}
  Init_SegmentEar_Event_response request(::ear_msgs::srv::SegmentEar_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SegmentEar_Event_response(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Event msg_;
};

class Init_SegmentEar_Event_info
{
public:
  Init_SegmentEar_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegmentEar_Event_request info(::ear_msgs::srv::SegmentEar_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SegmentEar_Event_request(msg_);
  }

private:
  ::ear_msgs::srv::SegmentEar_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::SegmentEar_Event>()
{
  return ear_msgs::srv::builder::Init_SegmentEar_Event_info();
}

}  // namespace ear_msgs

#endif  // EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__BUILDER_HPP_
