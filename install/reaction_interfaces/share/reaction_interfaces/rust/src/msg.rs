#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to reaction_interfaces__msg__TurtleColor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleColor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: u8,

}



impl Default for TurtleColor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TurtleColor::default())
  }
}

impl rosidl_runtime_rs::Message for TurtleColor {
  type RmwMsg = super::msg::rmw::TurtleColor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        r: msg.r,
        g: msg.g,
        b: msg.b,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      r: msg.r,
      g: msg.g,
      b: msg.b,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      r: msg.r,
      g: msg.g,
      b: msg.b,
    }
  }
}


