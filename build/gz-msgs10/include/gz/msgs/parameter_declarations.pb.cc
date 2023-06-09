// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/parameter_declarations.proto

#include "gz/msgs/parameter_declarations.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.ParameterDeclarations", ParameterDeclarations)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fparameter_5fdeclaration_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fparameter_5fdeclaration_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ParameterDeclaration;
}  // namespace protobuf_gz_2fmsgs_2fparameter_5fdeclaration_2eproto
namespace gz {
namespace msgs {
class ParameterDeclarationsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ParameterDeclarations>
      _instance;
} _ParameterDeclarations_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto {
static void InitDefaultsParameterDeclarations() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_ParameterDeclarations_default_instance_;
    new (ptr) ::gz::msgs::ParameterDeclarations();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::ParameterDeclarations::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_ParameterDeclarations =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsParameterDeclarations}, {
      &protobuf_gz_2fmsgs_2fparameter_5fdeclaration_2eproto::scc_info_ParameterDeclaration.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ParameterDeclarations.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::ParameterDeclarations, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::ParameterDeclarations, parameter_declarations_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::ParameterDeclarations)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_ParameterDeclarations_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/parameter_declarations.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n$gz/msgs/parameter_declarations.proto\022\007"
      "gz.msgs\032#gz/msgs/parameter_declaration.p"
      "roto\"V\n\025ParameterDeclarations\022=\n\026paramet"
      "er_declarations\030\001 \003(\0132\035.gz.msgs.Paramete"
      "rDeclarationB*\n\013com.gz.msgsB\033ParameterDe"
      "clarationsProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/parameter_declarations.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fparameter_5fdeclaration_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void ParameterDeclarations::InitAsDefaultInstance() {
}
void ParameterDeclarations::clear_parameter_declarations() {
  parameter_declarations_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ParameterDeclarations::kParameterDeclarationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ParameterDeclarations::ParameterDeclarations()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::scc_info_ParameterDeclarations.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.ParameterDeclarations)
}
ParameterDeclarations::ParameterDeclarations(const ParameterDeclarations& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      parameter_declarations_(from.parameter_declarations_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gz.msgs.ParameterDeclarations)
}

void ParameterDeclarations::SharedCtor() {
}

ParameterDeclarations::~ParameterDeclarations() {
  // @@protoc_insertion_point(destructor:gz.msgs.ParameterDeclarations)
  SharedDtor();
}

void ParameterDeclarations::SharedDtor() {
}

void ParameterDeclarations::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ParameterDeclarations::descriptor() {
  ::protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ParameterDeclarations& ParameterDeclarations::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::scc_info_ParameterDeclarations.base);
  return *internal_default_instance();
}


void ParameterDeclarations::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.ParameterDeclarations)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameter_declarations_.Clear();
  _internal_metadata_.Clear();
}

bool ParameterDeclarations::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.ParameterDeclarations)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .gz.msgs.ParameterDeclaration parameter_declarations = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_parameter_declarations()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.ParameterDeclarations)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.ParameterDeclarations)
  return false;
#undef DO_
}

void ParameterDeclarations::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.ParameterDeclarations)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .gz.msgs.ParameterDeclaration parameter_declarations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parameter_declarations_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->parameter_declarations(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.ParameterDeclarations)
}

::google::protobuf::uint8* ParameterDeclarations::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.ParameterDeclarations)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .gz.msgs.ParameterDeclaration parameter_declarations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parameter_declarations_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->parameter_declarations(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.ParameterDeclarations)
  return target;
}

size_t ParameterDeclarations::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.ParameterDeclarations)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.ParameterDeclaration parameter_declarations = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->parameter_declarations_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->parameter_declarations(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ParameterDeclarations::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.ParameterDeclarations)
  GOOGLE_DCHECK_NE(&from, this);
  const ParameterDeclarations* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ParameterDeclarations>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.ParameterDeclarations)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.ParameterDeclarations)
    MergeFrom(*source);
  }
}

void ParameterDeclarations::MergeFrom(const ParameterDeclarations& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.ParameterDeclarations)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  parameter_declarations_.MergeFrom(from.parameter_declarations_);
}

void ParameterDeclarations::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.ParameterDeclarations)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParameterDeclarations::CopyFrom(const ParameterDeclarations& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.ParameterDeclarations)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParameterDeclarations::IsInitialized() const {
  return true;
}

void ParameterDeclarations::Swap(ParameterDeclarations* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ParameterDeclarations::InternalSwap(ParameterDeclarations* other) {
  using std::swap;
  CastToBase(&parameter_declarations_)->InternalSwap(CastToBase(&other->parameter_declarations_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ParameterDeclarations::GetMetadata() const {
  protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fparameter_5fdeclarations_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::ParameterDeclarations* Arena::CreateMaybeMessage< ::gz::msgs::ParameterDeclarations >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::ParameterDeclarations >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
