// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/gps.proto

#include "gz/msgs/gps.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.GPS", GPS)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class GPSDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GPS>
      _instance;
} _GPS_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fgps_2eproto {
static void InitDefaultsGPS() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_GPS_default_instance_;
    new (ptr) ::gz::msgs::GPS();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::GPS::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_GPS =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsGPS}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GPS.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, link_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, latitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, longitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, altitude_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, velocity_east_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, velocity_north_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::GPS, velocity_up_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::GPS)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_GPS_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/gps.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021gz/msgs/gps.proto\022\007gz.msgs\032\024gz/msgs/he"
      "ader.proto\"\274\001\n\003GPS\022\037\n\006header\030\001 \001(\0132\017.gz."
      "msgs.Header\022\021\n\tlink_name\030\002 \001(\t\022\024\n\014latitu"
      "de_deg\030\003 \001(\001\022\025\n\rlongitude_deg\030\004 \001(\001\022\020\n\010a"
      "ltitude\030\005 \001(\001\022\025\n\rvelocity_east\030\006 \001(\001\022\026\n\016"
      "velocity_north\030\007 \001(\001\022\023\n\013velocity_up\030\010 \001("
      "\001B\030\n\013com.gz.msgsB\tGPSProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 275);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/gps.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fgps_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void GPS::InitAsDefaultInstance() {
  ::gz::msgs::_GPS_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void GPS::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GPS::kHeaderFieldNumber;
const int GPS::kLinkNameFieldNumber;
const int GPS::kLatitudeDegFieldNumber;
const int GPS::kLongitudeDegFieldNumber;
const int GPS::kAltitudeFieldNumber;
const int GPS::kVelocityEastFieldNumber;
const int GPS::kVelocityNorthFieldNumber;
const int GPS::kVelocityUpFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GPS::GPS()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fgps_2eproto::scc_info_GPS.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.GPS)
}
GPS::GPS(const GPS& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  link_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.link_name().size() > 0) {
    link_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.link_name_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&latitude_deg_, &from.latitude_deg_,
    static_cast<size_t>(reinterpret_cast<char*>(&velocity_up_) -
    reinterpret_cast<char*>(&latitude_deg_)) + sizeof(velocity_up_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.GPS)
}

void GPS::SharedCtor() {
  link_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_up_) -
      reinterpret_cast<char*>(&header_)) + sizeof(velocity_up_));
}

GPS::~GPS() {
  // @@protoc_insertion_point(destructor:gz.msgs.GPS)
  SharedDtor();
}

void GPS::SharedDtor() {
  link_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void GPS::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GPS::descriptor() {
  ::protobuf_gz_2fmsgs_2fgps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fgps_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GPS& GPS::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fgps_2eproto::scc_info_GPS.base);
  return *internal_default_instance();
}


void GPS::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  link_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&latitude_deg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_up_) -
      reinterpret_cast<char*>(&latitude_deg_)) + sizeof(velocity_up_));
  _internal_metadata_.Clear();
}

bool GPS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.GPS)
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

      // string link_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->link_name().data(), static_cast<int>(this->link_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.GPS.link_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double latitude_deg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double longitude_deg = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double altitude = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_east = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_east_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_north = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_north_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_up = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_up_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.GPS)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.GPS)
  return false;
#undef DO_
}

void GPS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string link_name = 2;
  if (this->link_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->link_name().data(), static_cast<int>(this->link_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.GPS.link_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->link_name(), output);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->latitude_deg(), output);
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->longitude_deg(), output);
  }

  // double altitude = 5;
  if (this->altitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->altitude(), output);
  }

  // double velocity_east = 6;
  if (this->velocity_east() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->velocity_east(), output);
  }

  // double velocity_north = 7;
  if (this->velocity_north() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->velocity_north(), output);
  }

  // double velocity_up = 8;
  if (this->velocity_up() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->velocity_up(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.GPS)
}

::google::protobuf::uint8* GPS::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string link_name = 2;
  if (this->link_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->link_name().data(), static_cast<int>(this->link_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.GPS.link_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->link_name(), target);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->latitude_deg(), target);
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->longitude_deg(), target);
  }

  // double altitude = 5;
  if (this->altitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->altitude(), target);
  }

  // double velocity_east = 6;
  if (this->velocity_east() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->velocity_east(), target);
  }

  // double velocity_north = 7;
  if (this->velocity_north() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->velocity_north(), target);
  }

  // double velocity_up = 8;
  if (this->velocity_up() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->velocity_up(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.GPS)
  return target;
}

size_t GPS::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.GPS)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string link_name = 2;
  if (this->link_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->link_name());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double altitude = 5;
  if (this->altitude() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_east = 6;
  if (this->velocity_east() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_north = 7;
  if (this->velocity_north() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_up = 8;
  if (this->velocity_up() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GPS::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.GPS)
  GOOGLE_DCHECK_NE(&from, this);
  const GPS* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GPS>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.GPS)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.GPS)
    MergeFrom(*source);
  }
}

void GPS::MergeFrom(const GPS& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.GPS)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.link_name().size() > 0) {

    link_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.link_name_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.latitude_deg() != 0) {
    set_latitude_deg(from.latitude_deg());
  }
  if (from.longitude_deg() != 0) {
    set_longitude_deg(from.longitude_deg());
  }
  if (from.altitude() != 0) {
    set_altitude(from.altitude());
  }
  if (from.velocity_east() != 0) {
    set_velocity_east(from.velocity_east());
  }
  if (from.velocity_north() != 0) {
    set_velocity_north(from.velocity_north());
  }
  if (from.velocity_up() != 0) {
    set_velocity_up(from.velocity_up());
  }
}

void GPS::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.GPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GPS::CopyFrom(const GPS& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.GPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GPS::IsInitialized() const {
  return true;
}

void GPS::Swap(GPS* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GPS::InternalSwap(GPS* other) {
  using std::swap;
  link_name_.Swap(&other->link_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(latitude_deg_, other->latitude_deg_);
  swap(longitude_deg_, other->longitude_deg_);
  swap(altitude_, other->altitude_);
  swap(velocity_east_, other->velocity_east_);
  swap(velocity_north_, other->velocity_north_);
  swap(velocity_up_, other->velocity_up_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GPS::GetMetadata() const {
  protobuf_gz_2fmsgs_2fgps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fgps_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::GPS* Arena::CreateMaybeMessage< ::gz::msgs::GPS >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::GPS >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
