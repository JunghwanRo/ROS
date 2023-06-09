// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/entity.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fentity_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fentity_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fentity_2eproto
namespace gz {
namespace msgs {
class Entity;
class EntityDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern EntityDefaultTypeInternal _Entity_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Entity* Arena::CreateMaybeMessage<::gz::msgs::Entity>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Entity_Type {
  Entity_Type_NONE = 0,
  Entity_Type_LIGHT = 1,
  Entity_Type_MODEL = 2,
  Entity_Type_LINK = 3,
  Entity_Type_VISUAL = 4,
  Entity_Type_COLLISION = 5,
  Entity_Type_SENSOR = 6,
  Entity_Type_JOINT = 7,
  Entity_Type_ACTOR = 8,
  Entity_Type_WORLD = 9,
  Entity_Type_Entity_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Entity_Type_Entity_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Entity_Type_IsValid(int value);
const Entity_Type Entity_Type_Type_MIN = Entity_Type_NONE;
const Entity_Type Entity_Type_Type_MAX = Entity_Type_WORLD;
const int Entity_Type_Type_ARRAYSIZE = Entity_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Entity_Type_descriptor();
inline const ::std::string& Entity_Type_Name(Entity_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Entity_Type_descriptor(), value);
}
inline bool Entity_Type_Parse(
    const ::std::string& name, Entity_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Entity_Type>(
    Entity_Type_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Entity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Entity) */ {
 public:
  Entity();
  virtual ~Entity();

  Entity(const Entity& from);

  inline Entity& operator=(const Entity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Entity(Entity&& from) noexcept
    : Entity() {
    *this = ::std::move(from);
  }

  inline Entity& operator=(Entity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Entity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Entity* internal_default_instance() {
    return reinterpret_cast<const Entity*>(
               &_Entity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Entity* other);
  friend void swap(Entity& a, Entity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Entity* New() const final {
    return CreateMaybeMessage<Entity>(NULL);
  }

  Entity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Entity>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Entity& from);
  void MergeFrom(const Entity& from);
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
  void InternalSwap(Entity* other);
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

  typedef Entity_Type Type;
  static const Type NONE =
    Entity_Type_NONE;
  static const Type LIGHT =
    Entity_Type_LIGHT;
  static const Type MODEL =
    Entity_Type_MODEL;
  static const Type LINK =
    Entity_Type_LINK;
  static const Type VISUAL =
    Entity_Type_VISUAL;
  static const Type COLLISION =
    Entity_Type_COLLISION;
  static const Type SENSOR =
    Entity_Type_SENSOR;
  static const Type JOINT =
    Entity_Type_JOINT;
  static const Type ACTOR =
    Entity_Type_ACTOR;
  static const Type WORLD =
    Entity_Type_WORLD;
  static inline bool Type_IsValid(int value) {
    return Entity_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Entity_Type_Type_MIN;
  static const Type Type_MAX =
    Entity_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Entity_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Entity_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Entity_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Entity_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

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

  // uint64 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // .gz.msgs.Entity.Type type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::gz::msgs::Entity_Type type() const;
  void set_type(::gz::msgs::Entity_Type value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Entity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::gz::msgs::Header* header_;
  ::google::protobuf::uint64 id_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fentity_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Entity

// .gz.msgs.Header header = 1;
inline bool Entity::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Entity::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Entity::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Entity.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Entity::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Entity.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Entity::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Entity.header)
  return header_;
}
inline void Entity::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Entity.header)
}

// uint64 id = 2;
inline void Entity::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Entity::id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Entity.id)
  return id_;
}
inline void Entity::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Entity.id)
}

// string name = 3;
inline void Entity::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Entity::name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Entity.name)
  return name_.GetNoArena();
}
inline void Entity::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Entity.name)
}
#if LANG_CXX11
inline void Entity::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Entity.name)
}
#endif
inline void Entity::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Entity.name)
}
inline void Entity::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Entity.name)
}
inline ::std::string* Entity::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Entity.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Entity::release_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.Entity.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Entity::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Entity.name)
}

// .gz.msgs.Entity.Type type = 4;
inline void Entity::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Entity_Type Entity::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Entity.type)
  return static_cast< ::gz::msgs::Entity_Type >(type_);
}
inline void Entity::set_type(::gz::msgs::Entity_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Entity.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Entity_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Entity_Type>() {
  return ::gz::msgs::Entity_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_2eproto
