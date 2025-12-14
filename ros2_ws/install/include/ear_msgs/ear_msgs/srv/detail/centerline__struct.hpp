// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ear_msgs:srv/Centerline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/centerline.hpp"


#ifndef EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_HPP_
#define EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ear_msgs__srv__Centerline_Request __attribute__((deprecated))
#else
# define DEPRECATED__ear_msgs__srv__Centerline_Request __declspec(deprecated)
#endif

namespace ear_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Centerline_Request_
{
  using Type = Centerline_Request_<ContainerAllocator>;

  explicit Centerline_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mask_path = "";
    }
  }

  explicit Centerline_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mask_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mask_path = "";
    }
  }

  // field types and members
  using _mask_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mask_path_type mask_path;

  // setters for named parameter idiom
  Type & set__mask_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mask_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ear_msgs::srv::Centerline_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ear_msgs::srv::Centerline_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ear_msgs__srv__Centerline_Request
    std::shared_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ear_msgs__srv__Centerline_Request
    std::shared_ptr<ear_msgs::srv::Centerline_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Centerline_Request_ & other) const
  {
    if (this->mask_path != other.mask_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Centerline_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Centerline_Request_

// alias to use template instance with default allocator
using Centerline_Request =
  ear_msgs::srv::Centerline_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ear_msgs


// Include directives for member types
// Member 'centerline'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ear_msgs__srv__Centerline_Response __attribute__((deprecated))
#else
# define DEPRECATED__ear_msgs__srv__Centerline_Response __declspec(deprecated)
#endif

namespace ear_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Centerline_Response_
{
  using Type = Centerline_Response_<ContainerAllocator>;

  explicit Centerline_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centerline(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sdf_path = "";
    }
  }

  explicit Centerline_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centerline(_alloc, _init),
    sdf_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sdf_path = "";
    }
  }

  // field types and members
  using _centerline_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _centerline_type centerline;
  using _sdf_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sdf_path_type sdf_path;

  // setters for named parameter idiom
  Type & set__centerline(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->centerline = _arg;
    return *this;
  }
  Type & set__sdf_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sdf_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ear_msgs::srv::Centerline_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ear_msgs::srv::Centerline_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ear_msgs__srv__Centerline_Response
    std::shared_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ear_msgs__srv__Centerline_Response
    std::shared_ptr<ear_msgs::srv::Centerline_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Centerline_Response_ & other) const
  {
    if (this->centerline != other.centerline) {
      return false;
    }
    if (this->sdf_path != other.sdf_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Centerline_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Centerline_Response_

// alias to use template instance with default allocator
using Centerline_Response =
  ear_msgs::srv::Centerline_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ear_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ear_msgs__srv__Centerline_Event __attribute__((deprecated))
#else
# define DEPRECATED__ear_msgs__srv__Centerline_Event __declspec(deprecated)
#endif

namespace ear_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Centerline_Event_
{
  using Type = Centerline_Event_<ContainerAllocator>;

  explicit Centerline_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Centerline_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ear_msgs::srv::Centerline_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ear_msgs::srv::Centerline_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ear_msgs::srv::Centerline_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ear_msgs::srv::Centerline_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ear_msgs::srv::Centerline_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ear_msgs::srv::Centerline_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ear_msgs::srv::Centerline_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ear_msgs::srv::Centerline_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ear_msgs::srv::Centerline_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ear_msgs::srv::Centerline_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ear_msgs::srv::Centerline_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ear_msgs__srv__Centerline_Event
    std::shared_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ear_msgs__srv__Centerline_Event
    std::shared_ptr<ear_msgs::srv::Centerline_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Centerline_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Centerline_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Centerline_Event_

// alias to use template instance with default allocator
using Centerline_Event =
  ear_msgs::srv::Centerline_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ear_msgs

namespace ear_msgs
{

namespace srv
{

struct Centerline
{
  using Request = ear_msgs::srv::Centerline_Request;
  using Response = ear_msgs::srv::Centerline_Response;
  using Event = ear_msgs::srv::Centerline_Event;
};

}  // namespace srv

}  // namespace ear_msgs

#endif  // EAR_MSGS__SRV__DETAIL__CENTERLINE__STRUCT_HPP_
