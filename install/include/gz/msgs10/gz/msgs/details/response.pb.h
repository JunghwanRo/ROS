// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/response.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fresponse_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fresponse_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fresponse_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fresponse_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fresponse_2eproto
namespace gz {
namespace msgs {
class Response;
class ResponseDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Response* Arena::CreateMaybeMessage<::gz::msgs::Response>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(NULL);
  }

  Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
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
  void InternalSwap(Response* other);
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

  // string request = 3;
  void clear_request();
  static const int kRequestFieldNumber = 3;
  const ::std::string& request() const;
  void set_request(const ::std::string& value);
  #if LANG_CXX11
  void set_request(::std::string&& value);
  #endif
  void set_request(const char* value);
  void set_request(const char* value, size_t size);
  ::std::string* mutable_request();
  ::std::string* release_request();
  void set_allocated_request(::std::string* request);

  // string response = 4;
  void clear_response();
  static const int kResponseFieldNumber = 4;
  const ::std::string& response() const;
  void set_response(const ::std::string& value);
  #if LANG_CXX11
  void set_response(::std::string&& value);
  #endif
  void set_response(const char* value);
  void set_response(const char* value, size_t size);
  ::std::string* mutable_response();
  ::std::string* release_response();
  void set_allocated_response(::std::string* response);

  // string type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // bytes serialized_data = 6;
  void clear_serialized_data();
  static const int kSerializedDataFieldNumber = 6;
  const ::std::string& serialized_data() const;
  void set_serialized_data(const ::std::string& value);
  #if LANG_CXX11
  void set_serialized_data(::std::string&& value);
  #endif
  void set_serialized_data(const char* value);
  void set_serialized_data(const void* value, size_t size);
  ::std::string* mutable_serialized_data();
  ::std::string* release_serialized_data();
  void set_allocated_serialized_data(::std::string* serialized_data);

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

  // int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr request_;
  ::google::protobuf::internal::ArenaStringPtr response_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr serialized_data_;
  ::gz::msgs::Header* header_;
  ::google::protobuf::int32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fresponse_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Response

// .gz.msgs.Header header = 1;
inline bool Response::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Response::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Response::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Response.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Response::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Response.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Response::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Response.header)
  return header_;
}
inline void Response::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Response.header)
}

// int32 id = 2;
inline void Response::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Response::id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Response.id)
  return id_;
}
inline void Response::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Response.id)
}

// string request = 3;
inline void Response::clear_request() {
  request_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::request() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Response.request)
  return request_.GetNoArena();
}
inline void Response::set_request(const ::std::string& value) {
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Response.request)
}
#if LANG_CXX11
inline void Response::set_request(::std::string&& value) {
  
  request_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Response.request)
}
#endif
inline void Response::set_request(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Response.request)
}
inline void Response::set_request(const char* value, size_t size) {
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Response.request)
}
inline ::std::string* Response::mutable_request() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Response.request)
  return request_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_request() {
  // @@protoc_insertion_point(field_release:gz.msgs.Response.request)
  
  return request_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_request(::std::string* request) {
  if (request != NULL) {
    
  } else {
    
  }
  request_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Response.request)
}

// string response = 4;
inline void Response::clear_response() {
  response_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::response() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Response.response)
  return response_.GetNoArena();
}
inline void Response::set_response(const ::std::string& value) {
  
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Response.response)
}
#if LANG_CXX11
inline void Response::set_response(::std::string&& value) {
  
  response_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Response.response)
}
#endif
inline void Response::set_response(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Response.response)
}
inline void Response::set_response(const char* value, size_t size) {
  
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Response.response)
}
inline ::std::string* Response::mutable_response() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Response.response)
  return response_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_response() {
  // @@protoc_insertion_point(field_release:gz.msgs.Response.response)
  
  return response_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_response(::std::string* response) {
  if (response != NULL) {
    
  } else {
    
  }
  response_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Response.response)
}

// string type = 5;
inline void Response::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Response.type)
  return type_.GetNoArena();
}
inline void Response::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Response.type)
}
#if LANG_CXX11
inline void Response::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Response.type)
}
#endif
inline void Response::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Response.type)
}
inline void Response::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Response.type)
}
inline ::std::string* Response::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Response.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_type() {
  // @@protoc_insertion_point(field_release:gz.msgs.Response.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Response.type)
}

// bytes serialized_data = 6;
inline void Response::clear_serialized_data() {
  serialized_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::serialized_data() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Response.serialized_data)
  return serialized_data_.GetNoArena();
}
inline void Response::set_serialized_data(const ::std::string& value) {
  
  serialized_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Response.serialized_data)
}
#if LANG_CXX11
inline void Response::set_serialized_data(::std::string&& value) {
  
  serialized_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Response.serialized_data)
}
#endif
inline void Response::set_serialized_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  serialized_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Response.serialized_data)
}
inline void Response::set_serialized_data(const void* value, size_t size) {
  
  serialized_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Response.serialized_data)
}
inline ::std::string* Response::mutable_serialized_data() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Response.serialized_data)
  return serialized_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_serialized_data() {
  // @@protoc_insertion_point(field_release:gz.msgs.Response.serialized_data)
  
  return serialized_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_serialized_data(::std::string* serialized_data) {
  if (serialized_data != NULL) {
    
  } else {
    
  }
  serialized_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serialized_data);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Response.serialized_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fresponse_2eproto