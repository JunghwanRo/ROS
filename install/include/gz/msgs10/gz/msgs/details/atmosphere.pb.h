// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/atmosphere.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fatmosphere_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fatmosphere_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fatmosphere_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fatmosphere_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2fatmosphere_2eproto
namespace gz {
namespace msgs {
class Atmosphere;
class AtmosphereDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AtmosphereDefaultTypeInternal _Atmosphere_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Atmosphere* Arena::CreateMaybeMessage<::gz::msgs::Atmosphere>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Atmosphere_Type {
  Atmosphere_Type_ADIABATIC = 0,
  Atmosphere_Type_Atmosphere_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Atmosphere_Type_Atmosphere_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Atmosphere_Type_IsValid(int value);
const Atmosphere_Type Atmosphere_Type_Type_MIN = Atmosphere_Type_ADIABATIC;
const Atmosphere_Type Atmosphere_Type_Type_MAX = Atmosphere_Type_ADIABATIC;
const int Atmosphere_Type_Type_ARRAYSIZE = Atmosphere_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Atmosphere_Type_descriptor();
inline const ::std::string& Atmosphere_Type_Name(Atmosphere_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Atmosphere_Type_descriptor(), value);
}
inline bool Atmosphere_Type_Parse(
    const ::std::string& name, Atmosphere_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Atmosphere_Type>(
    Atmosphere_Type_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Atmosphere : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Atmosphere) */ {
 public:
  Atmosphere();
  virtual ~Atmosphere();

  Atmosphere(const Atmosphere& from);

  inline Atmosphere& operator=(const Atmosphere& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Atmosphere(Atmosphere&& from) noexcept
    : Atmosphere() {
    *this = ::std::move(from);
  }

  inline Atmosphere& operator=(Atmosphere&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Atmosphere& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Atmosphere* internal_default_instance() {
    return reinterpret_cast<const Atmosphere*>(
               &_Atmosphere_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Atmosphere* other);
  friend void swap(Atmosphere& a, Atmosphere& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Atmosphere* New() const final {
    return CreateMaybeMessage<Atmosphere>(NULL);
  }

  Atmosphere* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Atmosphere>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Atmosphere& from);
  void MergeFrom(const Atmosphere& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Atmosphere* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Atmosphere_Type Type;
  static const Type ADIABATIC =
    Atmosphere_Type_ADIABATIC;
  static inline bool Type_IsValid(int value) {
    return Atmosphere_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Atmosphere_Type_Type_MIN;
  static const Type Type_MAX =
    Atmosphere_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Atmosphere_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Atmosphere_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Atmosphere_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Atmosphere_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .gz.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::gz::msgs::Header& _internal_header() const;
  public:
  const ::gz::msgs::Header& header() const;
  ::gz::msgs::Header* release_header();
  ::gz::msgs::Header* mutable_header();
  void set_allocated_header(::gz::msgs::Header* header);

  // double temperature = 3;
  void clear_temperature();
  static const int kTemperatureFieldNumber = 3;
  double temperature() const;
  void set_temperature(double value);

  // double pressure = 4;
  void clear_pressure();
  static const int kPressureFieldNumber = 4;
  double pressure() const;
  void set_pressure(double value);

  // .gz.msgs.Atmosphere.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::gz::msgs::Atmosphere_Type type() const;
  void set_type(::gz::msgs::Atmosphere_Type value);

  // bool enable_atmosphere = 6;
  void clear_enable_atmosphere();
  static const int kEnableAtmosphereFieldNumber = 6;
  bool enable_atmosphere() const;
  void set_enable_atmosphere(bool value);

  // double mass_density = 5;
  void clear_mass_density();
  static const int kMassDensityFieldNumber = 5;
  double mass_density() const;
  void set_mass_density(double value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Atmosphere)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  double temperature_;
  double pressure_;
  int type_;
  bool enable_atmosphere_;
  double mass_density_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fatmosphere_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Atmosphere

// .gz.msgs.Header header = 1;
inline bool Atmosphere::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Atmosphere::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Atmosphere::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Atmosphere::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Atmosphere.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Atmosphere::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Atmosphere.header)
  return header_;
}
inline void Atmosphere::set_allocated_header(::gz::msgs::Header* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Atmosphere.header)
}

// .gz.msgs.Atmosphere.Type type = 2;
inline void Atmosphere::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Atmosphere_Type Atmosphere::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.type)
  return static_cast< ::gz::msgs::Atmosphere_Type >(type_);
}
inline void Atmosphere::set_type(::gz::msgs::Atmosphere_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Atmosphere.type)
}

// double temperature = 3;
inline void Atmosphere::clear_temperature() {
  temperature_ = 0;
}
inline double Atmosphere::temperature() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.temperature)
  return temperature_;
}
inline void Atmosphere::set_temperature(double value) {
  
  temperature_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Atmosphere.temperature)
}

// double pressure = 4;
inline void Atmosphere::clear_pressure() {
  pressure_ = 0;
}
inline double Atmosphere::pressure() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.pressure)
  return pressure_;
}
inline void Atmosphere::set_pressure(double value) {
  
  pressure_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Atmosphere.pressure)
}

// double mass_density = 5;
inline void Atmosphere::clear_mass_density() {
  mass_density_ = 0;
}
inline double Atmosphere::mass_density() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.mass_density)
  return mass_density_;
}
inline void Atmosphere::set_mass_density(double value) {
  
  mass_density_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Atmosphere.mass_density)
}

// bool enable_atmosphere = 6;
inline void Atmosphere::clear_enable_atmosphere() {
  enable_atmosphere_ = false;
}
inline bool Atmosphere::enable_atmosphere() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Atmosphere.enable_atmosphere)
  return enable_atmosphere_;
}
inline void Atmosphere::set_enable_atmosphere(bool value) {
  
  enable_atmosphere_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Atmosphere.enable_atmosphere)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Atmosphere_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Atmosphere_Type>() {
  return ::gz::msgs::Atmosphere_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fatmosphere_2eproto
