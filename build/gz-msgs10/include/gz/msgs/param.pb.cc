// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/param.proto

#include "gz/msgs/param.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Param", Param)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fany_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fany_2eproto ::google::protobuf::internal::SCCInfo<6> scc_info_Any;
}  // namespace protobuf_gz_2fmsgs_2fany_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fparam_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fparam_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Param_ParamsEntry_DoNotUse;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fparam_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Param;
}  // namespace protobuf_gz_2fmsgs_2fparam_2eproto
namespace gz {
namespace msgs {
class Param_ParamsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Param_ParamsEntry_DoNotUse>
      _instance;
} _Param_ParamsEntry_DoNotUse_default_instance_;
class ParamDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Param>
      _instance;
} _Param_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fparam_2eproto {
static void InitDefaultsParam_ParamsEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Param_ParamsEntry_DoNotUse_default_instance_;
    new (ptr) ::gz::msgs::Param_ParamsEntry_DoNotUse();
  }
  ::gz::msgs::Param_ParamsEntry_DoNotUse::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_Param_ParamsEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsParam_ParamsEntry_DoNotUse}, {
      &protobuf_gz_2fmsgs_2fany_2eproto::scc_info_Any.base,}};

static void InitDefaultsParam() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Param_default_instance_;
    new (ptr) ::gz::msgs::Param();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Param::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Param =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsParam}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fparam_2eproto::scc_info_Param_ParamsEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Param_ParamsEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Param.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param_ParamsEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param_ParamsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param_ParamsEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param_ParamsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param, params_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Param, children_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gz::msgs::Param_ParamsEntry_DoNotUse)},
  { 9, -1, sizeof(::gz::msgs::Param)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Param_ParamsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Param_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/param.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023gz/msgs/param.proto\022\007gz.msgs\032\021gz/msgs/"
      "any.proto\032\024gz/msgs/header.proto\"\263\001\n\005Para"
      "m\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022*\n\006pa"
      "rams\030\002 \003(\0132\032.gz.msgs.Param.ParamsEntry\022 "
      "\n\010children\030\003 \003(\0132\016.gz.msgs.Param\032;\n\013Para"
      "msEntry\022\013\n\003key\030\001 \001(\t\022\033\n\005value\030\002 \001(\0132\014.gz"
      ".msgs.Any:\0028\001B\032\n\013com.gz.msgsB\013EmptyProto"
      "sb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 289);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/param.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fany_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fparam_2eproto
namespace gz {
namespace msgs {

// ===================================================================

Param_ParamsEntry_DoNotUse::Param_ParamsEntry_DoNotUse() {}
Param_ParamsEntry_DoNotUse::Param_ParamsEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Param_ParamsEntry_DoNotUse::MergeFrom(const Param_ParamsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Param_ParamsEntry_DoNotUse::GetMetadata() const {
  ::protobuf_gz_2fmsgs_2fparam_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fparam_2eproto::file_level_metadata[0];
}
void Param_ParamsEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void Param::InitAsDefaultInstance() {
  ::gz::msgs::_Param_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void Param::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Param::clear_params() {
  params_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Param::kHeaderFieldNumber;
const int Param::kParamsFieldNumber;
const int Param::kChildrenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Param::Param()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fparam_2eproto::scc_info_Param.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Param)
}
Param::Param(const Param& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      children_(from.children_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  params_.MergeFrom(from.params_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Param)
}

void Param::SharedCtor() {
  header_ = NULL;
}

Param::~Param() {
  // @@protoc_insertion_point(destructor:gz.msgs.Param)
  SharedDtor();
}

void Param::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void Param::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Param::descriptor() {
  ::protobuf_gz_2fmsgs_2fparam_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fparam_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Param& Param::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fparam_2eproto::scc_info_Param.base);
  return *internal_default_instance();
}


void Param::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Param)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  params_.Clear();
  children_.Clear();
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  _internal_metadata_.Clear();
}

bool Param::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Param)
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

      // map<string, .gz.msgs.Any> params = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          Param_ParamsEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              Param_ParamsEntry_DoNotUse,
              ::std::string, ::gz::msgs::Any,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::gz::msgs::Any > > parser(&params_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Param.ParamsEntry.key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Param children = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_children()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Param)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Param)
  return false;
#undef DO_
}

void Param::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Param)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // map<string, .gz.msgs.Any> params = 2;
  if (!this->params().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "gz.msgs.Param.ParamsEntry.key");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->params().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->params().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_iterator
          it = this->params().begin();
          it != this->params().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<Param_ParamsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(params_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<Param_ParamsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_iterator
          it = this->params().begin();
          it != this->params().end(); ++it) {
        entry.reset(params_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // repeated .gz.msgs.Param children = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->children_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->children(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Param)
}

::google::protobuf::uint8* Param::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Param)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // map<string, .gz.msgs.Any> params = 2;
  if (!this->params().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "gz.msgs.Param.ParamsEntry.key");
      }
    };

    if (deterministic &&
        this->params().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->params().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_iterator
          it = this->params().begin();
          it != this->params().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<Param_ParamsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(params_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<Param_ParamsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_iterator
          it = this->params().begin();
          it != this->params().end(); ++it) {
        entry.reset(params_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // repeated .gz.msgs.Param children = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->children_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->children(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Param)
  return target;
}

size_t Param::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Param)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, .gz.msgs.Any> params = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->params_size());
  {
    ::std::unique_ptr<Param_ParamsEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::gz::msgs::Any >::const_iterator
        it = this->params().begin();
        it != this->params().end(); ++it) {
      entry.reset(params_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated .gz.msgs.Param children = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->children_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->children(static_cast<int>(i)));
    }
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

void Param::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Param)
  GOOGLE_DCHECK_NE(&from, this);
  const Param* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Param>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Param)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Param)
    MergeFrom(*source);
  }
}

void Param::MergeFrom(const Param& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Param)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  params_.MergeFrom(from.params_);
  children_.MergeFrom(from.children_);
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
}

void Param::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Param)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Param::CopyFrom(const Param& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Param)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Param::IsInitialized() const {
  return true;
}

void Param::Swap(Param* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Param::InternalSwap(Param* other) {
  using std::swap;
  params_.Swap(&other->params_);
  CastToBase(&children_)->InternalSwap(CastToBase(&other->children_));
  swap(header_, other->header_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Param::GetMetadata() const {
  protobuf_gz_2fmsgs_2fparam_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fparam_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Param_ParamsEntry_DoNotUse* Arena::CreateMaybeMessage< ::gz::msgs::Param_ParamsEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Param_ParamsEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Param* Arena::CreateMaybeMessage< ::gz::msgs::Param >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Param >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
