// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ear_msgs:srv/SegmentEar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/srv/segment_ear.hpp"


#ifndef EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__TRAITS_HPP_
#define EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ear_msgs/srv/detail/segment_ear__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ear_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SegmentEar_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mri_path
  {
    out << "mri_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mri_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentEar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mri_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mri_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mri_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentEar_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::srv::SegmentEar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::srv::SegmentEar_Request & msg)
{
  return ear_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::srv::SegmentEar_Request>()
{
  return "ear_msgs::srv::SegmentEar_Request";
}

template<>
inline const char * name<ear_msgs::srv::SegmentEar_Request>()
{
  return "ear_msgs/srv/SegmentEar_Request";
}

template<>
struct has_fixed_size<ear_msgs::srv::SegmentEar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ear_msgs::srv::SegmentEar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ear_msgs::srv::SegmentEar_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ear_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SegmentEar_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: mask_path
  {
    out << "mask_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mask_path, out);
    out << ", ";
  }

  // member: mesh_path
  {
    out << "mesh_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentEar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mask_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mask_path, out);
    out << "\n";
  }

  // member: mesh_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_path: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentEar_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::srv::SegmentEar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::srv::SegmentEar_Response & msg)
{
  return ear_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::srv::SegmentEar_Response>()
{
  return "ear_msgs::srv::SegmentEar_Response";
}

template<>
inline const char * name<ear_msgs::srv::SegmentEar_Response>()
{
  return "ear_msgs/srv/SegmentEar_Response";
}

template<>
struct has_fixed_size<ear_msgs::srv::SegmentEar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ear_msgs::srv::SegmentEar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ear_msgs::srv::SegmentEar_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ear_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SegmentEar_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentEar_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentEar_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::srv::SegmentEar_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::srv::SegmentEar_Event & msg)
{
  return ear_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::srv::SegmentEar_Event>()
{
  return "ear_msgs::srv::SegmentEar_Event";
}

template<>
inline const char * name<ear_msgs::srv::SegmentEar_Event>()
{
  return "ear_msgs/srv/SegmentEar_Event";
}

template<>
struct has_fixed_size<ear_msgs::srv::SegmentEar_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ear_msgs::srv::SegmentEar_Event>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::srv::SegmentEar_Request>::value && has_bounded_size<ear_msgs::srv::SegmentEar_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ear_msgs::srv::SegmentEar_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ear_msgs::srv::SegmentEar>()
{
  return "ear_msgs::srv::SegmentEar";
}

template<>
inline const char * name<ear_msgs::srv::SegmentEar>()
{
  return "ear_msgs/srv/SegmentEar";
}

template<>
struct has_fixed_size<ear_msgs::srv::SegmentEar>
  : std::integral_constant<
    bool,
    has_fixed_size<ear_msgs::srv::SegmentEar_Request>::value &&
    has_fixed_size<ear_msgs::srv::SegmentEar_Response>::value
  >
{
};

template<>
struct has_bounded_size<ear_msgs::srv::SegmentEar>
  : std::integral_constant<
    bool,
    has_bounded_size<ear_msgs::srv::SegmentEar_Request>::value &&
    has_bounded_size<ear_msgs::srv::SegmentEar_Response>::value
  >
{
};

template<>
struct is_service<ear_msgs::srv::SegmentEar>
  : std::true_type
{
};

template<>
struct is_service_request<ear_msgs::srv::SegmentEar_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ear_msgs::srv::SegmentEar_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EAR_MSGS__SRV__DETAIL__SEGMENT_EAR__TRAITS_HPP_
