// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/magnetometer_sensor.proto

#include "gz/msgs/magnetometer_sensor.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.MagnetometerSensor", MagnetometerSensor)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SensorNoise;
}  // namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto
namespace gz {
namespace msgs {
class MagnetometerSensorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MagnetometerSensor>
      _instance;
} _MagnetometerSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto {
static void InitDefaultsMagnetometerSensor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_MagnetometerSensor_default_instance_;
    new (ptr) ::gz::msgs::MagnetometerSensor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::MagnetometerSensor::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_MagnetometerSensor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsMagnetometerSensor}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto::scc_info_SensorNoise.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_MagnetometerSensor.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::MagnetometerSensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::MagnetometerSensor, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::MagnetometerSensor, x_noise_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::MagnetometerSensor, y_noise_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::MagnetometerSensor, z_noise_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::MagnetometerSensor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_MagnetometerSensor_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/magnetometer_sensor.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!gz/msgs/magnetometer_sensor.proto\022\007gz."
      "msgs\032\024gz/msgs/header.proto\032\032gz/msgs/sens"
      "or_noise.proto\"\252\001\n\022MagnetometerSensor\022\037\n"
      "\006header\030\001 \001(\0132\017.gz.msgs.Header\022%\n\007x_nois"
      "e\030\002 \001(\0132\024.gz.msgs.SensorNoise\022%\n\007y_noise"
      "\030\003 \001(\0132\024.gz.msgs.SensorNoise\022%\n\007z_noise\030"
      "\004 \001(\0132\024.gz.msgs.SensorNoiseB\'\n\013com.gz.ms"
      "gsB\030MagnetometerSensorProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 316);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/magnetometer_sensor.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void MagnetometerSensor::InitAsDefaultInstance() {
  ::gz::msgs::_MagnetometerSensor_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_MagnetometerSensor_default_instance_._instance.get_mutable()->x_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
  ::gz::msgs::_MagnetometerSensor_default_instance_._instance.get_mutable()->y_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
  ::gz::msgs::_MagnetometerSensor_default_instance_._instance.get_mutable()->z_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
}
void MagnetometerSensor::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void MagnetometerSensor::clear_x_noise() {
  if (GetArenaNoVirtual() == NULL && x_noise_ != NULL) {
    delete x_noise_;
  }
  x_noise_ = NULL;
}
void MagnetometerSensor::clear_y_noise() {
  if (GetArenaNoVirtual() == NULL && y_noise_ != NULL) {
    delete y_noise_;
  }
  y_noise_ = NULL;
}
void MagnetometerSensor::clear_z_noise() {
  if (GetArenaNoVirtual() == NULL && z_noise_ != NULL) {
    delete z_noise_;
  }
  z_noise_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MagnetometerSensor::kHeaderFieldNumber;
const int MagnetometerSensor::kXNoiseFieldNumber;
const int MagnetometerSensor::kYNoiseFieldNumber;
const int MagnetometerSensor::kZNoiseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MagnetometerSensor::MagnetometerSensor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::scc_info_MagnetometerSensor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.MagnetometerSensor)
}
MagnetometerSensor::MagnetometerSensor(const MagnetometerSensor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_x_noise()) {
    x_noise_ = new ::gz::msgs::SensorNoise(*from.x_noise_);
  } else {
    x_noise_ = NULL;
  }
  if (from.has_y_noise()) {
    y_noise_ = new ::gz::msgs::SensorNoise(*from.y_noise_);
  } else {
    y_noise_ = NULL;
  }
  if (from.has_z_noise()) {
    z_noise_ = new ::gz::msgs::SensorNoise(*from.z_noise_);
  } else {
    z_noise_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.MagnetometerSensor)
}

void MagnetometerSensor::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_noise_) -
      reinterpret_cast<char*>(&header_)) + sizeof(z_noise_));
}

MagnetometerSensor::~MagnetometerSensor() {
  // @@protoc_insertion_point(destructor:gz.msgs.MagnetometerSensor)
  SharedDtor();
}

void MagnetometerSensor::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete x_noise_;
  if (this != internal_default_instance()) delete y_noise_;
  if (this != internal_default_instance()) delete z_noise_;
}

void MagnetometerSensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MagnetometerSensor::descriptor() {
  ::protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MagnetometerSensor& MagnetometerSensor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::scc_info_MagnetometerSensor.base);
  return *internal_default_instance();
}


void MagnetometerSensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.MagnetometerSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && x_noise_ != NULL) {
    delete x_noise_;
  }
  x_noise_ = NULL;
  if (GetArenaNoVirtual() == NULL && y_noise_ != NULL) {
    delete y_noise_;
  }
  y_noise_ = NULL;
  if (GetArenaNoVirtual() == NULL && z_noise_ != NULL) {
    delete z_noise_;
  }
  z_noise_ = NULL;
  _internal_metadata_.Clear();
}

bool MagnetometerSensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.MagnetometerSensor)
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

      // .gz.msgs.SensorNoise x_noise = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_x_noise()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SensorNoise y_noise = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_y_noise()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SensorNoise z_noise = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_z_noise()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.MagnetometerSensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.MagnetometerSensor)
  return false;
#undef DO_
}

void MagnetometerSensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.MagnetometerSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.SensorNoise x_noise = 2;
  if (this->has_x_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_x_noise(), output);
  }

  // .gz.msgs.SensorNoise y_noise = 3;
  if (this->has_y_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_y_noise(), output);
  }

  // .gz.msgs.SensorNoise z_noise = 4;
  if (this->has_z_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_z_noise(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.MagnetometerSensor)
}

::google::protobuf::uint8* MagnetometerSensor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.MagnetometerSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.SensorNoise x_noise = 2;
  if (this->has_x_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_x_noise(), deterministic, target);
  }

  // .gz.msgs.SensorNoise y_noise = 3;
  if (this->has_y_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_y_noise(), deterministic, target);
  }

  // .gz.msgs.SensorNoise z_noise = 4;
  if (this->has_z_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_z_noise(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.MagnetometerSensor)
  return target;
}

size_t MagnetometerSensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.MagnetometerSensor)
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

  // .gz.msgs.SensorNoise x_noise = 2;
  if (this->has_x_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *x_noise_);
  }

  // .gz.msgs.SensorNoise y_noise = 3;
  if (this->has_y_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *y_noise_);
  }

  // .gz.msgs.SensorNoise z_noise = 4;
  if (this->has_z_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *z_noise_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MagnetometerSensor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.MagnetometerSensor)
  GOOGLE_DCHECK_NE(&from, this);
  const MagnetometerSensor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MagnetometerSensor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.MagnetometerSensor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.MagnetometerSensor)
    MergeFrom(*source);
  }
}

void MagnetometerSensor::MergeFrom(const MagnetometerSensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.MagnetometerSensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_x_noise()) {
    mutable_x_noise()->::gz::msgs::SensorNoise::MergeFrom(from.x_noise());
  }
  if (from.has_y_noise()) {
    mutable_y_noise()->::gz::msgs::SensorNoise::MergeFrom(from.y_noise());
  }
  if (from.has_z_noise()) {
    mutable_z_noise()->::gz::msgs::SensorNoise::MergeFrom(from.z_noise());
  }
}

void MagnetometerSensor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.MagnetometerSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MagnetometerSensor::CopyFrom(const MagnetometerSensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.MagnetometerSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MagnetometerSensor::IsInitialized() const {
  return true;
}

void MagnetometerSensor::Swap(MagnetometerSensor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MagnetometerSensor::InternalSwap(MagnetometerSensor* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(x_noise_, other->x_noise_);
  swap(y_noise_, other->y_noise_);
  swap(z_noise_, other->z_noise_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MagnetometerSensor::GetMetadata() const {
  protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmagnetometer_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::MagnetometerSensor* Arena::CreateMaybeMessage< ::gz::msgs::MagnetometerSensor >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::MagnetometerSensor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
