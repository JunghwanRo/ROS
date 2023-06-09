// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/projector.proto

#include "gz/msgs/projector.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Projector", Projector)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace gz {
namespace msgs {
class ProjectorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Projector>
      _instance;
} _Projector_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fprojector_2eproto {
static void InitDefaultsProjector() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Projector_default_instance_;
    new (ptr) ::gz::msgs::Projector();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Projector::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Projector =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsProjector}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Projector.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, texture_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, fov_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, near_clip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, far_clip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Projector, enabled_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Projector)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Projector_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/projector.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027gz/msgs/projector.proto\022\007gz.msgs\032\022gz/m"
      "sgs/pose.proto\032\024gz/msgs/header.proto\"\253\001\n"
      "\tProjector\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Hea"
      "der\022\014\n\004name\030\002 \001(\t\022\017\n\007texture\030\003 \001(\t\022\033\n\004po"
      "se\030\004 \001(\0132\r.gz.msgs.Pose\022\013\n\003fov\030\005 \001(\001\022\021\n\t"
      "near_clip\030\006 \001(\001\022\020\n\010far_clip\030\007 \001(\001\022\017\n\007ena"
      "bled\030\010 \001(\010B\036\n\013com.gz.msgsB\017ProjectorProt"
      "osb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 290);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/projector.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fprojector_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Projector::InitAsDefaultInstance() {
  ::gz::msgs::_Projector_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Projector_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
}
void Projector::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Projector::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Projector::kHeaderFieldNumber;
const int Projector::kNameFieldNumber;
const int Projector::kTextureFieldNumber;
const int Projector::kPoseFieldNumber;
const int Projector::kFovFieldNumber;
const int Projector::kNearClipFieldNumber;
const int Projector::kFarClipFieldNumber;
const int Projector::kEnabledFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Projector::Projector()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fprojector_2eproto::scc_info_Projector.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Projector)
}
Projector::Projector(const Projector& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  texture_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.texture().size() > 0) {
    texture_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.texture_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_pose()) {
    pose_ = new ::gz::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  ::memcpy(&fov_, &from.fov_,
    static_cast<size_t>(reinterpret_cast<char*>(&enabled_) -
    reinterpret_cast<char*>(&fov_)) + sizeof(enabled_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Projector)
}

void Projector::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  texture_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&enabled_) -
      reinterpret_cast<char*>(&header_)) + sizeof(enabled_));
}

Projector::~Projector() {
  // @@protoc_insertion_point(destructor:gz.msgs.Projector)
  SharedDtor();
}

void Projector::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  texture_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete pose_;
}

void Projector::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Projector::descriptor() {
  ::protobuf_gz_2fmsgs_2fprojector_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fprojector_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Projector& Projector::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fprojector_2eproto::scc_info_Projector.base);
  return *internal_default_instance();
}


void Projector::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Projector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  texture_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  ::memset(&fov_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&enabled_) -
      reinterpret_cast<char*>(&fov_)) + sizeof(enabled_));
  _internal_metadata_.Clear();
}

bool Projector::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Projector)
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

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Projector.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string texture = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_texture()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->texture().data(), static_cast<int>(this->texture().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Projector.texture"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose pose = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double fov = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &fov_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double near_clip = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &near_clip_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double far_clip = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &far_clip_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool enabled = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enabled_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Projector)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Projector)
  return false;
#undef DO_
}

void Projector::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Projector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Projector.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // string texture = 3;
  if (this->texture().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->texture().data(), static_cast<int>(this->texture().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Projector.texture");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->texture(), output);
  }

  // .gz.msgs.Pose pose = 4;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_pose(), output);
  }

  // double fov = 5;
  if (this->fov() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->fov(), output);
  }

  // double near_clip = 6;
  if (this->near_clip() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->near_clip(), output);
  }

  // double far_clip = 7;
  if (this->far_clip() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->far_clip(), output);
  }

  // bool enabled = 8;
  if (this->enabled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->enabled(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Projector)
}

::google::protobuf::uint8* Projector::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Projector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Projector.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // string texture = 3;
  if (this->texture().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->texture().data(), static_cast<int>(this->texture().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Projector.texture");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->texture(), target);
  }

  // .gz.msgs.Pose pose = 4;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_pose(), deterministic, target);
  }

  // double fov = 5;
  if (this->fov() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->fov(), target);
  }

  // double near_clip = 6;
  if (this->near_clip() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->near_clip(), target);
  }

  // double far_clip = 7;
  if (this->far_clip() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->far_clip(), target);
  }

  // bool enabled = 8;
  if (this->enabled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->enabled(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Projector)
  return target;
}

size_t Projector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Projector)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string texture = 3;
  if (this->texture().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->texture());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Pose pose = 4;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // double fov = 5;
  if (this->fov() != 0) {
    total_size += 1 + 8;
  }

  // double near_clip = 6;
  if (this->near_clip() != 0) {
    total_size += 1 + 8;
  }

  // double far_clip = 7;
  if (this->far_clip() != 0) {
    total_size += 1 + 8;
  }

  // bool enabled = 8;
  if (this->enabled() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Projector::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Projector)
  GOOGLE_DCHECK_NE(&from, this);
  const Projector* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Projector>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Projector)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Projector)
    MergeFrom(*source);
  }
}

void Projector::MergeFrom(const Projector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Projector)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.texture().size() > 0) {

    texture_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.texture_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_pose()) {
    mutable_pose()->::gz::msgs::Pose::MergeFrom(from.pose());
  }
  if (from.fov() != 0) {
    set_fov(from.fov());
  }
  if (from.near_clip() != 0) {
    set_near_clip(from.near_clip());
  }
  if (from.far_clip() != 0) {
    set_far_clip(from.far_clip());
  }
  if (from.enabled() != 0) {
    set_enabled(from.enabled());
  }
}

void Projector::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Projector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Projector::CopyFrom(const Projector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Projector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Projector::IsInitialized() const {
  return true;
}

void Projector::Swap(Projector* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Projector::InternalSwap(Projector* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  texture_.Swap(&other->texture_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(pose_, other->pose_);
  swap(fov_, other->fov_);
  swap(near_clip_, other->near_clip_);
  swap(far_clip_, other->far_clip_);
  swap(enabled_, other->enabled_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Projector::GetMetadata() const {
  protobuf_gz_2fmsgs_2fprojector_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fprojector_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Projector* Arena::CreateMaybeMessage< ::gz::msgs::Projector >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Projector >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
