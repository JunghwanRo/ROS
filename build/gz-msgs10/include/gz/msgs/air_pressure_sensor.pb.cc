// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/air_pressure_sensor.proto

#include "gz/msgs/air_pressure_sensor.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.AirPressureSensor", AirPressureSensor)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SensorNoise;
}  // namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto
namespace gz {
namespace msgs {
class AirPressureSensorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AirPressureSensor>
      _instance;
} _AirPressureSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto {
static void InitDefaultsAirPressureSensor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_AirPressureSensor_default_instance_;
    new (ptr) ::gz::msgs::AirPressureSensor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::AirPressureSensor::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_AirPressureSensor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsAirPressureSensor}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto::scc_info_SensorNoise.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AirPressureSensor.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AirPressureSensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AirPressureSensor, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AirPressureSensor, reference_altitude_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::AirPressureSensor, pressure_noise_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::AirPressureSensor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_AirPressureSensor_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/air_pressure_sensor.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!gz/msgs/air_pressure_sensor.proto\022\007gz."
      "msgs\032\024gz/msgs/header.proto\032\032gz/msgs/sens"
      "or_noise.proto\"~\n\021AirPressureSensor\022\037\n\006h"
      "eader\030\001 \001(\0132\017.gz.msgs.Header\022\032\n\022referenc"
      "e_altitude\030\002 \001(\001\022,\n\016pressure_noise\030\003 \001(\013"
      "2\024.gz.msgs.SensorNoiseB&\n\013com.gz.msgsB\027A"
      "irPressureSensorProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 270);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/air_pressure_sensor.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void AirPressureSensor::InitAsDefaultInstance() {
  ::gz::msgs::_AirPressureSensor_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_AirPressureSensor_default_instance_._instance.get_mutable()->pressure_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
}
void AirPressureSensor::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void AirPressureSensor::clear_pressure_noise() {
  if (GetArenaNoVirtual() == NULL && pressure_noise_ != NULL) {
    delete pressure_noise_;
  }
  pressure_noise_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AirPressureSensor::kHeaderFieldNumber;
const int AirPressureSensor::kReferenceAltitudeFieldNumber;
const int AirPressureSensor::kPressureNoiseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AirPressureSensor::AirPressureSensor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::scc_info_AirPressureSensor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.AirPressureSensor)
}
AirPressureSensor::AirPressureSensor(const AirPressureSensor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_pressure_noise()) {
    pressure_noise_ = new ::gz::msgs::SensorNoise(*from.pressure_noise_);
  } else {
    pressure_noise_ = NULL;
  }
  reference_altitude_ = from.reference_altitude_;
  // @@protoc_insertion_point(copy_constructor:gz.msgs.AirPressureSensor)
}

void AirPressureSensor::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&reference_altitude_) -
      reinterpret_cast<char*>(&header_)) + sizeof(reference_altitude_));
}

AirPressureSensor::~AirPressureSensor() {
  // @@protoc_insertion_point(destructor:gz.msgs.AirPressureSensor)
  SharedDtor();
}

void AirPressureSensor::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete pressure_noise_;
}

void AirPressureSensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AirPressureSensor::descriptor() {
  ::protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AirPressureSensor& AirPressureSensor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::scc_info_AirPressureSensor.base);
  return *internal_default_instance();
}


void AirPressureSensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.AirPressureSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && pressure_noise_ != NULL) {
    delete pressure_noise_;
  }
  pressure_noise_ = NULL;
  reference_altitude_ = 0;
  _internal_metadata_.Clear();
}

bool AirPressureSensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.AirPressureSensor)
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

      // double reference_altitude = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &reference_altitude_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SensorNoise pressure_noise = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pressure_noise()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.AirPressureSensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.AirPressureSensor)
  return false;
#undef DO_
}

void AirPressureSensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.AirPressureSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // double reference_altitude = 2;
  if (this->reference_altitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->reference_altitude(), output);
  }

  // .gz.msgs.SensorNoise pressure_noise = 3;
  if (this->has_pressure_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_pressure_noise(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.AirPressureSensor)
}

::google::protobuf::uint8* AirPressureSensor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.AirPressureSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // double reference_altitude = 2;
  if (this->reference_altitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->reference_altitude(), target);
  }

  // .gz.msgs.SensorNoise pressure_noise = 3;
  if (this->has_pressure_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_pressure_noise(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.AirPressureSensor)
  return target;
}

size_t AirPressureSensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.AirPressureSensor)
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

  // .gz.msgs.SensorNoise pressure_noise = 3;
  if (this->has_pressure_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pressure_noise_);
  }

  // double reference_altitude = 2;
  if (this->reference_altitude() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AirPressureSensor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.AirPressureSensor)
  GOOGLE_DCHECK_NE(&from, this);
  const AirPressureSensor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AirPressureSensor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.AirPressureSensor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.AirPressureSensor)
    MergeFrom(*source);
  }
}

void AirPressureSensor::MergeFrom(const AirPressureSensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.AirPressureSensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_pressure_noise()) {
    mutable_pressure_noise()->::gz::msgs::SensorNoise::MergeFrom(from.pressure_noise());
  }
  if (from.reference_altitude() != 0) {
    set_reference_altitude(from.reference_altitude());
  }
}

void AirPressureSensor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.AirPressureSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AirPressureSensor::CopyFrom(const AirPressureSensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.AirPressureSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AirPressureSensor::IsInitialized() const {
  return true;
}

void AirPressureSensor::Swap(AirPressureSensor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AirPressureSensor::InternalSwap(AirPressureSensor* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(pressure_noise_, other->pressure_noise_);
  swap(reference_altitude_, other->reference_altitude_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AirPressureSensor::GetMetadata() const {
  protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fair_5fpressure_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::AirPressureSensor* Arena::CreateMaybeMessage< ::gz::msgs::AirPressureSensor >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::AirPressureSensor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
