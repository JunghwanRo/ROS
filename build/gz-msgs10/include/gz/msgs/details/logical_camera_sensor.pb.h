// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/logical_camera_sensor.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto
namespace gz {
namespace msgs {
class LogicalCameraSensor;
class LogicalCameraSensorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LogicalCameraSensorDefaultTypeInternal _LogicalCameraSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::LogicalCameraSensor* Arena::CreateMaybeMessage<::gz::msgs::LogicalCameraSensor>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LogicalCameraSensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.LogicalCameraSensor) */ {
 public:
  LogicalCameraSensor();
  virtual ~LogicalCameraSensor();

  LogicalCameraSensor(const LogicalCameraSensor& from);

  inline LogicalCameraSensor& operator=(const LogicalCameraSensor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogicalCameraSensor(LogicalCameraSensor&& from) noexcept
    : LogicalCameraSensor() {
    *this = ::std::move(from);
  }

  inline LogicalCameraSensor& operator=(LogicalCameraSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogicalCameraSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalCameraSensor* internal_default_instance() {
    return reinterpret_cast<const LogicalCameraSensor*>(
               &_LogicalCameraSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LogicalCameraSensor* other);
  friend void swap(LogicalCameraSensor& a, LogicalCameraSensor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogicalCameraSensor* New() const final {
    return CreateMaybeMessage<LogicalCameraSensor>(NULL);
  }

  LogicalCameraSensor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LogicalCameraSensor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LogicalCameraSensor& from);
  void MergeFrom(const LogicalCameraSensor& from);
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
  void InternalSwap(LogicalCameraSensor* other);
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

  // double near_clip = 2;
  void clear_near_clip();
  static const int kNearClipFieldNumber = 2;
  double near_clip() const;
  void set_near_clip(double value);

  // double far_clip = 3;
  void clear_far_clip();
  static const int kFarClipFieldNumber = 3;
  double far_clip() const;
  void set_far_clip(double value);

  // double horizontal_fov = 4;
  void clear_horizontal_fov();
  static const int kHorizontalFovFieldNumber = 4;
  double horizontal_fov() const;
  void set_horizontal_fov(double value);

  // double aspect_ratio = 5;
  void clear_aspect_ratio();
  static const int kAspectRatioFieldNumber = 5;
  double aspect_ratio() const;
  void set_aspect_ratio(double value);

  // @@protoc_insertion_point(class_scope:gz.msgs.LogicalCameraSensor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  double near_clip_;
  double far_clip_;
  double horizontal_fov_;
  double aspect_ratio_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogicalCameraSensor

// .gz.msgs.Header header = 1;
inline bool LogicalCameraSensor::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& LogicalCameraSensor::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& LogicalCameraSensor::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.LogicalCameraSensor.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* LogicalCameraSensor::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.LogicalCameraSensor.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* LogicalCameraSensor::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LogicalCameraSensor.header)
  return header_;
}
inline void LogicalCameraSensor::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LogicalCameraSensor.header)
}

// double near_clip = 2;
inline void LogicalCameraSensor::clear_near_clip() {
  near_clip_ = 0;
}
inline double LogicalCameraSensor::near_clip() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogicalCameraSensor.near_clip)
  return near_clip_;
}
inline void LogicalCameraSensor::set_near_clip(double value) {
  
  near_clip_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogicalCameraSensor.near_clip)
}

// double far_clip = 3;
inline void LogicalCameraSensor::clear_far_clip() {
  far_clip_ = 0;
}
inline double LogicalCameraSensor::far_clip() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogicalCameraSensor.far_clip)
  return far_clip_;
}
inline void LogicalCameraSensor::set_far_clip(double value) {
  
  far_clip_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogicalCameraSensor.far_clip)
}

// double horizontal_fov = 4;
inline void LogicalCameraSensor::clear_horizontal_fov() {
  horizontal_fov_ = 0;
}
inline double LogicalCameraSensor::horizontal_fov() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogicalCameraSensor.horizontal_fov)
  return horizontal_fov_;
}
inline void LogicalCameraSensor::set_horizontal_fov(double value) {
  
  horizontal_fov_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogicalCameraSensor.horizontal_fov)
}

// double aspect_ratio = 5;
inline void LogicalCameraSensor::clear_aspect_ratio() {
  aspect_ratio_ = 0;
}
inline double LogicalCameraSensor::aspect_ratio() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LogicalCameraSensor.aspect_ratio)
  return aspect_ratio_;
}
inline void LogicalCameraSensor::set_aspect_ratio(double value) {
  
  aspect_ratio_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LogicalCameraSensor.aspect_ratio)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2flogical_5fcamera_5fsensor_2eproto
