// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/hydra.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fhydra_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fhydra_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fhydra_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fhydra_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2fhydra_2eproto
namespace gz {
namespace msgs {
class Hydra;
class HydraDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern HydraDefaultTypeInternal _Hydra_default_instance_;
class Hydra_Paddle;
class Hydra_PaddleDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Hydra_PaddleDefaultTypeInternal _Hydra_Paddle_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Hydra* Arena::CreateMaybeMessage<::gz::msgs::Hydra>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Hydra_Paddle* Arena::CreateMaybeMessage<::gz::msgs::Hydra_Paddle>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Hydra_Paddle : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Hydra.Paddle) */ {
 public:
  Hydra_Paddle();
  virtual ~Hydra_Paddle();

  Hydra_Paddle(const Hydra_Paddle& from);

  inline Hydra_Paddle& operator=(const Hydra_Paddle& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hydra_Paddle(Hydra_Paddle&& from) noexcept
    : Hydra_Paddle() {
    *this = ::std::move(from);
  }

  inline Hydra_Paddle& operator=(Hydra_Paddle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Hydra_Paddle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra_Paddle* internal_default_instance() {
    return reinterpret_cast<const Hydra_Paddle*>(
               &_Hydra_Paddle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Hydra_Paddle* other);
  friend void swap(Hydra_Paddle& a, Hydra_Paddle& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hydra_Paddle* New() const final {
    return CreateMaybeMessage<Hydra_Paddle>(NULL);
  }

  Hydra_Paddle* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Hydra_Paddle>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Hydra_Paddle& from);
  void MergeFrom(const Hydra_Paddle& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hydra_Paddle* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .gz.msgs.Pose pose = 1;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 1;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // bool button_bumper = 2;
  void clear_button_bumper();
  static const int kButtonBumperFieldNumber = 2;
  bool button_bumper() const;
  void set_button_bumper(bool value);

  // bool button_1 = 3;
  void clear_button_1();
  static const int kButton1FieldNumber = 3;
  bool button_1() const;
  void set_button_1(bool value);

  // bool button_2 = 4;
  void clear_button_2();
  static const int kButton2FieldNumber = 4;
  bool button_2() const;
  void set_button_2(bool value);

  // bool button_3 = 5;
  void clear_button_3();
  static const int kButton3FieldNumber = 5;
  bool button_3() const;
  void set_button_3(bool value);

  // bool button_4 = 6;
  void clear_button_4();
  static const int kButton4FieldNumber = 6;
  bool button_4() const;
  void set_button_4(bool value);

  // bool button_joy = 7;
  void clear_button_joy();
  static const int kButtonJoyFieldNumber = 7;
  bool button_joy() const;
  void set_button_joy(bool value);

  // bool button_center = 8;
  void clear_button_center();
  static const int kButtonCenterFieldNumber = 8;
  bool button_center() const;
  void set_button_center(bool value);

  // double joy_x = 9;
  void clear_joy_x();
  static const int kJoyXFieldNumber = 9;
  double joy_x() const;
  void set_joy_x(double value);

  // double joy_y = 10;
  void clear_joy_y();
  static const int kJoyYFieldNumber = 10;
  double joy_y() const;
  void set_joy_y(double value);

  // double trigger = 11;
  void clear_trigger();
  static const int kTriggerFieldNumber = 11;
  double trigger() const;
  void set_trigger(double value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Hydra.Paddle)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Pose* pose_;
  bool button_bumper_;
  bool button_1_;
  bool button_2_;
  bool button_3_;
  bool button_4_;
  bool button_joy_;
  bool button_center_;
  double joy_x_;
  double joy_y_;
  double trigger_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fhydra_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE Hydra : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Hydra) */ {
 public:
  Hydra();
  virtual ~Hydra();

  Hydra(const Hydra& from);

  inline Hydra& operator=(const Hydra& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hydra(Hydra&& from) noexcept
    : Hydra() {
    *this = ::std::move(from);
  }

  inline Hydra& operator=(Hydra&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Hydra& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra* internal_default_instance() {
    return reinterpret_cast<const Hydra*>(
               &_Hydra_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Hydra* other);
  friend void swap(Hydra& a, Hydra& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hydra* New() const final {
    return CreateMaybeMessage<Hydra>(NULL);
  }

  Hydra* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Hydra>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Hydra& from);
  void MergeFrom(const Hydra& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hydra* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Hydra_Paddle Paddle;

  // accessors -------------------------------------------------------

  // .gz.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::gz::msgs::Header& _internal_header() const;
  public:
  const ::gz::msgs::Header& header() const;
  ::gz::msgs::Header* release_header();
  ::gz::msgs::Header* mutable_header();
  void set_allocated_header(::gz::msgs::Header* header);

  // .gz.msgs.Hydra.Paddle right = 2;
  bool has_right() const;
  void clear_right();
  static const int kRightFieldNumber = 2;
  private:
  const ::gz::msgs::Hydra_Paddle& _internal_right() const;
  public:
  const ::gz::msgs::Hydra_Paddle& right() const;
  ::gz::msgs::Hydra_Paddle* release_right();
  ::gz::msgs::Hydra_Paddle* mutable_right();
  void set_allocated_right(::gz::msgs::Hydra_Paddle* right);

  // .gz.msgs.Hydra.Paddle left = 3;
  bool has_left() const;
  void clear_left();
  static const int kLeftFieldNumber = 3;
  private:
  const ::gz::msgs::Hydra_Paddle& _internal_left() const;
  public:
  const ::gz::msgs::Hydra_Paddle& left() const;
  ::gz::msgs::Hydra_Paddle* release_left();
  ::gz::msgs::Hydra_Paddle* mutable_left();
  void set_allocated_left(::gz::msgs::Hydra_Paddle* left);

  // @@protoc_insertion_point(class_scope:gz.msgs.Hydra)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Hydra_Paddle* right_;
  ::gz::msgs::Hydra_Paddle* left_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fhydra_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hydra_Paddle

// .gz.msgs.Pose pose = 1;
inline bool Hydra_Paddle::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& Hydra_Paddle::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& Hydra_Paddle::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* Hydra_Paddle::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.Hydra.Paddle.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* Hydra_Paddle::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Hydra.Paddle.pose)
  return pose_;
}
inline void Hydra_Paddle::set_allocated_pose(::gz::msgs::Pose* pose) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(pose_);
  }
  if (pose) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pose = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    
  } else {
    
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Hydra.Paddle.pose)
}

// bool button_bumper = 2;
inline void Hydra_Paddle::clear_button_bumper() {
  button_bumper_ = false;
}
inline bool Hydra_Paddle::button_bumper() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_bumper)
  return button_bumper_;
}
inline void Hydra_Paddle::set_button_bumper(bool value) {
  
  button_bumper_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_bumper)
}

// bool button_1 = 3;
inline void Hydra_Paddle::clear_button_1() {
  button_1_ = false;
}
inline bool Hydra_Paddle::button_1() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_1)
  return button_1_;
}
inline void Hydra_Paddle::set_button_1(bool value) {
  
  button_1_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_1)
}

// bool button_2 = 4;
inline void Hydra_Paddle::clear_button_2() {
  button_2_ = false;
}
inline bool Hydra_Paddle::button_2() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_2)
  return button_2_;
}
inline void Hydra_Paddle::set_button_2(bool value) {
  
  button_2_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_2)
}

// bool button_3 = 5;
inline void Hydra_Paddle::clear_button_3() {
  button_3_ = false;
}
inline bool Hydra_Paddle::button_3() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_3)
  return button_3_;
}
inline void Hydra_Paddle::set_button_3(bool value) {
  
  button_3_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_3)
}

// bool button_4 = 6;
inline void Hydra_Paddle::clear_button_4() {
  button_4_ = false;
}
inline bool Hydra_Paddle::button_4() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_4)
  return button_4_;
}
inline void Hydra_Paddle::set_button_4(bool value) {
  
  button_4_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_4)
}

// bool button_joy = 7;
inline void Hydra_Paddle::clear_button_joy() {
  button_joy_ = false;
}
inline bool Hydra_Paddle::button_joy() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_joy)
  return button_joy_;
}
inline void Hydra_Paddle::set_button_joy(bool value) {
  
  button_joy_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_joy)
}

// bool button_center = 8;
inline void Hydra_Paddle::clear_button_center() {
  button_center_ = false;
}
inline bool Hydra_Paddle::button_center() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.button_center)
  return button_center_;
}
inline void Hydra_Paddle::set_button_center(bool value) {
  
  button_center_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.button_center)
}

// double joy_x = 9;
inline void Hydra_Paddle::clear_joy_x() {
  joy_x_ = 0;
}
inline double Hydra_Paddle::joy_x() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.joy_x)
  return joy_x_;
}
inline void Hydra_Paddle::set_joy_x(double value) {
  
  joy_x_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.joy_x)
}

// double joy_y = 10;
inline void Hydra_Paddle::clear_joy_y() {
  joy_y_ = 0;
}
inline double Hydra_Paddle::joy_y() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.joy_y)
  return joy_y_;
}
inline void Hydra_Paddle::set_joy_y(double value) {
  
  joy_y_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.joy_y)
}

// double trigger = 11;
inline void Hydra_Paddle::clear_trigger() {
  trigger_ = 0;
}
inline double Hydra_Paddle::trigger() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.Paddle.trigger)
  return trigger_;
}
inline void Hydra_Paddle::set_trigger(double value) {
  
  trigger_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Hydra.Paddle.trigger)
}

// -------------------------------------------------------------------

// Hydra

// .gz.msgs.Header header = 1;
inline bool Hydra::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Hydra::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Hydra::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Hydra::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Hydra.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Hydra::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Hydra.header)
  return header_;
}
inline void Hydra::set_allocated_header(::gz::msgs::Header* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Hydra.header)
}

// .gz.msgs.Hydra.Paddle right = 2;
inline bool Hydra::has_right() const {
  return this != internal_default_instance() && right_ != NULL;
}
inline void Hydra::clear_right() {
  if (GetArenaNoVirtual() == NULL && right_ != NULL) {
    delete right_;
  }
  right_ = NULL;
}
inline const ::gz::msgs::Hydra_Paddle& Hydra::_internal_right() const {
  return *right_;
}
inline const ::gz::msgs::Hydra_Paddle& Hydra::right() const {
  const ::gz::msgs::Hydra_Paddle* p = right_;
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.right)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Hydra_Paddle*>(
      &::gz::msgs::_Hydra_Paddle_default_instance_);
}
inline ::gz::msgs::Hydra_Paddle* Hydra::release_right() {
  // @@protoc_insertion_point(field_release:gz.msgs.Hydra.right)
  
  ::gz::msgs::Hydra_Paddle* temp = right_;
  right_ = NULL;
  return temp;
}
inline ::gz::msgs::Hydra_Paddle* Hydra::mutable_right() {
  
  if (right_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    right_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Hydra.right)
  return right_;
}
inline void Hydra::set_allocated_right(::gz::msgs::Hydra_Paddle* right) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete right_;
  }
  if (right) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      right = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, right, submessage_arena);
    }
    
  } else {
    
  }
  right_ = right;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Hydra.right)
}

// .gz.msgs.Hydra.Paddle left = 3;
inline bool Hydra::has_left() const {
  return this != internal_default_instance() && left_ != NULL;
}
inline void Hydra::clear_left() {
  if (GetArenaNoVirtual() == NULL && left_ != NULL) {
    delete left_;
  }
  left_ = NULL;
}
inline const ::gz::msgs::Hydra_Paddle& Hydra::_internal_left() const {
  return *left_;
}
inline const ::gz::msgs::Hydra_Paddle& Hydra::left() const {
  const ::gz::msgs::Hydra_Paddle* p = left_;
  // @@protoc_insertion_point(field_get:gz.msgs.Hydra.left)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Hydra_Paddle*>(
      &::gz::msgs::_Hydra_Paddle_default_instance_);
}
inline ::gz::msgs::Hydra_Paddle* Hydra::release_left() {
  // @@protoc_insertion_point(field_release:gz.msgs.Hydra.left)
  
  ::gz::msgs::Hydra_Paddle* temp = left_;
  left_ = NULL;
  return temp;
}
inline ::gz::msgs::Hydra_Paddle* Hydra::mutable_left() {
  
  if (left_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    left_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Hydra.left)
  return left_;
}
inline void Hydra::set_allocated_left(::gz::msgs::Hydra_Paddle* left) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete left_;
  }
  if (left) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      left = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, left, submessage_arena);
    }
    
  } else {
    
  }
  left_ = left;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Hydra.left)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fhydra_2eproto
