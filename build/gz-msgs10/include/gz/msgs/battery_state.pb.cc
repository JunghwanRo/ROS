// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/battery_state.proto

#include "gz/msgs/battery_state.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.BatteryState", BatteryState)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class BatteryStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BatteryState>
      _instance;
} _BatteryState_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto {
static void InitDefaultsBatteryState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_BatteryState_default_instance_;
    new (ptr) ::gz::msgs::BatteryState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::BatteryState::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_BatteryState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsBatteryState}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_BatteryState.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, voltage_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, current_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, charge_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, capacity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, percentage_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::BatteryState, power_supply_status_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::BatteryState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_BatteryState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/battery_state.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\033gz/msgs/battery_state.proto\022\007gz.msgs\032\024"
      "gz/msgs/header.proto\"\252\002\n\014BatteryState\022\037\n"
      "\006header\030\001 \001(\0132\017.gz.msgs.Header\022\017\n\007voltag"
      "e\030\002 \001(\001\022\017\n\007current\030\003 \001(\001\022\016\n\006charge\030\004 \001(\001"
      "\022\020\n\010capacity\030\005 \001(\001\022\022\n\npercentage\030\006 \001(\001\022D"
      "\n\023power_supply_status\030\007 \001(\0162\'.gz.msgs.Ba"
      "tteryState.PowerSupplyStatus\"[\n\021PowerSup"
      "plyStatus\022\013\n\007UNKNOWN\020\000\022\014\n\010CHARGING\020\001\022\017\n\013"
      "DISCHARGING\020\002\022\020\n\014NOT_CHARGING\020\003\022\010\n\004FULL\020"
      "\004B!\n\013com.gz.msgsB\022BatteryStateProtosb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 404);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/battery_state.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* BatteryState_PowerSupplyStatus_descriptor() {
  protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::file_level_enum_descriptors[0];
}
bool BatteryState_PowerSupplyStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const BatteryState_PowerSupplyStatus BatteryState::UNKNOWN;
const BatteryState_PowerSupplyStatus BatteryState::CHARGING;
const BatteryState_PowerSupplyStatus BatteryState::DISCHARGING;
const BatteryState_PowerSupplyStatus BatteryState::NOT_CHARGING;
const BatteryState_PowerSupplyStatus BatteryState::FULL;
const BatteryState_PowerSupplyStatus BatteryState::PowerSupplyStatus_MIN;
const BatteryState_PowerSupplyStatus BatteryState::PowerSupplyStatus_MAX;
const int BatteryState::PowerSupplyStatus_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void BatteryState::InitAsDefaultInstance() {
  ::gz::msgs::_BatteryState_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void BatteryState::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BatteryState::kHeaderFieldNumber;
const int BatteryState::kVoltageFieldNumber;
const int BatteryState::kCurrentFieldNumber;
const int BatteryState::kChargeFieldNumber;
const int BatteryState::kCapacityFieldNumber;
const int BatteryState::kPercentageFieldNumber;
const int BatteryState::kPowerSupplyStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BatteryState::BatteryState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::scc_info_BatteryState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.BatteryState)
}
BatteryState::BatteryState(const BatteryState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&voltage_, &from.voltage_,
    static_cast<size_t>(reinterpret_cast<char*>(&power_supply_status_) -
    reinterpret_cast<char*>(&voltage_)) + sizeof(power_supply_status_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.BatteryState)
}

void BatteryState::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&power_supply_status_) -
      reinterpret_cast<char*>(&header_)) + sizeof(power_supply_status_));
}

BatteryState::~BatteryState() {
  // @@protoc_insertion_point(destructor:gz.msgs.BatteryState)
  SharedDtor();
}

void BatteryState::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void BatteryState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* BatteryState::descriptor() {
  ::protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BatteryState& BatteryState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::scc_info_BatteryState.base);
  return *internal_default_instance();
}


void BatteryState::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&voltage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&power_supply_status_) -
      reinterpret_cast<char*>(&voltage_)) + sizeof(power_supply_status_));
  _internal_metadata_.Clear();
}

bool BatteryState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.BatteryState)
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

      // double voltage = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &voltage_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double current = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &current_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double charge = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &charge_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double capacity = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &capacity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double percentage = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &percentage_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.BatteryState.PowerSupplyStatus power_supply_status = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_power_supply_status(static_cast< ::gz::msgs::BatteryState_PowerSupplyStatus >(value));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.BatteryState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.BatteryState)
  return false;
#undef DO_
}

void BatteryState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // double voltage = 2;
  if (this->voltage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->voltage(), output);
  }

  // double current = 3;
  if (this->current() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->current(), output);
  }

  // double charge = 4;
  if (this->charge() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->charge(), output);
  }

  // double capacity = 5;
  if (this->capacity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->capacity(), output);
  }

  // double percentage = 6;
  if (this->percentage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->percentage(), output);
  }

  // .gz.msgs.BatteryState.PowerSupplyStatus power_supply_status = 7;
  if (this->power_supply_status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->power_supply_status(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.BatteryState)
}

::google::protobuf::uint8* BatteryState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // double voltage = 2;
  if (this->voltage() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->voltage(), target);
  }

  // double current = 3;
  if (this->current() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->current(), target);
  }

  // double charge = 4;
  if (this->charge() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->charge(), target);
  }

  // double capacity = 5;
  if (this->capacity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->capacity(), target);
  }

  // double percentage = 6;
  if (this->percentage() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->percentage(), target);
  }

  // .gz.msgs.BatteryState.PowerSupplyStatus power_supply_status = 7;
  if (this->power_supply_status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->power_supply_status(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.BatteryState)
  return target;
}

size_t BatteryState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.BatteryState)
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

  // double voltage = 2;
  if (this->voltage() != 0) {
    total_size += 1 + 8;
  }

  // double current = 3;
  if (this->current() != 0) {
    total_size += 1 + 8;
  }

  // double charge = 4;
  if (this->charge() != 0) {
    total_size += 1 + 8;
  }

  // double capacity = 5;
  if (this->capacity() != 0) {
    total_size += 1 + 8;
  }

  // double percentage = 6;
  if (this->percentage() != 0) {
    total_size += 1 + 8;
  }

  // .gz.msgs.BatteryState.PowerSupplyStatus power_supply_status = 7;
  if (this->power_supply_status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->power_supply_status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BatteryState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.BatteryState)
  GOOGLE_DCHECK_NE(&from, this);
  const BatteryState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BatteryState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.BatteryState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.BatteryState)
    MergeFrom(*source);
  }
}

void BatteryState::MergeFrom(const BatteryState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.BatteryState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.voltage() != 0) {
    set_voltage(from.voltage());
  }
  if (from.current() != 0) {
    set_current(from.current());
  }
  if (from.charge() != 0) {
    set_charge(from.charge());
  }
  if (from.capacity() != 0) {
    set_capacity(from.capacity());
  }
  if (from.percentage() != 0) {
    set_percentage(from.percentage());
  }
  if (from.power_supply_status() != 0) {
    set_power_supply_status(from.power_supply_status());
  }
}

void BatteryState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.BatteryState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BatteryState::CopyFrom(const BatteryState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.BatteryState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BatteryState::IsInitialized() const {
  return true;
}

void BatteryState::Swap(BatteryState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BatteryState::InternalSwap(BatteryState* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(voltage_, other->voltage_);
  swap(current_, other->current_);
  swap(charge_, other->charge_);
  swap(capacity_, other->capacity_);
  swap(percentage_, other->percentage_);
  swap(power_supply_status_, other->power_supply_status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata BatteryState::GetMetadata() const {
  protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fbattery_5fstate_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::BatteryState* Arena::CreateMaybeMessage< ::gz::msgs::BatteryState >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::BatteryState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)