// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/raysensor.proto

#include "gz/msgs/raysensor.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.RaySensor", RaySensor)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class RaySensorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RaySensor>
      _instance;
} _RaySensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fraysensor_2eproto {
static void InitDefaultsRaySensor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_RaySensor_default_instance_;
    new (ptr) ::gz::msgs::RaySensor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::RaySensor::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_RaySensor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsRaySensor}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RaySensor.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, display_scan_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, horizontal_samples_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, horizontal_resolution_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, horizontal_min_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, horizontal_max_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, vertical_samples_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, vertical_resolution_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, vertical_min_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, vertical_max_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, range_min_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, range_max_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RaySensor, range_resolution_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::RaySensor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_RaySensor_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/raysensor.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027gz/msgs/raysensor.proto\022\007gz.msgs\032\024gz/m"
      "sgs/header.proto\"\350\002\n\tRaySensor\022\037\n\006header"
      "\030\001 \001(\0132\017.gz.msgs.Header\022\024\n\014display_scan\030"
      "\002 \001(\010\022\032\n\022horizontal_samples\030\003 \001(\005\022\035\n\025hor"
      "izontal_resolution\030\004 \001(\001\022\034\n\024horizontal_m"
      "in_angle\030\005 \001(\001\022\034\n\024horizontal_max_angle\030\006"
      " \001(\001\022\030\n\020vertical_samples\030\007 \001(\005\022\033\n\023vertic"
      "al_resolution\030\010 \001(\001\022\032\n\022vertical_min_angl"
      "e\030\t \001(\001\022\032\n\022vertical_max_angle\030\n \001(\001\022\021\n\tr"
      "ange_min\030\013 \001(\001\022\021\n\trange_max\030\014 \001(\001\022\030\n\020ran"
      "ge_resolution\030\r \001(\001B\036\n\013com.gz.msgsB\017RayS"
      "ensorProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 459);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/raysensor.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fraysensor_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void RaySensor::InitAsDefaultInstance() {
  ::gz::msgs::_RaySensor_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void RaySensor::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RaySensor::kHeaderFieldNumber;
const int RaySensor::kDisplayScanFieldNumber;
const int RaySensor::kHorizontalSamplesFieldNumber;
const int RaySensor::kHorizontalResolutionFieldNumber;
const int RaySensor::kHorizontalMinAngleFieldNumber;
const int RaySensor::kHorizontalMaxAngleFieldNumber;
const int RaySensor::kVerticalSamplesFieldNumber;
const int RaySensor::kVerticalResolutionFieldNumber;
const int RaySensor::kVerticalMinAngleFieldNumber;
const int RaySensor::kVerticalMaxAngleFieldNumber;
const int RaySensor::kRangeMinFieldNumber;
const int RaySensor::kRangeMaxFieldNumber;
const int RaySensor::kRangeResolutionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RaySensor::RaySensor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fraysensor_2eproto::scc_info_RaySensor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.RaySensor)
}
RaySensor::RaySensor(const RaySensor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&display_scan_, &from.display_scan_,
    static_cast<size_t>(reinterpret_cast<char*>(&vertical_samples_) -
    reinterpret_cast<char*>(&display_scan_)) + sizeof(vertical_samples_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.RaySensor)
}

void RaySensor::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_samples_) -
      reinterpret_cast<char*>(&header_)) + sizeof(vertical_samples_));
}

RaySensor::~RaySensor() {
  // @@protoc_insertion_point(destructor:gz.msgs.RaySensor)
  SharedDtor();
}

void RaySensor::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void RaySensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RaySensor::descriptor() {
  ::protobuf_gz_2fmsgs_2fraysensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fraysensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RaySensor& RaySensor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fraysensor_2eproto::scc_info_RaySensor.base);
  return *internal_default_instance();
}


void RaySensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.RaySensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&display_scan_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_samples_) -
      reinterpret_cast<char*>(&display_scan_)) + sizeof(vertical_samples_));
  _internal_metadata_.Clear();
}

bool RaySensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.RaySensor)
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

      // bool display_scan = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &display_scan_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 horizontal_samples = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &horizontal_samples_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double horizontal_resolution = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_resolution_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double horizontal_min_angle = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_min_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double horizontal_max_angle = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_max_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 vertical_samples = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vertical_samples_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_resolution = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_resolution_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_min_angle = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_min_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_max_angle = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(81u /* 81 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_max_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double range_min = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(89u /* 89 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_min_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double range_max = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(97u /* 97 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_max_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double range_resolution = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(105u /* 105 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_resolution_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.RaySensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.RaySensor)
  return false;
#undef DO_
}

void RaySensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.RaySensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // bool display_scan = 2;
  if (this->display_scan() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->display_scan(), output);
  }

  // int32 horizontal_samples = 3;
  if (this->horizontal_samples() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->horizontal_samples(), output);
  }

  // double horizontal_resolution = 4;
  if (this->horizontal_resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->horizontal_resolution(), output);
  }

  // double horizontal_min_angle = 5;
  if (this->horizontal_min_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->horizontal_min_angle(), output);
  }

  // double horizontal_max_angle = 6;
  if (this->horizontal_max_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->horizontal_max_angle(), output);
  }

  // int32 vertical_samples = 7;
  if (this->vertical_samples() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->vertical_samples(), output);
  }

  // double vertical_resolution = 8;
  if (this->vertical_resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->vertical_resolution(), output);
  }

  // double vertical_min_angle = 9;
  if (this->vertical_min_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->vertical_min_angle(), output);
  }

  // double vertical_max_angle = 10;
  if (this->vertical_max_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->vertical_max_angle(), output);
  }

  // double range_min = 11;
  if (this->range_min() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->range_min(), output);
  }

  // double range_max = 12;
  if (this->range_max() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->range_max(), output);
  }

  // double range_resolution = 13;
  if (this->range_resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(13, this->range_resolution(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.RaySensor)
}

::google::protobuf::uint8* RaySensor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.RaySensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // bool display_scan = 2;
  if (this->display_scan() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->display_scan(), target);
  }

  // int32 horizontal_samples = 3;
  if (this->horizontal_samples() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->horizontal_samples(), target);
  }

  // double horizontal_resolution = 4;
  if (this->horizontal_resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->horizontal_resolution(), target);
  }

  // double horizontal_min_angle = 5;
  if (this->horizontal_min_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->horizontal_min_angle(), target);
  }

  // double horizontal_max_angle = 6;
  if (this->horizontal_max_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->horizontal_max_angle(), target);
  }

  // int32 vertical_samples = 7;
  if (this->vertical_samples() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->vertical_samples(), target);
  }

  // double vertical_resolution = 8;
  if (this->vertical_resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->vertical_resolution(), target);
  }

  // double vertical_min_angle = 9;
  if (this->vertical_min_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->vertical_min_angle(), target);
  }

  // double vertical_max_angle = 10;
  if (this->vertical_max_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->vertical_max_angle(), target);
  }

  // double range_min = 11;
  if (this->range_min() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->range_min(), target);
  }

  // double range_max = 12;
  if (this->range_max() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->range_max(), target);
  }

  // double range_resolution = 13;
  if (this->range_resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(13, this->range_resolution(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.RaySensor)
  return target;
}

size_t RaySensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.RaySensor)
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

  // bool display_scan = 2;
  if (this->display_scan() != 0) {
    total_size += 1 + 1;
  }

  // int32 horizontal_samples = 3;
  if (this->horizontal_samples() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->horizontal_samples());
  }

  // double horizontal_resolution = 4;
  if (this->horizontal_resolution() != 0) {
    total_size += 1 + 8;
  }

  // double horizontal_min_angle = 5;
  if (this->horizontal_min_angle() != 0) {
    total_size += 1 + 8;
  }

  // double horizontal_max_angle = 6;
  if (this->horizontal_max_angle() != 0) {
    total_size += 1 + 8;
  }

  // double vertical_resolution = 8;
  if (this->vertical_resolution() != 0) {
    total_size += 1 + 8;
  }

  // double vertical_min_angle = 9;
  if (this->vertical_min_angle() != 0) {
    total_size += 1 + 8;
  }

  // double vertical_max_angle = 10;
  if (this->vertical_max_angle() != 0) {
    total_size += 1 + 8;
  }

  // double range_min = 11;
  if (this->range_min() != 0) {
    total_size += 1 + 8;
  }

  // double range_max = 12;
  if (this->range_max() != 0) {
    total_size += 1 + 8;
  }

  // double range_resolution = 13;
  if (this->range_resolution() != 0) {
    total_size += 1 + 8;
  }

  // int32 vertical_samples = 7;
  if (this->vertical_samples() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->vertical_samples());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RaySensor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.RaySensor)
  GOOGLE_DCHECK_NE(&from, this);
  const RaySensor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RaySensor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.RaySensor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.RaySensor)
    MergeFrom(*source);
  }
}

void RaySensor::MergeFrom(const RaySensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.RaySensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.display_scan() != 0) {
    set_display_scan(from.display_scan());
  }
  if (from.horizontal_samples() != 0) {
    set_horizontal_samples(from.horizontal_samples());
  }
  if (from.horizontal_resolution() != 0) {
    set_horizontal_resolution(from.horizontal_resolution());
  }
  if (from.horizontal_min_angle() != 0) {
    set_horizontal_min_angle(from.horizontal_min_angle());
  }
  if (from.horizontal_max_angle() != 0) {
    set_horizontal_max_angle(from.horizontal_max_angle());
  }
  if (from.vertical_resolution() != 0) {
    set_vertical_resolution(from.vertical_resolution());
  }
  if (from.vertical_min_angle() != 0) {
    set_vertical_min_angle(from.vertical_min_angle());
  }
  if (from.vertical_max_angle() != 0) {
    set_vertical_max_angle(from.vertical_max_angle());
  }
  if (from.range_min() != 0) {
    set_range_min(from.range_min());
  }
  if (from.range_max() != 0) {
    set_range_max(from.range_max());
  }
  if (from.range_resolution() != 0) {
    set_range_resolution(from.range_resolution());
  }
  if (from.vertical_samples() != 0) {
    set_vertical_samples(from.vertical_samples());
  }
}

void RaySensor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.RaySensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RaySensor::CopyFrom(const RaySensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.RaySensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RaySensor::IsInitialized() const {
  return true;
}

void RaySensor::Swap(RaySensor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RaySensor::InternalSwap(RaySensor* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(display_scan_, other->display_scan_);
  swap(horizontal_samples_, other->horizontal_samples_);
  swap(horizontal_resolution_, other->horizontal_resolution_);
  swap(horizontal_min_angle_, other->horizontal_min_angle_);
  swap(horizontal_max_angle_, other->horizontal_max_angle_);
  swap(vertical_resolution_, other->vertical_resolution_);
  swap(vertical_min_angle_, other->vertical_min_angle_);
  swap(vertical_max_angle_, other->vertical_max_angle_);
  swap(range_min_, other->range_min_);
  swap(range_max_, other->range_max_);
  swap(range_resolution_, other->range_resolution_);
  swap(vertical_samples_, other->vertical_samples_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RaySensor::GetMetadata() const {
  protobuf_gz_2fmsgs_2fraysensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fraysensor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::RaySensor* Arena::CreateMaybeMessage< ::gz::msgs::RaySensor >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::RaySensor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
