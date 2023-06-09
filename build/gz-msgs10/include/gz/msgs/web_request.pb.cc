// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/web_request.proto

#include "gz/msgs/web_request.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.WebRequest", WebRequest)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class WebRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WebRequest>
      _instance;
} _WebRequest_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fweb_5frequest_2eproto {
static void InitDefaultsWebRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_WebRequest_default_instance_;
    new (ptr) ::gz::msgs::WebRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::WebRequest::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_WebRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsWebRequest}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WebRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, operation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, topic_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, msg_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, compression_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WebRequest, hz_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::WebRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_WebRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/web_request.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\031gz/msgs/web_request.proto\022\007gz.msgs\032\024gz"
      "/msgs/header.proto\"\202\001\n\nWebRequest\022\037\n\006hea"
      "der\030\001 \001(\0132\017.gz.msgs.Header\022\021\n\toperation\030"
      "\002 \001(\t\022\r\n\005topic\030\003 \001(\t\022\020\n\010msg_type\030\004 \001(\t\022\023"
      "\n\013compression\030\005 \001(\t\022\n\n\002hz\030\006 \001(\001B\037\n\013com.g"
      "z.msgsB\020WebRequestProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 232);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/web_request.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fweb_5frequest_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void WebRequest::InitAsDefaultInstance() {
  ::gz::msgs::_WebRequest_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void WebRequest::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WebRequest::kHeaderFieldNumber;
const int WebRequest::kOperationFieldNumber;
const int WebRequest::kTopicFieldNumber;
const int WebRequest::kMsgTypeFieldNumber;
const int WebRequest::kCompressionFieldNumber;
const int WebRequest::kHzFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WebRequest::WebRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::scc_info_WebRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.WebRequest)
}
WebRequest::WebRequest(const WebRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  operation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.operation().size() > 0) {
    operation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operation_);
  }
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.topic().size() > 0) {
    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  msg_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg_type().size() > 0) {
    msg_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_type_);
  }
  compression_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.compression().size() > 0) {
    compression_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.compression_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  hz_ = from.hz_;
  // @@protoc_insertion_point(copy_constructor:gz.msgs.WebRequest)
}

void WebRequest::SharedCtor() {
  operation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compression_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&hz_) -
      reinterpret_cast<char*>(&header_)) + sizeof(hz_));
}

WebRequest::~WebRequest() {
  // @@protoc_insertion_point(destructor:gz.msgs.WebRequest)
  SharedDtor();
}

void WebRequest::SharedDtor() {
  operation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compression_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void WebRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WebRequest::descriptor() {
  ::protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WebRequest& WebRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::scc_info_WebRequest.base);
  return *internal_default_instance();
}


void WebRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.WebRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  operation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compression_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  hz_ = 0;
  _internal_metadata_.Clear();
}

bool WebRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.WebRequest)
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

      // string operation = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_operation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->operation().data(), static_cast<int>(this->operation().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.WebRequest.operation"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string topic = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->topic().data(), static_cast<int>(this->topic().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.WebRequest.topic"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg_type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg_type().data(), static_cast<int>(this->msg_type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.WebRequest.msg_type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string compression = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_compression()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->compression().data(), static_cast<int>(this->compression().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.WebRequest.compression"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double hz = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &hz_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.WebRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.WebRequest)
  return false;
#undef DO_
}

void WebRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.WebRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string operation = 2;
  if (this->operation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation().data(), static_cast<int>(this->operation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.operation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->operation(), output);
  }

  // string topic = 3;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->topic(), output);
  }

  // string msg_type = 4;
  if (this->msg_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_type().data(), static_cast<int>(this->msg_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.msg_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->msg_type(), output);
  }

  // string compression = 5;
  if (this->compression().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->compression().data(), static_cast<int>(this->compression().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.compression");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->compression(), output);
  }

  // double hz = 6;
  if (this->hz() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->hz(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.WebRequest)
}

::google::protobuf::uint8* WebRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.WebRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string operation = 2;
  if (this->operation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation().data(), static_cast<int>(this->operation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.operation");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->operation(), target);
  }

  // string topic = 3;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->topic(), target);
  }

  // string msg_type = 4;
  if (this->msg_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_type().data(), static_cast<int>(this->msg_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.msg_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->msg_type(), target);
  }

  // string compression = 5;
  if (this->compression().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->compression().data(), static_cast<int>(this->compression().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WebRequest.compression");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->compression(), target);
  }

  // double hz = 6;
  if (this->hz() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->hz(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.WebRequest)
  return target;
}

size_t WebRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.WebRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string operation = 2;
  if (this->operation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->operation());
  }

  // string topic = 3;
  if (this->topic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  // string msg_type = 4;
  if (this->msg_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg_type());
  }

  // string compression = 5;
  if (this->compression().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->compression());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double hz = 6;
  if (this->hz() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WebRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.WebRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const WebRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WebRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.WebRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.WebRequest)
    MergeFrom(*source);
  }
}

void WebRequest::MergeFrom(const WebRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.WebRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.operation().size() > 0) {

    operation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operation_);
  }
  if (from.topic().size() > 0) {

    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  if (from.msg_type().size() > 0) {

    msg_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_type_);
  }
  if (from.compression().size() > 0) {

    compression_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.compression_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.hz() != 0) {
    set_hz(from.hz());
  }
}

void WebRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.WebRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WebRequest::CopyFrom(const WebRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.WebRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WebRequest::IsInitialized() const {
  return true;
}

void WebRequest::Swap(WebRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WebRequest::InternalSwap(WebRequest* other) {
  using std::swap;
  operation_.Swap(&other->operation_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  topic_.Swap(&other->topic_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  msg_type_.Swap(&other->msg_type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  compression_.Swap(&other->compression_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(hz_, other->hz_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WebRequest::GetMetadata() const {
  protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fweb_5frequest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::WebRequest* Arena::CreateMaybeMessage< ::gz::msgs::WebRequest >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::WebRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
