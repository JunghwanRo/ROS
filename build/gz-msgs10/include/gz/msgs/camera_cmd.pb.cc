// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/camera_cmd.proto

#include "gz/msgs/camera_cmd.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.CameraCmd", CameraCmd)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class CameraCmdDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CameraCmd>
      _instance;
} _CameraCmd_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto {
static void InitDefaultsCameraCmd() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_CameraCmd_default_instance_;
    new (ptr) ::gz::msgs::CameraCmd();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::CameraCmd::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_CameraCmd =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCameraCmd}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CameraCmd.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::CameraCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::CameraCmd, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::CameraCmd, follow_model_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::CameraCmd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_CameraCmd_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/camera_cmd.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\030gz/msgs/camera_cmd.proto\022\007gz.msgs\032\024gz/"
      "msgs/header.proto\"B\n\tCameraCmd\022\037\n\006header"
      "\030\001 \001(\0132\017.gz.msgs.Header\022\024\n\014follow_model\030"
      "\002 \001(\tB\036\n\013com.gz.msgsB\017CameraCmdProtosb\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 165);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/camera_cmd.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void CameraCmd::InitAsDefaultInstance() {
  ::gz::msgs::_CameraCmd_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void CameraCmd::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CameraCmd::kHeaderFieldNumber;
const int CameraCmd::kFollowModelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CameraCmd::CameraCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::scc_info_CameraCmd.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.CameraCmd)
}
CameraCmd::CameraCmd(const CameraCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  follow_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.follow_model().size() > 0) {
    follow_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.follow_model_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.CameraCmd)
}

void CameraCmd::SharedCtor() {
  follow_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  header_ = NULL;
}

CameraCmd::~CameraCmd() {
  // @@protoc_insertion_point(destructor:gz.msgs.CameraCmd)
  SharedDtor();
}

void CameraCmd::SharedDtor() {
  follow_model_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void CameraCmd::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CameraCmd::descriptor() {
  ::protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CameraCmd& CameraCmd::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::scc_info_CameraCmd.base);
  return *internal_default_instance();
}


void CameraCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.CameraCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  follow_model_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  _internal_metadata_.Clear();
}

bool CameraCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.CameraCmd)
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

      // string follow_model = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_follow_model()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->follow_model().data(), static_cast<int>(this->follow_model().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.CameraCmd.follow_model"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.CameraCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.CameraCmd)
  return false;
#undef DO_
}

void CameraCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.CameraCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string follow_model = 2;
  if (this->follow_model().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->follow_model().data(), static_cast<int>(this->follow_model().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.CameraCmd.follow_model");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->follow_model(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.CameraCmd)
}

::google::protobuf::uint8* CameraCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.CameraCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string follow_model = 2;
  if (this->follow_model().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->follow_model().data(), static_cast<int>(this->follow_model().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.CameraCmd.follow_model");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->follow_model(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.CameraCmd)
  return target;
}

size_t CameraCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.CameraCmd)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string follow_model = 2;
  if (this->follow_model().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->follow_model());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CameraCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.CameraCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const CameraCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CameraCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.CameraCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.CameraCmd)
    MergeFrom(*source);
  }
}

void CameraCmd::MergeFrom(const CameraCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.CameraCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.follow_model().size() > 0) {

    follow_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.follow_model_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
}

void CameraCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.CameraCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CameraCmd::CopyFrom(const CameraCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.CameraCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CameraCmd::IsInitialized() const {
  return true;
}

void CameraCmd::Swap(CameraCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CameraCmd::InternalSwap(CameraCmd* other) {
  using std::swap;
  follow_model_.Swap(&other->follow_model_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CameraCmd::GetMetadata() const {
  protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcamera_5fcmd_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::CameraCmd* Arena::CreateMaybeMessage< ::gz::msgs::CameraCmd >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::CameraCmd >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)