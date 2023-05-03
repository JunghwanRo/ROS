// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/user_cmd.proto

#include "gz/msgs/user_cmd.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.UserCmd", UserCmd)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2flight_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flight_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_Light;
}  // namespace protobuf_gz_2fmsgs_2flight_2eproto
namespace protobuf_gz_2fmsgs_2fmodel_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fmodel_2eproto ::google::protobuf::internal::SCCInfo<7> scc_info_Model;
}  // namespace protobuf_gz_2fmsgs_2fmodel_2eproto
namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_WorldControl;
}  // namespace protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto
namespace protobuf_gz_2fmsgs_2fwrench_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fwrench_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Wrench;
}  // namespace protobuf_gz_2fmsgs_2fwrench_2eproto
namespace gz {
namespace msgs {
class UserCmdDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<UserCmd>
      _instance;
} _UserCmd_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto {
static void InitDefaultsUserCmd() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_UserCmd_default_instance_;
    new (ptr) ::gz::msgs::UserCmd();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::UserCmd::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<5> scc_info_UserCmd =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsUserCmd}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fmodel_2eproto::scc_info_Model.base,
      &protobuf_gz_2fmsgs_2flight_2eproto::scc_info_Light.base,
      &protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto::scc_info_WorldControl.base,
      &protobuf_gz_2fmsgs_2fwrench_2eproto::scc_info_Wrench.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_UserCmd.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, description_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, model_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, light_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, entity_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, world_control_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::UserCmd, wrench_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::UserCmd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_UserCmd_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/user_cmd.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\026gz/msgs/user_cmd.proto\022\007gz.msgs\032\023gz/ms"
      "gs/light.proto\032\023gz/msgs/model.proto\032\033gz/"
      "msgs/world_control.proto\032\024gz/msgs/wrench"
      ".proto\032\024gz/msgs/header.proto\"\322\002\n\007UserCmd"
      "\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\n\n\002id\030"
      "\002 \001(\r\022\023\n\013description\030\003 \001(\t\022#\n\004type\030\004 \001(\016"
      "2\025.gz.msgs.UserCmd.Type\022\035\n\005model\030\005 \003(\0132\016"
      ".gz.msgs.Model\022\035\n\005light\030\006 \003(\0132\016.gz.msgs."
      "Light\022\023\n\013entity_name\030\007 \001(\t\022,\n\rworld_cont"
      "rol\030\010 \001(\0132\025.gz.msgs.WorldControl\022\037\n\006wren"
      "ch\030\t \001(\0132\017.gz.msgs.Wrench\">\n\004Type\022\n\n\006MOV"
      "ING\020\000\022\021\n\rWORLD_CONTROL\020\001\022\n\n\006WRENCH\020\002\022\013\n\007"
      "SCALING\020\003B\034\n\013com.gz.msgsB\rUserCmdProtosb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 527);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/user_cmd.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2flight_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fmodel_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fworld_5fcontrol_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fwrench_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* UserCmd_Type_descriptor() {
  protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::file_level_enum_descriptors[0];
}
bool UserCmd_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const UserCmd_Type UserCmd::MOVING;
const UserCmd_Type UserCmd::WORLD_CONTROL;
const UserCmd_Type UserCmd::WRENCH;
const UserCmd_Type UserCmd::SCALING;
const UserCmd_Type UserCmd::Type_MIN;
const UserCmd_Type UserCmd::Type_MAX;
const int UserCmd::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void UserCmd::InitAsDefaultInstance() {
  ::gz::msgs::_UserCmd_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_UserCmd_default_instance_._instance.get_mutable()->world_control_ = const_cast< ::gz::msgs::WorldControl*>(
      ::gz::msgs::WorldControl::internal_default_instance());
  ::gz::msgs::_UserCmd_default_instance_._instance.get_mutable()->wrench_ = const_cast< ::gz::msgs::Wrench*>(
      ::gz::msgs::Wrench::internal_default_instance());
}
void UserCmd::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void UserCmd::clear_model() {
  model_.Clear();
}
void UserCmd::clear_light() {
  light_.Clear();
}
void UserCmd::clear_world_control() {
  if (GetArenaNoVirtual() == NULL && world_control_ != NULL) {
    delete world_control_;
  }
  world_control_ = NULL;
}
void UserCmd::clear_wrench() {
  if (GetArenaNoVirtual() == NULL && wrench_ != NULL) {
    delete wrench_;
  }
  wrench_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserCmd::kHeaderFieldNumber;
const int UserCmd::kIdFieldNumber;
const int UserCmd::kDescriptionFieldNumber;
const int UserCmd::kTypeFieldNumber;
const int UserCmd::kModelFieldNumber;
const int UserCmd::kLightFieldNumber;
const int UserCmd::kEntityNameFieldNumber;
const int UserCmd::kWorldControlFieldNumber;
const int UserCmd::kWrenchFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserCmd::UserCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::scc_info_UserCmd.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.UserCmd)
}
UserCmd::UserCmd(const UserCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      model_(from.model_),
      light_(from.light_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.entity_name().size() > 0) {
    entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entity_name_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_world_control()) {
    world_control_ = new ::gz::msgs::WorldControl(*from.world_control_);
  } else {
    world_control_ = NULL;
  }
  if (from.has_wrench()) {
    wrench_ = new ::gz::msgs::Wrench(*from.wrench_);
  } else {
    wrench_ = NULL;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.UserCmd)
}

void UserCmd::SharedCtor() {
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&header_)) + sizeof(type_));
}

UserCmd::~UserCmd() {
  // @@protoc_insertion_point(destructor:gz.msgs.UserCmd)
  SharedDtor();
}

void UserCmd::SharedDtor() {
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  entity_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete world_control_;
  if (this != internal_default_instance()) delete wrench_;
}

void UserCmd::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* UserCmd::descriptor() {
  ::protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UserCmd& UserCmd::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::scc_info_UserCmd.base);
  return *internal_default_instance();
}


void UserCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.UserCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  model_.Clear();
  light_.Clear();
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  entity_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && world_control_ != NULL) {
    delete world_control_;
  }
  world_control_ = NULL;
  if (GetArenaNoVirtual() == NULL && wrench_ != NULL) {
    delete wrench_;
  }
  wrench_ = NULL;
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool UserCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.UserCmd)
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

      // uint32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.UserCmd.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.UserCmd.Type type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::UserCmd_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Model model = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Light light = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_light()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string entity_name = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_entity_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->entity_name().data(), static_cast<int>(this->entity_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.UserCmd.entity_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.WorldControl world_control = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_world_control()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Wrench wrench = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_wrench()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.UserCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.UserCmd)
  return false;
#undef DO_
}

void UserCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.UserCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.UserCmd.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->description(), output);
  }

  // .gz.msgs.UserCmd.Type type = 4;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  // repeated .gz.msgs.Model model = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->model_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5,
      this->model(static_cast<int>(i)),
      output);
  }

  // repeated .gz.msgs.Light light = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->light_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->light(static_cast<int>(i)),
      output);
  }

  // string entity_name = 7;
  if (this->entity_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->entity_name().data(), static_cast<int>(this->entity_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.UserCmd.entity_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->entity_name(), output);
  }

  // .gz.msgs.WorldControl world_control = 8;
  if (this->has_world_control()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_world_control(), output);
  }

  // .gz.msgs.Wrench wrench = 9;
  if (this->has_wrench()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->_internal_wrench(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.UserCmd)
}

::google::protobuf::uint8* UserCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.UserCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.UserCmd.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->description(), target);
  }

  // .gz.msgs.UserCmd.Type type = 4;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  // repeated .gz.msgs.Model model = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->model_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->model(static_cast<int>(i)), deterministic, target);
  }

  // repeated .gz.msgs.Light light = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->light_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->light(static_cast<int>(i)), deterministic, target);
  }

  // string entity_name = 7;
  if (this->entity_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->entity_name().data(), static_cast<int>(this->entity_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.UserCmd.entity_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->entity_name(), target);
  }

  // .gz.msgs.WorldControl world_control = 8;
  if (this->has_world_control()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_world_control(), deterministic, target);
  }

  // .gz.msgs.Wrench wrench = 9;
  if (this->has_wrench()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->_internal_wrench(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.UserCmd)
  return target;
}

size_t UserCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.UserCmd)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.Model model = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->model_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->model(static_cast<int>(i)));
    }
  }

  // repeated .gz.msgs.Light light = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->light_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->light(static_cast<int>(i)));
    }
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // string entity_name = 7;
  if (this->entity_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->entity_name());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.WorldControl world_control = 8;
  if (this->has_world_control()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *world_control_);
  }

  // .gz.msgs.Wrench wrench = 9;
  if (this->has_wrench()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *wrench_);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // .gz.msgs.UserCmd.Type type = 4;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.UserCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const UserCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UserCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.UserCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.UserCmd)
    MergeFrom(*source);
  }
}

void UserCmd::MergeFrom(const UserCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.UserCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  model_.MergeFrom(from.model_);
  light_.MergeFrom(from.light_);
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.entity_name().size() > 0) {

    entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entity_name_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_world_control()) {
    mutable_world_control()->::gz::msgs::WorldControl::MergeFrom(from.world_control());
  }
  if (from.has_wrench()) {
    mutable_wrench()->::gz::msgs::Wrench::MergeFrom(from.wrench());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void UserCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.UserCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserCmd::CopyFrom(const UserCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.UserCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserCmd::IsInitialized() const {
  return true;
}

void UserCmd::Swap(UserCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserCmd::InternalSwap(UserCmd* other) {
  using std::swap;
  CastToBase(&model_)->InternalSwap(CastToBase(&other->model_));
  CastToBase(&light_)->InternalSwap(CastToBase(&other->light_));
  description_.Swap(&other->description_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  entity_name_.Swap(&other->entity_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(world_control_, other->world_control_);
  swap(wrench_, other->wrench_);
  swap(id_, other->id_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata UserCmd::GetMetadata() const {
  protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fuser_5fcmd_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::UserCmd* Arena::CreateMaybeMessage< ::gz::msgs::UserCmd >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::UserCmd >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)