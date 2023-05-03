// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/hydra.proto

#include "gz/msgs/hydra.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Hydra", Hydra)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fhydra_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fhydra_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Hydra_Paddle;
}  // namespace protobuf_gz_2fmsgs_2fhydra_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace gz {
namespace msgs {
class Hydra_PaddleDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Hydra_Paddle>
      _instance;
} _Hydra_Paddle_default_instance_;
class HydraDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Hydra>
      _instance;
} _Hydra_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fhydra_2eproto {
static void InitDefaultsHydra_Paddle() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Hydra_Paddle_default_instance_;
    new (ptr) ::gz::msgs::Hydra_Paddle();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Hydra_Paddle::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_Hydra_Paddle =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsHydra_Paddle}, {
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,}};

static void InitDefaultsHydra() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Hydra_default_instance_;
    new (ptr) ::gz::msgs::Hydra();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Hydra::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Hydra =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsHydra}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fhydra_2eproto::scc_info_Hydra_Paddle.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Hydra_Paddle.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Hydra.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_bumper_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_3_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_4_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_joy_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, button_center_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, joy_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, joy_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra_Paddle, trigger_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra, right_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Hydra, left_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Hydra_Paddle)},
  { 16, -1, sizeof(::gz::msgs::Hydra)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Hydra_Paddle_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Hydra_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/hydra.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023gz/msgs/hydra.proto\022\007gz.msgs\032\022gz/msgs/"
      "pose.proto\032\024gz/msgs/header.proto\"\324\002\n\005Hyd"
      "ra\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022$\n\005r"
      "ight\030\002 \001(\0132\025.gz.msgs.Hydra.Paddle\022#\n\004lef"
      "t\030\003 \001(\0132\025.gz.msgs.Hydra.Paddle\032\336\001\n\006Paddl"
      "e\022\033\n\004pose\030\001 \001(\0132\r.gz.msgs.Pose\022\025\n\rbutton"
      "_bumper\030\002 \001(\010\022\020\n\010button_1\030\003 \001(\010\022\020\n\010butto"
      "n_2\030\004 \001(\010\022\020\n\010button_3\030\005 \001(\010\022\020\n\010button_4\030"
      "\006 \001(\010\022\022\n\nbutton_joy\030\007 \001(\010\022\025\n\rbutton_cent"
      "er\030\010 \001(\010\022\r\n\005joy_x\030\t \001(\001\022\r\n\005joy_y\030\n \001(\001\022\017"
      "\n\007trigger\030\013 \001(\001B\032\n\013com.gz.msgsB\013HydraPro"
      "tosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 451);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/hydra.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fhydra_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Hydra_Paddle::InitAsDefaultInstance() {
  ::gz::msgs::_Hydra_Paddle_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
}
void Hydra_Paddle::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Hydra_Paddle::kPoseFieldNumber;
const int Hydra_Paddle::kButtonBumperFieldNumber;
const int Hydra_Paddle::kButton1FieldNumber;
const int Hydra_Paddle::kButton2FieldNumber;
const int Hydra_Paddle::kButton3FieldNumber;
const int Hydra_Paddle::kButton4FieldNumber;
const int Hydra_Paddle::kButtonJoyFieldNumber;
const int Hydra_Paddle::kButtonCenterFieldNumber;
const int Hydra_Paddle::kJoyXFieldNumber;
const int Hydra_Paddle::kJoyYFieldNumber;
const int Hydra_Paddle::kTriggerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Hydra_Paddle::Hydra_Paddle()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fhydra_2eproto::scc_info_Hydra_Paddle.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Hydra.Paddle)
}
Hydra_Paddle::Hydra_Paddle(const Hydra_Paddle& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pose()) {
    pose_ = new ::gz::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  ::memcpy(&button_bumper_, &from.button_bumper_,
    static_cast<size_t>(reinterpret_cast<char*>(&trigger_) -
    reinterpret_cast<char*>(&button_bumper_)) + sizeof(trigger_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Hydra.Paddle)
}

void Hydra_Paddle::SharedCtor() {
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&trigger_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(trigger_));
}

Hydra_Paddle::~Hydra_Paddle() {
  // @@protoc_insertion_point(destructor:gz.msgs.Hydra.Paddle)
  SharedDtor();
}

void Hydra_Paddle::SharedDtor() {
  if (this != internal_default_instance()) delete pose_;
}

void Hydra_Paddle::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Hydra_Paddle::descriptor() {
  ::protobuf_gz_2fmsgs_2fhydra_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fhydra_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Hydra_Paddle& Hydra_Paddle::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fhydra_2eproto::scc_info_Hydra_Paddle.base);
  return *internal_default_instance();
}


void Hydra_Paddle::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Hydra.Paddle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  ::memset(&button_bumper_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&trigger_) -
      reinterpret_cast<char*>(&button_bumper_)) + sizeof(trigger_));
  _internal_metadata_.Clear();
}

bool Hydra_Paddle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Hydra.Paddle)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Pose pose = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_bumper = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_bumper_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_1 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_2 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_3 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_3_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_4 = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_4_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_joy = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_joy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool button_center = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_center_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double joy_x = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &joy_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double joy_y = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(81u /* 81 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &joy_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double trigger = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(89u /* 89 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &trigger_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Hydra.Paddle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Hydra.Paddle)
  return false;
#undef DO_
}

void Hydra_Paddle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Hydra.Paddle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Pose pose = 1;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_pose(), output);
  }

  // bool button_bumper = 2;
  if (this->button_bumper() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->button_bumper(), output);
  }

  // bool button_1 = 3;
  if (this->button_1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->button_1(), output);
  }

  // bool button_2 = 4;
  if (this->button_2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->button_2(), output);
  }

  // bool button_3 = 5;
  if (this->button_3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->button_3(), output);
  }

  // bool button_4 = 6;
  if (this->button_4() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->button_4(), output);
  }

  // bool button_joy = 7;
  if (this->button_joy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->button_joy(), output);
  }

  // bool button_center = 8;
  if (this->button_center() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->button_center(), output);
  }

  // double joy_x = 9;
  if (this->joy_x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->joy_x(), output);
  }

  // double joy_y = 10;
  if (this->joy_y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->joy_y(), output);
  }

  // double trigger = 11;
  if (this->trigger() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->trigger(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Hydra.Paddle)
}

::google::protobuf::uint8* Hydra_Paddle::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Hydra.Paddle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Pose pose = 1;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_pose(), deterministic, target);
  }

  // bool button_bumper = 2;
  if (this->button_bumper() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->button_bumper(), target);
  }

  // bool button_1 = 3;
  if (this->button_1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->button_1(), target);
  }

  // bool button_2 = 4;
  if (this->button_2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->button_2(), target);
  }

  // bool button_3 = 5;
  if (this->button_3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->button_3(), target);
  }

  // bool button_4 = 6;
  if (this->button_4() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->button_4(), target);
  }

  // bool button_joy = 7;
  if (this->button_joy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->button_joy(), target);
  }

  // bool button_center = 8;
  if (this->button_center() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->button_center(), target);
  }

  // double joy_x = 9;
  if (this->joy_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->joy_x(), target);
  }

  // double joy_y = 10;
  if (this->joy_y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->joy_y(), target);
  }

  // double trigger = 11;
  if (this->trigger() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->trigger(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Hydra.Paddle)
  return target;
}

size_t Hydra_Paddle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Hydra.Paddle)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.Pose pose = 1;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // bool button_bumper = 2;
  if (this->button_bumper() != 0) {
    total_size += 1 + 1;
  }

  // bool button_1 = 3;
  if (this->button_1() != 0) {
    total_size += 1 + 1;
  }

  // bool button_2 = 4;
  if (this->button_2() != 0) {
    total_size += 1 + 1;
  }

  // bool button_3 = 5;
  if (this->button_3() != 0) {
    total_size += 1 + 1;
  }

  // bool button_4 = 6;
  if (this->button_4() != 0) {
    total_size += 1 + 1;
  }

  // bool button_joy = 7;
  if (this->button_joy() != 0) {
    total_size += 1 + 1;
  }

  // bool button_center = 8;
  if (this->button_center() != 0) {
    total_size += 1 + 1;
  }

  // double joy_x = 9;
  if (this->joy_x() != 0) {
    total_size += 1 + 8;
  }

  // double joy_y = 10;
  if (this->joy_y() != 0) {
    total_size += 1 + 8;
  }

  // double trigger = 11;
  if (this->trigger() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Hydra_Paddle::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Hydra.Paddle)
  GOOGLE_DCHECK_NE(&from, this);
  const Hydra_Paddle* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Hydra_Paddle>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Hydra.Paddle)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Hydra.Paddle)
    MergeFrom(*source);
  }
}

void Hydra_Paddle::MergeFrom(const Hydra_Paddle& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Hydra.Paddle)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_pose()) {
    mutable_pose()->::gz::msgs::Pose::MergeFrom(from.pose());
  }
  if (from.button_bumper() != 0) {
    set_button_bumper(from.button_bumper());
  }
  if (from.button_1() != 0) {
    set_button_1(from.button_1());
  }
  if (from.button_2() != 0) {
    set_button_2(from.button_2());
  }
  if (from.button_3() != 0) {
    set_button_3(from.button_3());
  }
  if (from.button_4() != 0) {
    set_button_4(from.button_4());
  }
  if (from.button_joy() != 0) {
    set_button_joy(from.button_joy());
  }
  if (from.button_center() != 0) {
    set_button_center(from.button_center());
  }
  if (from.joy_x() != 0) {
    set_joy_x(from.joy_x());
  }
  if (from.joy_y() != 0) {
    set_joy_y(from.joy_y());
  }
  if (from.trigger() != 0) {
    set_trigger(from.trigger());
  }
}

void Hydra_Paddle::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Hydra.Paddle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hydra_Paddle::CopyFrom(const Hydra_Paddle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Hydra.Paddle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hydra_Paddle::IsInitialized() const {
  return true;
}

void Hydra_Paddle::Swap(Hydra_Paddle* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Hydra_Paddle::InternalSwap(Hydra_Paddle* other) {
  using std::swap;
  swap(pose_, other->pose_);
  swap(button_bumper_, other->button_bumper_);
  swap(button_1_, other->button_1_);
  swap(button_2_, other->button_2_);
  swap(button_3_, other->button_3_);
  swap(button_4_, other->button_4_);
  swap(button_joy_, other->button_joy_);
  swap(button_center_, other->button_center_);
  swap(joy_x_, other->joy_x_);
  swap(joy_y_, other->joy_y_);
  swap(trigger_, other->trigger_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Hydra_Paddle::GetMetadata() const {
  protobuf_gz_2fmsgs_2fhydra_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fhydra_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Hydra::InitAsDefaultInstance() {
  ::gz::msgs::_Hydra_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Hydra_default_instance_._instance.get_mutable()->right_ = const_cast< ::gz::msgs::Hydra_Paddle*>(
      ::gz::msgs::Hydra_Paddle::internal_default_instance());
  ::gz::msgs::_Hydra_default_instance_._instance.get_mutable()->left_ = const_cast< ::gz::msgs::Hydra_Paddle*>(
      ::gz::msgs::Hydra_Paddle::internal_default_instance());
}
void Hydra::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Hydra::kHeaderFieldNumber;
const int Hydra::kRightFieldNumber;
const int Hydra::kLeftFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Hydra::Hydra()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fhydra_2eproto::scc_info_Hydra.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Hydra)
}
Hydra::Hydra(const Hydra& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_right()) {
    right_ = new ::gz::msgs::Hydra_Paddle(*from.right_);
  } else {
    right_ = NULL;
  }
  if (from.has_left()) {
    left_ = new ::gz::msgs::Hydra_Paddle(*from.left_);
  } else {
    left_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Hydra)
}

void Hydra::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&left_) -
      reinterpret_cast<char*>(&header_)) + sizeof(left_));
}

Hydra::~Hydra() {
  // @@protoc_insertion_point(destructor:gz.msgs.Hydra)
  SharedDtor();
}

void Hydra::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete right_;
  if (this != internal_default_instance()) delete left_;
}

void Hydra::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Hydra::descriptor() {
  ::protobuf_gz_2fmsgs_2fhydra_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fhydra_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Hydra& Hydra::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fhydra_2eproto::scc_info_Hydra.base);
  return *internal_default_instance();
}


void Hydra::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Hydra)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && right_ != NULL) {
    delete right_;
  }
  right_ = NULL;
  if (GetArenaNoVirtual() == NULL && left_ != NULL) {
    delete left_;
  }
  left_ = NULL;
  _internal_metadata_.Clear();
}

bool Hydra::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Hydra)
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

      // .gz.msgs.Hydra.Paddle right = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_right()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Hydra.Paddle left = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_left()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Hydra)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Hydra)
  return false;
#undef DO_
}

void Hydra::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Hydra)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Hydra.Paddle right = 2;
  if (this->has_right()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_right(), output);
  }

  // .gz.msgs.Hydra.Paddle left = 3;
  if (this->has_left()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_left(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Hydra)
}

::google::protobuf::uint8* Hydra::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Hydra)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Hydra.Paddle right = 2;
  if (this->has_right()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_right(), deterministic, target);
  }

  // .gz.msgs.Hydra.Paddle left = 3;
  if (this->has_left()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_left(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Hydra)
  return target;
}

size_t Hydra::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Hydra)
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

  // .gz.msgs.Hydra.Paddle right = 2;
  if (this->has_right()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *right_);
  }

  // .gz.msgs.Hydra.Paddle left = 3;
  if (this->has_left()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *left_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Hydra::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Hydra)
  GOOGLE_DCHECK_NE(&from, this);
  const Hydra* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Hydra>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Hydra)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Hydra)
    MergeFrom(*source);
  }
}

void Hydra::MergeFrom(const Hydra& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Hydra)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_right()) {
    mutable_right()->::gz::msgs::Hydra_Paddle::MergeFrom(from.right());
  }
  if (from.has_left()) {
    mutable_left()->::gz::msgs::Hydra_Paddle::MergeFrom(from.left());
  }
}

void Hydra::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Hydra)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hydra::CopyFrom(const Hydra& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Hydra)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hydra::IsInitialized() const {
  return true;
}

void Hydra::Swap(Hydra* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Hydra::InternalSwap(Hydra* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(right_, other->right_);
  swap(left_, other->left_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Hydra::GetMetadata() const {
  protobuf_gz_2fmsgs_2fhydra_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fhydra_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Hydra_Paddle* Arena::CreateMaybeMessage< ::gz::msgs::Hydra_Paddle >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Hydra_Paddle >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Hydra* Arena::CreateMaybeMessage< ::gz::msgs::Hydra >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Hydra >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)