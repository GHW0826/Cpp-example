// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pingpong.proto

#include "pingpong.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace dy {
PROTOBUF_CONSTEXPR Ping::Ping(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.count_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PingDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PingDefaultTypeInternal() {}
  union {
    Ping _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PingDefaultTypeInternal _Ping_default_instance_;
PROTOBUF_CONSTEXPR Pong::Pong(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.count_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PongDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PongDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PongDefaultTypeInternal() {}
  union {
    Pong _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PongDefaultTypeInternal _Pong_default_instance_;
}  // namespace dy
static ::_pb::Metadata file_level_metadata_pingpong_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_pingpong_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_pingpong_2eproto = nullptr;

const uint32_t TableStruct_pingpong_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::dy::Ping, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::dy::Ping, _impl_.count_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::dy::Pong, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::dy::Pong, _impl_.count_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::dy::Ping)},
  { 7, -1, -1, sizeof(::dy::Pong)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::dy::_Ping_default_instance_._instance,
  &::dy::_Pong_default_instance_._instance,
};

const char descriptor_table_protodef_pingpong_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016pingpong.proto\022\002dy\"\025\n\004Ping\022\r\n\005count\030\001 "
  "\001(\r\"\025\n\004Pong\022\r\n\005count\030\001 \001(\r23\n\017PingPongSe"
  "rvice\022 \n\010pingpong\022\010.dy.Ping\032\010.dy.Pong\"\000b"
  "\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_pingpong_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_pingpong_2eproto = {
    false, false, 127, descriptor_table_protodef_pingpong_2eproto,
    "pingpong.proto",
    &descriptor_table_pingpong_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_pingpong_2eproto::offsets,
    file_level_metadata_pingpong_2eproto, file_level_enum_descriptors_pingpong_2eproto,
    file_level_service_descriptors_pingpong_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_pingpong_2eproto_getter() {
  return &descriptor_table_pingpong_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_pingpong_2eproto(&descriptor_table_pingpong_2eproto);
namespace dy {

// ===================================================================

class Ping::_Internal {
 public:
};

Ping::Ping(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:dy.Ping)
}
Ping::Ping(const Ping& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Ping* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.count_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.count_ = from._impl_.count_;
  // @@protoc_insertion_point(copy_constructor:dy.Ping)
}

inline void Ping::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.count_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Ping::~Ping() {
  // @@protoc_insertion_point(destructor:dy.Ping)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Ping::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Ping::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Ping::Clear() {
// @@protoc_insertion_point(message_clear_start:dy.Ping)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.count_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Ping::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 count = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Ping::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dy.Ping)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 count = 1;
  if (this->_internal_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dy.Ping)
  return target;
}

size_t Ping::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dy.Ping)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 count = 1;
  if (this->_internal_count() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Ping::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Ping::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Ping::GetClassData() const { return &_class_data_; }


void Ping::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Ping*>(&to_msg);
  auto& from = static_cast<const Ping&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dy.Ping)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_count() != 0) {
    _this->_internal_set_count(from._internal_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Ping::CopyFrom(const Ping& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dy.Ping)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ping::IsInitialized() const {
  return true;
}

void Ping::InternalSwap(Ping* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.count_, other->_impl_.count_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Ping::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_pingpong_2eproto_getter, &descriptor_table_pingpong_2eproto_once,
      file_level_metadata_pingpong_2eproto[0]);
}

// ===================================================================

class Pong::_Internal {
 public:
};

Pong::Pong(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:dy.Pong)
}
Pong::Pong(const Pong& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Pong* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.count_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.count_ = from._impl_.count_;
  // @@protoc_insertion_point(copy_constructor:dy.Pong)
}

inline void Pong::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.count_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Pong::~Pong() {
  // @@protoc_insertion_point(destructor:dy.Pong)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Pong::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Pong::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Pong::Clear() {
// @@protoc_insertion_point(message_clear_start:dy.Pong)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.count_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Pong::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 count = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Pong::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dy.Pong)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 count = 1;
  if (this->_internal_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dy.Pong)
  return target;
}

size_t Pong::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dy.Pong)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 count = 1;
  if (this->_internal_count() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Pong::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Pong::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Pong::GetClassData() const { return &_class_data_; }


void Pong::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Pong*>(&to_msg);
  auto& from = static_cast<const Pong&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dy.Pong)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_count() != 0) {
    _this->_internal_set_count(from._internal_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Pong::CopyFrom(const Pong& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dy.Pong)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pong::IsInitialized() const {
  return true;
}

void Pong::InternalSwap(Pong* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.count_, other->_impl_.count_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Pong::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_pingpong_2eproto_getter, &descriptor_table_pingpong_2eproto_once,
      file_level_metadata_pingpong_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace dy
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dy::Ping*
Arena::CreateMaybeMessage< ::dy::Ping >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dy::Ping >(arena);
}
template<> PROTOBUF_NOINLINE ::dy::Pong*
Arena::CreateMaybeMessage< ::dy::Pong >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dy::Pong >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
