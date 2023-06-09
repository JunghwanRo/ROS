// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/lens.proto

#include "gz/msgs/lens.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Lens", Lens)
// @@protoc_insertion_point(includes)

namespace gz {
namespace msgs {
class LensDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Lens>
      _instance;
} _Lens_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2flens_2eproto {
static void InitDefaultsLens() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Lens_default_instance_;
    new (ptr) ::gz::msgs::Lens();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Lens::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<0> scc_info_Lens =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLens}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Lens.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, scale_to_hfov_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, c1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, c2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, c3_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, focal_length_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, function_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, cutoff_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, environment_texture_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, intrinsics_fx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, intrinsics_fy_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, intrinsics_cx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, intrinsics_cy_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Lens, intrinsics_skew_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Lens)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Lens_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/lens.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\022gz/msgs/lens.proto\022\007gz.msgs\"\247\004\n\004Lens\022 "
      "\n\004type\030\001 \001(\0162\022.gz.msgs.Lens.Type\022\025\n\rscal"
      "e_to_hfov\030\002 \001(\010\022\n\n\002c1\030\003 \001(\001\022\n\n\002c2\030\004 \001(\001\022"
      "\n\n\002c3\030\005 \001(\001\022\024\n\014focal_length\030\006 \001(\001\0221\n\rfun"
      "ction_type\030\007 \001(\0162\032.gz.msgs.Lens.Function"
      "Type\022\024\n\014cutoff_angle\030\010 \001(\001\022 \n\030environmen"
      "t_texture_size\030\t \001(\005\022\025\n\rintrinsics_fx\030\n "
      "\001(\001\022\025\n\rintrinsics_fy\030\013 \001(\001\022\025\n\rintrinsics"
      "_cx\030\014 \001(\001\022\025\n\rintrinsics_cy\030\r \001(\001\022\027\n\017intr"
      "insics_skew\030\016 \001(\001\"\205\001\n\004Type\022\026\n\022TYPE_NOT_S"
      "PECIFIED\020\000\022\016\n\nGNOMONICAL\020\001\022\021\n\rSTEREOGRAP"
      "HIC\020\002\022\017\n\013EQUIDISTANT\020\003\022\023\n\017EQUISOLID_ANGL"
      "E\020\004\022\020\n\014ORTHOGRAPHIC\020\005\022\n\n\006CUSTOM\020\006\"D\n\014Fun"
      "ctionType\022\032\n\026FUNCTION_NOT_SPECIFIED\020\000\022\007\n"
      "\003SIN\020\001\022\007\n\003TAN\020\002\022\006\n\002ID\020\003B\031\n\013com.gz.msgsB\n"
      "LensProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 618);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/lens.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2flens_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* Lens_Type_descriptor() {
  protobuf_gz_2fmsgs_2flens_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2flens_2eproto::file_level_enum_descriptors[0];
}
bool Lens_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Lens_Type Lens::TYPE_NOT_SPECIFIED;
const Lens_Type Lens::GNOMONICAL;
const Lens_Type Lens::STEREOGRAPHIC;
const Lens_Type Lens::EQUIDISTANT;
const Lens_Type Lens::EQUISOLID_ANGLE;
const Lens_Type Lens::ORTHOGRAPHIC;
const Lens_Type Lens::CUSTOM;
const Lens_Type Lens::Type_MIN;
const Lens_Type Lens::Type_MAX;
const int Lens::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* Lens_FunctionType_descriptor() {
  protobuf_gz_2fmsgs_2flens_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2flens_2eproto::file_level_enum_descriptors[1];
}
bool Lens_FunctionType_IsValid(int value) {
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
const Lens_FunctionType Lens::FUNCTION_NOT_SPECIFIED;
const Lens_FunctionType Lens::SIN;
const Lens_FunctionType Lens::TAN;
const Lens_FunctionType Lens::ID;
const Lens_FunctionType Lens::FunctionType_MIN;
const Lens_FunctionType Lens::FunctionType_MAX;
const int Lens::FunctionType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Lens::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Lens::kTypeFieldNumber;
const int Lens::kScaleToHfovFieldNumber;
const int Lens::kC1FieldNumber;
const int Lens::kC2FieldNumber;
const int Lens::kC3FieldNumber;
const int Lens::kFocalLengthFieldNumber;
const int Lens::kFunctionTypeFieldNumber;
const int Lens::kCutoffAngleFieldNumber;
const int Lens::kEnvironmentTextureSizeFieldNumber;
const int Lens::kIntrinsicsFxFieldNumber;
const int Lens::kIntrinsicsFyFieldNumber;
const int Lens::kIntrinsicsCxFieldNumber;
const int Lens::kIntrinsicsCyFieldNumber;
const int Lens::kIntrinsicsSkewFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Lens::Lens()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2flens_2eproto::scc_info_Lens.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Lens)
}
Lens::Lens(const Lens& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&intrinsics_skew_) -
    reinterpret_cast<char*>(&type_)) + sizeof(intrinsics_skew_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Lens)
}

void Lens::SharedCtor() {
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&intrinsics_skew_) -
      reinterpret_cast<char*>(&type_)) + sizeof(intrinsics_skew_));
}

Lens::~Lens() {
  // @@protoc_insertion_point(destructor:gz.msgs.Lens)
  SharedDtor();
}

void Lens::SharedDtor() {
}

void Lens::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Lens::descriptor() {
  ::protobuf_gz_2fmsgs_2flens_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flens_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Lens& Lens::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2flens_2eproto::scc_info_Lens.base);
  return *internal_default_instance();
}


void Lens::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Lens)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&intrinsics_skew_) -
      reinterpret_cast<char*>(&type_)) + sizeof(intrinsics_skew_));
  _internal_metadata_.Clear();
}

bool Lens::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Lens)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Lens.Type type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::Lens_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool scale_to_hfov = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &scale_to_hfov_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double c1 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &c1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double c2 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &c2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double c3 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &c3_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double focal_length = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &focal_length_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Lens.FunctionType function_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_function_type(static_cast< ::gz::msgs::Lens_FunctionType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double cutoff_angle = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &cutoff_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 environment_texture_size = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &environment_texture_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double intrinsics_fx = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(81u /* 81 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &intrinsics_fx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double intrinsics_fy = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(89u /* 89 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &intrinsics_fy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double intrinsics_cx = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(97u /* 97 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &intrinsics_cx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double intrinsics_cy = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(105u /* 105 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &intrinsics_cy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double intrinsics_skew = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(113u /* 113 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &intrinsics_skew_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Lens)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Lens)
  return false;
#undef DO_
}

void Lens::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Lens)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Lens.Type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // bool scale_to_hfov = 2;
  if (this->scale_to_hfov() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->scale_to_hfov(), output);
  }

  // double c1 = 3;
  if (this->c1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->c1(), output);
  }

  // double c2 = 4;
  if (this->c2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->c2(), output);
  }

  // double c3 = 5;
  if (this->c3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->c3(), output);
  }

  // double focal_length = 6;
  if (this->focal_length() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->focal_length(), output);
  }

  // .gz.msgs.Lens.FunctionType function_type = 7;
  if (this->function_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->function_type(), output);
  }

  // double cutoff_angle = 8;
  if (this->cutoff_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->cutoff_angle(), output);
  }

  // int32 environment_texture_size = 9;
  if (this->environment_texture_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->environment_texture_size(), output);
  }

  // double intrinsics_fx = 10;
  if (this->intrinsics_fx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->intrinsics_fx(), output);
  }

  // double intrinsics_fy = 11;
  if (this->intrinsics_fy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->intrinsics_fy(), output);
  }

  // double intrinsics_cx = 12;
  if (this->intrinsics_cx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->intrinsics_cx(), output);
  }

  // double intrinsics_cy = 13;
  if (this->intrinsics_cy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(13, this->intrinsics_cy(), output);
  }

  // double intrinsics_skew = 14;
  if (this->intrinsics_skew() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(14, this->intrinsics_skew(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Lens)
}

::google::protobuf::uint8* Lens::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Lens)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Lens.Type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // bool scale_to_hfov = 2;
  if (this->scale_to_hfov() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->scale_to_hfov(), target);
  }

  // double c1 = 3;
  if (this->c1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->c1(), target);
  }

  // double c2 = 4;
  if (this->c2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->c2(), target);
  }

  // double c3 = 5;
  if (this->c3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->c3(), target);
  }

  // double focal_length = 6;
  if (this->focal_length() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->focal_length(), target);
  }

  // .gz.msgs.Lens.FunctionType function_type = 7;
  if (this->function_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->function_type(), target);
  }

  // double cutoff_angle = 8;
  if (this->cutoff_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->cutoff_angle(), target);
  }

  // int32 environment_texture_size = 9;
  if (this->environment_texture_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->environment_texture_size(), target);
  }

  // double intrinsics_fx = 10;
  if (this->intrinsics_fx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->intrinsics_fx(), target);
  }

  // double intrinsics_fy = 11;
  if (this->intrinsics_fy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->intrinsics_fy(), target);
  }

  // double intrinsics_cx = 12;
  if (this->intrinsics_cx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->intrinsics_cx(), target);
  }

  // double intrinsics_cy = 13;
  if (this->intrinsics_cy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(13, this->intrinsics_cy(), target);
  }

  // double intrinsics_skew = 14;
  if (this->intrinsics_skew() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(14, this->intrinsics_skew(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Lens)
  return target;
}

size_t Lens::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Lens)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.Lens.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // bool scale_to_hfov = 2;
  if (this->scale_to_hfov() != 0) {
    total_size += 1 + 1;
  }

  // double c1 = 3;
  if (this->c1() != 0) {
    total_size += 1 + 8;
  }

  // double c2 = 4;
  if (this->c2() != 0) {
    total_size += 1 + 8;
  }

  // double c3 = 5;
  if (this->c3() != 0) {
    total_size += 1 + 8;
  }

  // double focal_length = 6;
  if (this->focal_length() != 0) {
    total_size += 1 + 8;
  }

  // double cutoff_angle = 8;
  if (this->cutoff_angle() != 0) {
    total_size += 1 + 8;
  }

  // .gz.msgs.Lens.FunctionType function_type = 7;
  if (this->function_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->function_type());
  }

  // int32 environment_texture_size = 9;
  if (this->environment_texture_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->environment_texture_size());
  }

  // double intrinsics_fx = 10;
  if (this->intrinsics_fx() != 0) {
    total_size += 1 + 8;
  }

  // double intrinsics_fy = 11;
  if (this->intrinsics_fy() != 0) {
    total_size += 1 + 8;
  }

  // double intrinsics_cx = 12;
  if (this->intrinsics_cx() != 0) {
    total_size += 1 + 8;
  }

  // double intrinsics_cy = 13;
  if (this->intrinsics_cy() != 0) {
    total_size += 1 + 8;
  }

  // double intrinsics_skew = 14;
  if (this->intrinsics_skew() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Lens::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Lens)
  GOOGLE_DCHECK_NE(&from, this);
  const Lens* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Lens>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Lens)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Lens)
    MergeFrom(*source);
  }
}

void Lens::MergeFrom(const Lens& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Lens)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.scale_to_hfov() != 0) {
    set_scale_to_hfov(from.scale_to_hfov());
  }
  if (from.c1() != 0) {
    set_c1(from.c1());
  }
  if (from.c2() != 0) {
    set_c2(from.c2());
  }
  if (from.c3() != 0) {
    set_c3(from.c3());
  }
  if (from.focal_length() != 0) {
    set_focal_length(from.focal_length());
  }
  if (from.cutoff_angle() != 0) {
    set_cutoff_angle(from.cutoff_angle());
  }
  if (from.function_type() != 0) {
    set_function_type(from.function_type());
  }
  if (from.environment_texture_size() != 0) {
    set_environment_texture_size(from.environment_texture_size());
  }
  if (from.intrinsics_fx() != 0) {
    set_intrinsics_fx(from.intrinsics_fx());
  }
  if (from.intrinsics_fy() != 0) {
    set_intrinsics_fy(from.intrinsics_fy());
  }
  if (from.intrinsics_cx() != 0) {
    set_intrinsics_cx(from.intrinsics_cx());
  }
  if (from.intrinsics_cy() != 0) {
    set_intrinsics_cy(from.intrinsics_cy());
  }
  if (from.intrinsics_skew() != 0) {
    set_intrinsics_skew(from.intrinsics_skew());
  }
}

void Lens::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Lens)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Lens::CopyFrom(const Lens& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Lens)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Lens::IsInitialized() const {
  return true;
}

void Lens::Swap(Lens* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Lens::InternalSwap(Lens* other) {
  using std::swap;
  swap(type_, other->type_);
  swap(scale_to_hfov_, other->scale_to_hfov_);
  swap(c1_, other->c1_);
  swap(c2_, other->c2_);
  swap(c3_, other->c3_);
  swap(focal_length_, other->focal_length_);
  swap(cutoff_angle_, other->cutoff_angle_);
  swap(function_type_, other->function_type_);
  swap(environment_texture_size_, other->environment_texture_size_);
  swap(intrinsics_fx_, other->intrinsics_fx_);
  swap(intrinsics_fy_, other->intrinsics_fy_);
  swap(intrinsics_cx_, other->intrinsics_cx_);
  swap(intrinsics_cy_, other->intrinsics_cy_);
  swap(intrinsics_skew_, other->intrinsics_skew_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Lens::GetMetadata() const {
  protobuf_gz_2fmsgs_2flens_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flens_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Lens* Arena::CreateMaybeMessage< ::gz::msgs::Lens >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Lens >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
