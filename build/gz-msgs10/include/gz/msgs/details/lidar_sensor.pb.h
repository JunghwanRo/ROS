// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/lidar_sensor.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2flidar_5fsensor_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2flidar_5fsensor_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flidar_5fsensor_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2flidar_5fsensor_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2flidar_5fsensor_2eproto
namespace gz {
namespace msgs {
class LidarSensor;
class LidarSensorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LidarSensorDefaultTypeInternal _LidarSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::LidarSensor* Arena::CreateMaybeMessage<::gz::msgs::LidarSensor>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LidarSensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.LidarSensor) */ {
 public:
  LidarSensor();
  virtual ~LidarSensor();

  LidarSensor(const LidarSensor& from);

  inline LidarSensor& operator=(const LidarSensor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LidarSensor(LidarSensor&& from) noexcept
    : LidarSensor() {
    *this = ::std::move(from);
  }

  inline LidarSensor& operator=(LidarSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LidarSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LidarSensor* internal_default_instance() {
    return reinterpret_cast<const LidarSensor*>(
               &_LidarSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LidarSensor* other);
  friend void swap(LidarSensor& a, LidarSensor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LidarSensor* New() const final {
    return CreateMaybeMessage<LidarSensor>(NULL);
  }

  LidarSensor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LidarSensor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LidarSensor& from);
  void MergeFrom(const LidarSensor& from);
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
  void InternalSwap(LidarSensor* other);
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

  // .gz.msgs.SensorNoise noise = 14;
  bool has_noise() const;
  void clear_noise();
  static const int kNoiseFieldNumber = 14;
  private:
  const ::gz::msgs::SensorNoise& _internal_noise() const;
  public:
  const ::gz::msgs::SensorNoise& noise() const;
  ::gz::msgs::SensorNoise* release_noise();
  ::gz::msgs::SensorNoise* mutable_noise();
  void set_allocated_noise(::gz::msgs::SensorNoise* noise);

  // bool display_scan = 2;
  void clear_display_scan();
  static const int kDisplayScanFieldNumber = 2;
  bool display_scan() const;
  void set_display_scan(bool value);

  // int32 horizontal_samples = 3;
  void clear_horizontal_samples();
  static const int kHorizontalSamplesFieldNumber = 3;
  ::google::protobuf::int32 horizontal_samples() const;
  void set_horizontal_samples(::google::protobuf::int32 value);

  // double horizontal_resolution = 4;
  void clear_horizontal_resolution();
  static const int kHorizontalResolutionFieldNumber = 4;
  double horizontal_resolution() const;
  void set_horizontal_resolution(double value);

  // double horizontal_min_angle = 5;
  void clear_horizontal_min_angle();
  static const int kHorizontalMinAngleFieldNumber = 5;
  double horizontal_min_angle() const;
  void set_horizontal_min_angle(double value);

  // double horizontal_max_angle = 6;
  void clear_horizontal_max_angle();
  static const int kHorizontalMaxAngleFieldNumber = 6;
  double horizontal_max_angle() const;
  void set_horizontal_max_angle(double value);

  // double vertical_resolution = 8;
  void clear_vertical_resolution();
  static const int kVerticalResolutionFieldNumber = 8;
  double vertical_resolution() const;
  void set_vertical_resolution(double value);

  // double vertical_min_angle = 9;
  void clear_vertical_min_angle();
  static const int kVerticalMinAngleFieldNumber = 9;
  double vertical_min_angle() const;
  void set_vertical_min_angle(double value);

  // double vertical_max_angle = 10;
  void clear_vertical_max_angle();
  static const int kVerticalMaxAngleFieldNumber = 10;
  double vertical_max_angle() const;
  void set_vertical_max_angle(double value);

  // double range_min = 11;
  void clear_range_min();
  static const int kRangeMinFieldNumber = 11;
  double range_min() const;
  void set_range_min(double value);

  // double range_max = 12;
  void clear_range_max();
  static const int kRangeMaxFieldNumber = 12;
  double range_max() const;
  void set_range_max(double value);

  // double range_resolution = 13;
  void clear_range_resolution();
  static const int kRangeResolutionFieldNumber = 13;
  double range_resolution() const;
  void set_range_resolution(double value);

  // int32 vertical_samples = 7;
  void clear_vertical_samples();
  static const int kVerticalSamplesFieldNumber = 7;
  ::google::protobuf::int32 vertical_samples() const;
  void set_vertical_samples(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.LidarSensor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::SensorNoise* noise_;
  bool display_scan_;
  ::google::protobuf::int32 horizontal_samples_;
  double horizontal_resolution_;
  double horizontal_min_angle_;
  double horizontal_max_angle_;
  double vertical_resolution_;
  double vertical_min_angle_;
  double vertical_max_angle_;
  double range_min_;
  double range_max_;
  double range_resolution_;
  ::google::protobuf::int32 vertical_samples_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2flidar_5fsensor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LidarSensor

// .gz.msgs.Header header = 1;
inline bool LidarSensor::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& LidarSensor::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& LidarSensor::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* LidarSensor::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.LidarSensor.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* LidarSensor::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LidarSensor.header)
  return header_;
}
inline void LidarSensor::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LidarSensor.header)
}

// bool display_scan = 2;
inline void LidarSensor::clear_display_scan() {
  display_scan_ = false;
}
inline bool LidarSensor::display_scan() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.display_scan)
  return display_scan_;
}
inline void LidarSensor::set_display_scan(bool value) {
  
  display_scan_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.display_scan)
}

// int32 horizontal_samples = 3;
inline void LidarSensor::clear_horizontal_samples() {
  horizontal_samples_ = 0;
}
inline ::google::protobuf::int32 LidarSensor::horizontal_samples() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.horizontal_samples)
  return horizontal_samples_;
}
inline void LidarSensor::set_horizontal_samples(::google::protobuf::int32 value) {
  
  horizontal_samples_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.horizontal_samples)
}

// double horizontal_resolution = 4;
inline void LidarSensor::clear_horizontal_resolution() {
  horizontal_resolution_ = 0;
}
inline double LidarSensor::horizontal_resolution() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.horizontal_resolution)
  return horizontal_resolution_;
}
inline void LidarSensor::set_horizontal_resolution(double value) {
  
  horizontal_resolution_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.horizontal_resolution)
}

// double horizontal_min_angle = 5;
inline void LidarSensor::clear_horizontal_min_angle() {
  horizontal_min_angle_ = 0;
}
inline double LidarSensor::horizontal_min_angle() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.horizontal_min_angle)
  return horizontal_min_angle_;
}
inline void LidarSensor::set_horizontal_min_angle(double value) {
  
  horizontal_min_angle_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.horizontal_min_angle)
}

// double horizontal_max_angle = 6;
inline void LidarSensor::clear_horizontal_max_angle() {
  horizontal_max_angle_ = 0;
}
inline double LidarSensor::horizontal_max_angle() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.horizontal_max_angle)
  return horizontal_max_angle_;
}
inline void LidarSensor::set_horizontal_max_angle(double value) {
  
  horizontal_max_angle_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.horizontal_max_angle)
}

// int32 vertical_samples = 7;
inline void LidarSensor::clear_vertical_samples() {
  vertical_samples_ = 0;
}
inline ::google::protobuf::int32 LidarSensor::vertical_samples() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.vertical_samples)
  return vertical_samples_;
}
inline void LidarSensor::set_vertical_samples(::google::protobuf::int32 value) {
  
  vertical_samples_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.vertical_samples)
}

// double vertical_resolution = 8;
inline void LidarSensor::clear_vertical_resolution() {
  vertical_resolution_ = 0;
}
inline double LidarSensor::vertical_resolution() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.vertical_resolution)
  return vertical_resolution_;
}
inline void LidarSensor::set_vertical_resolution(double value) {
  
  vertical_resolution_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.vertical_resolution)
}

// double vertical_min_angle = 9;
inline void LidarSensor::clear_vertical_min_angle() {
  vertical_min_angle_ = 0;
}
inline double LidarSensor::vertical_min_angle() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.vertical_min_angle)
  return vertical_min_angle_;
}
inline void LidarSensor::set_vertical_min_angle(double value) {
  
  vertical_min_angle_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.vertical_min_angle)
}

// double vertical_max_angle = 10;
inline void LidarSensor::clear_vertical_max_angle() {
  vertical_max_angle_ = 0;
}
inline double LidarSensor::vertical_max_angle() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.vertical_max_angle)
  return vertical_max_angle_;
}
inline void LidarSensor::set_vertical_max_angle(double value) {
  
  vertical_max_angle_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.vertical_max_angle)
}

// double range_min = 11;
inline void LidarSensor::clear_range_min() {
  range_min_ = 0;
}
inline double LidarSensor::range_min() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.range_min)
  return range_min_;
}
inline void LidarSensor::set_range_min(double value) {
  
  range_min_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.range_min)
}

// double range_max = 12;
inline void LidarSensor::clear_range_max() {
  range_max_ = 0;
}
inline double LidarSensor::range_max() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.range_max)
  return range_max_;
}
inline void LidarSensor::set_range_max(double value) {
  
  range_max_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.range_max)
}

// double range_resolution = 13;
inline void LidarSensor::clear_range_resolution() {
  range_resolution_ = 0;
}
inline double LidarSensor::range_resolution() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.range_resolution)
  return range_resolution_;
}
inline void LidarSensor::set_range_resolution(double value) {
  
  range_resolution_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LidarSensor.range_resolution)
}

// .gz.msgs.SensorNoise noise = 14;
inline bool LidarSensor::has_noise() const {
  return this != internal_default_instance() && noise_ != NULL;
}
inline const ::gz::msgs::SensorNoise& LidarSensor::_internal_noise() const {
  return *noise_;
}
inline const ::gz::msgs::SensorNoise& LidarSensor::noise() const {
  const ::gz::msgs::SensorNoise* p = noise_;
  // @@protoc_insertion_point(field_get:gz.msgs.LidarSensor.noise)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::SensorNoise*>(
      &::gz::msgs::_SensorNoise_default_instance_);
}
inline ::gz::msgs::SensorNoise* LidarSensor::release_noise() {
  // @@protoc_insertion_point(field_release:gz.msgs.LidarSensor.noise)
  
  ::gz::msgs::SensorNoise* temp = noise_;
  noise_ = NULL;
  return temp;
}
inline ::gz::msgs::SensorNoise* LidarSensor::mutable_noise() {
  
  if (noise_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::SensorNoise>(GetArenaNoVirtual());
    noise_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LidarSensor.noise)
  return noise_;
}
inline void LidarSensor::set_allocated_noise(::gz::msgs::SensorNoise* noise) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(noise_);
  }
  if (noise) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      noise = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, noise, submessage_arena);
    }
    
  } else {
    
  }
  noise_ = noise;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LidarSensor.noise)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2flidar_5fsensor_2eproto
