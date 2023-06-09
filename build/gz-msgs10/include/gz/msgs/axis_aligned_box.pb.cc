// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/axis_aligned_box.proto

#include "gz/msgs/axis_aligned_box.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.AxisAlignedBox", AxisAlignedBox)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fvector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvector3d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Vector3d;
}  // namespace protobuf_gz_2fmsgs_2fvector3d_2eproto
namespace gz {
namespace msgs {
class AxisAlignedBoxDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AxisAlignedBox>
      _instance;
} _AxisAlignedBox_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto {
static void InitDefaultsAxisAlignedBox() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_AxisAlignedBox_default_instance_;
    new (ptr) ::gz::msgs::AxisAlignedBox();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::AxisAlignedBox::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_AxisAlignedBox =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsAxisAlignedBox}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fvector3d_2eproto::scc_info_Vector3d.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AxisAlignedBox.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AxisAlignedBox, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AxisAlignedBox, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AxisAlignedBox, min_corner_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AxisAlignedBox, max_corner_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::AxisAlignedBox)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_AxisAlignedBox_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/axis_aligned_box.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\036gz/msgs/axis_aligned_box.proto\022\007gz.msg"
      "s\032\024gz/msgs/header.proto\032\026gz/msgs/vector3"
      "d.proto\"\177\n\016AxisAlignedBox\022\037\n\006header\030\001 \001("
      "\0132\017.gz.msgs.Header\022%\n\nmin_corner\030\002 \001(\0132\021"
      ".gz.msgs.Vector3d\022%\n\nmax_corner\030\003 \001(\0132\021."
      "gz.msgs.Vector3dB#\n\013com.gz.msgsB\024AxisAli"
      "gnedBoxProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 261);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/axis_aligned_box.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvector3d_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void AxisAlignedBox::InitAsDefaultInstance() {
  ::gz::msgs::_AxisAlignedBox_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_AxisAlignedBox_default_instance_._instance.get_mutable()->min_corner_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
  ::gz::msgs::_AxisAlignedBox_default_instance_._instance.get_mutable()->max_corner_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
}
void AxisAlignedBox::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void AxisAlignedBox::clear_min_corner() {
  if (GetArenaNoVirtual() == NULL && min_corner_ != NULL) {
    delete min_corner_;
  }
  min_corner_ = NULL;
}
void AxisAlignedBox::clear_max_corner() {
  if (GetArenaNoVirtual() == NULL && max_corner_ != NULL) {
    delete max_corner_;
  }
  max_corner_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AxisAlignedBox::kHeaderFieldNumber;
const int AxisAlignedBox::kMinCornerFieldNumber;
const int AxisAlignedBox::kMaxCornerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AxisAlignedBox::AxisAlignedBox()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::scc_info_AxisAlignedBox.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.AxisAlignedBox)
}
AxisAlignedBox::AxisAlignedBox(const AxisAlignedBox& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_min_corner()) {
    min_corner_ = new ::gz::msgs::Vector3d(*from.min_corner_);
  } else {
    min_corner_ = NULL;
  }
  if (from.has_max_corner()) {
    max_corner_ = new ::gz::msgs::Vector3d(*from.max_corner_);
  } else {
    max_corner_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.AxisAlignedBox)
}

void AxisAlignedBox::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_corner_) -
      reinterpret_cast<char*>(&header_)) + sizeof(max_corner_));
}

AxisAlignedBox::~AxisAlignedBox() {
  // @@protoc_insertion_point(destructor:gz.msgs.AxisAlignedBox)
  SharedDtor();
}

void AxisAlignedBox::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete min_corner_;
  if (this != internal_default_instance()) delete max_corner_;
}

void AxisAlignedBox::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AxisAlignedBox::descriptor() {
  ::protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AxisAlignedBox& AxisAlignedBox::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::scc_info_AxisAlignedBox.base);
  return *internal_default_instance();
}


void AxisAlignedBox::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.AxisAlignedBox)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && min_corner_ != NULL) {
    delete min_corner_;
  }
  min_corner_ = NULL;
  if (GetArenaNoVirtual() == NULL && max_corner_ != NULL) {
    delete max_corner_;
  }
  max_corner_ = NULL;
  _internal_metadata_.Clear();
}

bool AxisAlignedBox::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.AxisAlignedBox)
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

      // .gz.msgs.Vector3d min_corner = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_min_corner()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Vector3d max_corner = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_max_corner()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.AxisAlignedBox)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.AxisAlignedBox)
  return false;
#undef DO_
}

void AxisAlignedBox::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.AxisAlignedBox)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Vector3d min_corner = 2;
  if (this->has_min_corner()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_min_corner(), output);
  }

  // .gz.msgs.Vector3d max_corner = 3;
  if (this->has_max_corner()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_max_corner(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.AxisAlignedBox)
}

::google::protobuf::uint8* AxisAlignedBox::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.AxisAlignedBox)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Vector3d min_corner = 2;
  if (this->has_min_corner()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_min_corner(), deterministic, target);
  }

  // .gz.msgs.Vector3d max_corner = 3;
  if (this->has_max_corner()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_max_corner(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.AxisAlignedBox)
  return target;
}

size_t AxisAlignedBox::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.AxisAlignedBox)
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

  // .gz.msgs.Vector3d min_corner = 2;
  if (this->has_min_corner()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *min_corner_);
  }

  // .gz.msgs.Vector3d max_corner = 3;
  if (this->has_max_corner()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *max_corner_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AxisAlignedBox::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.AxisAlignedBox)
  GOOGLE_DCHECK_NE(&from, this);
  const AxisAlignedBox* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AxisAlignedBox>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.AxisAlignedBox)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.AxisAlignedBox)
    MergeFrom(*source);
  }
}

void AxisAlignedBox::MergeFrom(const AxisAlignedBox& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.AxisAlignedBox)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_min_corner()) {
    mutable_min_corner()->::gz::msgs::Vector3d::MergeFrom(from.min_corner());
  }
  if (from.has_max_corner()) {
    mutable_max_corner()->::gz::msgs::Vector3d::MergeFrom(from.max_corner());
  }
}

void AxisAlignedBox::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.AxisAlignedBox)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AxisAlignedBox::CopyFrom(const AxisAlignedBox& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.AxisAlignedBox)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AxisAlignedBox::IsInitialized() const {
  return true;
}

void AxisAlignedBox::Swap(AxisAlignedBox* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AxisAlignedBox::InternalSwap(AxisAlignedBox* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(min_corner_, other->min_corner_);
  swap(max_corner_, other->max_corner_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AxisAlignedBox::GetMetadata() const {
  protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::AxisAlignedBox* Arena::CreateMaybeMessage< ::gz::msgs::AxisAlignedBox >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::AxisAlignedBox >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
