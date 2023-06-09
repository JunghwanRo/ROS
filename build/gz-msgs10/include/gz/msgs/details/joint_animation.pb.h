// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/joint_animation.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5fanimation_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5fanimation_2eproto

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
#include "gz/msgs/time.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fjoint_5fanimation_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fjoint_5fanimation_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fjoint_5fanimation_2eproto
namespace gz {
namespace msgs {
class JointAnimation;
class JointAnimationDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern JointAnimationDefaultTypeInternal _JointAnimation_default_instance_;
class JointAnimation_Joint;
class JointAnimation_JointDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern JointAnimation_JointDefaultTypeInternal _JointAnimation_Joint_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::JointAnimation* Arena::CreateMaybeMessage<::gz::msgs::JointAnimation>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::JointAnimation_Joint* Arena::CreateMaybeMessage<::gz::msgs::JointAnimation_Joint>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE JointAnimation_Joint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.JointAnimation.Joint) */ {
 public:
  JointAnimation_Joint();
  virtual ~JointAnimation_Joint();

  JointAnimation_Joint(const JointAnimation_Joint& from);

  inline JointAnimation_Joint& operator=(const JointAnimation_Joint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  JointAnimation_Joint(JointAnimation_Joint&& from) noexcept
    : JointAnimation_Joint() {
    *this = ::std::move(from);
  }

  inline JointAnimation_Joint& operator=(JointAnimation_Joint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const JointAnimation_Joint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JointAnimation_Joint* internal_default_instance() {
    return reinterpret_cast<const JointAnimation_Joint*>(
               &_JointAnimation_Joint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(JointAnimation_Joint* other);
  friend void swap(JointAnimation_Joint& a, JointAnimation_Joint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline JointAnimation_Joint* New() const final {
    return CreateMaybeMessage<JointAnimation_Joint>(NULL);
  }

  JointAnimation_Joint* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<JointAnimation_Joint>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const JointAnimation_Joint& from);
  void MergeFrom(const JointAnimation_Joint& from);
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
  void InternalSwap(JointAnimation_Joint* other);
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

  // repeated string name = 1;
  int name_size() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name(int index) const;
  ::std::string* mutable_name(int index);
  void set_name(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_name(int index, ::std::string&& value);
  #endif
  void set_name(int index, const char* value);
  void set_name(int index, const char* value, size_t size);
  ::std::string* add_name();
  void add_name(const ::std::string& value);
  #if LANG_CXX11
  void add_name(::std::string&& value);
  #endif
  void add_name(const char* value);
  void add_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // repeated double angle = 2;
  int angle_size() const;
  void clear_angle();
  static const int kAngleFieldNumber = 2;
  double angle(int index) const;
  void set_angle(int index, double value);
  void add_angle(double value);
  const ::google::protobuf::RepeatedField< double >&
      angle() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_angle();

  // @@protoc_insertion_point(class_scope:gz.msgs.JointAnimation.Joint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::RepeatedField< double > angle_;
  mutable int _angle_cached_byte_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fjoint_5fanimation_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE JointAnimation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.JointAnimation) */ {
 public:
  JointAnimation();
  virtual ~JointAnimation();

  JointAnimation(const JointAnimation& from);

  inline JointAnimation& operator=(const JointAnimation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  JointAnimation(JointAnimation&& from) noexcept
    : JointAnimation() {
    *this = ::std::move(from);
  }

  inline JointAnimation& operator=(JointAnimation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const JointAnimation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JointAnimation* internal_default_instance() {
    return reinterpret_cast<const JointAnimation*>(
               &_JointAnimation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(JointAnimation* other);
  friend void swap(JointAnimation& a, JointAnimation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline JointAnimation* New() const final {
    return CreateMaybeMessage<JointAnimation>(NULL);
  }

  JointAnimation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<JointAnimation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const JointAnimation& from);
  void MergeFrom(const JointAnimation& from);
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
  void InternalSwap(JointAnimation* other);
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

  typedef JointAnimation_Joint Joint;

  // accessors -------------------------------------------------------

  // repeated .gz.msgs.JointAnimation.Joint joint = 3;
  int joint_size() const;
  void clear_joint();
  static const int kJointFieldNumber = 3;
  ::gz::msgs::JointAnimation_Joint* mutable_joint(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointAnimation_Joint >*
      mutable_joint();
  const ::gz::msgs::JointAnimation_Joint& joint(int index) const;
  ::gz::msgs::JointAnimation_Joint* add_joint();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointAnimation_Joint >&
      joint() const;

  // repeated .gz.msgs.Time time = 4;
  int time_size() const;
  void clear_time();
  static const int kTimeFieldNumber = 4;
  ::gz::msgs::Time* mutable_time(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >*
      mutable_time();
  const ::gz::msgs::Time& time(int index) const;
  ::gz::msgs::Time* add_time();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >&
      time() const;

  // string model_name = 2;
  void clear_model_name();
  static const int kModelNameFieldNumber = 2;
  const ::std::string& model_name() const;
  void set_model_name(const ::std::string& value);
  #if LANG_CXX11
  void set_model_name(::std::string&& value);
  #endif
  void set_model_name(const char* value);
  void set_model_name(const char* value, size_t size);
  ::std::string* mutable_model_name();
  ::std::string* release_model_name();
  void set_allocated_model_name(::std::string* model_name);

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

  // @@protoc_insertion_point(class_scope:gz.msgs.JointAnimation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointAnimation_Joint > joint_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time > time_;
  ::google::protobuf::internal::ArenaStringPtr model_name_;
  ::gz::msgs::Header* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fjoint_5fanimation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// JointAnimation_Joint

// repeated string name = 1;
inline int JointAnimation_Joint::name_size() const {
  return name_.size();
}
inline void JointAnimation_Joint::clear_name() {
  name_.Clear();
}
inline const ::std::string& JointAnimation_Joint::name(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.Joint.name)
  return name_.Get(index);
}
inline ::std::string* JointAnimation_Joint::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointAnimation.Joint.name)
  return name_.Mutable(index);
}
inline void JointAnimation_Joint::set_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.JointAnimation.Joint.name)
  name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void JointAnimation_Joint::set_name(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.JointAnimation.Joint.name)
  name_.Mutable(index)->assign(std::move(value));
}
#endif
inline void JointAnimation_Joint::set_name(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gz.msgs.JointAnimation.Joint.name)
}
inline void JointAnimation_Joint::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.JointAnimation.Joint.name)
}
inline ::std::string* JointAnimation_Joint::add_name() {
  // @@protoc_insertion_point(field_add_mutable:gz.msgs.JointAnimation.Joint.name)
  return name_.Add();
}
inline void JointAnimation_Joint::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointAnimation.Joint.name)
}
#if LANG_CXX11
inline void JointAnimation_Joint::add_name(::std::string&& value) {
  name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gz.msgs.JointAnimation.Joint.name)
}
#endif
inline void JointAnimation_Joint::add_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gz.msgs.JointAnimation.Joint.name)
}
inline void JointAnimation_Joint::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gz.msgs.JointAnimation.Joint.name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
JointAnimation_Joint::name() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointAnimation.Joint.name)
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
JointAnimation_Joint::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointAnimation.Joint.name)
  return &name_;
}

// repeated double angle = 2;
inline int JointAnimation_Joint::angle_size() const {
  return angle_.size();
}
inline void JointAnimation_Joint::clear_angle() {
  angle_.Clear();
}
inline double JointAnimation_Joint::angle(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.Joint.angle)
  return angle_.Get(index);
}
inline void JointAnimation_Joint::set_angle(int index, double value) {
  angle_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointAnimation.Joint.angle)
}
inline void JointAnimation_Joint::add_angle(double value) {
  angle_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointAnimation.Joint.angle)
}
inline const ::google::protobuf::RepeatedField< double >&
JointAnimation_Joint::angle() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointAnimation.Joint.angle)
  return angle_;
}
inline ::google::protobuf::RepeatedField< double >*
JointAnimation_Joint::mutable_angle() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointAnimation.Joint.angle)
  return &angle_;
}

// -------------------------------------------------------------------

// JointAnimation

// .gz.msgs.Header header = 1;
inline bool JointAnimation::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& JointAnimation::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& JointAnimation::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* JointAnimation::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.JointAnimation.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* JointAnimation::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointAnimation.header)
  return header_;
}
inline void JointAnimation::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.JointAnimation.header)
}

// string model_name = 2;
inline void JointAnimation::clear_model_name() {
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& JointAnimation::model_name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.model_name)
  return model_name_.GetNoArena();
}
inline void JointAnimation::set_model_name(const ::std::string& value) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointAnimation.model_name)
}
#if LANG_CXX11
inline void JointAnimation::set_model_name(::std::string&& value) {
  
  model_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.JointAnimation.model_name)
}
#endif
inline void JointAnimation::set_model_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.JointAnimation.model_name)
}
inline void JointAnimation::set_model_name(const char* value, size_t size) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.JointAnimation.model_name)
}
inline ::std::string* JointAnimation::mutable_model_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointAnimation.model_name)
  return model_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* JointAnimation::release_model_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.JointAnimation.model_name)
  
  return model_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JointAnimation::set_allocated_model_name(::std::string* model_name) {
  if (model_name != NULL) {
    
  } else {
    
  }
  model_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.JointAnimation.model_name)
}

// repeated .gz.msgs.JointAnimation.Joint joint = 3;
inline int JointAnimation::joint_size() const {
  return joint_.size();
}
inline void JointAnimation::clear_joint() {
  joint_.Clear();
}
inline ::gz::msgs::JointAnimation_Joint* JointAnimation::mutable_joint(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointAnimation.joint)
  return joint_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointAnimation_Joint >*
JointAnimation::mutable_joint() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointAnimation.joint)
  return &joint_;
}
inline const ::gz::msgs::JointAnimation_Joint& JointAnimation::joint(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.joint)
  return joint_.Get(index);
}
inline ::gz::msgs::JointAnimation_Joint* JointAnimation::add_joint() {
  // @@protoc_insertion_point(field_add:gz.msgs.JointAnimation.joint)
  return joint_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointAnimation_Joint >&
JointAnimation::joint() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointAnimation.joint)
  return joint_;
}

// repeated .gz.msgs.Time time = 4;
inline int JointAnimation::time_size() const {
  return time_.size();
}
inline ::gz::msgs::Time* JointAnimation::mutable_time(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointAnimation.time)
  return time_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >*
JointAnimation::mutable_time() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointAnimation.time)
  return &time_;
}
inline const ::gz::msgs::Time& JointAnimation::time(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointAnimation.time)
  return time_.Get(index);
}
inline ::gz::msgs::Time* JointAnimation::add_time() {
  // @@protoc_insertion_point(field_add:gz.msgs.JointAnimation.time)
  return time_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >&
JointAnimation::time() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointAnimation.time)
  return time_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5fanimation_2eproto
