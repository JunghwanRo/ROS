// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/parameter_error.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fparameter_5ferror_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fparameter_5ferror_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fparameter_5ferror_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fparameter_5ferror_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fparameter_5ferror_2eproto
namespace gz {
namespace msgs {
class ParameterError;
class ParameterErrorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ParameterErrorDefaultTypeInternal _ParameterError_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::ParameterError* Arena::CreateMaybeMessage<::gz::msgs::ParameterError>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum ParameterError_Type {
  ParameterError_Type_SUCCESS = 0,
  ParameterError_Type_ALREADY_DECLARED = 1,
  ParameterError_Type_INVALID_TYPE = 2,
  ParameterError_Type_NOT_DECLARED = 3,
  ParameterError_Type_ParameterError_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ParameterError_Type_ParameterError_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool ParameterError_Type_IsValid(int value);
const ParameterError_Type ParameterError_Type_Type_MIN = ParameterError_Type_SUCCESS;
const ParameterError_Type ParameterError_Type_Type_MAX = ParameterError_Type_NOT_DECLARED;
const int ParameterError_Type_Type_ARRAYSIZE = ParameterError_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* ParameterError_Type_descriptor();
inline const ::std::string& ParameterError_Type_Name(ParameterError_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    ParameterError_Type_descriptor(), value);
}
inline bool ParameterError_Type_Parse(
    const ::std::string& name, ParameterError_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ParameterError_Type>(
    ParameterError_Type_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE ParameterError : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.ParameterError) */ {
 public:
  ParameterError();
  virtual ~ParameterError();

  ParameterError(const ParameterError& from);

  inline ParameterError& operator=(const ParameterError& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ParameterError(ParameterError&& from) noexcept
    : ParameterError() {
    *this = ::std::move(from);
  }

  inline ParameterError& operator=(ParameterError&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ParameterError& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ParameterError* internal_default_instance() {
    return reinterpret_cast<const ParameterError*>(
               &_ParameterError_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ParameterError* other);
  friend void swap(ParameterError& a, ParameterError& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ParameterError* New() const final {
    return CreateMaybeMessage<ParameterError>(NULL);
  }

  ParameterError* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ParameterError>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ParameterError& from);
  void MergeFrom(const ParameterError& from);
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
  void InternalSwap(ParameterError* other);
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

  typedef ParameterError_Type Type;
  static const Type SUCCESS =
    ParameterError_Type_SUCCESS;
  static const Type ALREADY_DECLARED =
    ParameterError_Type_ALREADY_DECLARED;
  static const Type INVALID_TYPE =
    ParameterError_Type_INVALID_TYPE;
  static const Type NOT_DECLARED =
    ParameterError_Type_NOT_DECLARED;
  static inline bool Type_IsValid(int value) {
    return ParameterError_Type_IsValid(value);
  }
  static const Type Type_MIN =
    ParameterError_Type_Type_MIN;
  static const Type Type_MAX =
    ParameterError_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    ParameterError_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return ParameterError_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return ParameterError_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return ParameterError_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .gz.msgs.ParameterError.Type data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  ::gz::msgs::ParameterError_Type data() const;
  void set_data(::gz::msgs::ParameterError_Type value);

  // @@protoc_insertion_point(class_scope:gz.msgs.ParameterError)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int data_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fparameter_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ParameterError

// .gz.msgs.ParameterError.Type data = 1;
inline void ParameterError::clear_data() {
  data_ = 0;
}
inline ::gz::msgs::ParameterError_Type ParameterError::data() const {
  // @@protoc_insertion_point(field_get:gz.msgs.ParameterError.data)
  return static_cast< ::gz::msgs::ParameterError_Type >(data_);
}
inline void ParameterError::set_data(::gz::msgs::ParameterError_Type value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.ParameterError.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::ParameterError_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::ParameterError_Type>() {
  return ::gz::msgs::ParameterError_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fparameter_5ferror_2eproto
