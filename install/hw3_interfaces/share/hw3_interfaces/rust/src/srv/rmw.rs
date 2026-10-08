#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "hw3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw3_interfaces__srv__CheckAnagram_Request() -> *const std::ffi::c_void;
}

#[link(name = "hw3_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw3_interfaces__srv__CheckAnagram_Request__init(msg: *mut CheckAnagram_Request) -> bool;
    fn hw3_interfaces__srv__CheckAnagram_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Request>, size: usize) -> bool;
    fn hw3_interfaces__srv__CheckAnagram_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Request>);
    fn hw3_interfaces__srv__CheckAnagram_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckAnagram_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Request>) -> bool;
}

// Corresponds to hw3_interfaces__srv__CheckAnagram_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckAnagram_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second: rosidl_runtime_rs::String,

}



impl Default for CheckAnagram_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw3_interfaces__srv__CheckAnagram_Request__init(&mut msg as *mut _) {
        panic!("Call to hw3_interfaces__srv__CheckAnagram_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckAnagram_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckAnagram_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckAnagram_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hw3_interfaces/srv/CheckAnagram_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw3_interfaces__srv__CheckAnagram_Request() }
  }
}


#[link(name = "hw3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw3_interfaces__srv__CheckAnagram_Response() -> *const std::ffi::c_void;
}

#[link(name = "hw3_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw3_interfaces__srv__CheckAnagram_Response__init(msg: *mut CheckAnagram_Response) -> bool;
    fn hw3_interfaces__srv__CheckAnagram_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Response>, size: usize) -> bool;
    fn hw3_interfaces__srv__CheckAnagram_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Response>);
    fn hw3_interfaces__srv__CheckAnagram_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckAnagram_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckAnagram_Response>) -> bool;
}

// Corresponds to hw3_interfaces__srv__CheckAnagram_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckAnagram_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_anagram: bool,

}



impl Default for CheckAnagram_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw3_interfaces__srv__CheckAnagram_Response__init(&mut msg as *mut _) {
        panic!("Call to hw3_interfaces__srv__CheckAnagram_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckAnagram_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw3_interfaces__srv__CheckAnagram_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckAnagram_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckAnagram_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hw3_interfaces/srv/CheckAnagram_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw3_interfaces__srv__CheckAnagram_Response() }
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


