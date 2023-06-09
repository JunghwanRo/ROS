// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/twist_with_covariance.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto

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
#include "gz/msgs/float_v.pb.h"
#include "gz/msgs/twist.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto
namespace gz {
namespace msgs {
class TwistWithCovariance;
class TwistWithCovarianceDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern TwistWithCovarianceDefaultTypeInternal _TwistWithCovariance_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::TwistWithCovariance* Arena::CreateMaybeMessage<::gz::msgs::TwistWithCovariance>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE TwistWithCovariance : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.TwistWithCovariance) */ {
 public:
  TwistWithCovariance();
  virtual ~TwistWithCovariance();

  TwistWithCovariance(const TwistWithCovariance& from);

  inline TwistWithCovariance& operator=(const TwistWithCovariance& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TwistWithCovariance(TwistWithCovariance&& from) noexcept
    : TwistWithCovariance() {
    *this = ::std::move(from);
  }

  inline TwistWithCovariance& operator=(TwistWithCovariance&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TwistWithCovariance& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TwistWithCovariance* internal_default_instance() {
    return reinterpret_cast<const TwistWithCovariance*>(
               &_TwistWithCovariance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TwistWithCovariance* other);
  friend void swap(TwistWithCovariance& a, TwistWithCovariance& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TwistWithCovariance* New() const final {
    return CreateMaybeMessage<TwistWithCovariance>(NULL);
  }

  TwistWithCovariance* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TwistWithCovariance>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TwistWithCovariance& from);
  void MergeFrom(const TwistWithCovariance& from);
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
  void InternalSwap(TwistWithCovariance* other);
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

  // .gz.msgs.Twist twist = 1;
  bool has_twist() const;
  void clear_twist();
  static const int kTwistFieldNumber = 1;
  private:
  const ::gz::msgs::Twist& _internal_twist() const;
  public:
  const ::gz::msgs::Twist& twist() const;
  ::gz::msgs::Twist* release_twist();
  ::gz::msgs::Twist* mutable_twist();
  void set_allocated_twist(::gz::msgs::Twist* twist);

  // .gz.msgs.Float_V covariance = 2;
  bool has_covariance() const;
  void clear_covariance();
  static const int kCovarianceFieldNumber = 2;
  private:
  const ::gz::msgs::Float_V& _internal_covariance() const;
  public:
  const ::gz::msgs::Float_V& covariance() const;
  ::gz::msgs::Float_V* release_covariance();
  ::gz::msgs::Float_V* mutable_covariance();
  void set_allocated_covariance(::gz::msgs::Float_V* covariance);

  // @@protoc_insertion_point(class_scope:gz.msgs.TwistWithCovariance)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Twist* twist_;
  ::gz::msgs::Float_V* covariance_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TwistWithCovariance

// .gz.msgs.Twist twist = 1;
inline bool TwistWithCovariance::has_twist() const {
  return this != internal_default_instance() && twist_ != NULL;
}
inline const ::gz::msgs::Twist& TwistWithCovariance::_internal_twist() const {
  return *twist_;
}
inline const ::gz::msgs::Twist& TwistWithCovariance::twist() const {
  const ::gz::msgs::Twist* p = twist_;
  // @@protoc_insertion_point(field_get:gz.msgs.TwistWithCovariance.twist)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Twist*>(
      &::gz::msgs::_Twist_default_instance_);
}
inline ::gz::msgs::Twist* TwistWithCovariance::release_twist() {
  // @@protoc_insertion_point(field_release:gz.msgs.TwistWithCovariance.twist)
  
  ::gz::msgs::Twist* temp = twist_;
  twist_ = NULL;
  return temp;
}
inline ::gz::msgs::Twist* TwistWithCovariance::mutable_twist() {
  
  if (twist_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Twist>(GetArenaNoVirtual());
    twist_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.TwistWithCovariance.twist)
  return twist_;
}
inline void TwistWithCovariance::set_allocated_twist(::gz::msgs::Twist* twist) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(twist_);
  }
  if (twist) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      twist = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, twist, submessage_arena);
    }
    
  } else {
    
  }
  twist_ = twist;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.TwistWithCovariance.twist)
}

// .gz.msgs.Float_V covariance = 2;
inline bool TwistWithCovariance::has_covariance() const {
  return this != internal_default_instance() && covariance_ != NULL;
}
inline const ::gz::msgs::Float_V& TwistWithCovariance::_internal_covariance() const {
  return *covariance_;
}
inline const ::gz::msgs::Float_V& TwistWithCovariance::covariance() const {
  const ::gz::msgs::Float_V* p = covariance_;
  // @@protoc_insertion_point(field_get:gz.msgs.TwistWithCovariance.covariance)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Float_V*>(
      &::gz::msgs::_Float_V_default_instance_);
}
inline ::gz::msgs::Float_V* TwistWithCovariance::release_covariance() {
  // @@protoc_insertion_point(field_release:gz.msgs.TwistWithCovariance.covariance)
  
  ::gz::msgs::Float_V* temp = covariance_;
  covariance_ = NULL;
  return temp;
}
inline ::gz::msgs::Float_V* TwistWithCovariance::mutable_covariance() {
  
  if (covariance_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Float_V>(GetArenaNoVirtual());
    covariance_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.TwistWithCovariance.covariance)
  return covariance_;
}
inline void TwistWithCovariance::set_allocated_covariance(::gz::msgs::Float_V* covariance) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(covariance_);
  }
  if (covariance) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      covariance = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, covariance, submessage_arena);
    }
    
  } else {
    
  }
  covariance_ = covariance;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.TwistWithCovariance.covariance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2ftwist_5fwith_5fcovariance_2eproto
