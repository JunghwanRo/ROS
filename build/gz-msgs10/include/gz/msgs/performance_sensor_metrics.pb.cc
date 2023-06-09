// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/performance_sensor_metrics.proto

#include "gz/msgs/performance_sensor_metrics.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.PerformanceSensorMetrics", PerformanceSensorMetrics)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fdouble_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdouble_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Double;
}  // namespace protobuf_gz_2fmsgs_2fdouble_2eproto
namespace gz {
namespace msgs {
class PerformanceSensorMetricsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PerformanceSensorMetrics>
      _instance;
} _PerformanceSensorMetrics_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto {
static void InitDefaultsPerformanceSensorMetrics() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_PerformanceSensorMetrics_default_instance_;
    new (ptr) ::gz::msgs::PerformanceSensorMetrics();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::PerformanceSensorMetrics::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_PerformanceSensorMetrics =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPerformanceSensorMetrics}, {
      &protobuf_gz_2fmsgs_2fdouble_2eproto::scc_info_Double.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PerformanceSensorMetrics.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, real_update_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, sim_update_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, nominal_update_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::PerformanceSensorMetrics, fps_optional_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::PerformanceSensorMetrics)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_PerformanceSensorMetrics_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/performance_sensor_metrics.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(gz/msgs/performance_sensor_metrics.pro"
      "to\022\007gz.msgs\032\024gz/msgs/double.proto\"\237\001\n\030Pe"
      "rformanceSensorMetrics\022\014\n\004name\030\001 \001(\t\022\030\n\020"
      "real_update_rate\030\002 \001(\001\022\027\n\017sim_update_rat"
      "e\030\003 \001(\001\022\033\n\023nominal_update_rate\030\004 \001(\001\022%\n\014"
      "fps_optional\030\005 \001(\0132\017.gz.msgs.Doubleb\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/performance_sensor_metrics.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fdouble_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void PerformanceSensorMetrics::InitAsDefaultInstance() {
  ::gz::msgs::_PerformanceSensorMetrics_default_instance_._instance.get_mutable()->fps_optional_ = const_cast< ::gz::msgs::Double*>(
      ::gz::msgs::Double::internal_default_instance());
}
void PerformanceSensorMetrics::clear_fps_optional() {
  if (GetArenaNoVirtual() == NULL && fps_optional_ != NULL) {
    delete fps_optional_;
  }
  fps_optional_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PerformanceSensorMetrics::kNameFieldNumber;
const int PerformanceSensorMetrics::kRealUpdateRateFieldNumber;
const int PerformanceSensorMetrics::kSimUpdateRateFieldNumber;
const int PerformanceSensorMetrics::kNominalUpdateRateFieldNumber;
const int PerformanceSensorMetrics::kFpsOptionalFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PerformanceSensorMetrics::PerformanceSensorMetrics()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::scc_info_PerformanceSensorMetrics.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.PerformanceSensorMetrics)
}
PerformanceSensorMetrics::PerformanceSensorMetrics(const PerformanceSensorMetrics& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_fps_optional()) {
    fps_optional_ = new ::gz::msgs::Double(*from.fps_optional_);
  } else {
    fps_optional_ = NULL;
  }
  ::memcpy(&real_update_rate_, &from.real_update_rate_,
    static_cast<size_t>(reinterpret_cast<char*>(&nominal_update_rate_) -
    reinterpret_cast<char*>(&real_update_rate_)) + sizeof(nominal_update_rate_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.PerformanceSensorMetrics)
}

void PerformanceSensorMetrics::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&fps_optional_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nominal_update_rate_) -
      reinterpret_cast<char*>(&fps_optional_)) + sizeof(nominal_update_rate_));
}

PerformanceSensorMetrics::~PerformanceSensorMetrics() {
  // @@protoc_insertion_point(destructor:gz.msgs.PerformanceSensorMetrics)
  SharedDtor();
}

void PerformanceSensorMetrics::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete fps_optional_;
}

void PerformanceSensorMetrics::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PerformanceSensorMetrics::descriptor() {
  ::protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PerformanceSensorMetrics& PerformanceSensorMetrics::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::scc_info_PerformanceSensorMetrics.base);
  return *internal_default_instance();
}


void PerformanceSensorMetrics::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.PerformanceSensorMetrics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && fps_optional_ != NULL) {
    delete fps_optional_;
  }
  fps_optional_ = NULL;
  ::memset(&real_update_rate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nominal_update_rate_) -
      reinterpret_cast<char*>(&real_update_rate_)) + sizeof(nominal_update_rate_));
  _internal_metadata_.Clear();
}

bool PerformanceSensorMetrics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.PerformanceSensorMetrics)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.PerformanceSensorMetrics.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double real_update_rate = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &real_update_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double sim_update_rate = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sim_update_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double nominal_update_rate = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &nominal_update_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Double fps_optional = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_fps_optional()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.PerformanceSensorMetrics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.PerformanceSensorMetrics)
  return false;
#undef DO_
}

void PerformanceSensorMetrics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.PerformanceSensorMetrics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.PerformanceSensorMetrics.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // double real_update_rate = 2;
  if (this->real_update_rate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->real_update_rate(), output);
  }

  // double sim_update_rate = 3;
  if (this->sim_update_rate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->sim_update_rate(), output);
  }

  // double nominal_update_rate = 4;
  if (this->nominal_update_rate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->nominal_update_rate(), output);
  }

  // .gz.msgs.Double fps_optional = 5;
  if (this->has_fps_optional()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_fps_optional(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.PerformanceSensorMetrics)
}

::google::protobuf::uint8* PerformanceSensorMetrics::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.PerformanceSensorMetrics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.PerformanceSensorMetrics.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // double real_update_rate = 2;
  if (this->real_update_rate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->real_update_rate(), target);
  }

  // double sim_update_rate = 3;
  if (this->sim_update_rate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->sim_update_rate(), target);
  }

  // double nominal_update_rate = 4;
  if (this->nominal_update_rate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->nominal_update_rate(), target);
  }

  // .gz.msgs.Double fps_optional = 5;
  if (this->has_fps_optional()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_fps_optional(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.PerformanceSensorMetrics)
  return target;
}

size_t PerformanceSensorMetrics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.PerformanceSensorMetrics)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .gz.msgs.Double fps_optional = 5;
  if (this->has_fps_optional()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *fps_optional_);
  }

  // double real_update_rate = 2;
  if (this->real_update_rate() != 0) {
    total_size += 1 + 8;
  }

  // double sim_update_rate = 3;
  if (this->sim_update_rate() != 0) {
    total_size += 1 + 8;
  }

  // double nominal_update_rate = 4;
  if (this->nominal_update_rate() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PerformanceSensorMetrics::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.PerformanceSensorMetrics)
  GOOGLE_DCHECK_NE(&from, this);
  const PerformanceSensorMetrics* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PerformanceSensorMetrics>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.PerformanceSensorMetrics)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.PerformanceSensorMetrics)
    MergeFrom(*source);
  }
}

void PerformanceSensorMetrics::MergeFrom(const PerformanceSensorMetrics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.PerformanceSensorMetrics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_fps_optional()) {
    mutable_fps_optional()->::gz::msgs::Double::MergeFrom(from.fps_optional());
  }
  if (from.real_update_rate() != 0) {
    set_real_update_rate(from.real_update_rate());
  }
  if (from.sim_update_rate() != 0) {
    set_sim_update_rate(from.sim_update_rate());
  }
  if (from.nominal_update_rate() != 0) {
    set_nominal_update_rate(from.nominal_update_rate());
  }
}

void PerformanceSensorMetrics::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.PerformanceSensorMetrics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PerformanceSensorMetrics::CopyFrom(const PerformanceSensorMetrics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.PerformanceSensorMetrics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerformanceSensorMetrics::IsInitialized() const {
  return true;
}

void PerformanceSensorMetrics::Swap(PerformanceSensorMetrics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PerformanceSensorMetrics::InternalSwap(PerformanceSensorMetrics* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(fps_optional_, other->fps_optional_);
  swap(real_update_rate_, other->real_update_rate_);
  swap(sim_update_rate_, other->sim_update_rate_);
  swap(nominal_update_rate_, other->nominal_update_rate_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PerformanceSensorMetrics::GetMetadata() const {
  protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fperformance_5fsensor_5fmetrics_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::PerformanceSensorMetrics* Arena::CreateMaybeMessage< ::gz::msgs::PerformanceSensorMetrics >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::PerformanceSensorMetrics >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
