// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/joint_trajectory_point.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto

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
#include "gz/msgs/duration.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto
namespace gz {
namespace msgs {
class JointTrajectoryPoint;
class JointTrajectoryPointDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern JointTrajectoryPointDefaultTypeInternal _JointTrajectoryPoint_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::JointTrajectoryPoint* Arena::CreateMaybeMessage<::gz::msgs::JointTrajectoryPoint>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE JointTrajectoryPoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.JointTrajectoryPoint) */ {
 public:
  JointTrajectoryPoint();
  virtual ~JointTrajectoryPoint();

  JointTrajectoryPoint(const JointTrajectoryPoint& from);

  inline JointTrajectoryPoint& operator=(const JointTrajectoryPoint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  JointTrajectoryPoint(JointTrajectoryPoint&& from) noexcept
    : JointTrajectoryPoint() {
    *this = ::std::move(from);
  }

  inline JointTrajectoryPoint& operator=(JointTrajectoryPoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const JointTrajectoryPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JointTrajectoryPoint* internal_default_instance() {
    return reinterpret_cast<const JointTrajectoryPoint*>(
               &_JointTrajectoryPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(JointTrajectoryPoint* other);
  friend void swap(JointTrajectoryPoint& a, JointTrajectoryPoint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline JointTrajectoryPoint* New() const final {
    return CreateMaybeMessage<JointTrajectoryPoint>(NULL);
  }

  JointTrajectoryPoint* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<JointTrajectoryPoint>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const JointTrajectoryPoint& from);
  void MergeFrom(const JointTrajectoryPoint& from);
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
  void InternalSwap(JointTrajectoryPoint* other);
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

  // repeated double positions = 1;
  int positions_size() const;
  void clear_positions();
  static const int kPositionsFieldNumber = 1;
  double positions(int index) const;
  void set_positions(int index, double value);
  void add_positions(double value);
  const ::google::protobuf::RepeatedField< double >&
      positions() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_positions();

  // repeated double velocities = 2;
  int velocities_size() const;
  void clear_velocities();
  static const int kVelocitiesFieldNumber = 2;
  double velocities(int index) const;
  void set_velocities(int index, double value);
  void add_velocities(double value);
  const ::google::protobuf::RepeatedField< double >&
      velocities() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_velocities();

  // repeated double accelerations = 3;
  int accelerations_size() const;
  void clear_accelerations();
  static const int kAccelerationsFieldNumber = 3;
  double accelerations(int index) const;
  void set_accelerations(int index, double value);
  void add_accelerations(double value);
  const ::google::protobuf::RepeatedField< double >&
      accelerations() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_accelerations();

  // repeated double effort = 4;
  int effort_size() const;
  void clear_effort();
  static const int kEffortFieldNumber = 4;
  double effort(int index) const;
  void set_effort(int index, double value);
  void add_effort(double value);
  const ::google::protobuf::RepeatedField< double >&
      effort() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_effort();

  // .gz.msgs.Duration time_from_start = 5;
  bool has_time_from_start() const;
  void clear_time_from_start();
  static const int kTimeFromStartFieldNumber = 5;
  private:
  const ::gz::msgs::Duration& _internal_time_from_start() const;
  public:
  const ::gz::msgs::Duration& time_from_start() const;
  ::gz::msgs::Duration* release_time_from_start();
  ::gz::msgs::Duration* mutable_time_from_start();
  void set_allocated_time_from_start(::gz::msgs::Duration* time_from_start);

  // @@protoc_insertion_point(class_scope:gz.msgs.JointTrajectoryPoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< double > positions_;
  mutable int _positions_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > velocities_;
  mutable int _velocities_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > accelerations_;
  mutable int _accelerations_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > effort_;
  mutable int _effort_cached_byte_size_;
  ::gz::msgs::Duration* time_from_start_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// JointTrajectoryPoint

// repeated double positions = 1;
inline int JointTrajectoryPoint::positions_size() const {
  return positions_.size();
}
inline void JointTrajectoryPoint::clear_positions() {
  positions_.Clear();
}
inline double JointTrajectoryPoint::positions(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointTrajectoryPoint.positions)
  return positions_.Get(index);
}
inline void JointTrajectoryPoint::set_positions(int index, double value) {
  positions_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointTrajectoryPoint.positions)
}
inline void JointTrajectoryPoint::add_positions(double value) {
  positions_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointTrajectoryPoint.positions)
}
inline const ::google::protobuf::RepeatedField< double >&
JointTrajectoryPoint::positions() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointTrajectoryPoint.positions)
  return positions_;
}
inline ::google::protobuf::RepeatedField< double >*
JointTrajectoryPoint::mutable_positions() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointTrajectoryPoint.positions)
  return &positions_;
}

// repeated double velocities = 2;
inline int JointTrajectoryPoint::velocities_size() const {
  return velocities_.size();
}
inline void JointTrajectoryPoint::clear_velocities() {
  velocities_.Clear();
}
inline double JointTrajectoryPoint::velocities(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointTrajectoryPoint.velocities)
  return velocities_.Get(index);
}
inline void JointTrajectoryPoint::set_velocities(int index, double value) {
  velocities_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointTrajectoryPoint.velocities)
}
inline void JointTrajectoryPoint::add_velocities(double value) {
  velocities_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointTrajectoryPoint.velocities)
}
inline const ::google::protobuf::RepeatedField< double >&
JointTrajectoryPoint::velocities() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointTrajectoryPoint.velocities)
  return velocities_;
}
inline ::google::protobuf::RepeatedField< double >*
JointTrajectoryPoint::mutable_velocities() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointTrajectoryPoint.velocities)
  return &velocities_;
}

// repeated double accelerations = 3;
inline int JointTrajectoryPoint::accelerations_size() const {
  return accelerations_.size();
}
inline void JointTrajectoryPoint::clear_accelerations() {
  accelerations_.Clear();
}
inline double JointTrajectoryPoint::accelerations(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointTrajectoryPoint.accelerations)
  return accelerations_.Get(index);
}
inline void JointTrajectoryPoint::set_accelerations(int index, double value) {
  accelerations_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointTrajectoryPoint.accelerations)
}
inline void JointTrajectoryPoint::add_accelerations(double value) {
  accelerations_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointTrajectoryPoint.accelerations)
}
inline const ::google::protobuf::RepeatedField< double >&
JointTrajectoryPoint::accelerations() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointTrajectoryPoint.accelerations)
  return accelerations_;
}
inline ::google::protobuf::RepeatedField< double >*
JointTrajectoryPoint::mutable_accelerations() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointTrajectoryPoint.accelerations)
  return &accelerations_;
}

// repeated double effort = 4;
inline int JointTrajectoryPoint::effort_size() const {
  return effort_.size();
}
inline void JointTrajectoryPoint::clear_effort() {
  effort_.Clear();
}
inline double JointTrajectoryPoint::effort(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.JointTrajectoryPoint.effort)
  return effort_.Get(index);
}
inline void JointTrajectoryPoint::set_effort(int index, double value) {
  effort_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.JointTrajectoryPoint.effort)
}
inline void JointTrajectoryPoint::add_effort(double value) {
  effort_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.JointTrajectoryPoint.effort)
}
inline const ::google::protobuf::RepeatedField< double >&
JointTrajectoryPoint::effort() const {
  // @@protoc_insertion_point(field_list:gz.msgs.JointTrajectoryPoint.effort)
  return effort_;
}
inline ::google::protobuf::RepeatedField< double >*
JointTrajectoryPoint::mutable_effort() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.JointTrajectoryPoint.effort)
  return &effort_;
}

// .gz.msgs.Duration time_from_start = 5;
inline bool JointTrajectoryPoint::has_time_from_start() const {
  return this != internal_default_instance() && time_from_start_ != NULL;
}
inline const ::gz::msgs::Duration& JointTrajectoryPoint::_internal_time_from_start() const {
  return *time_from_start_;
}
inline const ::gz::msgs::Duration& JointTrajectoryPoint::time_from_start() const {
  const ::gz::msgs::Duration* p = time_from_start_;
  // @@protoc_insertion_point(field_get:gz.msgs.JointTrajectoryPoint.time_from_start)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Duration*>(
      &::gz::msgs::_Duration_default_instance_);
}
inline ::gz::msgs::Duration* JointTrajectoryPoint::release_time_from_start() {
  // @@protoc_insertion_point(field_release:gz.msgs.JointTrajectoryPoint.time_from_start)
  
  ::gz::msgs::Duration* temp = time_from_start_;
  time_from_start_ = NULL;
  return temp;
}
inline ::gz::msgs::Duration* JointTrajectoryPoint::mutable_time_from_start() {
  
  if (time_from_start_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Duration>(GetArenaNoVirtual());
    time_from_start_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.JointTrajectoryPoint.time_from_start)
  return time_from_start_;
}
inline void JointTrajectoryPoint::set_allocated_time_from_start(::gz::msgs::Duration* time_from_start) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(time_from_start_);
  }
  if (time_from_start) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      time_from_start = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, time_from_start, submessage_arena);
    }
    
  } else {
    
  }
  time_from_start_ = time_from_start;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.JointTrajectoryPoint.time_from_start)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto