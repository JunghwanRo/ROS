// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/imagegeom.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fimagegeom_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fimagegeom_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fimagegeom_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fimagegeom_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fimagegeom_2eproto
namespace gz {
namespace msgs {
class ImageGeom;
class ImageGeomDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ImageGeomDefaultTypeInternal _ImageGeom_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::ImageGeom* Arena::CreateMaybeMessage<::gz::msgs::ImageGeom>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE ImageGeom : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.ImageGeom) */ {
 public:
  ImageGeom();
  virtual ~ImageGeom();

  ImageGeom(const ImageGeom& from);

  inline ImageGeom& operator=(const ImageGeom& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ImageGeom(ImageGeom&& from) noexcept
    : ImageGeom() {
    *this = ::std::move(from);
  }

  inline ImageGeom& operator=(ImageGeom&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ImageGeom& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ImageGeom* internal_default_instance() {
    return reinterpret_cast<const ImageGeom*>(
               &_ImageGeom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ImageGeom* other);
  friend void swap(ImageGeom& a, ImageGeom& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ImageGeom* New() const final {
    return CreateMaybeMessage<ImageGeom>(NULL);
  }

  ImageGeom* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ImageGeom>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ImageGeom& from);
  void MergeFrom(const ImageGeom& from);
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
  void InternalSwap(ImageGeom* other);
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

  // string uri = 2;
  void clear_uri();
  static const int kUriFieldNumber = 2;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  #if LANG_CXX11
  void set_uri(::std::string&& value);
  #endif
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

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

  // double scale = 3;
  void clear_scale();
  static const int kScaleFieldNumber = 3;
  double scale() const;
  void set_scale(double value);

  // double height = 5;
  void clear_height();
  static const int kHeightFieldNumber = 5;
  double height() const;
  void set_height(double value);

  // int32 threshold = 4;
  void clear_threshold();
  static const int kThresholdFieldNumber = 4;
  ::google::protobuf::int32 threshold() const;
  void set_threshold(::google::protobuf::int32 value);

  // int32 granularity = 6;
  void clear_granularity();
  static const int kGranularityFieldNumber = 6;
  ::google::protobuf::int32 granularity() const;
  void set_granularity(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.ImageGeom)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  ::gz::msgs::Header* header_;
  double scale_;
  double height_;
  ::google::protobuf::int32 threshold_;
  ::google::protobuf::int32 granularity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fimagegeom_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImageGeom

// .gz.msgs.Header header = 1;
inline bool ImageGeom::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& ImageGeom::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& ImageGeom::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* ImageGeom::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.ImageGeom.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* ImageGeom::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.ImageGeom.header)
  return header_;
}
inline void ImageGeom::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ImageGeom.header)
}

// string uri = 2;
inline void ImageGeom::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ImageGeom::uri() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.uri)
  return uri_.GetNoArena();
}
inline void ImageGeom::set_uri(const ::std::string& value) {
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.ImageGeom.uri)
}
#if LANG_CXX11
inline void ImageGeom::set_uri(::std::string&& value) {
  
  uri_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.ImageGeom.uri)
}
#endif
inline void ImageGeom::set_uri(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.ImageGeom.uri)
}
inline void ImageGeom::set_uri(const char* value, size_t size) {
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.ImageGeom.uri)
}
inline ::std::string* ImageGeom::mutable_uri() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.ImageGeom.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ImageGeom::release_uri() {
  // @@protoc_insertion_point(field_release:gz.msgs.ImageGeom.uri)
  
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ImageGeom::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    
  } else {
    
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.ImageGeom.uri)
}

// double scale = 3;
inline void ImageGeom::clear_scale() {
  scale_ = 0;
}
inline double ImageGeom::scale() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.scale)
  return scale_;
}
inline void ImageGeom::set_scale(double value) {
  
  scale_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.ImageGeom.scale)
}

// int32 threshold = 4;
inline void ImageGeom::clear_threshold() {
  threshold_ = 0;
}
inline ::google::protobuf::int32 ImageGeom::threshold() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.threshold)
  return threshold_;
}
inline void ImageGeom::set_threshold(::google::protobuf::int32 value) {
  
  threshold_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.ImageGeom.threshold)
}

// double height = 5;
inline void ImageGeom::clear_height() {
  height_ = 0;
}
inline double ImageGeom::height() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.height)
  return height_;
}
inline void ImageGeom::set_height(double value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.ImageGeom.height)
}

// int32 granularity = 6;
inline void ImageGeom::clear_granularity() {
  granularity_ = 0;
}
inline ::google::protobuf::int32 ImageGeom::granularity() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ImageGeom.granularity)
  return granularity_;
}
inline void ImageGeom::set_granularity(::google::protobuf::int32 value) {
  
  granularity_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.ImageGeom.granularity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fimagegeom_2eproto
