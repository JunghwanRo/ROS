// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/axis_aligned_2d_box.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto

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
#include "gz/msgs/vector2d.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto
namespace gz {
namespace msgs {
class AxisAligned2DBox;
class AxisAligned2DBoxDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AxisAligned2DBoxDefaultTypeInternal _AxisAligned2DBox_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::AxisAligned2DBox* Arena::CreateMaybeMessage<::gz::msgs::AxisAligned2DBox>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE AxisAligned2DBox : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.AxisAligned2DBox) */ {
 public:
  AxisAligned2DBox();
  virtual ~AxisAligned2DBox();

  AxisAligned2DBox(const AxisAligned2DBox& from);

  inline AxisAligned2DBox& operator=(const AxisAligned2DBox& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AxisAligned2DBox(AxisAligned2DBox&& from) noexcept
    : AxisAligned2DBox() {
    *this = ::std::move(from);
  }

  inline AxisAligned2DBox& operator=(AxisAligned2DBox&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AxisAligned2DBox& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AxisAligned2DBox* internal_default_instance() {
    return reinterpret_cast<const AxisAligned2DBox*>(
               &_AxisAligned2DBox_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AxisAligned2DBox* other);
  friend void swap(AxisAligned2DBox& a, AxisAligned2DBox& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AxisAligned2DBox* New() const final {
    return CreateMaybeMessage<AxisAligned2DBox>(NULL);
  }

  AxisAligned2DBox* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AxisAligned2DBox>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AxisAligned2DBox& from);
  void MergeFrom(const AxisAligned2DBox& from);
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
  void InternalSwap(AxisAligned2DBox* other);
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

  // .gz.msgs.Vector2d min_corner = 2;
  bool has_min_corner() const;
  void clear_min_corner();
  static const int kMinCornerFieldNumber = 2;
  private:
  const ::gz::msgs::Vector2d& _internal_min_corner() const;
  public:
  const ::gz::msgs::Vector2d& min_corner() const;
  ::gz::msgs::Vector2d* release_min_corner();
  ::gz::msgs::Vector2d* mutable_min_corner();
  void set_allocated_min_corner(::gz::msgs::Vector2d* min_corner);

  // .gz.msgs.Vector2d max_corner = 3;
  bool has_max_corner() const;
  void clear_max_corner();
  static const int kMaxCornerFieldNumber = 3;
  private:
  const ::gz::msgs::Vector2d& _internal_max_corner() const;
  public:
  const ::gz::msgs::Vector2d& max_corner() const;
  ::gz::msgs::Vector2d* release_max_corner();
  ::gz::msgs::Vector2d* mutable_max_corner();
  void set_allocated_max_corner(::gz::msgs::Vector2d* max_corner);

  // @@protoc_insertion_point(class_scope:gz.msgs.AxisAligned2DBox)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Vector2d* min_corner_;
  ::gz::msgs::Vector2d* max_corner_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AxisAligned2DBox

// .gz.msgs.Header header = 1;
inline bool AxisAligned2DBox::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& AxisAligned2DBox::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& AxisAligned2DBox::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.AxisAligned2DBox.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* AxisAligned2DBox::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.AxisAligned2DBox.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* AxisAligned2DBox::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AxisAligned2DBox.header)
  return header_;
}
inline void AxisAligned2DBox::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AxisAligned2DBox.header)
}

// .gz.msgs.Vector2d min_corner = 2;
inline bool AxisAligned2DBox::has_min_corner() const {
  return this != internal_default_instance() && min_corner_ != NULL;
}
inline const ::gz::msgs::Vector2d& AxisAligned2DBox::_internal_min_corner() const {
  return *min_corner_;
}
inline const ::gz::msgs::Vector2d& AxisAligned2DBox::min_corner() const {
  const ::gz::msgs::Vector2d* p = min_corner_;
  // @@protoc_insertion_point(field_get:gz.msgs.AxisAligned2DBox.min_corner)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector2d*>(
      &::gz::msgs::_Vector2d_default_instance_);
}
inline ::gz::msgs::Vector2d* AxisAligned2DBox::release_min_corner() {
  // @@protoc_insertion_point(field_release:gz.msgs.AxisAligned2DBox.min_corner)
  
  ::gz::msgs::Vector2d* temp = min_corner_;
  min_corner_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector2d* AxisAligned2DBox::mutable_min_corner() {
  
  if (min_corner_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector2d>(GetArenaNoVirtual());
    min_corner_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AxisAligned2DBox.min_corner)
  return min_corner_;
}
inline void AxisAligned2DBox::set_allocated_min_corner(::gz::msgs::Vector2d* min_corner) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(min_corner_);
  }
  if (min_corner) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      min_corner = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, min_corner, submessage_arena);
    }
    
  } else {
    
  }
  min_corner_ = min_corner;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AxisAligned2DBox.min_corner)
}

// .gz.msgs.Vector2d max_corner = 3;
inline bool AxisAligned2DBox::has_max_corner() const {
  return this != internal_default_instance() && max_corner_ != NULL;
}
inline const ::gz::msgs::Vector2d& AxisAligned2DBox::_internal_max_corner() const {
  return *max_corner_;
}
inline const ::gz::msgs::Vector2d& AxisAligned2DBox::max_corner() const {
  const ::gz::msgs::Vector2d* p = max_corner_;
  // @@protoc_insertion_point(field_get:gz.msgs.AxisAligned2DBox.max_corner)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector2d*>(
      &::gz::msgs::_Vector2d_default_instance_);
}
inline ::gz::msgs::Vector2d* AxisAligned2DBox::release_max_corner() {
  // @@protoc_insertion_point(field_release:gz.msgs.AxisAligned2DBox.max_corner)
  
  ::gz::msgs::Vector2d* temp = max_corner_;
  max_corner_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector2d* AxisAligned2DBox::mutable_max_corner() {
  
  if (max_corner_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector2d>(GetArenaNoVirtual());
    max_corner_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AxisAligned2DBox.max_corner)
  return max_corner_;
}
inline void AxisAligned2DBox::set_allocated_max_corner(::gz::msgs::Vector2d* max_corner) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(max_corner_);
  }
  if (max_corner) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      max_corner = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, max_corner, submessage_arena);
    }
    
  } else {
    
  }
  max_corner_ = max_corner;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AxisAligned2DBox.max_corner)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2faxis_5faligned_5f2d_5fbox_2eproto
