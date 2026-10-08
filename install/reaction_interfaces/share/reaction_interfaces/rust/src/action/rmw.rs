
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Goal() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_Goal__init(msg: *mut RandomWalk_Goal) -> bool;
    fn reaction_interfaces__action__RandomWalk_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Goal>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Goal>);
    fn reaction_interfaces__action__RandomWalk_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Goal>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f32,

}



impl Default for RandomWalk_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_Goal__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Goal() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Result() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_Result__init(msg: *mut RandomWalk_Result) -> bool;
    fn reaction_interfaces__action__RandomWalk_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Result>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Result>);
    fn reaction_interfaces__action__RandomWalk_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Result>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub completed: bool,

}



impl Default for RandomWalk_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_Result__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_Result where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Result() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_Feedback__init(msg: *mut RandomWalk_Feedback) -> bool;
    fn reaction_interfaces__action__RandomWalk_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Feedback>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Feedback>);
    fn reaction_interfaces__action__RandomWalk_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_Feedback>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time_left: f32,

}



impl Default for RandomWalk_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_Feedback__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_Feedback() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_FeedbackMessage__init(msg: *mut RandomWalk_FeedbackMessage) -> bool;
    fn reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_FeedbackMessage>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_FeedbackMessage>);
    fn reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_FeedbackMessage>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RandomWalk_Feedback,

}



impl Default for RandomWalk_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_FeedbackMessage() }
  }
}




#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_SendGoal_Request__init(msg: *mut RandomWalk_SendGoal_Request) -> bool;
    fn reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Request>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Request>);
    fn reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Request>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RandomWalk_Goal,

}



impl Default for RandomWalk_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal_Request() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_SendGoal_Response__init(msg: *mut RandomWalk_SendGoal_Response) -> bool;
    fn reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Response>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Response>);
    fn reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_SendGoal_Response>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RandomWalk_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal_Response() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_GetResult_Request__init(msg: *mut RandomWalk_GetResult_Request) -> bool;
    fn reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Request>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Request>);
    fn reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Request>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RandomWalk_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult_Request() }
  }
}


#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "reaction_interfaces__rosidl_generator_c")]
extern "C" {
    fn reaction_interfaces__action__RandomWalk_GetResult_Response__init(msg: *mut RandomWalk_GetResult_Response) -> bool;
    fn reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Response>, size: usize) -> bool;
    fn reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Response>);
    fn reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RandomWalk_GetResult_Response>) -> bool;
}

// Corresponds to reaction_interfaces__action__RandomWalk_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RandomWalk_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RandomWalk_Result,

}



impl Default for RandomWalk_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !reaction_interfaces__action__RandomWalk_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to reaction_interfaces__action__RandomWalk_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RandomWalk_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RandomWalk_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RandomWalk_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "reaction_interfaces/action/RandomWalk_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult_Response() }
  }
}






#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to reaction_interfaces__action__RandomWalk_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RandomWalk_SendGoal;

impl rosidl_runtime_rs::Service for RandomWalk_SendGoal {
    type Request = RandomWalk_SendGoal_Request;
    type Response = RandomWalk_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__reaction_interfaces__action__RandomWalk_SendGoal() }
    }
}




#[link(name = "reaction_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to reaction_interfaces__action__RandomWalk_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RandomWalk_GetResult;

impl rosidl_runtime_rs::Service for RandomWalk_GetResult {
    type Request = RandomWalk_GetResult_Request;
    type Response = RandomWalk_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__reaction_interfaces__action__RandomWalk_GetResult() }
    }
}


