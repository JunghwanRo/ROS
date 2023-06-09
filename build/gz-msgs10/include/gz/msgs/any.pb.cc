// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/any.proto

#include "gz/msgs/any.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Any", Any)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fcolor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fcolor_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Color;
}  // namespace protobuf_gz_2fmsgs_2fcolor_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace protobuf_gz_2fmsgs_2fquaternion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fquaternion_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Quaternion;
}  // namespace protobuf_gz_2fmsgs_2fquaternion_2eproto
namespace protobuf_gz_2fmsgs_2ftime_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftime_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Time;
}  // namespace protobuf_gz_2fmsgs_2ftime_2eproto
namespace protobuf_gz_2fmsgs_2fvector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvector3d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Vector3d;
}  // namespace protobuf_gz_2fmsgs_2fvector3d_2eproto
namespace gz {
namespace msgs {
class AnyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Any>
      _instance;
  double double_value_;
  ::google::protobuf::int32 int_value_;
  ::google::protobuf::internal::ArenaStringPtr string_value_;
  bool bool_value_;
  const ::gz::msgs::Vector3d* vector3d_value_;
  const ::gz::msgs::Color* color_value_;
  const ::gz::msgs::Pose* pose3d_value_;
  const ::gz::msgs::Quaternion* quaternion_value_;
  const ::gz::msgs::Time* time_value_;
} _Any_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fany_2eproto {
static void InitDefaultsAny() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Any_default_instance_;
    new (ptr) ::gz::msgs::Any();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Any::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<6> scc_info_Any =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 6, InitDefaultsAny}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fvector3d_2eproto::scc_info_Vector3d.base,
      &protobuf_gz_2fmsgs_2fcolor_2eproto::scc_info_Color.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_gz_2fmsgs_2fquaternion_2eproto::scc_info_Quaternion.base,
      &protobuf_gz_2fmsgs_2ftime_2eproto::scc_info_Time.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Any.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Any, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Any, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Any, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Any, type_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, double_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, int_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, string_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, bool_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, vector3d_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, color_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, pose3d_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, quaternion_value_),
  offsetof(::gz::msgs::AnyDefaultTypeInternal, time_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Any, value_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Any)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Any_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/any.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021gz/msgs/any.proto\022\007gz.msgs\032\024gz/msgs/he"
      "ader.proto\032\023gz/msgs/color.proto\032\022gz/msgs"
      "/pose.proto\032\030gz/msgs/quaternion.proto\032\022g"
      "z/msgs/time.proto\032\026gz/msgs/vector3d.prot"
      "o\"\211\004\n\003Any\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Head"
      "er\022$\n\004type\030\002 \001(\0162\026.gz.msgs.Any.ValueType"
      "\022\026\n\014double_value\030\003 \001(\001H\000\022\023\n\tint_value\030\004 "
      "\001(\005H\000\022\026\n\014string_value\030\005 \001(\tH\000\022\024\n\nbool_va"
      "lue\030\006 \001(\010H\000\022+\n\016vector3d_value\030\007 \001(\0132\021.gz"
      ".msgs.Vector3dH\000\022%\n\013color_value\030\010 \001(\0132\016."
      "gz.msgs.ColorH\000\022%\n\014pose3d_value\030\t \001(\0132\r."
      "gz.msgs.PoseH\000\022/\n\020quaternion_value\030\n \001(\013"
      "2\023.gz.msgs.QuaternionH\000\022#\n\ntime_value\030\013 "
      "\001(\0132\r.gz.msgs.TimeH\000\"\205\001\n\tValueType\022\010\n\004NO"
      "NE\020\000\022\n\n\006DOUBLE\020\001\022\t\n\005INT32\020\002\022\n\n\006STRING\020\003\022"
      "\013\n\007BOOLEAN\020\004\022\014\n\010VECTOR3D\020\005\022\t\n\005COLOR\020\006\022\n\n"
      "\006POSE3D\020\007\022\017\n\013QUATERNIOND\020\010\022\010\n\004TIME\020\tB\007\n\005"
      "valueB\032\n\013com.gz.msgsB\013EmptyProtosb\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 721);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/any.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fcolor_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fquaternion_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2ftime_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvector3d_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fany_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* Any_ValueType_descriptor() {
  protobuf_gz_2fmsgs_2fany_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fany_2eproto::file_level_enum_descriptors[0];
}
bool Any_ValueType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Any_ValueType Any::NONE;
const Any_ValueType Any::DOUBLE;
const Any_ValueType Any::INT32;
const Any_ValueType Any::STRING;
const Any_ValueType Any::BOOLEAN;
const Any_ValueType Any::VECTOR3D;
const Any_ValueType Any::COLOR;
const Any_ValueType Any::POSE3D;
const Any_ValueType Any::QUATERNIOND;
const Any_ValueType Any::TIME;
const Any_ValueType Any::ValueType_MIN;
const Any_ValueType Any::ValueType_MAX;
const int Any::ValueType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Any::InitAsDefaultInstance() {
  ::gz::msgs::_Any_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Any_default_instance_.double_value_ = 0;
  ::gz::msgs::_Any_default_instance_.int_value_ = 0;
  ::gz::msgs::_Any_default_instance_.string_value_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::gz::msgs::_Any_default_instance_.bool_value_ = false;
  ::gz::msgs::_Any_default_instance_.vector3d_value_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
  ::gz::msgs::_Any_default_instance_.color_value_ = const_cast< ::gz::msgs::Color*>(
      ::gz::msgs::Color::internal_default_instance());
  ::gz::msgs::_Any_default_instance_.pose3d_value_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
  ::gz::msgs::_Any_default_instance_.quaternion_value_ = const_cast< ::gz::msgs::Quaternion*>(
      ::gz::msgs::Quaternion::internal_default_instance());
  ::gz::msgs::_Any_default_instance_.time_value_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
}
void Any::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Any::set_allocated_vector3d_value(::gz::msgs::Vector3d* vector3d_value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_value();
  if (vector3d_value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vector3d_value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vector3d_value, submessage_arena);
    }
    set_has_vector3d_value();
    value_.vector3d_value_ = vector3d_value;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.vector3d_value)
}
void Any::clear_vector3d_value() {
  if (has_vector3d_value()) {
    delete value_.vector3d_value_;
    clear_has_value();
  }
}
void Any::set_allocated_color_value(::gz::msgs::Color* color_value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_value();
  if (color_value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      color_value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, color_value, submessage_arena);
    }
    set_has_color_value();
    value_.color_value_ = color_value;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.color_value)
}
void Any::clear_color_value() {
  if (has_color_value()) {
    delete value_.color_value_;
    clear_has_value();
  }
}
void Any::set_allocated_pose3d_value(::gz::msgs::Pose* pose3d_value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_value();
  if (pose3d_value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pose3d_value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pose3d_value, submessage_arena);
    }
    set_has_pose3d_value();
    value_.pose3d_value_ = pose3d_value;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.pose3d_value)
}
void Any::clear_pose3d_value() {
  if (has_pose3d_value()) {
    delete value_.pose3d_value_;
    clear_has_value();
  }
}
void Any::set_allocated_quaternion_value(::gz::msgs::Quaternion* quaternion_value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_value();
  if (quaternion_value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      quaternion_value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, quaternion_value, submessage_arena);
    }
    set_has_quaternion_value();
    value_.quaternion_value_ = quaternion_value;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.quaternion_value)
}
void Any::clear_quaternion_value() {
  if (has_quaternion_value()) {
    delete value_.quaternion_value_;
    clear_has_value();
  }
}
void Any::set_allocated_time_value(::gz::msgs::Time* time_value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_value();
  if (time_value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      time_value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, time_value, submessage_arena);
    }
    set_has_time_value();
    value_.time_value_ = time_value;
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.time_value)
}
void Any::clear_time_value() {
  if (has_time_value()) {
    delete value_.time_value_;
    clear_has_value();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Any::kHeaderFieldNumber;
const int Any::kTypeFieldNumber;
const int Any::kDoubleValueFieldNumber;
const int Any::kIntValueFieldNumber;
const int Any::kStringValueFieldNumber;
const int Any::kBoolValueFieldNumber;
const int Any::kVector3DValueFieldNumber;
const int Any::kColorValueFieldNumber;
const int Any::kPose3DValueFieldNumber;
const int Any::kQuaternionValueFieldNumber;
const int Any::kTimeValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Any::Any()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fany_2eproto::scc_info_Any.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Any)
}
Any::Any(const Any& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  type_ = from.type_;
  clear_has_value();
  switch (from.value_case()) {
    case kDoubleValue: {
      set_double_value(from.double_value());
      break;
    }
    case kIntValue: {
      set_int_value(from.int_value());
      break;
    }
    case kStringValue: {
      set_string_value(from.string_value());
      break;
    }
    case kBoolValue: {
      set_bool_value(from.bool_value());
      break;
    }
    case kVector3DValue: {
      mutable_vector3d_value()->::gz::msgs::Vector3d::MergeFrom(from.vector3d_value());
      break;
    }
    case kColorValue: {
      mutable_color_value()->::gz::msgs::Color::MergeFrom(from.color_value());
      break;
    }
    case kPose3DValue: {
      mutable_pose3d_value()->::gz::msgs::Pose::MergeFrom(from.pose3d_value());
      break;
    }
    case kQuaternionValue: {
      mutable_quaternion_value()->::gz::msgs::Quaternion::MergeFrom(from.quaternion_value());
      break;
    }
    case kTimeValue: {
      mutable_time_value()->::gz::msgs::Time::MergeFrom(from.time_value());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Any)
}

void Any::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&header_)) + sizeof(type_));
  clear_has_value();
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:gz.msgs.Any)
  SharedDtor();
}

void Any::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (has_value()) {
    clear_value();
  }
}

void Any::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Any::descriptor() {
  ::protobuf_gz_2fmsgs_2fany_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fany_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Any& Any::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fany_2eproto::scc_info_Any.base);
  return *internal_default_instance();
}


void Any::clear_value() {
// @@protoc_insertion_point(one_of_clear_start:gz.msgs.Any)
  switch (value_case()) {
    case kDoubleValue: {
      // No need to clear
      break;
    }
    case kIntValue: {
      // No need to clear
      break;
    }
    case kStringValue: {
      value_.string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kBoolValue: {
      // No need to clear
      break;
    }
    case kVector3DValue: {
      delete value_.vector3d_value_;
      break;
    }
    case kColorValue: {
      delete value_.color_value_;
      break;
    }
    case kPose3DValue: {
      delete value_.pose3d_value_;
      break;
    }
    case kQuaternionValue: {
      delete value_.quaternion_value_;
      break;
    }
    case kTimeValue: {
      delete value_.time_value_;
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VALUE_NOT_SET;
}


void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Any)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  type_ = 0;
  clear_value();
  _internal_metadata_.Clear();
}

bool Any::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Any)
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

      // .gz.msgs.Any.ValueType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::Any_ValueType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double double_value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          clear_value();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &value_.double_value_)));
          set_has_double_value();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 int_value = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          clear_value();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_.int_value_)));
          set_has_int_value();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string string_value = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_string_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->string_value().data(), static_cast<int>(this->string_value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Any.string_value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bool_value = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          clear_value();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &value_.bool_value_)));
          set_has_bool_value();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Vector3d vector3d_value = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_vector3d_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Color color_value = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_color_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose pose3d_value = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose3d_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Quaternion quaternion_value = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_quaternion_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time time_value = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_time_value()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Any)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Any)
  return false;
#undef DO_
}

void Any::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Any)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Any.ValueType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // double double_value = 3;
  if (has_double_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->double_value(), output);
  }

  // int32 int_value = 4;
  if (has_int_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->int_value(), output);
  }

  // string string_value = 5;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), static_cast<int>(this->string_value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Any.string_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->string_value(), output);
  }

  // bool bool_value = 6;
  if (has_bool_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->bool_value(), output);
  }

  // .gz.msgs.Vector3d vector3d_value = 7;
  if (has_vector3d_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_vector3d_value(), output);
  }

  // .gz.msgs.Color color_value = 8;
  if (has_color_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_color_value(), output);
  }

  // .gz.msgs.Pose pose3d_value = 9;
  if (has_pose3d_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->_internal_pose3d_value(), output);
  }

  // .gz.msgs.Quaternion quaternion_value = 10;
  if (has_quaternion_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->_internal_quaternion_value(), output);
  }

  // .gz.msgs.Time time_value = 11;
  if (has_time_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->_internal_time_value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Any)
}

::google::protobuf::uint8* Any::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Any)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Any.ValueType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // double double_value = 3;
  if (has_double_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->double_value(), target);
  }

  // int32 int_value = 4;
  if (has_int_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->int_value(), target);
  }

  // string string_value = 5;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), static_cast<int>(this->string_value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Any.string_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->string_value(), target);
  }

  // bool bool_value = 6;
  if (has_bool_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->bool_value(), target);
  }

  // .gz.msgs.Vector3d vector3d_value = 7;
  if (has_vector3d_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_vector3d_value(), deterministic, target);
  }

  // .gz.msgs.Color color_value = 8;
  if (has_color_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_color_value(), deterministic, target);
  }

  // .gz.msgs.Pose pose3d_value = 9;
  if (has_pose3d_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->_internal_pose3d_value(), deterministic, target);
  }

  // .gz.msgs.Quaternion quaternion_value = 10;
  if (has_quaternion_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, this->_internal_quaternion_value(), deterministic, target);
  }

  // .gz.msgs.Time time_value = 11;
  if (has_time_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        11, this->_internal_time_value(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Any)
  return target;
}

size_t Any::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Any)
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

  // .gz.msgs.Any.ValueType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  switch (value_case()) {
    // double double_value = 3;
    case kDoubleValue: {
      total_size += 1 + 8;
      break;
    }
    // int32 int_value = 4;
    case kIntValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->int_value());
      break;
    }
    // string string_value = 5;
    case kStringValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->string_value());
      break;
    }
    // bool bool_value = 6;
    case kBoolValue: {
      total_size += 1 + 1;
      break;
    }
    // .gz.msgs.Vector3d vector3d_value = 7;
    case kVector3DValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *value_.vector3d_value_);
      break;
    }
    // .gz.msgs.Color color_value = 8;
    case kColorValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *value_.color_value_);
      break;
    }
    // .gz.msgs.Pose pose3d_value = 9;
    case kPose3DValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *value_.pose3d_value_);
      break;
    }
    // .gz.msgs.Quaternion quaternion_value = 10;
    case kQuaternionValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *value_.quaternion_value_);
      break;
    }
    // .gz.msgs.Time time_value = 11;
    case kTimeValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *value_.time_value_);
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Any::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Any)
  GOOGLE_DCHECK_NE(&from, this);
  const Any* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Any>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Any)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Any)
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Any)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  switch (from.value_case()) {
    case kDoubleValue: {
      set_double_value(from.double_value());
      break;
    }
    case kIntValue: {
      set_int_value(from.int_value());
      break;
    }
    case kStringValue: {
      set_string_value(from.string_value());
      break;
    }
    case kBoolValue: {
      set_bool_value(from.bool_value());
      break;
    }
    case kVector3DValue: {
      mutable_vector3d_value()->::gz::msgs::Vector3d::MergeFrom(from.vector3d_value());
      break;
    }
    case kColorValue: {
      mutable_color_value()->::gz::msgs::Color::MergeFrom(from.color_value());
      break;
    }
    case kPose3DValue: {
      mutable_pose3d_value()->::gz::msgs::Pose::MergeFrom(from.pose3d_value());
      break;
    }
    case kQuaternionValue: {
      mutable_quaternion_value()->::gz::msgs::Quaternion::MergeFrom(from.quaternion_value());
      break;
    }
    case kTimeValue: {
      mutable_time_value()->::gz::msgs::Time::MergeFrom(from.time_value());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
}

void Any::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {
  return true;
}

void Any::Swap(Any* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Any::InternalSwap(Any* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(type_, other->type_);
  swap(value_, other->value_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Any::GetMetadata() const {
  protobuf_gz_2fmsgs_2fany_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fany_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Any* Arena::CreateMaybeMessage< ::gz::msgs::Any >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Any >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
