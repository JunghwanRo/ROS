// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/log_playback_stats.proto

#include "gz/msgs/log_playback_stats.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.LogPlaybackStatistics", LogPlaybackStatistics)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2ftime_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftime_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Time;
}  // namespace protobuf_gz_2fmsgs_2ftime_2eproto
namespace gz {
namespace msgs {
class LogPlaybackStatisticsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LogPlaybackStatistics>
      _instance;
} _LogPlaybackStatistics_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto {
static void InitDefaultsLogPlaybackStatistics() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_LogPlaybackStatistics_default_instance_;
    new (ptr) ::gz::msgs::LogPlaybackStatistics();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::LogPlaybackStatistics::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_LogPlaybackStatistics =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsLogPlaybackStatistics}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2ftime_2eproto::scc_info_Time.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LogPlaybackStatistics.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogPlaybackStatistics, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogPlaybackStatistics, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogPlaybackStatistics, start_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogPlaybackStatistics, end_time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::LogPlaybackStatistics)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_LogPlaybackStatistics_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/log_playback_stats.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n gz/msgs/log_playback_stats.proto\022\007gz.m"
      "sgs\032\022gz/msgs/time.proto\032\024gz/msgs/header."
      "proto\"|\n\025LogPlaybackStatistics\022\037\n\006header"
      "\030\001 \001(\0132\017.gz.msgs.Header\022!\n\nstart_time\030\002 "
      "\001(\0132\r.gz.msgs.Time\022\037\n\010end_time\030\003 \001(\0132\r.g"
      "z.msgs.TimeB*\n\013com.gz.msgsB\033LogPlaybackS"
      "tatisticsProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 263);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/log_playback_stats.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2ftime_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void LogPlaybackStatistics::InitAsDefaultInstance() {
  ::gz::msgs::_LogPlaybackStatistics_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_LogPlaybackStatistics_default_instance_._instance.get_mutable()->start_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
  ::gz::msgs::_LogPlaybackStatistics_default_instance_._instance.get_mutable()->end_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
}
void LogPlaybackStatistics::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void LogPlaybackStatistics::clear_start_time() {
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) {
    delete start_time_;
  }
  start_time_ = NULL;
}
void LogPlaybackStatistics::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogPlaybackStatistics::kHeaderFieldNumber;
const int LogPlaybackStatistics::kStartTimeFieldNumber;
const int LogPlaybackStatistics::kEndTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogPlaybackStatistics::LogPlaybackStatistics()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::scc_info_LogPlaybackStatistics.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.LogPlaybackStatistics)
}
LogPlaybackStatistics::LogPlaybackStatistics(const LogPlaybackStatistics& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_start_time()) {
    start_time_ = new ::gz::msgs::Time(*from.start_time_);
  } else {
    start_time_ = NULL;
  }
  if (from.has_end_time()) {
    end_time_ = new ::gz::msgs::Time(*from.end_time_);
  } else {
    end_time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.LogPlaybackStatistics)
}

void LogPlaybackStatistics::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_time_) -
      reinterpret_cast<char*>(&header_)) + sizeof(end_time_));
}

LogPlaybackStatistics::~LogPlaybackStatistics() {
  // @@protoc_insertion_point(destructor:gz.msgs.LogPlaybackStatistics)
  SharedDtor();
}

void LogPlaybackStatistics::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete start_time_;
  if (this != internal_default_instance()) delete end_time_;
}

void LogPlaybackStatistics::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LogPlaybackStatistics::descriptor() {
  ::protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogPlaybackStatistics& LogPlaybackStatistics::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::scc_info_LogPlaybackStatistics.base);
  return *internal_default_instance();
}


void LogPlaybackStatistics::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.LogPlaybackStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) {
    delete start_time_;
  }
  start_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
  _internal_metadata_.Clear();
}

bool LogPlaybackStatistics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.LogPlaybackStatistics)
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

      // .gz.msgs.Time start_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time end_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_time()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.LogPlaybackStatistics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.LogPlaybackStatistics)
  return false;
#undef DO_
}

void LogPlaybackStatistics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.LogPlaybackStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Time start_time = 2;
  if (this->has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_start_time(), output);
  }

  // .gz.msgs.Time end_time = 3;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_end_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.LogPlaybackStatistics)
}

::google::protobuf::uint8* LogPlaybackStatistics::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.LogPlaybackStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Time start_time = 2;
  if (this->has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_start_time(), deterministic, target);
  }

  // .gz.msgs.Time end_time = 3;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_end_time(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.LogPlaybackStatistics)
  return target;
}

size_t LogPlaybackStatistics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.LogPlaybackStatistics)
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

  // .gz.msgs.Time start_time = 2;
  if (this->has_start_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *start_time_);
  }

  // .gz.msgs.Time end_time = 3;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *end_time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogPlaybackStatistics::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.LogPlaybackStatistics)
  GOOGLE_DCHECK_NE(&from, this);
  const LogPlaybackStatistics* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogPlaybackStatistics>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.LogPlaybackStatistics)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.LogPlaybackStatistics)
    MergeFrom(*source);
  }
}

void LogPlaybackStatistics::MergeFrom(const LogPlaybackStatistics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.LogPlaybackStatistics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_start_time()) {
    mutable_start_time()->::gz::msgs::Time::MergeFrom(from.start_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::gz::msgs::Time::MergeFrom(from.end_time());
  }
}

void LogPlaybackStatistics::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.LogPlaybackStatistics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogPlaybackStatistics::CopyFrom(const LogPlaybackStatistics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.LogPlaybackStatistics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogPlaybackStatistics::IsInitialized() const {
  return true;
}

void LogPlaybackStatistics::Swap(LogPlaybackStatistics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogPlaybackStatistics::InternalSwap(LogPlaybackStatistics* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(start_time_, other->start_time_);
  swap(end_time_, other->end_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LogPlaybackStatistics::GetMetadata() const {
  protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::LogPlaybackStatistics* Arena::CreateMaybeMessage< ::gz::msgs::LogPlaybackStatistics >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::LogPlaybackStatistics >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
