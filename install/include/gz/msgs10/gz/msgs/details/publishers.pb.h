// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/publishers.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fpublishers_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fpublishers_2eproto

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
#include "gz/msgs/publish.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpublishers_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fpublishers_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fpublishers_2eproto
namespace gz {
namespace msgs {
class Publishers;
class PublishersDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern PublishersDefaultTypeInternal _Publishers_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Publishers* Arena::CreateMaybeMessage<::gz::msgs::Publishers>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Publishers : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Publishers) */ {
 public:
  Publishers();
  virtual ~Publishers();

  Publishers(const Publishers& from);

  inline Publishers& operator=(const Publishers& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Publishers(Publishers&& from) noexcept
    : Publishers() {
    *this = ::std::move(from);
  }

  inline Publishers& operator=(Publishers&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Publishers& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Publishers* internal_default_instance() {
    return reinterpret_cast<const Publishers*>(
               &_Publishers_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Publishers* other);
  friend void swap(Publishers& a, Publishers& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Publishers* New() const final {
    return CreateMaybeMessage<Publishers>(NULL);
  }

  Publishers* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Publishers>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Publishers& from);
  void MergeFrom(const Publishers& from);
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
  void InternalSwap(Publishers* other);
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

  // repeated .gz.msgs.Publish publisher = 2;
  int publisher_size() const;
  void clear_publisher();
  static const int kPublisherFieldNumber = 2;
  ::gz::msgs::Publish* mutable_publisher(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Publish >*
      mutable_publisher();
  const ::gz::msgs::Publish& publisher(int index) const;
  ::gz::msgs::Publish* add_publisher();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Publish >&
      publisher() const;

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

  // @@protoc_insertion_point(class_scope:gz.msgs.Publishers)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Publish > publisher_;
  ::gz::msgs::Header* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fpublishers_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Publishers

// .gz.msgs.Header header = 1;
inline bool Publishers::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Publishers::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Publishers::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Publishers.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Publishers::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Publishers.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Publishers::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Publishers.header)
  return header_;
}
inline void Publishers::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Publishers.header)
}

// repeated .gz.msgs.Publish publisher = 2;
inline int Publishers::publisher_size() const {
  return publisher_.size();
}
inline ::gz::msgs::Publish* Publishers::mutable_publisher(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Publishers.publisher)
  return publisher_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Publish >*
Publishers::mutable_publisher() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Publishers.publisher)
  return &publisher_;
}
inline const ::gz::msgs::Publish& Publishers::publisher(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Publishers.publisher)
  return publisher_.Get(index);
}
inline ::gz::msgs::Publish* Publishers::add_publisher() {
  // @@protoc_insertion_point(field_add:gz.msgs.Publishers.publisher)
  return publisher_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Publish >&
Publishers::publisher() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Publishers.publisher)
  return publisher_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fpublishers_2eproto
