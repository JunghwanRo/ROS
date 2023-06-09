// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/header.proto

#include "gz/msgs/header.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Header", Header)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Header_Map;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2ftime_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftime_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Time;
}  // namespace protobuf_gz_2fmsgs_2ftime_2eproto
namespace gz {
namespace msgs {
class Header_MapDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Header_Map>
      _instance;
} _Header_Map_default_instance_;
class HeaderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Header>
      _instance;
} _Header_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
static void InitDefaultsHeader_Map() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Header_Map_default_instance_;
    new (ptr) ::gz::msgs::Header_Map();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Header_Map::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<0> scc_info_Header_Map =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsHeader_Map}, {}};

static void InitDefaultsHeader() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Header_default_instance_;
    new (ptr) ::gz::msgs::Header();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Header::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Header =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsHeader}, {
      &protobuf_gz_2fmsgs_2ftime_2eproto::scc_info_Time.base,
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header_Map.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Header_Map.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Header.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header_Map, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header_Map, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header_Map, value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header, stamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Header, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Header_Map)},
  { 7, -1, sizeof(::gz::msgs::Header)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Header_Map_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Header_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/header.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024gz/msgs/header.proto\022\007gz.msgs\032\022gz/msgs"
      "/time.proto\"l\n\006Header\022\034\n\005stamp\030\001 \001(\0132\r.g"
      "z.msgs.Time\022!\n\004data\030\002 \003(\0132\023.gz.msgs.Head"
      "er.Map\032!\n\003Map\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \003("
      "\tB\033\n\013com.gz.msgsB\014HeaderProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 198);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/header.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2ftime_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Header_Map::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Header_Map::kKeyFieldNumber;
const int Header_Map::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Header_Map::Header_Map()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header_Map.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Header.Map)
}
Header_Map::Header_Map(const Header_Map& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      value_(from.value_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Header.Map)
}

void Header_Map::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Header_Map::~Header_Map() {
  // @@protoc_insertion_point(destructor:gz.msgs.Header.Map)
  SharedDtor();
}

void Header_Map::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Header_Map::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Header_Map::descriptor() {
  ::protobuf_gz_2fmsgs_2fheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fheader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Header_Map& Header_Map::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header_Map.base);
  return *internal_default_instance();
}


void Header_Map::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Header.Map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.Clear();
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Header_Map::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Header.Map)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), static_cast<int>(this->key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Header.Map.key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value(this->value_size() - 1).data(),
            static_cast<int>(this->value(this->value_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Header.Map.value"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Header.Map)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Header.Map)
  return false;
#undef DO_
}

void Header_Map::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Header.Map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Header.Map.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // repeated string value = 2;
  for (int i = 0, n = this->value_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value(i).data(), static_cast<int>(this->value(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Header.Map.value");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->value(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Header.Map)
}

::google::protobuf::uint8* Header_Map::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Header.Map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Header.Map.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // repeated string value = 2;
  for (int i = 0, n = this->value_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value(i).data(), static_cast<int>(this->value(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Header.Map.value");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->value(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Header.Map)
  return target;
}

size_t Header_Map::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Header.Map)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string value = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->value_size());
  for (int i = 0, n = this->value_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->value(i));
  }

  // string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header_Map::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Header.Map)
  GOOGLE_DCHECK_NE(&from, this);
  const Header_Map* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Header_Map>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Header.Map)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Header.Map)
    MergeFrom(*source);
  }
}

void Header_Map::MergeFrom(const Header_Map& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Header.Map)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
}

void Header_Map::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Header.Map)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header_Map::CopyFrom(const Header_Map& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Header.Map)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header_Map::IsInitialized() const {
  return true;
}

void Header_Map::Swap(Header_Map* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Header_Map::InternalSwap(Header_Map* other) {
  using std::swap;
  value_.InternalSwap(CastToBase(&other->value_));
  key_.Swap(&other->key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Header_Map::GetMetadata() const {
  protobuf_gz_2fmsgs_2fheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fheader_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Header::InitAsDefaultInstance() {
  ::gz::msgs::_Header_default_instance_._instance.get_mutable()->stamp_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
}
void Header::clear_stamp() {
  if (GetArenaNoVirtual() == NULL && stamp_ != NULL) {
    delete stamp_;
  }
  stamp_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Header::kStampFieldNumber;
const int Header::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Header::Header()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Header)
}
Header::Header(const Header& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_stamp()) {
    stamp_ = new ::gz::msgs::Time(*from.stamp_);
  } else {
    stamp_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Header)
}

void Header::SharedCtor() {
  stamp_ = NULL;
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:gz.msgs.Header)
  SharedDtor();
}

void Header::SharedDtor() {
  if (this != internal_default_instance()) delete stamp_;
}

void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  ::protobuf_gz_2fmsgs_2fheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fheader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Header& Header::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  if (GetArenaNoVirtual() == NULL && stamp_ != NULL) {
    delete stamp_;
  }
  stamp_ = NULL;
  _internal_metadata_.Clear();
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Header)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Time stamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_stamp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Header.Map data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_data()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Header)
  return false;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Time stamp = 1;
  if (this->has_stamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_stamp(), output);
  }

  // repeated .gz.msgs.Header.Map data = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->data(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Header)
}

::google::protobuf::uint8* Header::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Time stamp = 1;
  if (this->has_stamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_stamp(), deterministic, target);
  }

  // repeated .gz.msgs.Header.Map data = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->data(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Header)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.Header.Map data = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->data(static_cast<int>(i)));
    }
  }

  // .gz.msgs.Time stamp = 1;
  if (this->has_stamp()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *stamp_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Header>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Header)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from.has_stamp()) {
    mutable_stamp()->::gz::msgs::Time::MergeFrom(from.stamp());
  }
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::Swap(Header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Header::InternalSwap(Header* other) {
  using std::swap;
  CastToBase(&data_)->InternalSwap(CastToBase(&other->data_));
  swap(stamp_, other->stamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_gz_2fmsgs_2fheader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fheader_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Header_Map* Arena::CreateMaybeMessage< ::gz::msgs::Header_Map >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Header_Map >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Header* Arena::CreateMaybeMessage< ::gz::msgs::Header >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Header >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
