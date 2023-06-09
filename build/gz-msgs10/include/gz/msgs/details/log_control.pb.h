// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/log_control.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2flog_5fcontrol_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2flog_5fcontrol_2eproto

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
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flog_5fcontrol_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2flog_5fcontrol_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2flog_5fcontrol_2eproto
namespace gz {
namespace msgs {
class LogControl;
class LogControlDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LogControlDefaultTypeInternal _LogControl_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::LogControl* Arena::CreateMaybeMessage<::gz::msgs::LogControl>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LogControl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.LogControl) */ {
 public:
  LogControl();
  virtual ~LogControl();

  LogControl(const LogControl& from);

  inline LogControl& operator=(const LogControl& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogControl(LogControl&& from) noexcept
    : LogControl() {
    *this = ::std::move(from);
  }

  inline LogControl& operator=(LogControl&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogControl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogControl* internal_default_instance() {
    return reinterpret_cast<const LogControl*>(
               &_LogControl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LogControl* other);
  friend void swap(LogControl& a, LogControl& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogControl* New() const final {
    return CreateMaybeMessage<LogControl>(NULL);
  }

  LogControl* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LogControl>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LogControl& from);
  void MergeFrom(const LogControl& from);
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
  void InternalSwap(LogControl* other);
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

  // string base_path = 5;
  void clear_base_path();
  static const int kBasePathFieldNumber = 5;
  const ::std::string& base_path() const;
  void set_base_path(const ::std::string& value);
  #if LANG_CXX11
  void set_base_path(::std::string&& value);
  #endif
  void set_base_path(const char* value);
  void set_base_path(const char* value, size_t size);
  ::std::string* mutable_base_path();
  ::std::string* release_base_path();
  void set_allocated_base_path(::std::string* base_path);

  // string encoding = 6;
  void clear_encoding();
  static const int kEncodingFieldNumber = 6;
  const ::std::string& encoding() const;
  void set_encoding(const ::std::string& value);
  #if LANG_CXX11
  void set_encoding(::std::string&& value);
  #endif
  void set_encoding(const char* value);
  void set_encoding(const char* value, size_t size);
  ::std::string* mutable_encoding();
  ::std::string* release_encoding();
  void set_allocated_encoding(::std::string* encoding);

  // string record_resources = 7;
  void clear_record_resources();
  static const int kRecordResourcesFieldNumber = 7;
  const ::std::string& record_resources() const;
  void set_record_resources(const ::std::string& value);
  #if LANG_CXX11
  void set_record_resources(::std::string&& value);
  #endif
  void set_record_resources(const char* value);
  void set_record_resources(const char* value, size_t size);
  ::std::string* mutable_record_resources();
  ::std::string* release_record_resources();
  void set_allocated_record_resources(::std::string* record_resources);

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

  // bool start = 2;
  void clear_start();
  static const int kStartFieldNumber = 2;
  bool start() const;
  void set_start(bool value);

  // bool stop = 3;
  void clear_stop();
  static const int kStopFieldNumber = 3;
  bool stop() const;
  void set_stop(bool value);

  // bool paused = 4;
  void clear_paused();
  static const int kPausedFieldNumber = 4;
  bool paused() const;
  void set_paused(bool value);

  // @@protoc_insertion_point(class_scope:gz.msgs.LogControl)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr base_path_;
  ::google::protobuf::internal::ArenaStringPtr encoding_;
  ::google::protobuf::internal::ArenaStringPtr record_resources_;
  ::gz::msgs::Header* header_;
  bool start_;
  bool stop_;
  bool paused_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2flog_5fcontrol_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogControl

// .gz.msgs.Header header = 1;
inline bool LogControl::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& LogControl::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& LogControl::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* LogControl::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.LogControl.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* LogControl::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LogControl.header)
  return header_;
}
inline void LogControl::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LogControl.header)
}

// bool start = 2;
inline void LogControl::clear_start() {
  start_ = false;
}
inline bool LogControl::start() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.start)
  return start_;
}
inline void LogControl::set_start(bool value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.start)
}

// bool stop = 3;
inline void LogControl::clear_stop() {
  stop_ = false;
}
inline bool LogControl::stop() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.stop)
  return stop_;
}
inline void LogControl::set_stop(bool value) {
  
  stop_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.stop)
}

// bool paused = 4;
inline void LogControl::clear_paused() {
  paused_ = false;
}
inline bool LogControl::paused() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.paused)
  return paused_;
}
inline void LogControl::set_paused(bool value) {
  
  paused_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.paused)
}

// string base_path = 5;
inline void LogControl::clear_base_path() {
  base_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogControl::base_path() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.base_path)
  return base_path_.GetNoArena();
}
inline void LogControl::set_base_path(const ::std::string& value) {
  
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.base_path)
}
#if LANG_CXX11
inline void LogControl::set_base_path(::std::string&& value) {
  
  base_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.LogControl.base_path)
}
#endif
inline void LogControl::set_base_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.LogControl.base_path)
}
inline void LogControl::set_base_path(const char* value, size_t size) {
  
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.LogControl.base_path)
}
inline ::std::string* LogControl::mutable_base_path() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.LogControl.base_path)
  return base_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogControl::release_base_path() {
  // @@protoc_insertion_point(field_release:gz.msgs.LogControl.base_path)
  
  return base_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_allocated_base_path(::std::string* base_path) {
  if (base_path != NULL) {
    
  } else {
    
  }
  base_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), base_path);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LogControl.base_path)
}

// string encoding = 6;
inline void LogControl::clear_encoding() {
  encoding_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogControl::encoding() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.encoding)
  return encoding_.GetNoArena();
}
inline void LogControl::set_encoding(const ::std::string& value) {
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.encoding)
}
#if LANG_CXX11
inline void LogControl::set_encoding(::std::string&& value) {
  
  encoding_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.LogControl.encoding)
}
#endif
inline void LogControl::set_encoding(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.LogControl.encoding)
}
inline void LogControl::set_encoding(const char* value, size_t size) {
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.LogControl.encoding)
}
inline ::std::string* LogControl::mutable_encoding() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.LogControl.encoding)
  return encoding_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogControl::release_encoding() {
  // @@protoc_insertion_point(field_release:gz.msgs.LogControl.encoding)
  
  return encoding_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_allocated_encoding(::std::string* encoding) {
  if (encoding != NULL) {
    
  } else {
    
  }
  encoding_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encoding);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LogControl.encoding)
}

// string record_resources = 7;
inline void LogControl::clear_record_resources() {
  record_resources_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogControl::record_resources() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogControl.record_resources)
  return record_resources_.GetNoArena();
}
inline void LogControl::set_record_resources(const ::std::string& value) {
  
  record_resources_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.LogControl.record_resources)
}
#if LANG_CXX11
inline void LogControl::set_record_resources(::std::string&& value) {
  
  record_resources_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.LogControl.record_resources)
}
#endif
inline void LogControl::set_record_resources(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  record_resources_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.LogControl.record_resources)
}
inline void LogControl::set_record_resources(const char* value, size_t size) {
  
  record_resources_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.LogControl.record_resources)
}
inline ::std::string* LogControl::mutable_record_resources() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.LogControl.record_resources)
  return record_resources_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogControl::release_record_resources() {
  // @@protoc_insertion_point(field_release:gz.msgs.LogControl.record_resources)
  
  return record_resources_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_allocated_record_resources(::std::string* record_resources) {
  if (record_resources != NULL) {
    
  } else {
    
  }
  record_resources_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), record_resources);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LogControl.record_resources)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2flog_5fcontrol_2eproto
