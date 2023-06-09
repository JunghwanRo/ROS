// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/double_v.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fdouble_5fv_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fdouble_5fv_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdouble_5fv_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fdouble_5fv_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fdouble_5fv_2eproto
namespace gz {
namespace msgs {
class Double_V;
class Double_VDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Double_VDefaultTypeInternal _Double_V_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Double_V* Arena::CreateMaybeMessage<::gz::msgs::Double_V>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Double_V : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Double_V) */ {
 public:
  Double_V();
  virtual ~Double_V();

  Double_V(const Double_V& from);

  inline Double_V& operator=(const Double_V& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Double_V(Double_V&& from) noexcept
    : Double_V() {
    *this = ::std::move(from);
  }

  inline Double_V& operator=(Double_V&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Double_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Double_V* internal_default_instance() {
    return reinterpret_cast<const Double_V*>(
               &_Double_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Double_V* other);
  friend void swap(Double_V& a, Double_V& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Double_V* New() const final {
    return CreateMaybeMessage<Double_V>(NULL);
  }

  Double_V* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Double_V>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Double_V& from);
  void MergeFrom(const Double_V& from);
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
  void InternalSwap(Double_V* other);
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

  // accessors -------------------------------------------------------

  // repeated double data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  double data(int index) const;
  void set_data(int index, double value);
  void add_data(double value);
  const ::google::protobuf::RepeatedField< double >&
      data() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:gz.msgs.Double_V)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< double > data_;
  mutable int _data_cached_byte_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fdouble_5fv_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Double_V

// repeated double data = 1;
inline int Double_V::data_size() const {
  return data_.size();
}
inline void Double_V::clear_data() {
  data_.Clear();
}
inline double Double_V::data(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Double_V.data)
  return data_.Get(index);
}
inline void Double_V::set_data(int index, double value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.Double_V.data)
}
inline void Double_V::add_data(double value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.Double_V.data)
}
inline const ::google::protobuf::RepeatedField< double >&
Double_V::data() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Double_V.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< double >*
Double_V::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Double_V.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fdouble_5fv_2eproto
