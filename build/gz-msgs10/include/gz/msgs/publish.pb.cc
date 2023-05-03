// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/publish.proto

#include "gz/msgs/publish.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Publish", Publish)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class PublishDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Publish>
      _instance;
} _Publish_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fpublish_2eproto {
static void InitDefaultsPublish() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Publish_default_instance_;
    new (ptr) ::gz::msgs::Publish();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Publish::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_Publish =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPublish}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Publish.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, topic_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, msg_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, host_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Publish, port_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Publish)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Publish_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/publish.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\025gz/msgs/publish.proto\022\007gz.msgs\032\024gz/msg"
      "s/header.proto\"g\n\007Publish\022\037\n\006header\030\001 \001("
      "\0132\017.gz.msgs.Header\022\r\n\005topic\030\002 \001(\t\022\020\n\010msg"
      "_type\030\003 \001(\t\022\014\n\004host\030\004 \001(\t\022\014\n\004port\030\005 \001(\rB"
      "\034\n\013com.gz.msgsB\rPublishProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 197);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/publish.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fpublish_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Publish::InitAsDefaultInstance() {
  ::gz::msgs::_Publish_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void Publish::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Publish::kHeaderFieldNumber;
const int Publish::kTopicFieldNumber;
const int Publish::kMsgTypeFieldNumber;
const int Publish::kHostFieldNumber;
const int Publish::kPortFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Publish::Publish()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fpublish_2eproto::scc_info_Publish.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Publish)
}
Publish::Publish(const Publish& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.topic().size() > 0) {
    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  msg_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg_type().size() > 0) {
    msg_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_type_);
  }
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.host().size() > 0) {
    host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  port_ = from.port_;
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Publish)
}

void Publish::SharedCtor() {
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&port_) -
      reinterpret_cast<char*>(&header_)) + sizeof(port_));
}

Publish::~Publish() {
  // @@protoc_insertion_point(destructor:gz.msgs.Publish)
  SharedDtor();
}

void Publish::SharedDtor() {
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  host_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void Publish::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Publish::descriptor() {
  ::protobuf_gz_2fmsgs_2fpublish_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fpublish_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Publish& Publish::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fpublish_2eproto::scc_info_Publish.base);
  return *internal_default_instance();
}


void Publish::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Publish)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  host_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  port_ = 0u;
  _internal_metadata_.Clear();
}

bool Publish::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Publish)
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

      // string topic = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->topic().data(), static_cast<int>(this->topic().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Publish.topic"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg_type().data(), static_cast<int>(this->msg_type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Publish.msg_type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string host = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->host().data(), static_cast<int>(this->host().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Publish.host"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 port = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &port_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Publish)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Publish)
  return false;
#undef DO_
}

void Publish::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Publish)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string topic = 2;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->topic(), output);
  }

  // string msg_type = 3;
  if (this->msg_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_type().data(), static_cast<int>(this->msg_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.msg_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->msg_type(), output);
  }

  // string host = 4;
  if (this->host().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host().data(), static_cast<int>(this->host().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.host");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->host(), output);
  }

  // uint32 port = 5;
  if (this->port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->port(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Publish)
}

::google::protobuf::uint8* Publish::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Publish)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string topic = 2;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->topic(), target);
  }

  // string msg_type = 3;
  if (this->msg_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_type().data(), static_cast<int>(this->msg_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.msg_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->msg_type(), target);
  }

  // string host = 4;
  if (this->host().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host().data(), static_cast<int>(this->host().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Publish.host");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->host(), target);
  }

  // uint32 port = 5;
  if (this->port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->port(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Publish)
  return target;
}

size_t Publish::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Publish)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string topic = 2;
  if (this->topic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  // string msg_type = 3;
  if (this->msg_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg_type());
  }

  // string host = 4;
  if (this->host().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->host());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // uint32 port = 5;
  if (this->port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->port());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Publish::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Publish)
  GOOGLE_DCHECK_NE(&from, this);
  const Publish* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Publish>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Publish)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Publish)
    MergeFrom(*source);
  }
}

void Publish::MergeFrom(const Publish& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Publish)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.topic().size() > 0) {

    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  if (from.msg_type().size() > 0) {

    msg_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_type_);
  }
  if (from.host().size() > 0) {

    host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.port() != 0) {
    set_port(from.port());
  }
}

void Publish::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Publish)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Publish::CopyFrom(const Publish& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Publish)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Publish::IsInitialized() const {
  return true;
}

void Publish::Swap(Publish* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Publish::InternalSwap(Publish* other) {
  using std::swap;
  topic_.Swap(&other->topic_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  msg_type_.Swap(&other->msg_type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  host_.Swap(&other->host_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(port_, other->port_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Publish::GetMetadata() const {
  protobuf_gz_2fmsgs_2fpublish_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fpublish_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Publish* Arena::CreateMaybeMessage< ::gz::msgs::Publish >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Publish >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)