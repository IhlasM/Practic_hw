
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Goal() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_Goal__init(msg: *mut PowerOfTwo_Goal) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Goal>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Goal>);
    fn hw4_interfaces__action__PowerOfTwo_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Goal>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub numbers: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for PowerOfTwo_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_Goal__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Goal() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Result() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_Result__init(msg: *mut PowerOfTwo_Result) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Result>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Result>);
    fn hw4_interfaces__action__PowerOfTwo_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Result>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub powers: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for PowerOfTwo_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_Result__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_Result where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Result() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_Feedback__init(msg: *mut PowerOfTwo_Feedback) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Feedback>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Feedback>);
    fn hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_Feedback>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power: i64,

}



impl Default for PowerOfTwo_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_Feedback__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_Feedback() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_FeedbackMessage__init(msg: *mut PowerOfTwo_FeedbackMessage) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_FeedbackMessage>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_FeedbackMessage>);
    fn hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_FeedbackMessage>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PowerOfTwo_Feedback,

}



impl Default for PowerOfTwo_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_FeedbackMessage() }
  }
}




#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Request__init(msg: *mut PowerOfTwo_SendGoal_Request) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Request>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Request>);
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Request>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PowerOfTwo_Goal,

}



impl Default for PowerOfTwo_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal_Request() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Response__init(msg: *mut PowerOfTwo_SendGoal_Response) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Response>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Response>);
    fn hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_SendGoal_Response>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PowerOfTwo_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal_Response() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Request__init(msg: *mut PowerOfTwo_GetResult_Request) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Request>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Request>);
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Request>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PowerOfTwo_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult_Request() }
  }
}


#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "hw4_interfaces__rosidl_generator_c")]
extern "C" {
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Response__init(msg: *mut PowerOfTwo_GetResult_Response) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Response>, size: usize) -> bool;
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Response>);
    fn hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerOfTwo_GetResult_Response>) -> bool;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerOfTwo_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PowerOfTwo_Result,

}



impl Default for PowerOfTwo_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hw4_interfaces__action__PowerOfTwo_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to hw4_interfaces__action__PowerOfTwo_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerOfTwo_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerOfTwo_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerOfTwo_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hw4_interfaces/action/PowerOfTwo_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult_Response() }
  }
}






#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PowerOfTwo_SendGoal;

impl rosidl_runtime_rs::Service for PowerOfTwo_SendGoal {
    type Request = PowerOfTwo_SendGoal_Request;
    type Response = PowerOfTwo_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hw4_interfaces__action__PowerOfTwo_SendGoal() }
    }
}




#[link(name = "hw4_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to hw4_interfaces__action__PowerOfTwo_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PowerOfTwo_GetResult;

impl rosidl_runtime_rs::Service for PowerOfTwo_GetResult {
    type Request = PowerOfTwo_GetResult_Request;
    type Response = PowerOfTwo_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hw4_interfaces__action__PowerOfTwo_GetResult() }
    }
}


