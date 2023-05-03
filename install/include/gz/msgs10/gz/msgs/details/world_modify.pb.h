// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/world_modify.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fworld_5fmodify_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fworld_5fmodify_2eproto

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
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fworld_5fmodify_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fworld_5fmodify_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fworld_5fmodify_2eproto
namespace gz {
namespace msgs {
class WorldModify;
class WorldModifyDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern WorldModifyDefaultTypeInternal _WorldModify_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::WorldModify* Arena::CreateMaybeMessage<::gz::msgs::WorldModify>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE WorldModify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.WorldModify) */ {
 public:
  WorldModify();
  virtual ~WorldModify();

  WorldModify(const WorldModify& from);

  inline WorldModify& operator=(const WorldModify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WorldModify(WorldModify&& from) noexcept
    : WorldModify() {
    *this = ::std::move(from);
  }

  inline WorldModify& operator=(WorldModify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WorldModify& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldModify* internal_default_instance() {
    return reinterpret_cast<const WorldModify*>(
               &_WorldModify_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(WorldModify* other);
  friend void swap(WorldModify& a, WorldModify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WorldModify* New() const final {
    return CreateMaybeMessage<WorldModify>(NULL);
  }

  WorldModify* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<WorldModify>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const WorldModify& from);
  void MergeFrom(const WorldModify& from);
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
  void InternalSwap(WorldModify* other);
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

  // string world_name = 2;
  void clear_world_name();
  static const int kWorldNameFieldNumber = 2;
  const ::std::string& world_name() const;
  void set_world_name(const ::std::string& value);
  #if LANG_CXX11
  void set_world_name(::std::string&& value);
  #endif
  void set_world_name(const char* value);
  void set_world_name(const char* value, size_t size);
  ::std::string* mutable_world_name();
  ::std::string* release_world_name();
  void set_allocated_world_name(::std::string* world_name);

  // string cloned_uri = 6;
  void clear_cloned_uri();
  static const int kClonedUriFieldNumber = 6;
  const ::std::string& cloned_uri() const;
  void set_cloned_uri(const ::std::string& value);
  #if LANG_CXX11
  void set_cloned_uri(::std::string&& value);
  #endif
  void set_cloned_uri(const char* value);
  void set_cloned_uri(const char* value, size_t size);
  ::std::string* mutable_cloned_uri();
  ::std::string* release_cloned_uri();
  void set_allocated_cloned_uri(::std::string* cloned_uri);

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

  // bool remove = 3;
  void clear_remove();
  static const int kRemoveFieldNumber = 3;
  bool remove() const;
  void set_remove(bool value);

  // bool create = 4;
  void clear_create();
  static const int kCreateFieldNumber = 4;
  bool create() const;
  void set_create(bool value);

  // bool cloned = 5;
  void clear_cloned();
  static const int kClonedFieldNumber = 5;
  bool cloned() const;
  void set_cloned(bool value);

  // @@protoc_insertion_point(class_scope:gz.msgs.WorldModify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr world_name_;
  ::google::protobuf::internal::ArenaStringPtr cloned_uri_;
  ::gz::msgs::Header* header_;
  bool remove_;
  bool create_;
  bool cloned_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fworld_5fmodify_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorldModify

// .gz.msgs.Header header = 1;
inline bool WorldModify::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& WorldModify::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& WorldModify::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* WorldModify::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.WorldModify.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* WorldModify::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.WorldModify.header)
  return header_;
}
inline void WorldModify::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WorldModify.header)
}

// string world_name = 2;
inline void WorldModify::clear_world_name() {
  world_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WorldModify::world_name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.world_name)
  return world_name_.GetNoArena();
}
inline void WorldModify::set_world_name(const ::std::string& value) {
  
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WorldModify.world_name)
}
#if LANG_CXX11
inline void WorldModify::set_world_name(::std::string&& value) {
  
  world_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WorldModify.world_name)
}
#endif
inline void WorldModify::set_world_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WorldModify.world_name)
}
inline void WorldModify::set_world_name(const char* value, size_t size) {
  
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WorldModify.world_name)
}
inline ::std::string* WorldModify::mutable_world_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WorldModify.world_name)
  return world_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WorldModify::release_world_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.WorldModify.world_name)
  
  return world_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_allocated_world_name(::std::string* world_name) {
  if (world_name != NULL) {
    
  } else {
    
  }
  world_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), world_name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WorldModify.world_name)
}

// bool remove = 3;
inline void WorldModify::clear_remove() {
  remove_ = false;
}
inline bool WorldModify::remove() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.remove)
  return remove_;
}
inline void WorldModify::set_remove(bool value) {
  
  remove_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.WorldModify.remove)
}

// bool create = 4;
inline void WorldModify::clear_create() {
  create_ = false;
}
inline bool WorldModify::create() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.create)
  return create_;
}
inline void WorldModify::set_create(bool value) {
  
  create_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.WorldModify.create)
}

// bool cloned = 5;
inline void WorldModify::clear_cloned() {
  cloned_ = false;
}
inline bool WorldModify::cloned() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.cloned)
  return cloned_;
}
inline void WorldModify::set_cloned(bool value) {
  
  cloned_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.WorldModify.cloned)
}

// string cloned_uri = 6;
inline void WorldModify::clear_cloned_uri() {
  cloned_uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WorldModify::cloned_uri() const {
  // @@protoc_insertion_point(field_get:gz.msgs.WorldModify.cloned_uri)
  return cloned_uri_.GetNoArena();
}
inline void WorldModify::set_cloned_uri(const ::std::string& value) {
  
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.WorldModify.cloned_uri)
}
#if LANG_CXX11
inline void WorldModify::set_cloned_uri(::std::string&& value) {
  
  cloned_uri_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.WorldModify.cloned_uri)
}
#endif
inline void WorldModify::set_cloned_uri(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.WorldModify.cloned_uri)
}
inline void WorldModify::set_cloned_uri(const char* value, size_t size) {
  
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.WorldModify.cloned_uri)
}
inline ::std::string* WorldModify::mutable_cloned_uri() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.WorldModify.cloned_uri)
  return cloned_uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WorldModify::release_cloned_uri() {
  // @@protoc_insertion_point(field_release:gz.msgs.WorldModify.cloned_uri)
  
  return cloned_uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_allocated_cloned_uri(::std::string* cloned_uri) {
  if (cloned_uri != NULL) {
    
  } else {
    
  }
  cloned_uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cloned_uri);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.WorldModify.cloned_uri)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fworld_5fmodify_2eproto