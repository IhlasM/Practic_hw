#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__msg__TurtleColor() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__msg__TurtleColor__init(msg: *mut TurtleColor) -> bool;
    fn reaction_interfaces__msg__TurtleColor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurtleColor>, size: usize) -> bool;
    fn reaction_interfaces__msg__TurtleColor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurtleColor>);
    fn reaction_interfaces__msg__TurtleColor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurtleColor>, out_seq: *mut rosidl_runtime_rs::Sequence<TurtleColor>) -> bool;
}

// Corresponds to reaction_interfaces__msg__TurtleColor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleColor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__msg__TurtleColor__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__msg__TurtleColor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurtleColor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__msg__TurtleColor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__msg__TurtleColor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__msg__TurtleColor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurtleColor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurtleColor where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/msg/TurtleColor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__msg__TurtleColor() }
  }
}


