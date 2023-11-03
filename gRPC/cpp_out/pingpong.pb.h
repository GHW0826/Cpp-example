// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pingpong.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pingpong_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pingpong_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.h>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.h>
#define PROTOBUF_INTERNAL_EXPORT_pingpong_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pingpong_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pingpong_2eproto;
namespace dy {
class Ping;
struct PingDefaultTypeInternal;
extern PingDefaultTypeInternal _Ping_default_instance_;
class Pong;
struct PongDefaultTypeInternal;
extern PongDefaultTypeInternal _Pong_default_instance_;
}  // namespace dy
PROTOBUF_NAMESPACE_OPEN
template<> ::dy::Ping* Arena::CreateMaybeMessage<::dy::Ping>(Arena*);
template<> ::dy::Pong* Arena::CreateMaybeMessage<::dy::Pong>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace dy {

// ===================================================================

class Ping final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dy.Ping) */ {
 public:
  inline Ping() : Ping(nullptr) {}
  ~Ping() override;
  explicit PROTOBUF_CONSTEXPR Ping(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Ping(const Ping& from);
  Ping(Ping&& from) noexcept
    : Ping() {
    *this = ::std::move(from);
  }

  inline Ping& operator=(const Ping& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ping& operator=(Ping&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Ping& default_instance() {
    return *internal_default_instance();
  }
  static inline const Ping* internal_default_instance() {
    return reinterpret_cast<const Ping*>(
               &_Ping_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Ping& a, Ping& b) {
    a.Swap(&b);
  }
  inline void Swap(Ping* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Ping* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Ping* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Ping>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Ping& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Ping& from) {
    Ping::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Ping* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dy.Ping";
  }
  protected:
  explicit Ping(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCountFieldNumber = 1,
  };
  // uint32 count = 1;
  void clear_count();
  uint32_t count() const;
  void set_count(uint32_t value);
  private:
  uint32_t _internal_count() const;
  void _internal_set_count(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:dy.Ping)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_pingpong_2eproto;
};
// -------------------------------------------------------------------

class Pong final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dy.Pong) */ {
 public:
  inline Pong() : Pong(nullptr) {}
  ~Pong() override;
  explicit PROTOBUF_CONSTEXPR Pong(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Pong(const Pong& from);
  Pong(Pong&& from) noexcept
    : Pong() {
    *this = ::std::move(from);
  }

  inline Pong& operator=(const Pong& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pong& operator=(Pong&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Pong& default_instance() {
    return *internal_default_instance();
  }
  static inline const Pong* internal_default_instance() {
    return reinterpret_cast<const Pong*>(
               &_Pong_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Pong& a, Pong& b) {
    a.Swap(&b);
  }
  inline void Swap(Pong* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Pong* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Pong* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Pong>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Pong& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Pong& from) {
    Pong::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Pong* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dy.Pong";
  }
  protected:
  explicit Pong(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCountFieldNumber = 1,
  };
  // uint32 count = 1;
  void clear_count();
  uint32_t count() const;
  void set_count(uint32_t value);
  private:
  uint32_t _internal_count() const;
  void _internal_set_count(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:dy.Pong)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_pingpong_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Ping

// uint32 count = 1;
inline void Ping::clear_count() {
  _impl_.count_ = 0u;
}
inline uint32_t Ping::_internal_count() const {
  return _impl_.count_;
}
inline uint32_t Ping::count() const {
  // @@protoc_insertion_point(field_get:dy.Ping.count)
  return _internal_count();
}
inline void Ping::_internal_set_count(uint32_t value) {
  
  _impl_.count_ = value;
}
inline void Ping::set_count(uint32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:dy.Ping.count)
}

// -------------------------------------------------------------------

// Pong

// uint32 count = 1;
inline void Pong::clear_count() {
  _impl_.count_ = 0u;
}
inline uint32_t Pong::_internal_count() const {
  return _impl_.count_;
}
inline uint32_t Pong::count() const {
  // @@protoc_insertion_point(field_get:dy.Pong.count)
  return _internal_count();
}
inline void Pong::_internal_set_count(uint32_t value) {
  
  _impl_.count_ = value;
}
inline void Pong::set_count(uint32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:dy.Pong.count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dy

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.h>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pingpong_2eproto
