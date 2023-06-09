// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/contact.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fcontact_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fcontact_2eproto

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
#include "gz/msgs/entity.pb.h"
#include "gz/msgs/vector3d.pb.h"
#include "gz/msgs/joint_wrench.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fcontact_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fcontact_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fcontact_2eproto
namespace gz {
namespace msgs {
class Contact;
class ContactDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ContactDefaultTypeInternal _Contact_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Contact* Arena::CreateMaybeMessage<::gz::msgs::Contact>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Contact : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Contact) */ {
 public:
  Contact();
  virtual ~Contact();

  Contact(const Contact& from);

  inline Contact& operator=(const Contact& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Contact(Contact&& from) noexcept
    : Contact() {
    *this = ::std::move(from);
  }

  inline Contact& operator=(Contact&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Contact& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Contact* internal_default_instance() {
    return reinterpret_cast<const Contact*>(
               &_Contact_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Contact* other);
  friend void swap(Contact& a, Contact& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Contact* New() const final {
    return CreateMaybeMessage<Contact>(NULL);
  }

  Contact* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Contact>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Contact& from);
  void MergeFrom(const Contact& from);
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
  void InternalSwap(Contact* other);
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

  // repeated .gz.msgs.Vector3d position = 4;
  int position_size() const;
  void clear_position();
  static const int kPositionFieldNumber = 4;
  ::gz::msgs::Vector3d* mutable_position(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
      mutable_position();
  const ::gz::msgs::Vector3d& position(int index) const;
  ::gz::msgs::Vector3d* add_position();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
      position() const;

  // repeated .gz.msgs.Vector3d normal = 5;
  int normal_size() const;
  void clear_normal();
  static const int kNormalFieldNumber = 5;
  ::gz::msgs::Vector3d* mutable_normal(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
      mutable_normal();
  const ::gz::msgs::Vector3d& normal(int index) const;
  ::gz::msgs::Vector3d* add_normal();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
      normal() const;

  // repeated double depth = 6;
  int depth_size() const;
  void clear_depth();
  static const int kDepthFieldNumber = 6;
  double depth(int index) const;
  void set_depth(int index, double value);
  void add_depth(double value);
  const ::google::protobuf::RepeatedField< double >&
      depth() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_depth();

  // repeated .gz.msgs.JointWrench wrench = 7;
  int wrench_size() const;
  void clear_wrench();
  static const int kWrenchFieldNumber = 7;
  ::gz::msgs::JointWrench* mutable_wrench(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointWrench >*
      mutable_wrench();
  const ::gz::msgs::JointWrench& wrench(int index) const;
  ::gz::msgs::JointWrench* add_wrench();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointWrench >&
      wrench() const;

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

  // .gz.msgs.Entity collision1 = 2;
  bool has_collision1() const;
  void clear_collision1();
  static const int kCollision1FieldNumber = 2;
  private:
  const ::gz::msgs::Entity& _internal_collision1() const;
  public:
  const ::gz::msgs::Entity& collision1() const;
  ::gz::msgs::Entity* release_collision1();
  ::gz::msgs::Entity* mutable_collision1();
  void set_allocated_collision1(::gz::msgs::Entity* collision1);

  // .gz.msgs.Entity collision2 = 3;
  bool has_collision2() const;
  void clear_collision2();
  static const int kCollision2FieldNumber = 3;
  private:
  const ::gz::msgs::Entity& _internal_collision2() const;
  public:
  const ::gz::msgs::Entity& collision2() const;
  ::gz::msgs::Entity* release_collision2();
  ::gz::msgs::Entity* mutable_collision2();
  void set_allocated_collision2(::gz::msgs::Entity* collision2);

  // .gz.msgs.Entity world = 8;
  bool has_world() const;
  void clear_world();
  static const int kWorldFieldNumber = 8;
  private:
  const ::gz::msgs::Entity& _internal_world() const;
  public:
  const ::gz::msgs::Entity& world() const;
  ::gz::msgs::Entity* release_world();
  ::gz::msgs::Entity* mutable_world();
  void set_allocated_world(::gz::msgs::Entity* world);

  // @@protoc_insertion_point(class_scope:gz.msgs.Contact)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d > position_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d > normal_;
  ::google::protobuf::RepeatedField< double > depth_;
  mutable int _depth_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointWrench > wrench_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Entity* collision1_;
  ::gz::msgs::Entity* collision2_;
  ::gz::msgs::Entity* world_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fcontact_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Contact

// .gz.msgs.Header header = 1;
inline bool Contact::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Contact::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Contact::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Contact::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Contact.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Contact::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.header)
  return header_;
}
inline void Contact::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Contact.header)
}

// .gz.msgs.Entity collision1 = 2;
inline bool Contact::has_collision1() const {
  return this != internal_default_instance() && collision1_ != NULL;
}
inline const ::gz::msgs::Entity& Contact::_internal_collision1() const {
  return *collision1_;
}
inline const ::gz::msgs::Entity& Contact::collision1() const {
  const ::gz::msgs::Entity* p = collision1_;
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.collision1)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Entity*>(
      &::gz::msgs::_Entity_default_instance_);
}
inline ::gz::msgs::Entity* Contact::release_collision1() {
  // @@protoc_insertion_point(field_release:gz.msgs.Contact.collision1)
  
  ::gz::msgs::Entity* temp = collision1_;
  collision1_ = NULL;
  return temp;
}
inline ::gz::msgs::Entity* Contact::mutable_collision1() {
  
  if (collision1_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Entity>(GetArenaNoVirtual());
    collision1_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.collision1)
  return collision1_;
}
inline void Contact::set_allocated_collision1(::gz::msgs::Entity* collision1) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(collision1_);
  }
  if (collision1) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      collision1 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, collision1, submessage_arena);
    }
    
  } else {
    
  }
  collision1_ = collision1;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Contact.collision1)
}

// .gz.msgs.Entity collision2 = 3;
inline bool Contact::has_collision2() const {
  return this != internal_default_instance() && collision2_ != NULL;
}
inline const ::gz::msgs::Entity& Contact::_internal_collision2() const {
  return *collision2_;
}
inline const ::gz::msgs::Entity& Contact::collision2() const {
  const ::gz::msgs::Entity* p = collision2_;
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.collision2)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Entity*>(
      &::gz::msgs::_Entity_default_instance_);
}
inline ::gz::msgs::Entity* Contact::release_collision2() {
  // @@protoc_insertion_point(field_release:gz.msgs.Contact.collision2)
  
  ::gz::msgs::Entity* temp = collision2_;
  collision2_ = NULL;
  return temp;
}
inline ::gz::msgs::Entity* Contact::mutable_collision2() {
  
  if (collision2_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Entity>(GetArenaNoVirtual());
    collision2_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.collision2)
  return collision2_;
}
inline void Contact::set_allocated_collision2(::gz::msgs::Entity* collision2) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(collision2_);
  }
  if (collision2) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      collision2 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, collision2, submessage_arena);
    }
    
  } else {
    
  }
  collision2_ = collision2;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Contact.collision2)
}

// repeated .gz.msgs.Vector3d position = 4;
inline int Contact::position_size() const {
  return position_.size();
}
inline ::gz::msgs::Vector3d* Contact::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.position)
  return position_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
Contact::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Contact.position)
  return &position_;
}
inline const ::gz::msgs::Vector3d& Contact::position(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.position)
  return position_.Get(index);
}
inline ::gz::msgs::Vector3d* Contact::add_position() {
  // @@protoc_insertion_point(field_add:gz.msgs.Contact.position)
  return position_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
Contact::position() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Contact.position)
  return position_;
}

// repeated .gz.msgs.Vector3d normal = 5;
inline int Contact::normal_size() const {
  return normal_.size();
}
inline ::gz::msgs::Vector3d* Contact::mutable_normal(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.normal)
  return normal_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
Contact::mutable_normal() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Contact.normal)
  return &normal_;
}
inline const ::gz::msgs::Vector3d& Contact::normal(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.normal)
  return normal_.Get(index);
}
inline ::gz::msgs::Vector3d* Contact::add_normal() {
  // @@protoc_insertion_point(field_add:gz.msgs.Contact.normal)
  return normal_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
Contact::normal() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Contact.normal)
  return normal_;
}

// repeated double depth = 6;
inline int Contact::depth_size() const {
  return depth_.size();
}
inline void Contact::clear_depth() {
  depth_.Clear();
}
inline double Contact::depth(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.depth)
  return depth_.Get(index);
}
inline void Contact::set_depth(int index, double value) {
  depth_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.Contact.depth)
}
inline void Contact::add_depth(double value) {
  depth_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.Contact.depth)
}
inline const ::google::protobuf::RepeatedField< double >&
Contact::depth() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Contact.depth)
  return depth_;
}
inline ::google::protobuf::RepeatedField< double >*
Contact::mutable_depth() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Contact.depth)
  return &depth_;
}

// repeated .gz.msgs.JointWrench wrench = 7;
inline int Contact::wrench_size() const {
  return wrench_.size();
}
inline ::gz::msgs::JointWrench* Contact::mutable_wrench(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.wrench)
  return wrench_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointWrench >*
Contact::mutable_wrench() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Contact.wrench)
  return &wrench_;
}
inline const ::gz::msgs::JointWrench& Contact::wrench(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.wrench)
  return wrench_.Get(index);
}
inline ::gz::msgs::JointWrench* Contact::add_wrench() {
  // @@protoc_insertion_point(field_add:gz.msgs.Contact.wrench)
  return wrench_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::JointWrench >&
Contact::wrench() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Contact.wrench)
  return wrench_;
}

// .gz.msgs.Entity world = 8;
inline bool Contact::has_world() const {
  return this != internal_default_instance() && world_ != NULL;
}
inline const ::gz::msgs::Entity& Contact::_internal_world() const {
  return *world_;
}
inline const ::gz::msgs::Entity& Contact::world() const {
  const ::gz::msgs::Entity* p = world_;
  // @@protoc_insertion_point(field_get:gz.msgs.Contact.world)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Entity*>(
      &::gz::msgs::_Entity_default_instance_);
}
inline ::gz::msgs::Entity* Contact::release_world() {
  // @@protoc_insertion_point(field_release:gz.msgs.Contact.world)
  
  ::gz::msgs::Entity* temp = world_;
  world_ = NULL;
  return temp;
}
inline ::gz::msgs::Entity* Contact::mutable_world() {
  
  if (world_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Entity>(GetArenaNoVirtual());
    world_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Contact.world)
  return world_;
}
inline void Contact::set_allocated_world(::gz::msgs::Entity* world) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(world_);
  }
  if (world) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      world = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, world, submessage_arena);
    }
    
  } else {
    
  }
  world_ = world;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Contact.world)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fcontact_2eproto
