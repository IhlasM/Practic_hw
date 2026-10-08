
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Goal() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_Goal__init(msg: *mut React_Goal) -> bool;
    fn chem_interfaces__action__React_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_Goal>, size: usize) -> bool;
    fn chem_interfaces__action__React_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_Goal>);
    fn chem_interfaces__action__React_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<React_Goal>) -> bool;
}

// Corresponds to chem_interfaces__action__React_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub turtles: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for React_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_Goal__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Goal() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Result() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_Result__init(msg: *mut React_Result) -> bool;
    fn chem_interfaces__action__React_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_Result>, size: usize) -> bool;
    fn chem_interfaces__action__React_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_Result>);
    fn chem_interfaces__action__React_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<React_Result>) -> bool;
}

// Corresponds to chem_interfaces__action__React_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for React_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_Result__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_Result where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Result() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_Feedback__init(msg: *mut React_Feedback) -> bool;
    fn chem_interfaces__action__React_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_Feedback>, size: usize) -> bool;
    fn chem_interfaces__action__React_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_Feedback>);
    fn chem_interfaces__action__React_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<React_Feedback>) -> bool;
}

// Corresponds to chem_interfaces__action__React_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_Feedback {
    /// turn / move
    pub stage: rosidl_runtime_rs::String,

    /// от 0.0 до 1.0
    pub progress: f32,

}



impl Default for React_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_Feedback__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_Feedback() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_FeedbackMessage__init(msg: *mut React_FeedbackMessage) -> bool;
    fn chem_interfaces__action__React_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_FeedbackMessage>, size: usize) -> bool;
    fn chem_interfaces__action__React_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_FeedbackMessage>);
    fn chem_interfaces__action__React_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<React_FeedbackMessage>) -> bool;
}

// Corresponds to chem_interfaces__action__React_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::React_Feedback,

}



impl Default for React_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_FeedbackMessage() }
  }
}




#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_SendGoal_Request__init(msg: *mut React_SendGoal_Request) -> bool;
    fn chem_interfaces__action__React_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Request>, size: usize) -> bool;
    fn chem_interfaces__action__React_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Request>);
    fn chem_interfaces__action__React_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Request>) -> bool;
}

// Corresponds to chem_interfaces__action__React_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::React_Goal,

}



impl Default for React_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_SendGoal_Request() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_SendGoal_Response__init(msg: *mut React_SendGoal_Response) -> bool;
    fn chem_interfaces__action__React_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Response>, size: usize) -> bool;
    fn chem_interfaces__action__React_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Response>);
    fn chem_interfaces__action__React_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<React_SendGoal_Response>) -> bool;
}

// Corresponds to chem_interfaces__action__React_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for React_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_SendGoal_Response() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_GetResult_Request__init(msg: *mut React_GetResult_Request) -> bool;
    fn chem_interfaces__action__React_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Request>, size: usize) -> bool;
    fn chem_interfaces__action__React_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Request>);
    fn chem_interfaces__action__React_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Request>) -> bool;
}

// Corresponds to chem_interfaces__action__React_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for React_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_GetResult_Request() }
  }
}


#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "chem_interfaces__rosidl_generator_c")]
extern "C" {
    fn chem_interfaces__action__React_GetResult_Response__init(msg: *mut React_GetResult_Response) -> bool;
    fn chem_interfaces__action__React_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Response>, size: usize) -> bool;
    fn chem_interfaces__action__React_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Response>);
    fn chem_interfaces__action__React_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<React_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<React_GetResult_Response>) -> bool;
}

// Corresponds to chem_interfaces__action__React_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct React_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::React_Result,

}



impl Default for React_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chem_interfaces__action__React_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to chem_interfaces__action__React_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for React_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chem_interfaces__action__React_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for React_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for React_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "chem_interfaces/action/React_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chem_interfaces__action__React_GetResult_Response() }
  }
}






#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__action__React_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to chem_interfaces__action__React_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct React_SendGoal;

impl rosidl_runtime_rs::Service for React_SendGoal {
    type Request = React_SendGoal_Request;
    type Response = React_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__action__React_SendGoal() }
    }
}




#[link(name = "chem_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__action__React_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to chem_interfaces__action__React_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct React_GetResult;

impl rosidl_runtime_rs::Service for React_GetResult {
    type Request = React_GetResult_Request;
    type Response = React_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__chem_interfaces__action__React_GetResult() }
    }
}


