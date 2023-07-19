// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scg_test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_scg_5ftest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_scg_5ftest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_scg_5ftest_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_scg_5ftest_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_scg_5ftest_2eproto;
namespace SCG {
namespace Test {
class TestMessage;
struct TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}  // namespace Test
}  // namespace SCG
PROTOBUF_NAMESPACE_OPEN
template <>
::SCG::Test::TestMessage* Arena::CreateMaybeMessage<::SCG::Test::TestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace SCG {
namespace Test {

// ===================================================================


// -------------------------------------------------------------------

class TestMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SCG.Test.TestMessage) */ {
 public:
  inline TestMessage() : TestMessage(nullptr) {}
  ~TestMessage() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR TestMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TestMessage(const TestMessage& from);
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessage& operator=(TestMessage&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const TestMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessage* other) {
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
  void UnsafeArenaSwap(TestMessage* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TestMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TestMessage& from) {
    TestMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "SCG.Test.TestMessage";
  }
  protected:
  explicit TestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNotesFieldNumber = 2,
    kTimestampFieldNumber = 1,
  };
  // string Notes = 2;
  void clear_notes() ;
  const std::string& notes() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_notes(Arg_&& arg, Args_... args);
  std::string* mutable_notes();
  PROTOBUF_NODISCARD std::string* release_notes();
  void set_allocated_notes(std::string* ptr);

  private:
  const std::string& _internal_notes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_notes(
      const std::string& value);
  std::string* _internal_mutable_notes();

  public:
  // .google.protobuf.Timestamp Timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();
  // @@protoc_insertion_point(class_scope:SCG.Test.TestMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr notes_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_scg_5ftest_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TestMessage

// .google.protobuf.Timestamp Timestamp = 1;
inline bool TestMessage::has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.timestamp_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TestMessage::_internal_timestamp() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TestMessage::timestamp() const {
  // @@protoc_insertion_point(field_get:SCG.Test.TestMessage.Timestamp)
  return _internal_timestamp();
}
inline void TestMessage::unsafe_arena_set_allocated_timestamp(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  _impl_.timestamp_ = timestamp;
  if (timestamp) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SCG.Test.TestMessage.Timestamp)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TestMessage::release_timestamp() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TestMessage::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:SCG.Test.TestMessage.Timestamp)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TestMessage::_internal_mutable_timestamp() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.timestamp_ = p;
  }
  return _impl_.timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TestMessage::mutable_timestamp() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:SCG.Test.TestMessage.Timestamp)
  return _msg;
}
inline void TestMessage::set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:SCG.Test.TestMessage.Timestamp)
}

// string Notes = 2;
inline void TestMessage::clear_notes() {
  _impl_.notes_.ClearToEmpty();
}
inline const std::string& TestMessage::notes() const {
  // @@protoc_insertion_point(field_get:SCG.Test.TestMessage.Notes)
  return _internal_notes();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void TestMessage::set_notes(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.notes_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SCG.Test.TestMessage.Notes)
}
inline std::string* TestMessage::mutable_notes() {
  std::string* _s = _internal_mutable_notes();
  // @@protoc_insertion_point(field_mutable:SCG.Test.TestMessage.Notes)
  return _s;
}
inline const std::string& TestMessage::_internal_notes() const {
  return _impl_.notes_.Get();
}
inline void TestMessage::_internal_set_notes(const std::string& value) {
  ;


  _impl_.notes_.Set(value, GetArenaForAllocation());
}
inline std::string* TestMessage::_internal_mutable_notes() {
  ;
  return _impl_.notes_.Mutable( GetArenaForAllocation());
}
inline std::string* TestMessage::release_notes() {
  // @@protoc_insertion_point(field_release:SCG.Test.TestMessage.Notes)
  return _impl_.notes_.Release();
}
inline void TestMessage::set_allocated_notes(std::string* value) {
  _impl_.notes_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.notes_.IsDefault()) {
          _impl_.notes_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SCG.Test.TestMessage.Notes)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace Test
}  // namespace SCG


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_scg_5ftest_2eproto_2epb_2eh