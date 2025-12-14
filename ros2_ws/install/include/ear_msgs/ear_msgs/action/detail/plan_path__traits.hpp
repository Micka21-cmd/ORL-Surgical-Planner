// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ear_msgs:action/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/action/plan_path.hpp"


#ifndef EAR_MSGS__ACTION__DETAIL__PLAN_PATH__TRAITS_HPP_
#define EAR_MSGS__ACTION__DETAIL__PLAN_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ear_msgs/action/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'entry'
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: entry
  {
    out << "entry: ";
    to_flow_style_yaml(msg.entry, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: tool_diam_mm
  {
    out << "tool_diam_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_diam_mm, out);
    out << ", ";
  }

  // member: safety_margin_mm
  {
    out << "safety_margin_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin_mm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entry:\n";
    to_block_style_yaml(msg.entry, out, indentation + 2);
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: tool_diam_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_diam_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_diam_mm, out);
    out << "\n";
  }

  // member: safety_margin_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_margin_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin_mm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_Goal & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_Goal>()
{
  return "ear_msgs::action::PlanPath_Goal";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_Goal>()
{
  return "ear_msgs/action/PlanPath_Goal";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: min_clearance_mm
  {
    out << "min_clearance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.min_clearance_mm, out);
    out << ", ";
  }

  // member: est_time_s
  {
    out << "est_time_s: ";
    rosidl_generator_traits::value_to_yaml(msg.est_time_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: min_clearance_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_clearance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.min_clearance_mm, out);
    out << "\n";
  }

  // member: est_time_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_time_s: ";
    rosidl_generator_traits::value_to_yaml(msg.est_time_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_Result & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_Result>()
{
  return "ear_msgs::action::PlanPath_Result";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_Result>()
{
  return "ear_msgs/action/PlanPath_Result";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_Result>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_Result>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_Feedback & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_Feedback>()
{
  return "ear_msgs::action::PlanPath_Feedback";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_Feedback>()
{
  return "ear_msgs/action/PlanPath_Feedback";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ear_msgs::action::PlanPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ear_msgs/action/detail/plan_path__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_SendGoal_Request & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_SendGoal_Request>()
{
  return "ear_msgs::action::PlanPath_SendGoal_Request";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_SendGoal_Request>()
{
  return "ear_msgs/action/PlanPath_SendGoal_Request";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ear_msgs::action::PlanPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::action::PlanPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_SendGoal_Response & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_SendGoal_Response>()
{
  return "ear_msgs::action::PlanPath_SendGoal_Response";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_SendGoal_Response>()
{
  return "ear_msgs/action/PlanPath_SendGoal_Response";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_SendGoal_Event & msg,
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
  const PlanPath_SendGoal_Event & msg,
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

inline std::string to_yaml(const PlanPath_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_SendGoal_Event & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_SendGoal_Event>()
{
  return "ear_msgs::action::PlanPath_SendGoal_Event";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_SendGoal_Event>()
{
  return "ear_msgs/action/PlanPath_SendGoal_Event";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Request>::value && has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ear_msgs::action::PlanPath_SendGoal>()
{
  return "ear_msgs::action::PlanPath_SendGoal";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_SendGoal>()
{
  return "ear_msgs/action/PlanPath_SendGoal";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ear_msgs::action::PlanPath_SendGoal_Request>::value &&
    has_fixed_size<ear_msgs::action::PlanPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Request>::value &&
    has_bounded_size<ear_msgs::action::PlanPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ear_msgs::action::PlanPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ear_msgs::action::PlanPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ear_msgs::action::PlanPath_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_GetResult_Request & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_GetResult_Request>()
{
  return "ear_msgs::action::PlanPath_GetResult_Request";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_GetResult_Request>()
{
  return "ear_msgs/action/PlanPath_GetResult_Request";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ear_msgs/action/detail/plan_path__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_GetResult_Response & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_GetResult_Response>()
{
  return "ear_msgs::action::PlanPath_GetResult_Response";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_GetResult_Response>()
{
  return "ear_msgs/action/PlanPath_GetResult_Response";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ear_msgs::action::PlanPath_Result>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::action::PlanPath_Result>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_GetResult_Event & msg,
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
  const PlanPath_GetResult_Event & msg,
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

inline std::string to_yaml(const PlanPath_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_GetResult_Event & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_GetResult_Event>()
{
  return "ear_msgs::action::PlanPath_GetResult_Event";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_GetResult_Event>()
{
  return "ear_msgs/action/PlanPath_GetResult_Event";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::action::PlanPath_GetResult_Request>::value && has_bounded_size<ear_msgs::action::PlanPath_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ear_msgs::action::PlanPath_GetResult>()
{
  return "ear_msgs::action::PlanPath_GetResult";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_GetResult>()
{
  return "ear_msgs/action/PlanPath_GetResult";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ear_msgs::action::PlanPath_GetResult_Request>::value &&
    has_fixed_size<ear_msgs::action::PlanPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ear_msgs::action::PlanPath_GetResult_Request>::value &&
    has_bounded_size<ear_msgs::action::PlanPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ear_msgs::action::PlanPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ear_msgs::action::PlanPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ear_msgs::action::PlanPath_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ear_msgs/action/detail/plan_path__traits.hpp"

namespace ear_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlanPath_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ear_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ear_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ear_msgs::action::PlanPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ear_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ear_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ear_msgs::action::PlanPath_FeedbackMessage & msg)
{
  return ear_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ear_msgs::action::PlanPath_FeedbackMessage>()
{
  return "ear_msgs::action::PlanPath_FeedbackMessage";
}

template<>
inline const char * name<ear_msgs::action::PlanPath_FeedbackMessage>()
{
  return "ear_msgs/action/PlanPath_FeedbackMessage";
}

template<>
struct has_fixed_size<ear_msgs::action::PlanPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ear_msgs::action::PlanPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ear_msgs::action::PlanPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ear_msgs::action::PlanPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ear_msgs::action::PlanPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ear_msgs::action::PlanPath>
  : std::true_type
{
};

template<>
struct is_action_goal<ear_msgs::action::PlanPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ear_msgs::action::PlanPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ear_msgs::action::PlanPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EAR_MSGS__ACTION__DETAIL__PLAN_PATH__TRAITS_HPP_
