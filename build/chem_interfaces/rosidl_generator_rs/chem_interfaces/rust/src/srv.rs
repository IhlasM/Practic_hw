#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to chem_interfaces__srv__Explode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Explode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub turtles: Vec<std::string::String>,

}



impl Default for Explode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Explode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Explode_Request {
  type RmwMsg = super::srv::rmw::Explode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtles: msg.turtles
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtles: msg.turtles
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      turtles: msg.turtles
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to chem_interfaces__srv__Explode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Explode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// сколько черепах телепортировано
    pub teleported: i32,

}



impl Default for Explode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Explode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Explode_Response {
  type RmwMsg = super::srv::rmw::Explode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        teleported: msg.teleported,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      teleported: msg.teleported,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      teleported: msg.teleported,
    }
  }
}






#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__srv__Explode() -> *const std::ffi::c_void;
}

// Corresponds to chem_interfaces__srv__Explode
#[allow(missing_docs, non_camel_case_types)]
pub struct Explode;

impl rosidl_runtime_rs::Service for Explode {
    type Request = Explode_Request;
    type Response = Explode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__srv__Explode() }
    }
}


