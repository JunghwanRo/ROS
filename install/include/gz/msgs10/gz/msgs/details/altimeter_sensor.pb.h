// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/altimeter_sensor.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2faltimeter_5fsensor_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2faltimeter_5fsensor_2eproto

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
#include "gz/msgs/sensor_noise.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2faltimeter_5fsensor_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2faltimeter_5fsensor_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2faltimeter_5fsensor_2eproto
namespace gz {
namespace msgs {
class AltimeterSensor;
class AltimeterSensorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AltimeterSensorDefaultTypeInternal _AltimeterSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::AltimeterSensor* Arena::CreateMaybeMessage<::gz::msgs::AltimeterSensor>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE AltimeterSensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.AltimeterSensor) */ {
 public:
  AltimeterSensor();
  virtual ~AltimeterSensor();

  AltimeterSensor(const AltimeterSensor& from);

  inline AltimeterSensor& operator=(const AltimeterSensor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AltimeterSensor(AltimeterSensor&& from) noexcept
    : AltimeterSensor() {
    *this = ::std::move(from);
  }

  inline AltimeterSensor& operator=(AltimeterSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AltimeterSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AltimeterSensor* internal_default_instance() {
    return reinterpret_cast<const AltimeterSensor*>(
               &_AltimeterSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AltimeterSensor* other);
  friend void swap(AltimeterSensor& a, AltimeterSensor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AltimeterSensor* New() const final {
    return CreateMaybeMessage<AltimeterSensor>(NULL);
  }

  AltimeterSensor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AltimeterSensor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AltimeterSensor& from);
  void MergeFrom(const AltimeterSensor& from);
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
  void InternalSwap(AltimeterSensor* other);
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

  // .gz.msgs.SensorNoise vertical_position_noise = 2;
  bool has_vertical_position_noise() const;
  void clear_vertical_position_noise();
  static const int kVerticalPositionNoiseFieldNumber = 2;
  private:
  const ::gz::msgs::SensorNoise& _internal_vertical_position_noise() const;
  public:
  const ::gz::msgs::SensorNoise& vertical_position_noise() const;
  ::gz::msgs::SensorNoise* release_vertical_position_noise();
  ::gz::msgs::SensorNoise* mutable_vertical_position_noise();
  void set_allocated_vertical_position_noise(::gz::msgs::SensorNoise* vertical_position_noise);

  // .gz.msgs.SensorNoise vertical_velocity_noise = 3;
  bool has_vertical_velocity_noise() const;
  void clear_vertical_velocity_noise();
  static const int kVerticalVelocityNoiseFieldNumber = 3;
  private:
  const ::gz::msgs::SensorNoise& _internal_vertical_velocity_noise() const;
  public:
  const ::gz::msgs::SensorNoise& vertical_velocity_noise() const;
  ::gz::msgs::SensorNoise* release_vertical_velocity_noise();
  ::gz::msgs::SensorNoise* mutable_vertical_velocity_noise();
  void set_allocated_vertical_velocity_noise(::gz::msgs::SensorNoise* vertical_velocity_noise);

  // @@protoc_insertion_point(class_scope:gz.msgs.AltimeterSensor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::SensorNoise* vertical_position_noise_;
  ::gz::msgs::SensorNoise* vertical_velocity_noise_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2faltimeter_5fsensor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AltimeterSensor

// .gz.msgs.Header header = 1;
inline bool AltimeterSensor::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& AltimeterSensor::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& AltimeterSensor::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.AltimeterSensor.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* AltimeterSensor::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.AltimeterSensor.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* AltimeterSensor::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AltimeterSensor.header)
  return header_;
}
inline void AltimeterSensor::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AltimeterSensor.header)
}

// .gz.msgs.SensorNoise vertical_position_noise = 2;
inline bool AltimeterSensor::has_vertical_position_noise() const {
  return this != internal_default_instance() && vertical_position_noise_ != NULL;
}
inline const ::gz::msgs::SensorNoise& AltimeterSensor::_internal_vertical_position_noise() const {
  return *vertical_position_noise_;
}
inline const ::gz::msgs::SensorNoise& AltimeterSensor::vertical_position_noise() const {
  const ::gz::msgs::SensorNoise* p = vertical_position_noise_;
  // @@protoc_insertion_point(field_get:gz.msgs.AltimeterSensor.vertical_position_noise)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::SensorNoise*>(
      &::gz::msgs::_SensorNoise_default_instance_);
}
inline ::gz::msgs::SensorNoise* AltimeterSensor::release_vertical_position_noise() {
  // @@protoc_insertion_point(field_release:gz.msgs.AltimeterSensor.vertical_position_noise)
  
  ::gz::msgs::SensorNoise* temp = vertical_position_noise_;
  vertical_position_noise_ = NULL;
  return temp;
}
inline ::gz::msgs::SensorNoise* AltimeterSensor::mutable_vertical_position_noise() {
  
  if (vertical_position_noise_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::SensorNoise>(GetArenaNoVirtual());
    vertical_position_noise_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AltimeterSensor.vertical_position_noise)
  return vertical_position_noise_;
}
inline void AltimeterSensor::set_allocated_vertical_position_noise(::gz::msgs::SensorNoise* vertical_position_noise) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(vertical_position_noise_);
  }
  if (vertical_position_noise) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vertical_position_noise = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vertical_position_noise, submessage_arena);
    }
    
  } else {
    
  }
  vertical_position_noise_ = vertical_position_noise;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AltimeterSensor.vertical_position_noise)
}

// .gz.msgs.SensorNoise vertical_velocity_noise = 3;
inline bool AltimeterSensor::has_vertical_velocity_noise() const {
  return this != internal_default_instance() && vertical_velocity_noise_ != NULL;
}
inline const ::gz::msgs::SensorNoise& AltimeterSensor::_internal_vertical_velocity_noise() const {
  return *vertical_velocity_noise_;
}
inline const ::gz::msgs::SensorNoise& AltimeterSensor::vertical_velocity_noise() const {
  const ::gz::msgs::SensorNoise* p = vertical_velocity_noise_;
  // @@protoc_insertion_point(field_get:gz.msgs.AltimeterSensor.vertical_velocity_noise)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::SensorNoise*>(
      &::gz::msgs::_SensorNoise_default_instance_);
}
inline ::gz::msgs::SensorNoise* AltimeterSensor::release_vertical_velocity_noise() {
  // @@protoc_insertion_point(field_release:gz.msgs.AltimeterSensor.vertical_velocity_noise)
  
  ::gz::msgs::SensorNoise* temp = vertical_velocity_noise_;
  vertical_velocity_noise_ = NULL;
  return temp;
}
inline ::gz::msgs::SensorNoise* AltimeterSensor::mutable_vertical_velocity_noise() {
  
  if (vertical_velocity_noise_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::SensorNoise>(GetArenaNoVirtual());
    vertical_velocity_noise_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.AltimeterSensor.vertical_velocity_noise)
  return vertical_velocity_noise_;
}
inline void AltimeterSensor::set_allocated_vertical_velocity_noise(::gz::msgs::SensorNoise* vertical_velocity_noise) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(vertical_velocity_noise_);
  }
  if (vertical_velocity_noise) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vertical_velocity_noise = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vertical_velocity_noise, submessage_arena);
    }
    
  } else {
    
  }
  vertical_velocity_noise_ = vertical_velocity_noise;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.AltimeterSensor.vertical_velocity_noise)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2faltimeter_5fsensor_2eproto