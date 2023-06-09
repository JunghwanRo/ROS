// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/version.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fversion_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fversion_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fversion_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fversion_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fversion_2eproto
namespace gz {
namespace msgs {
class Version;
class VersionDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern VersionDefaultTypeInternal _Version_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Version* Arena::CreateMaybeMessage<::gz::msgs::Version>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Version : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Version) */ {
 public:
  Version();
  virtual ~Version();

  Version(const Version& from);

  inline Version& operator=(const Version& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Version(Version&& from) noexcept
    : Version() {
    *this = ::std::move(from);
  }

  inline Version& operator=(Version&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Version& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Version* internal_default_instance() {
    return reinterpret_cast<const Version*>(
               &_Version_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Version* other);
  friend void swap(Version& a, Version& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Version* New() const final {
    return CreateMaybeMessage<Version>(NULL);
  }

  Version* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Version>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Version& from);
  void MergeFrom(const Version& from);
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
  void InternalSwap(Version* other);
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

  // string prerelease = 4;
  void clear_prerelease();
  static const int kPrereleaseFieldNumber = 4;
  const ::std::string& prerelease() const;
  void set_prerelease(const ::std::string& value);
  #if LANG_CXX11
  void set_prerelease(::std::string&& value);
  #endif
  void set_prerelease(const char* value);
  void set_prerelease(const char* value, size_t size);
  ::std::string* mutable_prerelease();
  ::std::string* release_prerelease();
  void set_allocated_prerelease(::std::string* prerelease);

  // string build = 5;
  void clear_build();
  static const int kBuildFieldNumber = 5;
  const ::std::string& build() const;
  void set_build(const ::std::string& value);
  #if LANG_CXX11
  void set_build(::std::string&& value);
  #endif
  void set_build(const char* value);
  void set_build(const char* value, size_t size);
  ::std::string* mutable_build();
  ::std::string* release_build();
  void set_allocated_build(::std::string* build);

  // int32 major = 1;
  void clear_major();
  static const int kMajorFieldNumber = 1;
  ::google::protobuf::int32 major() const;
  void set_major(::google::protobuf::int32 value);

  // int32 minor = 2;
  void clear_minor();
  static const int kMinorFieldNumber = 2;
  ::google::protobuf::int32 minor() const;
  void set_minor(::google::protobuf::int32 value);

  // int32 patch = 3;
  void clear_patch();
  static const int kPatchFieldNumber = 3;
  ::google::protobuf::int32 patch() const;
  void set_patch(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Version)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr prerelease_;
  ::google::protobuf::internal::ArenaStringPtr build_;
  ::google::protobuf::int32 major_;
  ::google::protobuf::int32 minor_;
  ::google::protobuf::int32 patch_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fversion_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Version

// int32 major = 1;
inline void Version::clear_major() {
  major_ = 0;
}
inline ::google::protobuf::int32 Version::major() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Version.major)
  return major_;
}
inline void Version::set_major(::google::protobuf::int32 value) {
  
  major_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Version.major)
}

// int32 minor = 2;
inline void Version::clear_minor() {
  minor_ = 0;
}
inline ::google::protobuf::int32 Version::minor() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Version.minor)
  return minor_;
}
inline void Version::set_minor(::google::protobuf::int32 value) {
  
  minor_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Version.minor)
}

// int32 patch = 3;
inline void Version::clear_patch() {
  patch_ = 0;
}
inline ::google::protobuf::int32 Version::patch() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Version.patch)
  return patch_;
}
inline void Version::set_patch(::google::protobuf::int32 value) {
  
  patch_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Version.patch)
}

// string prerelease = 4;
inline void Version::clear_prerelease() {
  prerelease_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Version::prerelease() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Version.prerelease)
  return prerelease_.GetNoArena();
}
inline void Version::set_prerelease(const ::std::string& value) {
  
  prerelease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Version.prerelease)
}
#if LANG_CXX11
inline void Version::set_prerelease(::std::string&& value) {
  
  prerelease_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Version.prerelease)
}
#endif
inline void Version::set_prerelease(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  prerelease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Version.prerelease)
}
inline void Version::set_prerelease(const char* value, size_t size) {
  
  prerelease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Version.prerelease)
}
inline ::std::string* Version::mutable_prerelease() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Version.prerelease)
  return prerelease_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Version::release_prerelease() {
  // @@protoc_insertion_point(field_release:gz.msgs.Version.prerelease)
  
  return prerelease_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Version::set_allocated_prerelease(::std::string* prerelease) {
  if (prerelease != NULL) {
    
  } else {
    
  }
  prerelease_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), prerelease);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Version.prerelease)
}

// string build = 5;
inline void Version::clear_build() {
  build_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Version::build() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Version.build)
  return build_.GetNoArena();
}
inline void Version::set_build(const ::std::string& value) {
  
  build_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Version.build)
}
#if LANG_CXX11
inline void Version::set_build(::std::string&& value) {
  
  build_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Version.build)
}
#endif
inline void Version::set_build(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  build_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Version.build)
}
inline void Version::set_build(const char* value, size_t size) {
  
  build_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Version.build)
}
inline ::std::string* Version::mutable_build() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Version.build)
  return build_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Version::release_build() {
  // @@protoc_insertion_point(field_release:gz.msgs.Version.build)
  
  return build_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Version::set_allocated_build(::std::string* build) {
  if (build != NULL) {
    
  } else {
    
  }
  build_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), build);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Version.build)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fversion_2eproto
