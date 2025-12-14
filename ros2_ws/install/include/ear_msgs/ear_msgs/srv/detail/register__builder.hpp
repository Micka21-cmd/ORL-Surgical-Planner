// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ear_msgs:srv/Register.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/register.hpp"


#ifndef EAR_MSGS__SRV__DETAIL__REGISTER__BUILDER_HPP_
#define EAR_MSGS__SRV__DETAIL__REGISTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ear_msgs/srv/detail/register__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Register_Request_mesh_path
{
public:
  Init_Register_Request_mesh_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::srv::Register_Request mesh_path(::ear_msgs::srv::Register_Request::_mesh_path_type arg)
  {
    msg_.mesh_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Register_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Register_Request>()
{
  return ear_msgs::srv::builder::Init_Register_Request_mesh_path();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Register_Response_mri_to_world
{
public:
  Init_Register_Response_mri_to_world()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::srv::Register_Response mri_to_world(::ear_msgs::srv::Register_Response::_mri_to_world_type arg)
  {
    msg_.mri_to_world = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Register_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Register_Response>()
{
  return ear_msgs::srv::builder::Init_Register_Response_mri_to_world();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace srv
{

namespace builder
{

class Init_Register_Event_response
{
public:
  explicit Init_Register_Event_response(::ear_msgs::srv::Register_Event & msg)
  : msg_(msg)
  {}
  ::ear_msgs::srv::Register_Event response(::ear_msgs::srv::Register_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::srv::Register_Event msg_;
};

class Init_Register_Event_request
{
public:
  explicit Init_Register_Event_request(::ear_msgs::srv::Register_Event & msg)
  : msg_(msg)
  {}
  Init_Register_Event_response request(::ear_msgs::srv::Register_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Register_Event_response(msg_);
  }

private:
  ::ear_msgs::srv::Register_Event msg_;
};

class Init_Register_Event_info
{
public:
  Init_Register_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Register_Event_request info(::ear_msgs::srv::Register_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Register_Event_request(msg_);
  }

private:
  ::ear_msgs::srv::Register_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::srv::Register_Event>()
{
  return ear_msgs::srv::builder::Init_Register_Event_info();
}

}  // namespace ear_msgs

#endif  // EAR_MSGS__SRV__DETAIL__REGISTER__BUILDER_HPP_
