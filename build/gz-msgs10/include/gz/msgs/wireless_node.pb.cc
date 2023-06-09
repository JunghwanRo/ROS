// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/wireless_node.proto

#include "gz/msgs/wireless_node.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.WirelessNode", WirelessNode)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class WirelessNodeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WirelessNode>
      _instance;
} _WirelessNode_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto {
static void InitDefaultsWirelessNode() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_WirelessNode_default_instance_;
    new (ptr) ::gz::msgs::WirelessNode();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::WirelessNode::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_WirelessNode =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsWirelessNode}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WirelessNode.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WirelessNode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WirelessNode, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WirelessNode, essid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WirelessNode, frequency_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WirelessNode, signal_level_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::WirelessNode)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_WirelessNode_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/wireless_node.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\033gz/msgs/wireless_node.proto\022\007gz.msgs\032\024"
      "gz/msgs/header.proto\"g\n\014WirelessNode\022\037\n\006"
      "header\030\001 \001(\0132\017.gz.msgs.Header\022\r\n\005essid\030\002"
      " \001(\t\022\021\n\tfrequency\030\003 \001(\001\022\024\n\014signal_level\030"
      "\004 \001(\001B!\n\013com.gz.msgsB\022WirelessNodeProtos"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/wireless_node.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void WirelessNode::InitAsDefaultInstance() {
  ::gz::msgs::_WirelessNode_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void WirelessNode::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WirelessNode::kHeaderFieldNumber;
const int WirelessNode::kEssidFieldNumber;
const int WirelessNode::kFrequencyFieldNumber;
const int WirelessNode::kSignalLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WirelessNode::WirelessNode()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::scc_info_WirelessNode.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.WirelessNode)
}
WirelessNode::WirelessNode(const WirelessNode& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  essid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.essid().size() > 0) {
    essid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.essid_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&frequency_, &from.frequency_,
    static_cast<size_t>(reinterpret_cast<char*>(&signal_level_) -
    reinterpret_cast<char*>(&frequency_)) + sizeof(signal_level_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.WirelessNode)
}

void WirelessNode::SharedCtor() {
  essid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&signal_level_) -
      reinterpret_cast<char*>(&header_)) + sizeof(signal_level_));
}

WirelessNode::~WirelessNode() {
  // @@protoc_insertion_point(destructor:gz.msgs.WirelessNode)
  SharedDtor();
}

void WirelessNode::SharedDtor() {
  essid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void WirelessNode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WirelessNode::descriptor() {
  ::protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WirelessNode& WirelessNode::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::scc_info_WirelessNode.base);
  return *internal_default_instance();
}


void WirelessNode::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.WirelessNode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  essid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&frequency_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&signal_level_) -
      reinterpret_cast<char*>(&frequency_)) + sizeof(signal_level_));
  _internal_metadata_.Clear();
}

bool WirelessNode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.WirelessNode)
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

      // string essid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_essid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->essid().data(), static_cast<int>(this->essid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.WirelessNode.essid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double frequency = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &frequency_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double signal_level = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &signal_level_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.WirelessNode)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.WirelessNode)
  return false;
#undef DO_
}

void WirelessNode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.WirelessNode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string essid = 2;
  if (this->essid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->essid().data(), static_cast<int>(this->essid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WirelessNode.essid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->essid(), output);
  }

  // double frequency = 3;
  if (this->frequency() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->frequency(), output);
  }

  // double signal_level = 4;
  if (this->signal_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->signal_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.WirelessNode)
}

::google::protobuf::uint8* WirelessNode::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.WirelessNode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string essid = 2;
  if (this->essid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->essid().data(), static_cast<int>(this->essid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.WirelessNode.essid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->essid(), target);
  }

  // double frequency = 3;
  if (this->frequency() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->frequency(), target);
  }

  // double signal_level = 4;
  if (this->signal_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->signal_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.WirelessNode)
  return target;
}

size_t WirelessNode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.WirelessNode)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string essid = 2;
  if (this->essid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->essid());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double frequency = 3;
  if (this->frequency() != 0) {
    total_size += 1 + 8;
  }

  // double signal_level = 4;
  if (this->signal_level() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WirelessNode::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.WirelessNode)
  GOOGLE_DCHECK_NE(&from, this);
  const WirelessNode* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WirelessNode>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.WirelessNode)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.WirelessNode)
    MergeFrom(*source);
  }
}

void WirelessNode::MergeFrom(const WirelessNode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.WirelessNode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.essid().size() > 0) {

    essid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.essid_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.frequency() != 0) {
    set_frequency(from.frequency());
  }
  if (from.signal_level() != 0) {
    set_signal_level(from.signal_level());
  }
}

void WirelessNode::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.WirelessNode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WirelessNode::CopyFrom(const WirelessNode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.WirelessNode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WirelessNode::IsInitialized() const {
  return true;
}

void WirelessNode::Swap(WirelessNode* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WirelessNode::InternalSwap(WirelessNode* other) {
  using std::swap;
  essid_.Swap(&other->essid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(frequency_, other->frequency_);
  swap(signal_level_, other->signal_level_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WirelessNode::GetMetadata() const {
  protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fwireless_5fnode_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::WirelessNode* Arena::CreateMaybeMessage< ::gz::msgs::WirelessNode >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::WirelessNode >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
