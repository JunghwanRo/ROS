// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/web_request.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fweb_5frequest_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fweb_5frequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fweb_5frequest_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fweb_5frequest_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fweb_5frequest_2eproto
namespace gz {
namespace msgs {
class WebRequest;
class WebRequestDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern WebRequestDefaultTypeInternal _WebRequest_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::WebRequest* Arena::CreateMaybeMessage<::gz::msgs::WebRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE WebRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.WebRequest) */ {
 public:
  WebRequest();
  virtual ~WebRequest();

  WebRequest(const WebRequest& from);

  inline WebRequest& operator=(const WebRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WebRequest(WebRequest&& from) noexcept
    : WebRequest() {
    *this = ::std::move(from);
  }

  inline WebRequest& operator=(WebRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WebRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WebRequest* internal_default_instance() {
    return reinterpret_cast<const WebRequest*>(
               &_WebRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(WebRequest* other);
  friend void swap(WebRequest& a, WebRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WebRequest* New() const final {
    return CreateMaybeMessage<WebRequest>(NULL);
  }

  WebRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<WebRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const WebRequest& from);
  void MergeFrom(const WebRequest& from);
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
  void InternalSwap(WebRequest* other);
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

  // string operation = 2;
  void clear_operation();
  static const int kOperationFieldNumber = 2;
  const ::std::string& operation() const;
  void set_operation(const ::std::string& value);
  #if LANG_CXX11
  void set_operation(::std::string&& value);
  #endif
  void set_operation(const char* value);
  void set_operation(const char* value, size_t size);
  ::std::string* mutable_operation();
  ::std::string* release_operation();
  void set_allocated_operation(::std::string* operation);

  // string topic = 3;
  void clear_topic();
  static const int kTopicFieldNumber = 3;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // string msg_type = 4;
  void clear_msg_type();
  static const int kMsgTypeFieldNumber = 4;
  const ::std::string& msg_type() const;
  void set_msg_type(const ::std::string& value);
  #if LANG_CXX11
  void set_msg_type(::std::string&& value);
  #endif
  void set_msg_type(const char* value);
  void set_msg_type(const char* value, size_t size);
  ::std::string* mutable_msg_type();
  ::std::string* release_msg_type();
  void set_allocated_msg_type(::std::string* msg_type);

  // string compression = 5;
  void clear_compression();
  static const int kCompressionFieldNumber = 5;
  const ::std::string& compression() const;
  void set_compression(const ::std::string& value);
  #if LANG_CXX11
  void set_compression(::std::string&& value);
  #endif
  void set_compression(const char* value);
  void set_compression(const char* value, size_t size);
  ::std::string* mutable_compression();
  ::std::string* release_compression();
  void set_allocated_compression(::std::string* compression);

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

  // double hz = 6;
  void clear_hz();
  static const int kHzFieldNumber = 6;
  double hz() const;
  void set_hz(double value);

  // @@protoc_insertion_point(class_scope:gz.msgs.WebRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr operation_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  ::google::protobuf::internal::ArenaStringPtr msg_type_;
  ::google::protobuf::internal::ArenaStringPtr compression_;
  ::gz::msgs::Header* header_;
  double hz_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WebRequest

// .gz.msgs.Header header = 1;
inline bool WebRequest::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& WebRequest::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& WebRequest::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* WebRequest::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.WebRequest.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* WebRequest::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.WebRequest.header)
  return header_;
}
inline void WebRequest::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WebRequest.header)
}

// string operation = 2;
inline void WebRequest::clear_operation() {
  operation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WebRequest::operation() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.operation)
  return operation_.GetNoArena();
}
inline void WebRequest::set_operation(const ::std::string& value) {
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WebRequest.operation)
}
#if LANG_CXX11
inline void WebRequest::set_operation(::std::string&& value) {
  
  operation_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WebRequest.operation)
}
#endif
inline void WebRequest::set_operation(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WebRequest.operation)
}
inline void WebRequest::set_operation(const char* value, size_t size) {
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WebRequest.operation)
}
inline ::std::string* WebRequest::mutable_operation() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WebRequest.operation)
  return operation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WebRequest::release_operation() {
  // @@protoc_insertion_point(field_release:gz.msgs.WebRequest.operation)
  
  return operation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WebRequest::set_allocated_operation(::std::string* operation) {
  if (operation != NULL) {
    
  } else {
    
  }
  operation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), operation);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WebRequest.operation)
}

// string topic = 3;
inline void WebRequest::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WebRequest::topic() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.topic)
  return topic_.GetNoArena();
}
inline void WebRequest::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WebRequest.topic)
}
#if LANG_CXX11
inline void WebRequest::set_topic(::std::string&& value) {
  
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WebRequest.topic)
}
#endif
inline void WebRequest::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WebRequest.topic)
}
inline void WebRequest::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WebRequest.topic)
}
inline ::std::string* WebRequest::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WebRequest.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WebRequest::release_topic() {
  // @@protoc_insertion_point(field_release:gz.msgs.WebRequest.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WebRequest::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WebRequest.topic)
}

// string msg_type = 4;
inline void WebRequest::clear_msg_type() {
  msg_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WebRequest::msg_type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.msg_type)
  return msg_type_.GetNoArena();
}
inline void WebRequest::set_msg_type(const ::std::string& value) {
  
  msg_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WebRequest.msg_type)
}
#if LANG_CXX11
inline void WebRequest::set_msg_type(::std::string&& value) {
  
  msg_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WebRequest.msg_type)
}
#endif
inline void WebRequest::set_msg_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WebRequest.msg_type)
}
inline void WebRequest::set_msg_type(const char* value, size_t size) {
  
  msg_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WebRequest.msg_type)
}
inline ::std::string* WebRequest::mutable_msg_type() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WebRequest.msg_type)
  return msg_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WebRequest::release_msg_type() {
  // @@protoc_insertion_point(field_release:gz.msgs.WebRequest.msg_type)
  
  return msg_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WebRequest::set_allocated_msg_type(::std::string* msg_type) {
  if (msg_type != NULL) {
    
  } else {
    
  }
  msg_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg_type);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WebRequest.msg_type)
}

// string compression = 5;
inline void WebRequest::clear_compression() {
  compression_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WebRequest::compression() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.compression)
  return compression_.GetNoArena();
}
inline void WebRequest::set_compression(const ::std::string& value) {
  
  compression_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WebRequest.compression)
}
#if LANG_CXX11
inline void WebRequest::set_compression(::std::string&& value) {
  
  compression_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WebRequest.compression)
}
#endif
inline void WebRequest::set_compression(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  compression_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WebRequest.compression)
}
inline void WebRequest::set_compression(const char* value, size_t size) {
  
  compression_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WebRequest.compression)
}
inline ::std::string* WebRequest::mutable_compression() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WebRequest.compression)
  return compression_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WebRequest::release_compression() {
  // @@protoc_insertion_point(field_release:gz.msgs.WebRequest.compression)
  
  return compression_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WebRequest::set_allocated_compression(::std::string* compression) {
  if (compression != NULL) {
    
  } else {
    
  }
  compression_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), compression);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WebRequest.compression)
}

// double hz = 6;
inline void WebRequest::clear_hz() {
  hz_ = 0;
}
inline double WebRequest::hz() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WebRequest.hz)
  return hz_;
}
inline void WebRequest::set_hz(double value) {
  
  hz_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.WebRequest.hz)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fweb_5frequest_2eproto
