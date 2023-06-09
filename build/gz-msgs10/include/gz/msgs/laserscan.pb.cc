// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/laserscan.proto

#include "gz/msgs/laserscan.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.LaserScan", LaserScan)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace gz {
namespace msgs {
class LaserScanDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LaserScan>
      _instance;
} _LaserScan_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2flaserscan_2eproto {
static void InitDefaultsLaserScan() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_LaserScan_default_instance_;
    new (ptr) ::gz::msgs::LaserScan();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::LaserScan::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_LaserScan =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsLaserScan}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LaserScan.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, frame_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, world_pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, angle_min_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, angle_max_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, angle_step_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, range_min_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, range_max_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, vertical_angle_min_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, vertical_angle_max_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, vertical_angle_step_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, vertical_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, ranges_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LaserScan, intensities_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::LaserScan)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_LaserScan_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/laserscan.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027gz/msgs/laserscan.proto\022\007gz.msgs\032\022gz/m"
      "sgs/pose.proto\032\024gz/msgs/header.proto\"\337\002\n"
      "\tLaserScan\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Hea"
      "der\022\r\n\005frame\030\002 \001(\t\022!\n\nworld_pose\030\003 \001(\0132\r"
      ".gz.msgs.Pose\022\021\n\tangle_min\030\004 \001(\001\022\021\n\tangl"
      "e_max\030\005 \001(\001\022\022\n\nangle_step\030\006 \001(\001\022\021\n\trange"
      "_min\030\007 \001(\001\022\021\n\trange_max\030\010 \001(\001\022\r\n\005count\030\t"
      " \001(\r\022\032\n\022vertical_angle_min\030\n \001(\001\022\032\n\022vert"
      "ical_angle_max\030\013 \001(\001\022\033\n\023vertical_angle_s"
      "tep\030\014 \001(\001\022\026\n\016vertical_count\030\r \001(\r\022\016\n\006ran"
      "ges\030\016 \003(\001\022\023\n\013intensities\030\017 \003(\001B\036\n\013com.gz"
      ".msgsB\017LaserScanProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 470);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/laserscan.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2flaserscan_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void LaserScan::InitAsDefaultInstance() {
  ::gz::msgs::_LaserScan_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_LaserScan_default_instance_._instance.get_mutable()->world_pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
}
void LaserScan::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void LaserScan::clear_world_pose() {
  if (GetArenaNoVirtual() == NULL && world_pose_ != NULL) {
    delete world_pose_;
  }
  world_pose_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LaserScan::kHeaderFieldNumber;
const int LaserScan::kFrameFieldNumber;
const int LaserScan::kWorldPoseFieldNumber;
const int LaserScan::kAngleMinFieldNumber;
const int LaserScan::kAngleMaxFieldNumber;
const int LaserScan::kAngleStepFieldNumber;
const int LaserScan::kRangeMinFieldNumber;
const int LaserScan::kRangeMaxFieldNumber;
const int LaserScan::kCountFieldNumber;
const int LaserScan::kVerticalAngleMinFieldNumber;
const int LaserScan::kVerticalAngleMaxFieldNumber;
const int LaserScan::kVerticalAngleStepFieldNumber;
const int LaserScan::kVerticalCountFieldNumber;
const int LaserScan::kRangesFieldNumber;
const int LaserScan::kIntensitiesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LaserScan::LaserScan()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2flaserscan_2eproto::scc_info_LaserScan.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.LaserScan)
}
LaserScan::LaserScan(const LaserScan& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      ranges_(from.ranges_),
      intensities_(from.intensities_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  frame_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.frame().size() > 0) {
    frame_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_world_pose()) {
    world_pose_ = new ::gz::msgs::Pose(*from.world_pose_);
  } else {
    world_pose_ = NULL;
  }
  ::memcpy(&angle_min_, &from.angle_min_,
    static_cast<size_t>(reinterpret_cast<char*>(&vertical_angle_step_) -
    reinterpret_cast<char*>(&angle_min_)) + sizeof(vertical_angle_step_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.LaserScan)
}

void LaserScan::SharedCtor() {
  frame_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_angle_step_) -
      reinterpret_cast<char*>(&header_)) + sizeof(vertical_angle_step_));
}

LaserScan::~LaserScan() {
  // @@protoc_insertion_point(destructor:gz.msgs.LaserScan)
  SharedDtor();
}

void LaserScan::SharedDtor() {
  frame_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete world_pose_;
}

void LaserScan::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LaserScan::descriptor() {
  ::protobuf_gz_2fmsgs_2flaserscan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flaserscan_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LaserScan& LaserScan::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2flaserscan_2eproto::scc_info_LaserScan.base);
  return *internal_default_instance();
}


void LaserScan::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.LaserScan)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ranges_.Clear();
  intensities_.Clear();
  frame_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && world_pose_ != NULL) {
    delete world_pose_;
  }
  world_pose_ = NULL;
  ::memset(&angle_min_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_angle_step_) -
      reinterpret_cast<char*>(&angle_min_)) + sizeof(vertical_angle_step_));
  _internal_metadata_.Clear();
}

bool LaserScan::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.LaserScan)
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

      // string frame = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->frame().data(), static_cast<int>(this->frame().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.LaserScan.frame"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose world_pose = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_world_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double angle_min = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angle_min_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double angle_max = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angle_max_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double angle_step = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angle_step_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double range_min = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_min_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double range_max = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_max_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 count = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_angle_min = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(81u /* 81 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_angle_min_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_angle_max = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(89u /* 89 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_angle_max_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vertical_angle_step = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(97u /* 97 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_angle_step_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 vertical_count = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &vertical_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double ranges = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_ranges())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(113u /* 113 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 114u, input, this->mutable_ranges())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double intensities = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_intensities())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(121u /* 121 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 122u, input, this->mutable_intensities())));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.LaserScan)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.LaserScan)
  return false;
#undef DO_
}

void LaserScan::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.LaserScan)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string frame = 2;
  if (this->frame().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame().data(), static_cast<int>(this->frame().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LaserScan.frame");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->frame(), output);
  }

  // .gz.msgs.Pose world_pose = 3;
  if (this->has_world_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_world_pose(), output);
  }

  // double angle_min = 4;
  if (this->angle_min() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->angle_min(), output);
  }

  // double angle_max = 5;
  if (this->angle_max() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->angle_max(), output);
  }

  // double angle_step = 6;
  if (this->angle_step() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->angle_step(), output);
  }

  // double range_min = 7;
  if (this->range_min() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->range_min(), output);
  }

  // double range_max = 8;
  if (this->range_max() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->range_max(), output);
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->count(), output);
  }

  // double vertical_angle_min = 10;
  if (this->vertical_angle_min() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->vertical_angle_min(), output);
  }

  // double vertical_angle_max = 11;
  if (this->vertical_angle_max() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->vertical_angle_max(), output);
  }

  // double vertical_angle_step = 12;
  if (this->vertical_angle_step() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->vertical_angle_step(), output);
  }

  // uint32 vertical_count = 13;
  if (this->vertical_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->vertical_count(), output);
  }

  // repeated double ranges = 14;
  if (this->ranges_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(14, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _ranges_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->ranges().data(), this->ranges_size(), output);
  }

  // repeated double intensities = 15;
  if (this->intensities_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _intensities_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->intensities().data(), this->intensities_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.LaserScan)
}

::google::protobuf::uint8* LaserScan::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.LaserScan)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string frame = 2;
  if (this->frame().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame().data(), static_cast<int>(this->frame().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LaserScan.frame");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->frame(), target);
  }

  // .gz.msgs.Pose world_pose = 3;
  if (this->has_world_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_world_pose(), deterministic, target);
  }

  // double angle_min = 4;
  if (this->angle_min() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->angle_min(), target);
  }

  // double angle_max = 5;
  if (this->angle_max() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->angle_max(), target);
  }

  // double angle_step = 6;
  if (this->angle_step() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->angle_step(), target);
  }

  // double range_min = 7;
  if (this->range_min() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->range_min(), target);
  }

  // double range_max = 8;
  if (this->range_max() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->range_max(), target);
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->count(), target);
  }

  // double vertical_angle_min = 10;
  if (this->vertical_angle_min() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->vertical_angle_min(), target);
  }

  // double vertical_angle_max = 11;
  if (this->vertical_angle_max() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->vertical_angle_max(), target);
  }

  // double vertical_angle_step = 12;
  if (this->vertical_angle_step() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->vertical_angle_step(), target);
  }

  // uint32 vertical_count = 13;
  if (this->vertical_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->vertical_count(), target);
  }

  // repeated double ranges = 14;
  if (this->ranges_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      14,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _ranges_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->ranges_, target);
  }

  // repeated double intensities = 15;
  if (this->intensities_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _intensities_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->intensities_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.LaserScan)
  return target;
}

size_t LaserScan::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.LaserScan)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated double ranges = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->ranges_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _ranges_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated double intensities = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->intensities_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _intensities_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string frame = 2;
  if (this->frame().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->frame());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Pose world_pose = 3;
  if (this->has_world_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *world_pose_);
  }

  // double angle_min = 4;
  if (this->angle_min() != 0) {
    total_size += 1 + 8;
  }

  // double angle_max = 5;
  if (this->angle_max() != 0) {
    total_size += 1 + 8;
  }

  // double angle_step = 6;
  if (this->angle_step() != 0) {
    total_size += 1 + 8;
  }

  // double range_min = 7;
  if (this->range_min() != 0) {
    total_size += 1 + 8;
  }

  // double range_max = 8;
  if (this->range_max() != 0) {
    total_size += 1 + 8;
  }

  // double vertical_angle_min = 10;
  if (this->vertical_angle_min() != 0) {
    total_size += 1 + 8;
  }

  // double vertical_angle_max = 11;
  if (this->vertical_angle_max() != 0) {
    total_size += 1 + 8;
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->count());
  }

  // uint32 vertical_count = 13;
  if (this->vertical_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->vertical_count());
  }

  // double vertical_angle_step = 12;
  if (this->vertical_angle_step() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LaserScan::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.LaserScan)
  GOOGLE_DCHECK_NE(&from, this);
  const LaserScan* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LaserScan>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.LaserScan)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.LaserScan)
    MergeFrom(*source);
  }
}

void LaserScan::MergeFrom(const LaserScan& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.LaserScan)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ranges_.MergeFrom(from.ranges_);
  intensities_.MergeFrom(from.intensities_);
  if (from.frame().size() > 0) {

    frame_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_world_pose()) {
    mutable_world_pose()->::gz::msgs::Pose::MergeFrom(from.world_pose());
  }
  if (from.angle_min() != 0) {
    set_angle_min(from.angle_min());
  }
  if (from.angle_max() != 0) {
    set_angle_max(from.angle_max());
  }
  if (from.angle_step() != 0) {
    set_angle_step(from.angle_step());
  }
  if (from.range_min() != 0) {
    set_range_min(from.range_min());
  }
  if (from.range_max() != 0) {
    set_range_max(from.range_max());
  }
  if (from.vertical_angle_min() != 0) {
    set_vertical_angle_min(from.vertical_angle_min());
  }
  if (from.vertical_angle_max() != 0) {
    set_vertical_angle_max(from.vertical_angle_max());
  }
  if (from.count() != 0) {
    set_count(from.count());
  }
  if (from.vertical_count() != 0) {
    set_vertical_count(from.vertical_count());
  }
  if (from.vertical_angle_step() != 0) {
    set_vertical_angle_step(from.vertical_angle_step());
  }
}

void LaserScan::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.LaserScan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LaserScan::CopyFrom(const LaserScan& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.LaserScan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LaserScan::IsInitialized() const {
  return true;
}

void LaserScan::Swap(LaserScan* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LaserScan::InternalSwap(LaserScan* other) {
  using std::swap;
  ranges_.InternalSwap(&other->ranges_);
  intensities_.InternalSwap(&other->intensities_);
  frame_.Swap(&other->frame_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(world_pose_, other->world_pose_);
  swap(angle_min_, other->angle_min_);
  swap(angle_max_, other->angle_max_);
  swap(angle_step_, other->angle_step_);
  swap(range_min_, other->range_min_);
  swap(range_max_, other->range_max_);
  swap(vertical_angle_min_, other->vertical_angle_min_);
  swap(vertical_angle_max_, other->vertical_angle_max_);
  swap(count_, other->count_);
  swap(vertical_count_, other->vertical_count_);
  swap(vertical_angle_step_, other->vertical_angle_step_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LaserScan::GetMetadata() const {
  protobuf_gz_2fmsgs_2flaserscan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flaserscan_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::LaserScan* Arena::CreateMaybeMessage< ::gz::msgs::LaserScan >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::LaserScan >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
