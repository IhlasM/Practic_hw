#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to chem_interfaces__msg__Collision
/// Касание черепах

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Collision {
    /// PAIR или TRIPLE
    pub kind: u8,

    /// имена черепах, участвующих в касании
    pub turtles: Vec<std::string::String>,

    /// центр точки касания
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}

impl Collision {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAIR: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRIPLE: u8 = 3;

}


impl Default for Collision {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Collision::default())
  }
}

impl rosidl_runtime_rs::Message for Collision {
  type RmwMsg = super::msg::rmw::Collision;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kind: msg.kind,
        turtles: msg.turtles
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kind: msg.kind,
        turtles: msg.turtles
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kind: msg.kind,
      turtles: msg.turtles
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      x: msg.x,
      y: msg.y,
    }
  }
}


