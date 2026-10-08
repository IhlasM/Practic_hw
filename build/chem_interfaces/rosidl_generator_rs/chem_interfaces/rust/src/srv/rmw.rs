#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__srv__Explode_Request() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__srv__Explode_Request__init(msg: *mut Explode_Request) -> bool;
    fn chem_interfaces__srv__Explode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Explode_Request>, size: usize) -> bool;
    fn chem_interfaces__srv__Explode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Explode_Request>);
    fn chem_interfaces__srv__Explode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Explode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Explode_Request>) -> bool;
}

// Corresponds to chem_interfaces__srv__Explode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Explode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub turtles: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for Explode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__srv__Explode_Request__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__srv__Explode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Explode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Explode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Explode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/srv/Explode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__srv__Explode_Request() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__srv__Explode_Response() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__srv__Explode_Response__init(msg: *mut Explode_Response) -> bool;
    fn chem_interfaces__srv__Explode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Explode_Response>, size: usize) -> bool;
    fn chem_interfaces__srv__Explode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Explode_Response>);
    fn chem_interfaces__srv__Explode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Explode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Explode_Response>) -> bool;
}

// Corresponds to chem_interfaces__srv__Explode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__srv__Explode_Response__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__srv__Explode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Explode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__srv__Explode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Explode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Explode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/srv/Explode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__srv__Explode_Response() }
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


