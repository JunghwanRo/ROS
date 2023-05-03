// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/world_control_state.proto

#include "gz/msgs/world_control_state.pb.h"

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
#include "gz/msgs/Factory.hh"
GZ_REGISTER_STATIC_MSG("gz_msgs.WorldControlState", WorldControlState)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fserialized_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fserialized_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_SerializedState;
}  // namespace protobuf_gz_2fmsgs_2fserialized_2eproto
namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_WorldControl;
}  // namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto
namespace gz {
namespace msgs {
class WorldControlStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WorldControlState>
      _instance;
} _WorldControlState_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto {
static void InitDefaultsWorldControlState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_WorldControlState_default_instance_;
    new (ptr) ::gz::msgs::WorldControlState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::WorldControlState::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<3> scc_info_WorldControlState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsWorldControlState}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto::scc_info_WorldControl.base,
      &protobuf_gz_2fmsgs_2fserialized_2eproto::scc_info_SerializedState.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WorldControlState.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldControlState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldControlState, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldControlState, world_control_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldControlState, state_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::WorldControlState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_WorldControlState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/world_control_state.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!gz/msgs/world_control_state.proto\022\007gz."
      "msgs\032\024gz/msgs/header.proto\032\030gz/msgs/seri"
      "alized.proto\032\033gz/msgs/world_control.prot"
      "o\"\213\001\n\021WorldControlState\022\037\n\006header\030\001 \001(\0132"
      "\017.gz.msgs.Header\022,\n\rworld_control\030\002 \001(\0132"
      "\025.gz.msgs.WorldControl\022\'\n\005state\030\003 \001(\0132\030."
      "gz.msgs.SerializedStateB&\n\013com.gz.msgsB\027"
      "WorldControlStateProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 311);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/world_control_state.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fserialized_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void WorldControlState::InitAsDefaultInstance() {
  ::gz::msgs::_WorldControlState_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_WorldControlState_default_instance_._instance.get_mutable()->world_control_ = const_cast< ::gz::msgs::WorldControl*>(
      ::gz::msgs::WorldControl::internal_default_instance());
  ::gz::msgs::_WorldControlState_default_instance_._instance.get_mutable()->state_ = const_cast< ::gz::msgs::SerializedState*>(
      ::gz::msgs::SerializedState::internal_default_instance());
}
void WorldControlState::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void WorldControlState::clear_world_control() {
  if (GetArenaNoVirtual() == NULL && world_control_ != NULL) {
    delete world_control_;
  }
  world_control_ = NULL;
}
void WorldControlState::clear_state() {
  if (GetArenaNoVirtual() == NULL && state_ != NULL) {
    delete state_;
  }
  state_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WorldControlState::kHeaderFieldNumber;
const int WorldControlState::kWorldControlFieldNumber;
const int WorldControlState::kStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WorldControlState::WorldControlState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::scc_info_WorldControlState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.WorldControlState)
}
WorldControlState::WorldControlState(const WorldControlState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_world_control()) {
    world_control_ = new ::gz::msgs::WorldControl(*from.world_control_);
  } else {
    world_control_ = NULL;
  }
  if (from.has_state()) {
    state_ = new ::gz::msgs::SerializedState(*from.state_);
  } else {
    state_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.WorldControlState)
}

void WorldControlState::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&header_)) + sizeof(state_));
}

WorldControlState::~WorldControlState() {
  // @@protoc_insertion_point(destructor:gz.msgs.WorldControlState)
  SharedDtor();
}

void WorldControlState::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete world_control_;
  if (this != internal_default_instance()) delete state_;
}

void WorldControlState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WorldControlState::descriptor() {
  ::protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WorldControlState& WorldControlState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::scc_info_WorldControlState.base);
  return *internal_default_instance();
}


void WorldControlState::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.WorldControlState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && world_control_ != NULL) {
    delete world_control_;
  }
  world_control_ = NULL;
  if (GetArenaNoVirtual() == NULL && state_ != NULL) {
    delete state_;
  }
  state_ = NULL;
  _internal_metadata_.Clear();
}

bool WorldControlState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.WorldControlState)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.WorldControl world_control = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_world_control()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SerializedState state = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_state()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.WorldControlState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.WorldControlState)
  return false;
#undef DO_
}

void WorldControlState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.WorldControlState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.WorldControl world_control = 2;
  if (this->has_world_control()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_world_control(), output);
  }

  // .gz.msgs.SerializedState state = 3;
  if (this->has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_state(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.WorldControlState)
}

::google::protobuf::uint8* WorldControlState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.WorldControlState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.WorldControl world_control = 2;
  if (this->has_world_control()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_world_control(), deterministic, target);
  }

  // .gz.msgs.SerializedState state = 3;
  if (this->has_state()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_state(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.WorldControlState)
  return target;
}

size_t WorldControlState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.WorldControlState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.WorldControl world_control = 2;
  if (this->has_world_control()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *world_control_);
  }

  // .gz.msgs.SerializedState state = 3;
  if (this->has_state()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *state_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WorldControlState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.WorldControlState)
  GOOGLE_DCHECK_NE(&from, this);
  const WorldControlState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WorldControlState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.WorldControlState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.WorldControlState)
    MergeFrom(*source);
  }
}

void WorldControlState::MergeFrom(const WorldControlState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.WorldControlState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_world_control()) {
    mutable_world_control()->::gz::msgs::WorldControl::MergeFrom(from.world_control());
  }
  if (from.has_state()) {
    mutable_state()->::gz::msgs::SerializedState::MergeFrom(from.state());
  }
}

void WorldControlState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.WorldControlState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldControlState::CopyFrom(const WorldControlState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.WorldControlState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldControlState::IsInitialized() const {
  return true;
}

void WorldControlState::Swap(WorldControlState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WorldControlState::InternalSwap(WorldControlState* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(world_control_, other->world_control_);
  swap(state_, other->state_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WorldControlState::GetMetadata() const {
  protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5fcontrol_5fstate_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::WorldControlState* Arena::CreateMaybeMessage< ::gz::msgs::WorldControlState >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::WorldControlState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)