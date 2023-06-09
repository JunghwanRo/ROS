// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/entity_factory.proto

#include "gz/msgs/entity_factory.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.EntityFactory", EntityFactory)
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
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_SphericalCoordinates;
}  // namespace protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto
namespace gz {
namespace msgs {
class EntityFactoryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EntityFactory>
      _instance;
  ::google::protobuf::internal::ArenaStringPtr sdf_;
  ::google::protobuf::internal::ArenaStringPtr sdf_filename_;
  const ::gz::msgs::Model* model_;
  const ::gz::msgs::Light* light_;
  ::google::protobuf::internal::ArenaStringPtr clone_name_;
} _EntityFactory_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto {
static void InitDefaultsEntityFactory() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_EntityFactory_default_instance_;
    new (ptr) ::gz::msgs::EntityFactory();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::EntityFactory::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<5> scc_info_EntityFactory =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsEntityFactory}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fmodel_2eproto::scc_info_Model.base,
      &protobuf_gz_2fmsgs_2flight_2eproto::scc_info_Light.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::scc_info_SphericalCoordinates.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EntityFactory.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, header_),
  offsetof(::gz::msgs::EntityFactoryDefaultTypeInternal, sdf_),
  offsetof(::gz::msgs::EntityFactoryDefaultTypeInternal, sdf_filename_),
  offsetof(::gz::msgs::EntityFactoryDefaultTypeInternal, model_),
  offsetof(::gz::msgs::EntityFactoryDefaultTypeInternal, light_),
  offsetof(::gz::msgs::EntityFactoryDefaultTypeInternal, clone_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, allow_renaming_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, relative_to_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, spherical_coordinates_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory, from_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::EntityFactory)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_EntityFactory_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/entity_factory.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\034gz/msgs/entity_factory.proto\022\007gz.msgs\032"
      "\024gz/msgs/header.proto\032\023gz/msgs/light.pro"
      "to\032\023gz/msgs/model.proto\032\022gz/msgs/pose.pr"
      "oto\032#gz/msgs/spherical_coordinates.proto"
      "\"\315\002\n\rEntityFactory\022\037\n\006header\030\001 \001(\0132\017.gz."
      "msgs.Header\022\r\n\003sdf\030\002 \001(\tH\000\022\026\n\014sdf_filena"
      "me\030\003 \001(\tH\000\022\037\n\005model\030\004 \001(\0132\016.gz.msgs.Mode"
      "lH\000\022\037\n\005light\030\005 \001(\0132\016.gz.msgs.LightH\000\022\024\n\n"
      "clone_name\030\006 \001(\tH\000\022\033\n\004pose\030\007 \001(\0132\r.gz.ms"
      "gs.Pose\022\014\n\004name\030\010 \001(\t\022\026\n\016allow_renaming\030"
      "\t \001(\010\022\023\n\013relative_to\030\n \001(\t\022<\n\025spherical_"
      "coordinates\030\013 \001(\0132\035.gz.msgs.SphericalCoo"
      "rdinatesB\006\n\004fromB\"\n\013com.gz.msgsB\023EntityF"
      "actoryProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 540);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/entity_factory.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2flight_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fmodel_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void EntityFactory::InitAsDefaultInstance() {
  ::gz::msgs::_EntityFactory_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_EntityFactory_default_instance_.sdf_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::gz::msgs::_EntityFactory_default_instance_.sdf_filename_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::gz::msgs::_EntityFactory_default_instance_.model_ = const_cast< ::gz::msgs::Model*>(
      ::gz::msgs::Model::internal_default_instance());
  ::gz::msgs::_EntityFactory_default_instance_.light_ = const_cast< ::gz::msgs::Light*>(
      ::gz::msgs::Light::internal_default_instance());
  ::gz::msgs::_EntityFactory_default_instance_.clone_name_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::gz::msgs::_EntityFactory_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
  ::gz::msgs::_EntityFactory_default_instance_._instance.get_mutable()->spherical_coordinates_ = const_cast< ::gz::msgs::SphericalCoordinates*>(
      ::gz::msgs::SphericalCoordinates::internal_default_instance());
}
void EntityFactory::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void EntityFactory::set_allocated_model(::gz::msgs::Model* model) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_from();
  if (model) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      model = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, model, submessage_arena);
    }
    set_has_model();
    from_.model_ = model;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.EntityFactory.model)
}
void EntityFactory::clear_model() {
  if (has_model()) {
    delete from_.model_;
    clear_has_from();
  }
}
void EntityFactory::set_allocated_light(::gz::msgs::Light* light) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_from();
  if (light) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      light = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, light, submessage_arena);
    }
    set_has_light();
    from_.light_ = light;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.EntityFactory.light)
}
void EntityFactory::clear_light() {
  if (has_light()) {
    delete from_.light_;
    clear_has_from();
  }
}
void EntityFactory::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void EntityFactory::clear_spherical_coordinates() {
  if (GetArenaNoVirtual() == NULL && spherical_coordinates_ != NULL) {
    delete spherical_coordinates_;
  }
  spherical_coordinates_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntityFactory::kHeaderFieldNumber;
const int EntityFactory::kSdfFieldNumber;
const int EntityFactory::kSdfFilenameFieldNumber;
const int EntityFactory::kModelFieldNumber;
const int EntityFactory::kLightFieldNumber;
const int EntityFactory::kCloneNameFieldNumber;
const int EntityFactory::kPoseFieldNumber;
const int EntityFactory::kNameFieldNumber;
const int EntityFactory::kAllowRenamingFieldNumber;
const int EntityFactory::kRelativeToFieldNumber;
const int EntityFactory::kSphericalCoordinatesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EntityFactory::EntityFactory()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::scc_info_EntityFactory.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.EntityFactory)
}
EntityFactory::EntityFactory(const EntityFactory& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  relative_to_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.relative_to().size() > 0) {
    relative_to_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.relative_to_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_pose()) {
    pose_ = new ::gz::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_spherical_coordinates()) {
    spherical_coordinates_ = new ::gz::msgs::SphericalCoordinates(*from.spherical_coordinates_);
  } else {
    spherical_coordinates_ = NULL;
  }
  allow_renaming_ = from.allow_renaming_;
  clear_has_from();
  switch (from.from_case()) {
    case kSdf: {
      set_sdf(from.sdf());
      break;
    }
    case kSdfFilename: {
      set_sdf_filename(from.sdf_filename());
      break;
    }
    case kModel: {
      mutable_model()->::gz::msgs::Model::MergeFrom(from.model());
      break;
    }
    case kLight: {
      mutable_light()->::gz::msgs::Light::MergeFrom(from.light());
      break;
    }
    case kCloneName: {
      set_clone_name(from.clone_name());
      break;
    }
    case FROM_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.EntityFactory)
}

void EntityFactory::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  relative_to_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&allow_renaming_) -
      reinterpret_cast<char*>(&header_)) + sizeof(allow_renaming_));
  clear_has_from();
}

EntityFactory::~EntityFactory() {
  // @@protoc_insertion_point(destructor:gz.msgs.EntityFactory)
  SharedDtor();
}

void EntityFactory::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  relative_to_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete spherical_coordinates_;
  if (has_from()) {
    clear_from();
  }
}

void EntityFactory::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EntityFactory::descriptor() {
  ::protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EntityFactory& EntityFactory::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::scc_info_EntityFactory.base);
  return *internal_default_instance();
}


void EntityFactory::clear_from() {
// @@protoc_insertion_point(one_of_clear_start:gz.msgs.EntityFactory)
  switch (from_case()) {
    case kSdf: {
      from_.sdf_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kSdfFilename: {
      from_.sdf_filename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kModel: {
      delete from_.model_;
      break;
    }
    case kLight: {
      delete from_.light_;
      break;
    }
    case kCloneName: {
      from_.clone_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case FROM_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = FROM_NOT_SET;
}


void EntityFactory::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.EntityFactory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  relative_to_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && spherical_coordinates_ != NULL) {
    delete spherical_coordinates_;
  }
  spherical_coordinates_ = NULL;
  allow_renaming_ = false;
  clear_from();
  _internal_metadata_.Clear();
}

bool EntityFactory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.EntityFactory)
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

      // string sdf = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sdf()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sdf().data(), static_cast<int>(this->sdf().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.EntityFactory.sdf"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sdf_filename = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sdf_filename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sdf_filename().data(), static_cast<int>(this->sdf_filename().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.EntityFactory.sdf_filename"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Model model = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Light light = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_light()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string clone_name = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_clone_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->clone_name().data(), static_cast<int>(this->clone_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.EntityFactory.clone_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose pose = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.EntityFactory.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool allow_renaming = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_renaming_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string relative_to = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_relative_to()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->relative_to().data(), static_cast<int>(this->relative_to().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.EntityFactory.relative_to"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SphericalCoordinates spherical_coordinates = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spherical_coordinates()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.EntityFactory)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.EntityFactory)
  return false;
#undef DO_
}

void EntityFactory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.EntityFactory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string sdf = 2;
  if (has_sdf()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sdf().data(), static_cast<int>(this->sdf().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.sdf");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->sdf(), output);
  }

  // string sdf_filename = 3;
  if (has_sdf_filename()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sdf_filename().data(), static_cast<int>(this->sdf_filename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.sdf_filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->sdf_filename(), output);
  }

  // .gz.msgs.Model model = 4;
  if (has_model()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_model(), output);
  }

  // .gz.msgs.Light light = 5;
  if (has_light()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_light(), output);
  }

  // string clone_name = 6;
  if (has_clone_name()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->clone_name().data(), static_cast<int>(this->clone_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.clone_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->clone_name(), output);
  }

  // .gz.msgs.Pose pose = 7;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_pose(), output);
  }

  // string name = 8;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->name(), output);
  }

  // bool allow_renaming = 9;
  if (this->allow_renaming() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->allow_renaming(), output);
  }

  // string relative_to = 10;
  if (this->relative_to().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->relative_to().data(), static_cast<int>(this->relative_to().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.relative_to");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->relative_to(), output);
  }

  // .gz.msgs.SphericalCoordinates spherical_coordinates = 11;
  if (this->has_spherical_coordinates()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->_internal_spherical_coordinates(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.EntityFactory)
}

::google::protobuf::uint8* EntityFactory::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.EntityFactory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string sdf = 2;
  if (has_sdf()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sdf().data(), static_cast<int>(this->sdf().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.sdf");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sdf(), target);
  }

  // string sdf_filename = 3;
  if (has_sdf_filename()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sdf_filename().data(), static_cast<int>(this->sdf_filename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.sdf_filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->sdf_filename(), target);
  }

  // .gz.msgs.Model model = 4;
  if (has_model()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_model(), deterministic, target);
  }

  // .gz.msgs.Light light = 5;
  if (has_light()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_light(), deterministic, target);
  }

  // string clone_name = 6;
  if (has_clone_name()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->clone_name().data(), static_cast<int>(this->clone_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.clone_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->clone_name(), target);
  }

  // .gz.msgs.Pose pose = 7;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_pose(), deterministic, target);
  }

  // string name = 8;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->name(), target);
  }

  // bool allow_renaming = 9;
  if (this->allow_renaming() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->allow_renaming(), target);
  }

  // string relative_to = 10;
  if (this->relative_to().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->relative_to().data(), static_cast<int>(this->relative_to().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.EntityFactory.relative_to");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->relative_to(), target);
  }

  // .gz.msgs.SphericalCoordinates spherical_coordinates = 11;
  if (this->has_spherical_coordinates()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        11, this->_internal_spherical_coordinates(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.EntityFactory)
  return target;
}

size_t EntityFactory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.EntityFactory)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 8;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string relative_to = 10;
  if (this->relative_to().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->relative_to());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Pose pose = 7;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .gz.msgs.SphericalCoordinates spherical_coordinates = 11;
  if (this->has_spherical_coordinates()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *spherical_coordinates_);
  }

  // bool allow_renaming = 9;
  if (this->allow_renaming() != 0) {
    total_size += 1 + 1;
  }

  switch (from_case()) {
    // string sdf = 2;
    case kSdf: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sdf());
      break;
    }
    // string sdf_filename = 3;
    case kSdfFilename: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sdf_filename());
      break;
    }
    // .gz.msgs.Model model = 4;
    case kModel: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *from_.model_);
      break;
    }
    // .gz.msgs.Light light = 5;
    case kLight: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *from_.light_);
      break;
    }
    // string clone_name = 6;
    case kCloneName: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->clone_name());
      break;
    }
    case FROM_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EntityFactory::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.EntityFactory)
  GOOGLE_DCHECK_NE(&from, this);
  const EntityFactory* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EntityFactory>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.EntityFactory)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.EntityFactory)
    MergeFrom(*source);
  }
}

void EntityFactory::MergeFrom(const EntityFactory& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.EntityFactory)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.relative_to().size() > 0) {

    relative_to_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.relative_to_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_pose()) {
    mutable_pose()->::gz::msgs::Pose::MergeFrom(from.pose());
  }
  if (from.has_spherical_coordinates()) {
    mutable_spherical_coordinates()->::gz::msgs::SphericalCoordinates::MergeFrom(from.spherical_coordinates());
  }
  if (from.allow_renaming() != 0) {
    set_allow_renaming(from.allow_renaming());
  }
  switch (from.from_case()) {
    case kSdf: {
      set_sdf(from.sdf());
      break;
    }
    case kSdfFilename: {
      set_sdf_filename(from.sdf_filename());
      break;
    }
    case kModel: {
      mutable_model()->::gz::msgs::Model::MergeFrom(from.model());
      break;
    }
    case kLight: {
      mutable_light()->::gz::msgs::Light::MergeFrom(from.light());
      break;
    }
    case kCloneName: {
      set_clone_name(from.clone_name());
      break;
    }
    case FROM_NOT_SET: {
      break;
    }
  }
}

void EntityFactory::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.EntityFactory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntityFactory::CopyFrom(const EntityFactory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.EntityFactory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityFactory::IsInitialized() const {
  return true;
}

void EntityFactory::Swap(EntityFactory* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EntityFactory::InternalSwap(EntityFactory* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  relative_to_.Swap(&other->relative_to_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(pose_, other->pose_);
  swap(spherical_coordinates_, other->spherical_coordinates_);
  swap(allow_renaming_, other->allow_renaming_);
  swap(from_, other->from_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EntityFactory::GetMetadata() const {
  protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::EntityFactory* Arena::CreateMaybeMessage< ::gz::msgs::EntityFactory >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::EntityFactory >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
