// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PreKeyWhisperMessage.proto

#ifndef PROTOBUF_PreKeyWhisperMessage_2eproto__INCLUDED
#define PROTOBUF_PreKeyWhisperMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace textsecure {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PreKeyWhisperMessage_2eproto();
void protobuf_AssignDesc_PreKeyWhisperMessage_2eproto();
void protobuf_ShutdownFile_PreKeyWhisperMessage_2eproto();

class PreKeyWhisperMessage;

// ===================================================================

class PreKeyWhisperMessage : public ::google::protobuf::Message {
 public:
  PreKeyWhisperMessage();
  virtual ~PreKeyWhisperMessage();

  PreKeyWhisperMessage(const PreKeyWhisperMessage& from);

  inline PreKeyWhisperMessage& operator=(const PreKeyWhisperMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PreKeyWhisperMessage& default_instance();

  void Swap(PreKeyWhisperMessage* other);

  // implements Message ----------------------------------------------

  PreKeyWhisperMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PreKeyWhisperMessage& from);
  void MergeFrom(const PreKeyWhisperMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 preKeyId = 1;
  inline bool has_prekeyid() const;
  inline void clear_prekeyid();
  static const int kPreKeyIdFieldNumber = 1;
  inline ::google::protobuf::uint32 prekeyid() const;
  inline void set_prekeyid(::google::protobuf::uint32 value);

  // optional bytes baseKey = 2;
  inline bool has_basekey() const;
  inline void clear_basekey();
  static const int kBaseKeyFieldNumber = 2;
  inline const ::std::string& basekey() const;
  inline void set_basekey(const ::std::string& value);
  inline void set_basekey(const char* value);
  inline void set_basekey(const void* value, size_t size);
  inline ::std::string* mutable_basekey();
  inline ::std::string* release_basekey();
  inline void set_allocated_basekey(::std::string* basekey);

  // optional bytes identityKey = 3;
  inline bool has_identitykey() const;
  inline void clear_identitykey();
  static const int kIdentityKeyFieldNumber = 3;
  inline const ::std::string& identitykey() const;
  inline void set_identitykey(const ::std::string& value);
  inline void set_identitykey(const char* value);
  inline void set_identitykey(const void* value, size_t size);
  inline ::std::string* mutable_identitykey();
  inline ::std::string* release_identitykey();
  inline void set_allocated_identitykey(::std::string* identitykey);

  // optional bytes message = 4;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 4;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const void* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:textsecure.PreKeyWhisperMessage)
 private:
  inline void set_has_prekeyid();
  inline void clear_has_prekeyid();
  inline void set_has_basekey();
  inline void clear_has_basekey();
  inline void set_has_identitykey();
  inline void clear_has_identitykey();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* basekey_;
  ::std::string* identitykey_;
  ::std::string* message_;
  ::google::protobuf::uint32 prekeyid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_PreKeyWhisperMessage_2eproto();
  friend void protobuf_AssignDesc_PreKeyWhisperMessage_2eproto();
  friend void protobuf_ShutdownFile_PreKeyWhisperMessage_2eproto();

  void InitAsDefaultInstance();
  static PreKeyWhisperMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// PreKeyWhisperMessage

// optional uint32 preKeyId = 1;
inline bool PreKeyWhisperMessage::has_prekeyid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PreKeyWhisperMessage::set_has_prekeyid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PreKeyWhisperMessage::clear_has_prekeyid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PreKeyWhisperMessage::clear_prekeyid() {
  prekeyid_ = 0u;
  clear_has_prekeyid();
}
inline ::google::protobuf::uint32 PreKeyWhisperMessage::prekeyid() const {
  return prekeyid_;
}
inline void PreKeyWhisperMessage::set_prekeyid(::google::protobuf::uint32 value) {
  set_has_prekeyid();
  prekeyid_ = value;
}

// optional bytes baseKey = 2;
inline bool PreKeyWhisperMessage::has_basekey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PreKeyWhisperMessage::set_has_basekey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PreKeyWhisperMessage::clear_has_basekey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PreKeyWhisperMessage::clear_basekey() {
  if (basekey_ != &::google::protobuf::internal::kEmptyString) {
    basekey_->clear();
  }
  clear_has_basekey();
}
inline const ::std::string& PreKeyWhisperMessage::basekey() const {
  return *basekey_;
}
inline void PreKeyWhisperMessage::set_basekey(const ::std::string& value) {
  set_has_basekey();
  if (basekey_ == &::google::protobuf::internal::kEmptyString) {
    basekey_ = new ::std::string;
  }
  basekey_->assign(value);
}
inline void PreKeyWhisperMessage::set_basekey(const char* value) {
  set_has_basekey();
  if (basekey_ == &::google::protobuf::internal::kEmptyString) {
    basekey_ = new ::std::string;
  }
  basekey_->assign(value);
}
inline void PreKeyWhisperMessage::set_basekey(const void* value, size_t size) {
  set_has_basekey();
  if (basekey_ == &::google::protobuf::internal::kEmptyString) {
    basekey_ = new ::std::string;
  }
  basekey_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PreKeyWhisperMessage::mutable_basekey() {
  set_has_basekey();
  if (basekey_ == &::google::protobuf::internal::kEmptyString) {
    basekey_ = new ::std::string;
  }
  return basekey_;
}
inline ::std::string* PreKeyWhisperMessage::release_basekey() {
  clear_has_basekey();
  if (basekey_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = basekey_;
    basekey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PreKeyWhisperMessage::set_allocated_basekey(::std::string* basekey) {
  if (basekey_ != &::google::protobuf::internal::kEmptyString) {
    delete basekey_;
  }
  if (basekey) {
    set_has_basekey();
    basekey_ = basekey;
  } else {
    clear_has_basekey();
    basekey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes identityKey = 3;
inline bool PreKeyWhisperMessage::has_identitykey() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PreKeyWhisperMessage::set_has_identitykey() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PreKeyWhisperMessage::clear_has_identitykey() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PreKeyWhisperMessage::clear_identitykey() {
  if (identitykey_ != &::google::protobuf::internal::kEmptyString) {
    identitykey_->clear();
  }
  clear_has_identitykey();
}
inline const ::std::string& PreKeyWhisperMessage::identitykey() const {
  return *identitykey_;
}
inline void PreKeyWhisperMessage::set_identitykey(const ::std::string& value) {
  set_has_identitykey();
  if (identitykey_ == &::google::protobuf::internal::kEmptyString) {
    identitykey_ = new ::std::string;
  }
  identitykey_->assign(value);
}
inline void PreKeyWhisperMessage::set_identitykey(const char* value) {
  set_has_identitykey();
  if (identitykey_ == &::google::protobuf::internal::kEmptyString) {
    identitykey_ = new ::std::string;
  }
  identitykey_->assign(value);
}
inline void PreKeyWhisperMessage::set_identitykey(const void* value, size_t size) {
  set_has_identitykey();
  if (identitykey_ == &::google::protobuf::internal::kEmptyString) {
    identitykey_ = new ::std::string;
  }
  identitykey_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PreKeyWhisperMessage::mutable_identitykey() {
  set_has_identitykey();
  if (identitykey_ == &::google::protobuf::internal::kEmptyString) {
    identitykey_ = new ::std::string;
  }
  return identitykey_;
}
inline ::std::string* PreKeyWhisperMessage::release_identitykey() {
  clear_has_identitykey();
  if (identitykey_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = identitykey_;
    identitykey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PreKeyWhisperMessage::set_allocated_identitykey(::std::string* identitykey) {
  if (identitykey_ != &::google::protobuf::internal::kEmptyString) {
    delete identitykey_;
  }
  if (identitykey) {
    set_has_identitykey();
    identitykey_ = identitykey;
  } else {
    clear_has_identitykey();
    identitykey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes message = 4;
inline bool PreKeyWhisperMessage::has_message() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PreKeyWhisperMessage::set_has_message() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PreKeyWhisperMessage::clear_has_message() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PreKeyWhisperMessage::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& PreKeyWhisperMessage::message() const {
  return *message_;
}
inline void PreKeyWhisperMessage::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void PreKeyWhisperMessage::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void PreKeyWhisperMessage::set_message(const void* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PreKeyWhisperMessage::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* PreKeyWhisperMessage::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PreKeyWhisperMessage::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace textsecure

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PreKeyWhisperMessage_2eproto__INCLUDED
