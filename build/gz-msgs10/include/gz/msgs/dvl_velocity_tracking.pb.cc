// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/dvl_velocity_tracking.proto

#include "gz/msgs/dvl_velocity_tracking.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.DVLVelocityTracking", DVLVelocityTracking)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fdvl_5fbeam_5fstate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdvl_5fbeam_5fstate_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_DVLBeamState;
}  // namespace protobuf_gz_2fmsgs_2fdvl_5fbeam_5fstate_2eproto
namespace protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_DVLKinematicEstimate;
}  // namespace protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto
namespace protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_DVLTrackingTarget;
}  // namespace protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class DVLVelocityTrackingDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DVLVelocityTracking>
      _instance;
} _DVLVelocityTracking_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto {
static void InitDefaultsDVLVelocityTracking() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_DVLVelocityTracking_default_instance_;
    new (ptr) ::gz::msgs::DVLVelocityTracking();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::DVLVelocityTracking::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<4> scc_info_DVLVelocityTracking =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsDVLVelocityTracking}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::scc_info_DVLTrackingTarget.base,
      &protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto::scc_info_DVLKinematicEstimate.base,
      &protobuf_gz_2fmsgs_2fdvl_5fbeam_5fstate_2eproto::scc_info_DVLBeamState.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_DVLVelocityTracking.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, velocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, beams_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLVelocityTracking, status_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::DVLVelocityTracking)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_DVLVelocityTracking_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/dvl_velocity_tracking.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n#gz/msgs/dvl_velocity_tracking.proto\022\007g"
      "z.msgs\032\024gz/msgs/header.proto\032\034gz/msgs/dv"
      "l_beam_state.proto\032!gz/msgs/dvl_tracking"
      "_target.proto\032$gz/msgs/dvl_kinematic_est"
      "imate.proto\"\322\002\n\023DVLVelocityTracking\022\037\n\006h"
      "eader\030\001 \001(\0132\017.gz.msgs.Header\0222\n\004type\030\002 \001"
      "(\0162$.gz.msgs.DVLVelocityTracking.DVLType"
      "\022*\n\006target\030\003 \001(\0132\032.gz.msgs.DVLTrackingTa"
      "rget\022/\n\010velocity\030\004 \001(\0132\035.gz.msgs.DVLKine"
      "maticEstimate\022$\n\005beams\030\005 \003(\0132\025.gz.msgs.D"
      "VLBeamState\022\016\n\006status\030\006 \001(\005\"S\n\007DVLType\022\030"
      "\n\024DVL_TYPE_UNSPECIFIED\020\000\022\023\n\017DVL_TYPE_PIS"
      "TON\020\001\022\031\n\025DVL_TYPE_PHASED_ARRAY\020\002B(\n\013com."
      "gz.msgsB\031DVLVelocityTrackingProtosb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 562);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/dvl_velocity_tracking.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fdvl_5fbeam_5fstate_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* DVLVelocityTracking_DVLType_descriptor() {
  protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::file_level_enum_descriptors[0];
}
bool DVLVelocityTracking_DVLType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DVLVelocityTracking_DVLType DVLVelocityTracking::DVL_TYPE_UNSPECIFIED;
const DVLVelocityTracking_DVLType DVLVelocityTracking::DVL_TYPE_PISTON;
const DVLVelocityTracking_DVLType DVLVelocityTracking::DVL_TYPE_PHASED_ARRAY;
const DVLVelocityTracking_DVLType DVLVelocityTracking::DVLType_MIN;
const DVLVelocityTracking_DVLType DVLVelocityTracking::DVLType_MAX;
const int DVLVelocityTracking::DVLType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void DVLVelocityTracking::InitAsDefaultInstance() {
  ::gz::msgs::_DVLVelocityTracking_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_DVLVelocityTracking_default_instance_._instance.get_mutable()->target_ = const_cast< ::gz::msgs::DVLTrackingTarget*>(
      ::gz::msgs::DVLTrackingTarget::internal_default_instance());
  ::gz::msgs::_DVLVelocityTracking_default_instance_._instance.get_mutable()->velocity_ = const_cast< ::gz::msgs::DVLKinematicEstimate*>(
      ::gz::msgs::DVLKinematicEstimate::internal_default_instance());
}
void DVLVelocityTracking::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void DVLVelocityTracking::clear_target() {
  if (GetArenaNoVirtual() == NULL && target_ != NULL) {
    delete target_;
  }
  target_ = NULL;
}
void DVLVelocityTracking::clear_velocity() {
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
}
void DVLVelocityTracking::clear_beams() {
  beams_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DVLVelocityTracking::kHeaderFieldNumber;
const int DVLVelocityTracking::kTypeFieldNumber;
const int DVLVelocityTracking::kTargetFieldNumber;
const int DVLVelocityTracking::kVelocityFieldNumber;
const int DVLVelocityTracking::kBeamsFieldNumber;
const int DVLVelocityTracking::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DVLVelocityTracking::DVLVelocityTracking()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::scc_info_DVLVelocityTracking.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.DVLVelocityTracking)
}
DVLVelocityTracking::DVLVelocityTracking(const DVLVelocityTracking& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      beams_(from.beams_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_target()) {
    target_ = new ::gz::msgs::DVLTrackingTarget(*from.target_);
  } else {
    target_ = NULL;
  }
  if (from.has_velocity()) {
    velocity_ = new ::gz::msgs::DVLKinematicEstimate(*from.velocity_);
  } else {
    velocity_ = NULL;
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&type_)) + sizeof(status_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.DVLVelocityTracking)
}

void DVLVelocityTracking::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&header_)) + sizeof(status_));
}

DVLVelocityTracking::~DVLVelocityTracking() {
  // @@protoc_insertion_point(destructor:gz.msgs.DVLVelocityTracking)
  SharedDtor();
}

void DVLVelocityTracking::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete target_;
  if (this != internal_default_instance()) delete velocity_;
}

void DVLVelocityTracking::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DVLVelocityTracking::descriptor() {
  ::protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DVLVelocityTracking& DVLVelocityTracking::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::scc_info_DVLVelocityTracking.base);
  return *internal_default_instance();
}


void DVLVelocityTracking::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.DVLVelocityTracking)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  beams_.Clear();
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && target_ != NULL) {
    delete target_;
  }
  target_ = NULL;
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&type_)) + sizeof(status_));
  _internal_metadata_.Clear();
}

bool DVLVelocityTracking::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.DVLVelocityTracking)
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

      // .gz.msgs.DVLVelocityTracking.DVLType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::DVLVelocityTracking_DVLType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.DVLTrackingTarget target = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_target()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.DVLKinematicEstimate velocity = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_velocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.DVLBeamState beams = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_beams()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 status = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.DVLVelocityTracking)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.DVLVelocityTracking)
  return false;
#undef DO_
}

void DVLVelocityTracking::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.DVLVelocityTracking)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.DVLVelocityTracking.DVLType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // .gz.msgs.DVLTrackingTarget target = 3;
  if (this->has_target()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_target(), output);
  }

  // .gz.msgs.DVLKinematicEstimate velocity = 4;
  if (this->has_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_velocity(), output);
  }

  // repeated .gz.msgs.DVLBeamState beams = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->beams_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5,
      this->beams(static_cast<int>(i)),
      output);
  }

  // int32 status = 6;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->status(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.DVLVelocityTracking)
}

::google::protobuf::uint8* DVLVelocityTracking::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.DVLVelocityTracking)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.DVLVelocityTracking.DVLType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // .gz.msgs.DVLTrackingTarget target = 3;
  if (this->has_target()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_target(), deterministic, target);
  }

  // .gz.msgs.DVLKinematicEstimate velocity = 4;
  if (this->has_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_velocity(), deterministic, target);
  }

  // repeated .gz.msgs.DVLBeamState beams = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->beams_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->beams(static_cast<int>(i)), deterministic, target);
  }

  // int32 status = 6;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->status(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.DVLVelocityTracking)
  return target;
}

size_t DVLVelocityTracking::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.DVLVelocityTracking)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.DVLBeamState beams = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->beams_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->beams(static_cast<int>(i)));
    }
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.DVLTrackingTarget target = 3;
  if (this->has_target()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *target_);
  }

  // .gz.msgs.DVLKinematicEstimate velocity = 4;
  if (this->has_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *velocity_);
  }

  // .gz.msgs.DVLVelocityTracking.DVLType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // int32 status = 6;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DVLVelocityTracking::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.DVLVelocityTracking)
  GOOGLE_DCHECK_NE(&from, this);
  const DVLVelocityTracking* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DVLVelocityTracking>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.DVLVelocityTracking)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.DVLVelocityTracking)
    MergeFrom(*source);
  }
}

void DVLVelocityTracking::MergeFrom(const DVLVelocityTracking& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.DVLVelocityTracking)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  beams_.MergeFrom(from.beams_);
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_target()) {
    mutable_target()->::gz::msgs::DVLTrackingTarget::MergeFrom(from.target());
  }
  if (from.has_velocity()) {
    mutable_velocity()->::gz::msgs::DVLKinematicEstimate::MergeFrom(from.velocity());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void DVLVelocityTracking::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.DVLVelocityTracking)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DVLVelocityTracking::CopyFrom(const DVLVelocityTracking& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.DVLVelocityTracking)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DVLVelocityTracking::IsInitialized() const {
  return true;
}

void DVLVelocityTracking::Swap(DVLVelocityTracking* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DVLVelocityTracking::InternalSwap(DVLVelocityTracking* other) {
  using std::swap;
  CastToBase(&beams_)->InternalSwap(CastToBase(&other->beams_));
  swap(header_, other->header_);
  swap(target_, other->target_);
  swap(velocity_, other->velocity_);
  swap(type_, other->type_);
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DVLVelocityTracking::GetMetadata() const {
  protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fdvl_5fvelocity_5ftracking_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::DVLVelocityTracking* Arena::CreateMaybeMessage< ::gz::msgs::DVLVelocityTracking >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::DVLVelocityTracking >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
