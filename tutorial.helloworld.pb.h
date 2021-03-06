// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tutorial.helloworld.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tutorial_2ehelloworld_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tutorial_2ehelloworld_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tutorial_2ehelloworld_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tutorial_2ehelloworld_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tutorial_2ehelloworld_2eproto;
namespace tutorial {
class helloworld;
struct helloworldDefaultTypeInternal;
extern helloworldDefaultTypeInternal _helloworld_default_instance_;
}  // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template<> ::tutorial::helloworld* Arena::CreateMaybeMessage<::tutorial::helloworld>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tutorial {

// ===================================================================

class helloworld final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.helloworld) */ {
 public:
  inline helloworld() : helloworld(nullptr) {}
  ~helloworld() override;
  explicit constexpr helloworld(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  helloworld(const helloworld& from);
  helloworld(helloworld&& from) noexcept
    : helloworld() {
    *this = ::std::move(from);
  }

  inline helloworld& operator=(const helloworld& from) {
    CopyFrom(from);
    return *this;
  }
  inline helloworld& operator=(helloworld&& from) noexcept {
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
  static const helloworld& default_instance() {
    return *internal_default_instance();
  }
  static inline const helloworld* internal_default_instance() {
    return reinterpret_cast<const helloworld*>(
               &_helloworld_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(helloworld& a, helloworld& b) {
    a.Swap(&b);
  }
  inline void Swap(helloworld* other) {
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
  void UnsafeArenaSwap(helloworld* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  helloworld* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<helloworld>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const helloworld& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const helloworld& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(helloworld* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.helloworld";
  }
  protected:
  explicit helloworld(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStrFieldNumber = 2,
    kIdFieldNumber = 1,
    kOptFieldNumber = 3,
  };
  // required string str = 2;
  bool has_str() const;
  private:
  bool _internal_has_str() const;
  public:
  void clear_str();
  const std::string& str() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_str(ArgT0&& arg0, ArgT... args);
  std::string* mutable_str();
  PROTOBUF_NODISCARD std::string* release_str();
  void set_allocated_str(std::string* str);
  private:
  const std::string& _internal_str() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_str(const std::string& value);
  std::string* _internal_mutable_str();
  public:

  // required int32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // optional int32 opt = 3;
  bool has_opt() const;
  private:
  bool _internal_has_opt() const;
  public:
  void clear_opt();
  int32_t opt() const;
  void set_opt(int32_t value);
  private:
  int32_t _internal_opt() const;
  void _internal_set_opt(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tutorial.helloworld)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr str_;
  int32_t id_;
  int32_t opt_;
  friend struct ::TableStruct_tutorial_2ehelloworld_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// helloworld

// required int32 id = 1;
inline bool helloworld::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool helloworld::has_id() const {
  return _internal_has_id();
}
inline void helloworld::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t helloworld::_internal_id() const {
  return id_;
}
inline int32_t helloworld::id() const {
  // @@protoc_insertion_point(field_get:tutorial.helloworld.id)
  return _internal_id();
}
inline void helloworld::_internal_set_id(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void helloworld::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:tutorial.helloworld.id)
}

// required string str = 2;
inline bool helloworld::_internal_has_str() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool helloworld::has_str() const {
  return _internal_has_str();
}
inline void helloworld::clear_str() {
  str_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& helloworld::str() const {
  // @@protoc_insertion_point(field_get:tutorial.helloworld.str)
  return _internal_str();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void helloworld::set_str(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 str_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.helloworld.str)
}
inline std::string* helloworld::mutable_str() {
  std::string* _s = _internal_mutable_str();
  // @@protoc_insertion_point(field_mutable:tutorial.helloworld.str)
  return _s;
}
inline const std::string& helloworld::_internal_str() const {
  return str_.Get();
}
inline void helloworld::_internal_set_str(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  str_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* helloworld::_internal_mutable_str() {
  _has_bits_[0] |= 0x00000001u;
  return str_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* helloworld::release_str() {
  // @@protoc_insertion_point(field_release:tutorial.helloworld.str)
  if (!_internal_has_str()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = str_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (str_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    str_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void helloworld::set_allocated_str(std::string* str) {
  if (str != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  str_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), str,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (str_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    str_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:tutorial.helloworld.str)
}

// optional int32 opt = 3;
inline bool helloworld::_internal_has_opt() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool helloworld::has_opt() const {
  return _internal_has_opt();
}
inline void helloworld::clear_opt() {
  opt_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t helloworld::_internal_opt() const {
  return opt_;
}
inline int32_t helloworld::opt() const {
  // @@protoc_insertion_point(field_get:tutorial.helloworld.opt)
  return _internal_opt();
}
inline void helloworld::_internal_set_opt(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  opt_ = value;
}
inline void helloworld::set_opt(int32_t value) {
  _internal_set_opt(value);
  // @@protoc_insertion_point(field_set:tutorial.helloworld.opt)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tutorial_2ehelloworld_2eproto
