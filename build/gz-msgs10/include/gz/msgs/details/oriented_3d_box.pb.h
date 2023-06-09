// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/oriented_3d_box.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto

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
#include "gz/msgs/vector3d.pb.h"
#include "gz/msgs/quaternion.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto
namespace gz {
namespace msgs {
class Oriented3DBox;
class Oriented3DBoxDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Oriented3DBoxDefaultTypeInternal _Oriented3DBox_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Oriented3DBox* Arena::CreateMaybeMessage<::gz::msgs::Oriented3DBox>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Oriented3DBox : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Oriented3DBox) */ {
 public:
  Oriented3DBox();
  virtual ~Oriented3DBox();

  Oriented3DBox(const Oriented3DBox& from);

  inline Oriented3DBox& operator=(const Oriented3DBox& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Oriented3DBox(Oriented3DBox&& from) noexcept
    : Oriented3DBox() {
    *this = ::std::move(from);
  }

  inline Oriented3DBox& operator=(Oriented3DBox&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Oriented3DBox& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Oriented3DBox* internal_default_instance() {
    return reinterpret_cast<const Oriented3DBox*>(
               &_Oriented3DBox_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Oriented3DBox* other);
  friend void swap(Oriented3DBox& a, Oriented3DBox& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Oriented3DBox* New() const final {
    return CreateMaybeMessage<Oriented3DBox>(NULL);
  }

  Oriented3DBox* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Oriented3DBox>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Oriented3DBox& from);
  void MergeFrom(const Oriented3DBox& from);
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
  void InternalSwap(Oriented3DBox* other);
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

  // .gz.msgs.Vector3d center = 2;
  bool has_center() const;
  void clear_center();
  static const int kCenterFieldNumber = 2;
  private:
  const ::gz::msgs::Vector3d& _internal_center() const;
  public:
  const ::gz::msgs::Vector3d& center() const;
  ::gz::msgs::Vector3d* release_center();
  ::gz::msgs::Vector3d* mutable_center();
  void set_allocated_center(::gz::msgs::Vector3d* center);

  // .gz.msgs.Quaternion orientation = 3;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 3;
  private:
  const ::gz::msgs::Quaternion& _internal_orientation() const;
  public:
  const ::gz::msgs::Quaternion& orientation() const;
  ::gz::msgs::Quaternion* release_orientation();
  ::gz::msgs::Quaternion* mutable_orientation();
  void set_allocated_orientation(::gz::msgs::Quaternion* orientation);

  // .gz.msgs.Vector3d boxSize = 4;
  bool has_boxsize() const;
  void clear_boxsize();
  static const int kBoxSizeFieldNumber = 4;
  private:
  const ::gz::msgs::Vector3d& _internal_boxsize() const;
  public:
  const ::gz::msgs::Vector3d& boxsize() const;
  ::gz::msgs::Vector3d* release_boxsize();
  ::gz::msgs::Vector3d* mutable_boxsize();
  void set_allocated_boxsize(::gz::msgs::Vector3d* boxsize);

  // @@protoc_insertion_point(class_scope:gz.msgs.Oriented3DBox)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Vector3d* center_;
  ::gz::msgs::Quaternion* orientation_;
  ::gz::msgs::Vector3d* boxsize_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Oriented3DBox

// .gz.msgs.Header header = 1;
inline bool Oriented3DBox::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Oriented3DBox::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Oriented3DBox::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Oriented3DBox.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Oriented3DBox::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Oriented3DBox.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Oriented3DBox::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Oriented3DBox.header)
  return header_;
}
inline void Oriented3DBox::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Oriented3DBox.header)
}

// .gz.msgs.Vector3d center = 2;
inline bool Oriented3DBox::has_center() const {
  return this != internal_default_instance() && center_ != NULL;
}
inline const ::gz::msgs::Vector3d& Oriented3DBox::_internal_center() const {
  return *center_;
}
inline const ::gz::msgs::Vector3d& Oriented3DBox::center() const {
  const ::gz::msgs::Vector3d* p = center_;
  // @@protoc_insertion_point(field_get:gz.msgs.Oriented3DBox.center)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* Oriented3DBox::release_center() {
  // @@protoc_insertion_point(field_release:gz.msgs.Oriented3DBox.center)
  
  ::gz::msgs::Vector3d* temp = center_;
  center_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* Oriented3DBox::mutable_center() {
  
  if (center_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    center_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Oriented3DBox.center)
  return center_;
}
inline void Oriented3DBox::set_allocated_center(::gz::msgs::Vector3d* center) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(center_);
  }
  if (center) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      center = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, center, submessage_arena);
    }
    
  } else {
    
  }
  center_ = center;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Oriented3DBox.center)
}

// .gz.msgs.Quaternion orientation = 3;
inline bool Oriented3DBox::has_orientation() const {
  return this != internal_default_instance() && orientation_ != NULL;
}
inline const ::gz::msgs::Quaternion& Oriented3DBox::_internal_orientation() const {
  return *orientation_;
}
inline const ::gz::msgs::Quaternion& Oriented3DBox::orientation() const {
  const ::gz::msgs::Quaternion* p = orientation_;
  // @@protoc_insertion_point(field_get:gz.msgs.Oriented3DBox.orientation)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Quaternion*>(
      &::gz::msgs::_Quaternion_default_instance_);
}
inline ::gz::msgs::Quaternion* Oriented3DBox::release_orientation() {
  // @@protoc_insertion_point(field_release:gz.msgs.Oriented3DBox.orientation)
  
  ::gz::msgs::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline ::gz::msgs::Quaternion* Oriented3DBox::mutable_orientation() {
  
  if (orientation_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Quaternion>(GetArenaNoVirtual());
    orientation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Oriented3DBox.orientation)
  return orientation_;
}
inline void Oriented3DBox::set_allocated_orientation(::gz::msgs::Quaternion* orientation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(orientation_);
  }
  if (orientation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      orientation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, orientation, submessage_arena);
    }
    
  } else {
    
  }
  orientation_ = orientation;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Oriented3DBox.orientation)
}

// .gz.msgs.Vector3d boxSize = 4;
inline bool Oriented3DBox::has_boxsize() const {
  return this != internal_default_instance() && boxsize_ != NULL;
}
inline const ::gz::msgs::Vector3d& Oriented3DBox::_internal_boxsize() const {
  return *boxsize_;
}
inline const ::gz::msgs::Vector3d& Oriented3DBox::boxsize() const {
  const ::gz::msgs::Vector3d* p = boxsize_;
  // @@protoc_insertion_point(field_get:gz.msgs.Oriented3DBox.boxSize)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* Oriented3DBox::release_boxsize() {
  // @@protoc_insertion_point(field_release:gz.msgs.Oriented3DBox.boxSize)
  
  ::gz::msgs::Vector3d* temp = boxsize_;
  boxsize_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* Oriented3DBox::mutable_boxsize() {
  
  if (boxsize_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    boxsize_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Oriented3DBox.boxSize)
  return boxsize_;
}
inline void Oriented3DBox::set_allocated_boxsize(::gz::msgs::Vector3d* boxsize) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(boxsize_);
  }
  if (boxsize) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      boxsize = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, boxsize, submessage_arena);
    }
    
  } else {
    
  }
  boxsize_ = boxsize;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Oriented3DBox.boxSize)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2foriented_5f3d_5fbox_2eproto
