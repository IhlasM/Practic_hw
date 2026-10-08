#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to hw3_interfaces__srv__CheckAnagram_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckAnagram_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second: std::string::String,

}



impl Default for CheckAnagram_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckAnagram_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckAnagram_Request {
  type RmwMsg = super::srv::rmw::CheckAnagram_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first: msg.first.as_str().into(),
        second: msg.second.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first: msg.first.as_str().into(),
        second: msg.second.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first: msg.first.to_string(),
      second: msg.second.to_string(),
    }
  }
}


// Corresponds to hw3_interfaces__srv__CheckAnagram_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckAnagram_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_anagram: bool,

}



impl Default for CheckAnagram_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckAnagram_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckAnagram_Response {
  type RmwMsg = super::srv::rmw::CheckAnagram_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_anagram: msg.is_anagram,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_anagram: msg.is_anagram,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_anagram: msg.is_anagram,
    }
  }
}






#[link(name = "hw3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hw3_interfaces__srv__CheckAnagram() -> *const std::ffi::c_void;
}

// Corresponds to hw3_interfaces__srv__CheckAnagram
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckAnagram;

impl rosidl_runtime_rs::Service for CheckAnagram {
    type Request = CheckAnagram_Request;
    type Response = CheckAnagram_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hw3_interfaces__srv__CheckAnagram() }
    }
}


