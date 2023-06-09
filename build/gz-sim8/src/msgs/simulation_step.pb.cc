// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: simulation_step.proto

#include "simulation_step.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fworld_5fstats_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fworld_5fstats_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_WorldStatistics;
}  // namespace protobuf_gz_2fmsgs_2fworld_5fstats_2eproto
namespace protobuf_performer_5faffinity_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_performer_5faffinity_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_PerformerAffinity;
}  // namespace protobuf_performer_5faffinity_2eproto
namespace gz {
namespace sim {
namespace private_msgs {
class SimulationStepDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SimulationStep>
      _instance;
} _SimulationStep_default_instance_;
}  // namespace private_msgs
}  // namespace sim
}  // namespace gz
namespace protobuf_simulation_5fstep_2eproto {
static void InitDefaultsSimulationStep() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::sim::private_msgs::_SimulationStep_default_instance_;
    new (ptr) ::gz::sim::private_msgs::SimulationStep();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::sim::private_msgs::SimulationStep::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_SimulationStep =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSimulationStep}, {
      &protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::scc_info_WorldStatistics.base,
      &protobuf_performer_5faffinity_2eproto::scc_info_PerformerAffinity.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SimulationStep.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::sim::private_msgs::SimulationStep, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::sim::private_msgs::SimulationStep, stats_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::sim::private_msgs::SimulationStep, affinity_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::sim::private_msgs::SimulationStep)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::sim::private_msgs::_SimulationStep_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "simulation_step.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\025simulation_step.proto\022\023gz.sim.private_"
      "msgs\032\031gz/msgs/world_stats.proto\032\030perform"
      "er_affinity.proto\"s\n\016SimulationStep\022\'\n\005s"
      "tats\030\001 \001(\0132\030.gz.msgs.WorldStatistics\0228\n\010"
      "affinity\030\002 \003(\0132&.gz.sim.private_msgs.Per"
      "formerAffinityb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 222);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "simulation_step.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::AddDescriptors();
  ::protobuf_performer_5faffinity_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_simulation_5fstep_2eproto
namespace gz {
namespace sim {
namespace private_msgs {

// ===================================================================

void SimulationStep::InitAsDefaultInstance() {
  ::gz::sim::private_msgs::_SimulationStep_default_instance_._instance.get_mutable()->stats_ = const_cast< ::gz::msgs::WorldStatistics*>(
      ::gz::msgs::WorldStatistics::internal_default_instance());
}
void SimulationStep::clear_stats() {
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) {
    delete stats_;
  }
  stats_ = NULL;
}
void SimulationStep::clear_affinity() {
  affinity_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SimulationStep::kStatsFieldNumber;
const int SimulationStep::kAffinityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SimulationStep::SimulationStep()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_simulation_5fstep_2eproto::scc_info_SimulationStep.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.sim.private_msgs.SimulationStep)
}
SimulationStep::SimulationStep(const SimulationStep& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      affinity_(from.affinity_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_stats()) {
    stats_ = new ::gz::msgs::WorldStatistics(*from.stats_);
  } else {
    stats_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.sim.private_msgs.SimulationStep)
}

void SimulationStep::SharedCtor() {
  stats_ = NULL;
}

SimulationStep::~SimulationStep() {
  // @@protoc_insertion_point(destructor:gz.sim.private_msgs.SimulationStep)
  SharedDtor();
}

void SimulationStep::SharedDtor() {
  if (this != internal_default_instance()) delete stats_;
}

void SimulationStep::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SimulationStep::descriptor() {
  ::protobuf_simulation_5fstep_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fstep_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SimulationStep& SimulationStep::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_simulation_5fstep_2eproto::scc_info_SimulationStep.base);
  return *internal_default_instance();
}


void SimulationStep::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.sim.private_msgs.SimulationStep)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  affinity_.Clear();
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) {
    delete stats_;
  }
  stats_ = NULL;
  _internal_metadata_.Clear();
}

bool SimulationStep::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.sim.private_msgs.SimulationStep)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.WorldStatistics stats = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_stats()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_affinity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz.sim.private_msgs.SimulationStep)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.sim.private_msgs.SimulationStep)
  return false;
#undef DO_
}

void SimulationStep::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.sim.private_msgs.SimulationStep)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.WorldStatistics stats = 1;
  if (this->has_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_stats(), output);
  }

  // repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->affinity_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->affinity(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.sim.private_msgs.SimulationStep)
}

::google::protobuf::uint8* SimulationStep::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.sim.private_msgs.SimulationStep)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.WorldStatistics stats = 1;
  if (this->has_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_stats(), deterministic, target);
  }

  // repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->affinity_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->affinity(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.sim.private_msgs.SimulationStep)
  return target;
}

size_t SimulationStep::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.sim.private_msgs.SimulationStep)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.sim.private_msgs.PerformerAffinity affinity = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->affinity_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->affinity(static_cast<int>(i)));
    }
  }

  // .gz.msgs.WorldStatistics stats = 1;
  if (this->has_stats()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *stats_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SimulationStep::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.sim.private_msgs.SimulationStep)
  GOOGLE_DCHECK_NE(&from, this);
  const SimulationStep* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SimulationStep>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.sim.private_msgs.SimulationStep)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.sim.private_msgs.SimulationStep)
    MergeFrom(*source);
  }
}

void SimulationStep::MergeFrom(const SimulationStep& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.sim.private_msgs.SimulationStep)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  affinity_.MergeFrom(from.affinity_);
  if (from.has_stats()) {
    mutable_stats()->::gz::msgs::WorldStatistics::MergeFrom(from.stats());
  }
}

void SimulationStep::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.sim.private_msgs.SimulationStep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimulationStep::CopyFrom(const SimulationStep& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.sim.private_msgs.SimulationStep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulationStep::IsInitialized() const {
  return true;
}

void SimulationStep::Swap(SimulationStep* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SimulationStep::InternalSwap(SimulationStep* other) {
  using std::swap;
  CastToBase(&affinity_)->InternalSwap(CastToBase(&other->affinity_));
  swap(stats_, other->stats_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SimulationStep::GetMetadata() const {
  protobuf_simulation_5fstep_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fstep_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace private_msgs
}  // namespace sim
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::sim::private_msgs::SimulationStep* Arena::CreateMaybeMessage< ::gz::sim::private_msgs::SimulationStep >(Arena* arena) {
  return Arena::CreateInternal< ::gz::sim::private_msgs::SimulationStep >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
