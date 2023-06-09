// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/sky.proto

#include "gz/msgs/sky.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Sky", Sky)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fcolor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fcolor_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Color;
}  // namespace protobuf_gz_2fmsgs_2fcolor_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class SkyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Sky>
      _instance;
} _Sky_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fsky_2eproto {
static void InitDefaultsSky() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Sky_default_instance_;
    new (ptr) ::gz::msgs::Sky();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Sky::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Sky =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSky}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fcolor_2eproto::scc_info_Color.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Sky.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, sunrise_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, sunset_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, wind_speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, wind_direction_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, cloud_ambient_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, humidity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Sky, mean_cloud_size_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Sky)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Sky_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/sky.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021gz/msgs/sky.proto\022\007gz.msgs\032\023gz/msgs/co"
      "lor.proto\032\024gz/msgs/header.proto\"\323\001\n\003Sky\022"
      "\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\014\n\004time"
      "\030\002 \001(\001\022\017\n\007sunrise\030\003 \001(\001\022\016\n\006sunset\030\004 \001(\001\022"
      "\022\n\nwind_speed\030\005 \001(\001\022\026\n\016wind_direction\030\006 "
      "\001(\001\022%\n\rcloud_ambient\030\007 \001(\0132\016.gz.msgs.Col"
      "or\022\020\n\010humidity\030\010 \001(\001\022\027\n\017mean_cloud_size\030"
      "\t \001(\001B\030\n\013com.gz.msgsB\tSkyProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 319);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/sky.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fcolor_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fsky_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Sky::InitAsDefaultInstance() {
  ::gz::msgs::_Sky_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Sky_default_instance_._instance.get_mutable()->cloud_ambient_ = const_cast< ::gz::msgs::Color*>(
      ::gz::msgs::Color::internal_default_instance());
}
void Sky::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Sky::clear_cloud_ambient() {
  if (GetArenaNoVirtual() == NULL && cloud_ambient_ != NULL) {
    delete cloud_ambient_;
  }
  cloud_ambient_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Sky::kHeaderFieldNumber;
const int Sky::kTimeFieldNumber;
const int Sky::kSunriseFieldNumber;
const int Sky::kSunsetFieldNumber;
const int Sky::kWindSpeedFieldNumber;
const int Sky::kWindDirectionFieldNumber;
const int Sky::kCloudAmbientFieldNumber;
const int Sky::kHumidityFieldNumber;
const int Sky::kMeanCloudSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Sky::Sky()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fsky_2eproto::scc_info_Sky.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Sky)
}
Sky::Sky(const Sky& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_cloud_ambient()) {
    cloud_ambient_ = new ::gz::msgs::Color(*from.cloud_ambient_);
  } else {
    cloud_ambient_ = NULL;
  }
  ::memcpy(&time_, &from.time_,
    static_cast<size_t>(reinterpret_cast<char*>(&mean_cloud_size_) -
    reinterpret_cast<char*>(&time_)) + sizeof(mean_cloud_size_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Sky)
}

void Sky::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mean_cloud_size_) -
      reinterpret_cast<char*>(&header_)) + sizeof(mean_cloud_size_));
}

Sky::~Sky() {
  // @@protoc_insertion_point(destructor:gz.msgs.Sky)
  SharedDtor();
}

void Sky::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete cloud_ambient_;
}

void Sky::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Sky::descriptor() {
  ::protobuf_gz_2fmsgs_2fsky_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fsky_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Sky& Sky::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fsky_2eproto::scc_info_Sky.base);
  return *internal_default_instance();
}


void Sky::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Sky)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && cloud_ambient_ != NULL) {
    delete cloud_ambient_;
  }
  cloud_ambient_ = NULL;
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mean_cloud_size_) -
      reinterpret_cast<char*>(&time_)) + sizeof(mean_cloud_size_));
  _internal_metadata_.Clear();
}

bool Sky::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Sky)
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

      // double time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double sunrise = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sunrise_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double sunset = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sunset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double wind_speed = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &wind_speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double wind_direction = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &wind_direction_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Color cloud_ambient = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_cloud_ambient()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double humidity = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &humidity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double mean_cloud_size = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &mean_cloud_size_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Sky)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Sky)
  return false;
#undef DO_
}

void Sky::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Sky)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // double time = 2;
  if (this->time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->time(), output);
  }

  // double sunrise = 3;
  if (this->sunrise() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->sunrise(), output);
  }

  // double sunset = 4;
  if (this->sunset() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->sunset(), output);
  }

  // double wind_speed = 5;
  if (this->wind_speed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->wind_speed(), output);
  }

  // double wind_direction = 6;
  if (this->wind_direction() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->wind_direction(), output);
  }

  // .gz.msgs.Color cloud_ambient = 7;
  if (this->has_cloud_ambient()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_cloud_ambient(), output);
  }

  // double humidity = 8;
  if (this->humidity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->humidity(), output);
  }

  // double mean_cloud_size = 9;
  if (this->mean_cloud_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->mean_cloud_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Sky)
}

::google::protobuf::uint8* Sky::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Sky)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // double time = 2;
  if (this->time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->time(), target);
  }

  // double sunrise = 3;
  if (this->sunrise() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->sunrise(), target);
  }

  // double sunset = 4;
  if (this->sunset() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->sunset(), target);
  }

  // double wind_speed = 5;
  if (this->wind_speed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->wind_speed(), target);
  }

  // double wind_direction = 6;
  if (this->wind_direction() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->wind_direction(), target);
  }

  // .gz.msgs.Color cloud_ambient = 7;
  if (this->has_cloud_ambient()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_cloud_ambient(), deterministic, target);
  }

  // double humidity = 8;
  if (this->humidity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->humidity(), target);
  }

  // double mean_cloud_size = 9;
  if (this->mean_cloud_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->mean_cloud_size(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Sky)
  return target;
}

size_t Sky::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Sky)
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

  // .gz.msgs.Color cloud_ambient = 7;
  if (this->has_cloud_ambient()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *cloud_ambient_);
  }

  // double time = 2;
  if (this->time() != 0) {
    total_size += 1 + 8;
  }

  // double sunrise = 3;
  if (this->sunrise() != 0) {
    total_size += 1 + 8;
  }

  // double sunset = 4;
  if (this->sunset() != 0) {
    total_size += 1 + 8;
  }

  // double wind_speed = 5;
  if (this->wind_speed() != 0) {
    total_size += 1 + 8;
  }

  // double wind_direction = 6;
  if (this->wind_direction() != 0) {
    total_size += 1 + 8;
  }

  // double humidity = 8;
  if (this->humidity() != 0) {
    total_size += 1 + 8;
  }

  // double mean_cloud_size = 9;
  if (this->mean_cloud_size() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sky::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Sky)
  GOOGLE_DCHECK_NE(&from, this);
  const Sky* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Sky>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Sky)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Sky)
    MergeFrom(*source);
  }
}

void Sky::MergeFrom(const Sky& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Sky)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_cloud_ambient()) {
    mutable_cloud_ambient()->::gz::msgs::Color::MergeFrom(from.cloud_ambient());
  }
  if (from.time() != 0) {
    set_time(from.time());
  }
  if (from.sunrise() != 0) {
    set_sunrise(from.sunrise());
  }
  if (from.sunset() != 0) {
    set_sunset(from.sunset());
  }
  if (from.wind_speed() != 0) {
    set_wind_speed(from.wind_speed());
  }
  if (from.wind_direction() != 0) {
    set_wind_direction(from.wind_direction());
  }
  if (from.humidity() != 0) {
    set_humidity(from.humidity());
  }
  if (from.mean_cloud_size() != 0) {
    set_mean_cloud_size(from.mean_cloud_size());
  }
}

void Sky::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Sky)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sky::CopyFrom(const Sky& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Sky)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sky::IsInitialized() const {
  return true;
}

void Sky::Swap(Sky* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sky::InternalSwap(Sky* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(cloud_ambient_, other->cloud_ambient_);
  swap(time_, other->time_);
  swap(sunrise_, other->sunrise_);
  swap(sunset_, other->sunset_);
  swap(wind_speed_, other->wind_speed_);
  swap(wind_direction_, other->wind_direction_);
  swap(humidity_, other->humidity_);
  swap(mean_cloud_size_, other->mean_cloud_size_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Sky::GetMetadata() const {
  protobuf_gz_2fmsgs_2fsky_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fsky_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Sky* Arena::CreateMaybeMessage< ::gz::msgs::Sky >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Sky >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
