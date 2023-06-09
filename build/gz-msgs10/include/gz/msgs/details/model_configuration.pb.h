// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/model_configuration.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fmodel_5fconfiguration_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fmodel_5fconfiguration_2eproto

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
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fmodel_5fconfiguration_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fmodel_5fconfiguration_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2fmodel_5fconfiguration_2eproto
namespace gz {
namespace msgs {
class ModelConfiguration;
class ModelConfigurationDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ModelConfigurationDefaultTypeInternal _ModelConfiguration_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::ModelConfiguration* Arena::CreateMaybeMessage<::gz::msgs::ModelConfiguration>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE ModelConfiguration : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.ModelConfiguration) */ {
 public:
  ModelConfiguration();
  virtual ~ModelConfiguration();

  ModelConfiguration(const ModelConfiguration& from);

  inline ModelConfiguration& operator=(const ModelConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ModelConfiguration(ModelConfiguration&& from) noexcept
    : ModelConfiguration() {
    *this = ::std::move(from);
  }

  inline ModelConfiguration& operator=(ModelConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelConfiguration* internal_default_instance() {
    return reinterpret_cast<const ModelConfiguration*>(
               &_ModelConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ModelConfiguration* other);
  friend void swap(ModelConfiguration& a, ModelConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ModelConfiguration* New() const final {
    return CreateMaybeMessage<ModelConfiguration>(NULL);
  }

  ModelConfiguration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ModelConfiguration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ModelConfiguration& from);
  void MergeFrom(const ModelConfiguration& from);
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
  void InternalSwap(ModelConfiguration* other);
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

  // repeated string joint_names = 3;
  int joint_names_size() const;
  void clear_joint_names();
  static const int kJointNamesFieldNumber = 3;
  const ::std::string& joint_names(int index) const;
  ::std::string* mutable_joint_names(int index);
  void set_joint_names(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_joint_names(int index, ::std::string&& value);
  #endif
  void set_joint_names(int index, const char* value);
  void set_joint_names(int index, const char* value, size_t size);
  ::std::string* add_joint_names();
  void add_joint_names(const ::std::string& value);
  #if LANG_CXX11
  void add_joint_names(::std::string&& value);
  #endif
  void add_joint_names(const char* value);
  void add_joint_names(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& joint_names() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_joint_names();

  // repeated double joint_positions = 4;
  int joint_positions_size() const;
  void clear_joint_positions();
  static const int kJointPositionsFieldNumber = 4;
  double joint_positions(int index) const;
  void set_joint_positions(int index, double value);
  void add_joint_positions(double value);
  const ::google::protobuf::RepeatedField< double >&
      joint_positions() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_joint_positions();

  // string link_name = 6;
  void clear_link_name();
  static const int kLinkNameFieldNumber = 6;
  const ::std::string& link_name() const;
  void set_link_name(const ::std::string& value);
  #if LANG_CXX11
  void set_link_name(::std::string&& value);
  #endif
  void set_link_name(const char* value);
  void set_link_name(const char* value, size_t size);
  ::std::string* mutable_link_name();
  ::std::string* release_link_name();
  void set_allocated_link_name(::std::string* link_name);

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

  // .gz.msgs.Time time = 2;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  private:
  const ::gz::msgs::Time& _internal_time() const;
  public:
  const ::gz::msgs::Time& time() const;
  ::gz::msgs::Time* release_time();
  ::gz::msgs::Time* mutable_time();
  void set_allocated_time(::gz::msgs::Time* time);

  // .gz.msgs.Pose pose = 5;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 5;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // @@protoc_insertion_point(class_scope:gz.msgs.ModelConfiguration)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> joint_names_;
  ::google::protobuf::RepeatedField< double > joint_positions_;
  mutable int _joint_positions_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr link_name_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Time* time_;
  ::gz::msgs::Pose* pose_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fmodel_5fconfiguration_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ModelConfiguration

// .gz.msgs.Header header = 1;
inline bool ModelConfiguration::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& ModelConfiguration::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& ModelConfiguration::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* ModelConfiguration::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.ModelConfiguration.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* ModelConfiguration::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.ModelConfiguration.header)
  return header_;
}
inline void ModelConfiguration::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ModelConfiguration.header)
}

// .gz.msgs.Time time = 2;
inline bool ModelConfiguration::has_time() const {
  return this != internal_default_instance() && time_ != NULL;
}
inline const ::gz::msgs::Time& ModelConfiguration::_internal_time() const {
  return *time_;
}
inline const ::gz::msgs::Time& ModelConfiguration::time() const {
  const ::gz::msgs::Time* p = time_;
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.time)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Time*>(
      &::gz::msgs::_Time_default_instance_);
}
inline ::gz::msgs::Time* ModelConfiguration::release_time() {
  // @@protoc_insertion_point(field_release:gz.msgs.ModelConfiguration.time)
  
  ::gz::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline ::gz::msgs::Time* ModelConfiguration::mutable_time() {
  
  if (time_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.ModelConfiguration.time)
  return time_;
}
inline void ModelConfiguration::set_allocated_time(::gz::msgs::Time* time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(time_);
  }
  if (time) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    
  } else {
    
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ModelConfiguration.time)
}

// repeated string joint_names = 3;
inline int ModelConfiguration::joint_names_size() const {
  return joint_names_.size();
}
inline void ModelConfiguration::clear_joint_names() {
  joint_names_.Clear();
}
inline const ::std::string& ModelConfiguration::joint_names(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.joint_names)
  return joint_names_.Get(index);
}
inline ::std::string* ModelConfiguration::mutable_joint_names(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.ModelConfiguration.joint_names)
  return joint_names_.Mutable(index);
}
inline void ModelConfiguration::set_joint_names(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.ModelConfiguration.joint_names)
  joint_names_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void ModelConfiguration::set_joint_names(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.ModelConfiguration.joint_names)
  joint_names_.Mutable(index)->assign(std::move(value));
}
#endif
inline void ModelConfiguration::set_joint_names(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  joint_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gz.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::set_joint_names(int index, const char* value, size_t size) {
  joint_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.ModelConfiguration.joint_names)
}
inline ::std::string* ModelConfiguration::add_joint_names() {
  // @@protoc_insertion_point(field_add_mutable:gz.msgs.ModelConfiguration.joint_names)
  return joint_names_.Add();
}
inline void ModelConfiguration::add_joint_names(const ::std::string& value) {
  joint_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gz.msgs.ModelConfiguration.joint_names)
}
#if LANG_CXX11
inline void ModelConfiguration::add_joint_names(::std::string&& value) {
  joint_names_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gz.msgs.ModelConfiguration.joint_names)
}
#endif
inline void ModelConfiguration::add_joint_names(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  joint_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gz.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::add_joint_names(const char* value, size_t size) {
  joint_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gz.msgs.ModelConfiguration.joint_names)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ModelConfiguration::joint_names() const {
  // @@protoc_insertion_point(field_list:gz.msgs.ModelConfiguration.joint_names)
  return joint_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ModelConfiguration::mutable_joint_names() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.ModelConfiguration.joint_names)
  return &joint_names_;
}

// repeated double joint_positions = 4;
inline int ModelConfiguration::joint_positions_size() const {
  return joint_positions_.size();
}
inline void ModelConfiguration::clear_joint_positions() {
  joint_positions_.Clear();
}
inline double ModelConfiguration::joint_positions(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.joint_positions)
  return joint_positions_.Get(index);
}
inline void ModelConfiguration::set_joint_positions(int index, double value) {
  joint_positions_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.ModelConfiguration.joint_positions)
}
inline void ModelConfiguration::add_joint_positions(double value) {
  joint_positions_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.ModelConfiguration.joint_positions)
}
inline const ::google::protobuf::RepeatedField< double >&
ModelConfiguration::joint_positions() const {
  // @@protoc_insertion_point(field_list:gz.msgs.ModelConfiguration.joint_positions)
  return joint_positions_;
}
inline ::google::protobuf::RepeatedField< double >*
ModelConfiguration::mutable_joint_positions() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.ModelConfiguration.joint_positions)
  return &joint_positions_;
}

// .gz.msgs.Pose pose = 5;
inline bool ModelConfiguration::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& ModelConfiguration::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& ModelConfiguration::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* ModelConfiguration::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.ModelConfiguration.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* ModelConfiguration::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.ModelConfiguration.pose)
  return pose_;
}
inline void ModelConfiguration::set_allocated_pose(::gz::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ModelConfiguration.pose)
}

// string link_name = 6;
inline void ModelConfiguration::clear_link_name() {
  link_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ModelConfiguration::link_name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ModelConfiguration.link_name)
  return link_name_.GetNoArena();
}
inline void ModelConfiguration::set_link_name(const ::std::string& value) {
  
  link_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.ModelConfiguration.link_name)
}
#if LANG_CXX11
inline void ModelConfiguration::set_link_name(::std::string&& value) {
  
  link_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.ModelConfiguration.link_name)
}
#endif
inline void ModelConfiguration::set_link_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  link_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.ModelConfiguration.link_name)
}
inline void ModelConfiguration::set_link_name(const char* value, size_t size) {
  
  link_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.ModelConfiguration.link_name)
}
inline ::std::string* ModelConfiguration::mutable_link_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.ModelConfiguration.link_name)
  return link_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ModelConfiguration::release_link_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.ModelConfiguration.link_name)
  
  return link_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ModelConfiguration::set_allocated_link_name(::std::string* link_name) {
  if (link_name != NULL) {
    
  } else {
    
  }
  link_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), link_name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ModelConfiguration.link_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fmodel_5fconfiguration_2eproto
