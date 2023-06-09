// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: simulation_step.proto

#ifndef PROTOBUF_INCLUDED_simulation_5fstep_2eproto
#define PROTOBUF_INCLUDED_simulation_5fstep_2eproto

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
#include "gz/msgs/world_stats.pb.h"
#include "performer_affinity.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_simulation_5fstep_2eproto 

namespace protobuf_simulation_5fstep_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_simulation_5fstep_2eproto
namespace gz {
namespace sim {
namespace private_msgs {
class SimulationStep;
class SimulationStepDefaultTypeInternal;
extern SimulationStepDefaultTypeInternal _SimulationStep_default_instance_;
}  // namespace private_msgs
}  // namespace sim
}  // namespace gz
namespace google {
namespace protobuf {
template<> ::gz::sim::private_msgs::SimulationStep* Arena::CreateMaybeMessage<::gz::sim::private_msgs::SimulationStep>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace sim {
namespace private_msgs {

// ===================================================================

class SimulationStep : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.sim.private_msgs.SimulationStep) */ {
 public:
  SimulationStep();
  virtual ~SimulationStep();

  SimulationStep(const SimulationStep& from);

  inline SimulationStep& operator=(const SimulationStep& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SimulationStep(SimulationStep&& from) noexcept
    : SimulationStep() {
    *this = ::std::move(from);
  }

  inline SimulationStep& operator=(SimulationStep&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SimulationStep& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimulationStep* internal_default_instance() {
    return reinterpret_cast<const SimulationStep*>(
               &_SimulationStep_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SimulationStep* other);
  friend void swap(SimulationStep& a, SimulationStep& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SimulationStep* New() const final {
    return CreateMaybeMessage<SimulationStep>(NULL);
  }

  SimulationStep* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SimulationStep>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SimulationStep& from);
  void MergeFrom(const SimulationStep& from);
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
  void InternalSwap(SimulationStep* other);
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

  // repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
  int affinity_size() const;
  void clear_affinity();
  static const int kAffinityFieldNumber = 2;
  ::gz::sim::private_msgs::PerformerAffinity* mutable_affinity(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::sim::private_msgs::PerformerAffinity >*
      mutable_affinity();
  const ::gz::sim::private_msgs::PerformerAffinity& affinity(int index) const;
  ::gz::sim::private_msgs::PerformerAffinity* add_affinity();
  const ::google::protobuf::RepeatedPtrField< ::gz::sim::private_msgs::PerformerAffinity >&
      affinity() const;

  // .gz.msgs.WorldStatistics stats = 1;
  bool has_stats() const;
  void clear_stats();
  static const int kStatsFieldNumber = 1;
  private:
  const ::gz::msgs::WorldStatistics& _internal_stats() const;
  public:
  const ::gz::msgs::WorldStatistics& stats() const;
  ::gz::msgs::WorldStatistics* release_stats();
  ::gz::msgs::WorldStatistics* mutable_stats();
  void set_allocated_stats(::gz::msgs::WorldStatistics* stats);

  // @@protoc_insertion_point(class_scope:gz.sim.private_msgs.SimulationStep)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::sim::private_msgs::PerformerAffinity > affinity_;
  ::gz::msgs::WorldStatistics* stats_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_simulation_5fstep_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimulationStep

// .gz.msgs.WorldStatistics stats = 1;
inline bool SimulationStep::has_stats() const {
  return this != internal_default_instance() && stats_ != NULL;
}
inline const ::gz::msgs::WorldStatistics& SimulationStep::_internal_stats() const {
  return *stats_;
}
inline const ::gz::msgs::WorldStatistics& SimulationStep::stats() const {
  const ::gz::msgs::WorldStatistics* p = stats_;
  // @@protoc_insertion_point(field_get:gz.sim.private_msgs.SimulationStep.stats)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::WorldStatistics*>(
      &::gz::msgs::_WorldStatistics_default_instance_);
}
inline ::gz::msgs::WorldStatistics* SimulationStep::release_stats() {
  // @@protoc_insertion_point(field_release:gz.sim.private_msgs.SimulationStep.stats)
  
  ::gz::msgs::WorldStatistics* temp = stats_;
  stats_ = NULL;
  return temp;
}
inline ::gz::msgs::WorldStatistics* SimulationStep::mutable_stats() {
  
  if (stats_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::WorldStatistics>(GetArenaNoVirtual());
    stats_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.sim.private_msgs.SimulationStep.stats)
  return stats_;
}
inline void SimulationStep::set_allocated_stats(::gz::msgs::WorldStatistics* stats) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(stats_);
  }
  if (stats) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      stats = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, stats, submessage_arena);
    }
    
  } else {
    
  }
  stats_ = stats;
  // @@protoc_insertion_point(field_set_allocated:gz.sim.private_msgs.SimulationStep.stats)
}

// repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
inline int SimulationStep::affinity_size() const {
  return affinity_.size();
}
inline ::gz::sim::private_msgs::PerformerAffinity* SimulationStep::mutable_affinity(int index) {
  // @@protoc_insertion_point(field_mutable:gz.sim.private_msgs.SimulationStep.affinity)
  return affinity_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::sim::private_msgs::PerformerAffinity >*
SimulationStep::mutable_affinity() {
  // @@protoc_insertion_point(field_mutable_list:gz.sim.private_msgs.SimulationStep.affinity)
  return &affinity_;
}
inline const ::gz::sim::private_msgs::PerformerAffinity& SimulationStep::affinity(int index) const {
  // @@protoc_insertion_point(field_get:gz.sim.private_msgs.SimulationStep.affinity)
  return affinity_.Get(index);
}
inline ::gz::sim::private_msgs::PerformerAffinity* SimulationStep::add_affinity() {
  // @@protoc_insertion_point(field_add:gz.sim.private_msgs.SimulationStep.affinity)
  return affinity_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::sim::private_msgs::PerformerAffinity >&
SimulationStep::affinity() const {
  // @@protoc_insertion_point(field_list:gz.sim.private_msgs.SimulationStep.affinity)
  return affinity_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace private_msgs
}  // namespace sim
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_simulation_5fstep_2eproto
