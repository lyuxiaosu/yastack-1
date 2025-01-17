// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/group.proto

#include "google/monitoring/v3/group.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
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
// @@protoc_insertion_point(includes)
namespace google {
namespace monitoring {
namespace v3 {
class GroupDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Group>
      _instance;
} _Group_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto {
void InitDefaultsGroupImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::google::monitoring::v3::_Group_default_instance_;
    new (ptr) ::google::monitoring::v3::Group();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::monitoring::v3::Group::InitAsDefaultInstance();
}

void InitDefaultsGroup() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroupImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, display_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, parent_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, filter_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Group, is_cluster_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::monitoring::v3::Group)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::monitoring::v3::_Group_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/monitoring/v3/group.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n google/monitoring/v3/group.proto\022\024goog"
      "le.monitoring.v3\"d\n\005Group\022\014\n\004name\030\001 \001(\t\022"
      "\024\n\014display_name\030\002 \001(\t\022\023\n\013parent_name\030\003 \001"
      "(\t\022\016\n\006filter\030\005 \001(\t\022\022\n\nis_cluster\030\006 \001(\010B\205"
      "\001\n\030com.google.monitoring.v3B\nGroupProtoP"
      "\001Z>google.golang.org/genproto/googleapis"
      "/monitoring/v3;monitoring\252\002\032Google.Cloud"
      ".Monitoring.V3b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 302);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/monitoring/v3/group.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

void Group::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Group::kNameFieldNumber;
const int Group::kDisplayNameFieldNumber;
const int Group::kParentNameFieldNumber;
const int Group::kFilterFieldNumber;
const int Group::kIsClusterFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Group::Group()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::InitDefaultsGroup();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.monitoring.v3.Group)
}
Group::Group(const Group& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.display_name().size() > 0) {
    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  parent_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.parent_name().size() > 0) {
    parent_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.parent_name_);
  }
  filter_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.filter().size() > 0) {
    filter_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.filter_);
  }
  is_cluster_ = from.is_cluster_;
  // @@protoc_insertion_point(copy_constructor:google.monitoring.v3.Group)
}

void Group::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  parent_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filter_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  is_cluster_ = false;
  _cached_size_ = 0;
}

Group::~Group() {
  // @@protoc_insertion_point(destructor:google.monitoring.v3.Group)
  SharedDtor();
}

void Group::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  parent_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filter_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Group::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Group::descriptor() {
  ::protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Group& Group::default_instance() {
  ::protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::InitDefaultsGroup();
  return *internal_default_instance();
}

Group* Group::New(::google::protobuf::Arena* arena) const {
  Group* n = new Group;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Group::Clear() {
// @@protoc_insertion_point(message_clear_start:google.monitoring.v3.Group)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  parent_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  is_cluster_ = false;
  _internal_metadata_.Clear();
}

bool Group::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.monitoring.v3.Group)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.Group.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string display_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->display_name().data(), static_cast<int>(this->display_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.Group.display_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string parent_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_parent_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->parent_name().data(), static_cast<int>(this->parent_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.Group.parent_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string filter = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filter()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->filter().data(), static_cast<int>(this->filter().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.Group.filter"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_cluster = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_cluster_)));
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
  // @@protoc_insertion_point(parse_success:google.monitoring.v3.Group)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.monitoring.v3.Group)
  return false;
#undef DO_
}

void Group::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.monitoring.v3.Group)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.display_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->display_name(), output);
  }

  // string parent_name = 3;
  if (this->parent_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->parent_name().data(), static_cast<int>(this->parent_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.parent_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->parent_name(), output);
  }

  // string filter = 5;
  if (this->filter().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->filter().data(), static_cast<int>(this->filter().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.filter");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->filter(), output);
  }

  // bool is_cluster = 6;
  if (this->is_cluster() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_cluster(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.monitoring.v3.Group)
}

::google::protobuf::uint8* Group::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.monitoring.v3.Group)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.display_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->display_name(), target);
  }

  // string parent_name = 3;
  if (this->parent_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->parent_name().data(), static_cast<int>(this->parent_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.parent_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->parent_name(), target);
  }

  // string filter = 5;
  if (this->filter().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->filter().data(), static_cast<int>(this->filter().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.monitoring.v3.Group.filter");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->filter(), target);
  }

  // bool is_cluster = 6;
  if (this->is_cluster() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_cluster(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.monitoring.v3.Group)
  return target;
}

size_t Group::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.monitoring.v3.Group)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->display_name());
  }

  // string parent_name = 3;
  if (this->parent_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->parent_name());
  }

  // string filter = 5;
  if (this->filter().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->filter());
  }

  // bool is_cluster = 6;
  if (this->is_cluster() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Group::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.monitoring.v3.Group)
  GOOGLE_DCHECK_NE(&from, this);
  const Group* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Group>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.monitoring.v3.Group)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.monitoring.v3.Group)
    MergeFrom(*source);
  }
}

void Group::MergeFrom(const Group& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.monitoring.v3.Group)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.display_name().size() > 0) {

    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  if (from.parent_name().size() > 0) {

    parent_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.parent_name_);
  }
  if (from.filter().size() > 0) {

    filter_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.filter_);
  }
  if (from.is_cluster() != 0) {
    set_is_cluster(from.is_cluster());
  }
}

void Group::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.monitoring.v3.Group)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Group::CopyFrom(const Group& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.monitoring.v3.Group)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Group::IsInitialized() const {
  return true;
}

void Group::Swap(Group* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Group::InternalSwap(Group* other) {
  using std::swap;
  name_.Swap(&other->name_);
  display_name_.Swap(&other->display_name_);
  parent_name_.Swap(&other->parent_name_);
  filter_.Swap(&other->filter_);
  swap(is_cluster_, other->is_cluster_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Group::GetMetadata() const {
  protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fgroup_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v3
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)
