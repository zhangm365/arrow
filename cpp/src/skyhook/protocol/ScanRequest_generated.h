// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCANREQUEST_ORG_APACHE_ARROW_FLATBUF_H_
#define FLATBUFFERS_GENERATED_SCANREQUEST_ORG_APACHE_ARROW_FLATBUF_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 6,
             "Non-compatible flatbuffers version included");

namespace org {
namespace apache {
namespace arrow {
namespace flatbuf {

struct ScanRequest;
struct ScanRequestBuilder;

struct ScanRequest FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ScanRequestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FILE_SIZE = 4,
    VT_FILE_FORMAT = 6,
    VT_FILTER = 8,
    VT_PARTITION = 10,
    VT_DATASET_SCHEMA = 12,
    VT_PROJECTION_SCHEMA = 14
  };
  int64_t file_size() const {
    return GetField<int64_t>(VT_FILE_SIZE, 0);
  }
  int16_t file_format() const {
    return GetField<int16_t>(VT_FILE_FORMAT, 0);
  }
  const ::flatbuffers::Vector<uint8_t> *filter() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_FILTER);
  }
  const ::flatbuffers::Vector<uint8_t> *partition() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_PARTITION);
  }
  const ::flatbuffers::Vector<uint8_t> *dataset_schema() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_DATASET_SCHEMA);
  }
  const ::flatbuffers::Vector<uint8_t> *projection_schema() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_PROJECTION_SCHEMA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_FILE_SIZE, 8) &&
           VerifyField<int16_t>(verifier, VT_FILE_FORMAT, 2) &&
           VerifyOffset(verifier, VT_FILTER) &&
           verifier.VerifyVector(filter()) &&
           VerifyOffset(verifier, VT_PARTITION) &&
           verifier.VerifyVector(partition()) &&
           VerifyOffset(verifier, VT_DATASET_SCHEMA) &&
           verifier.VerifyVector(dataset_schema()) &&
           VerifyOffset(verifier, VT_PROJECTION_SCHEMA) &&
           verifier.VerifyVector(projection_schema()) &&
           verifier.EndTable();
  }
};

struct ScanRequestBuilder {
  typedef ScanRequest Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_file_size(int64_t file_size) {
    fbb_.AddElement<int64_t>(ScanRequest::VT_FILE_SIZE, file_size, 0);
  }
  void add_file_format(int16_t file_format) {
    fbb_.AddElement<int16_t>(ScanRequest::VT_FILE_FORMAT, file_format, 0);
  }
  void add_filter(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> filter) {
    fbb_.AddOffset(ScanRequest::VT_FILTER, filter);
  }
  void add_partition(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> partition) {
    fbb_.AddOffset(ScanRequest::VT_PARTITION, partition);
  }
  void add_dataset_schema(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> dataset_schema) {
    fbb_.AddOffset(ScanRequest::VT_DATASET_SCHEMA, dataset_schema);
  }
  void add_projection_schema(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> projection_schema) {
    fbb_.AddOffset(ScanRequest::VT_PROJECTION_SCHEMA, projection_schema);
  }
  explicit ScanRequestBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ScanRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ScanRequest>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ScanRequest> CreateScanRequest(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t file_size = 0,
    int16_t file_format = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> filter = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> partition = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> dataset_schema = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> projection_schema = 0) {
  ScanRequestBuilder builder_(_fbb);
  builder_.add_file_size(file_size);
  builder_.add_projection_schema(projection_schema);
  builder_.add_dataset_schema(dataset_schema);
  builder_.add_partition(partition);
  builder_.add_filter(filter);
  builder_.add_file_format(file_format);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<ScanRequest> CreateScanRequestDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t file_size = 0,
    int16_t file_format = 0,
    const std::vector<uint8_t> *filter = nullptr,
    const std::vector<uint8_t> *partition = nullptr,
    const std::vector<uint8_t> *dataset_schema = nullptr,
    const std::vector<uint8_t> *projection_schema = nullptr) {
  auto filter__ = filter ? _fbb.CreateVector<uint8_t>(*filter) : 0;
  auto partition__ = partition ? _fbb.CreateVector<uint8_t>(*partition) : 0;
  auto dataset_schema__ = dataset_schema ? _fbb.CreateVector<uint8_t>(*dataset_schema) : 0;
  auto projection_schema__ = projection_schema ? _fbb.CreateVector<uint8_t>(*projection_schema) : 0;
  return org::apache::arrow::flatbuf::CreateScanRequest(
      _fbb,
      file_size,
      file_format,
      filter__,
      partition__,
      dataset_schema__,
      projection_schema__);
}

inline const org::apache::arrow::flatbuf::ScanRequest *GetScanRequest(const void *buf) {
  return ::flatbuffers::GetRoot<org::apache::arrow::flatbuf::ScanRequest>(buf);
}

inline const org::apache::arrow::flatbuf::ScanRequest *GetSizePrefixedScanRequest(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<org::apache::arrow::flatbuf::ScanRequest>(buf);
}

inline bool VerifyScanRequestBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<org::apache::arrow::flatbuf::ScanRequest>(nullptr);
}

inline bool VerifySizePrefixedScanRequestBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<org::apache::arrow::flatbuf::ScanRequest>(nullptr);
}

inline void FinishScanRequestBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<org::apache::arrow::flatbuf::ScanRequest> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedScanRequestBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<org::apache::arrow::flatbuf::ScanRequest> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuf
}  // namespace arrow
}  // namespace apache
}  // namespace org

#endif  // FLATBUFFERS_GENERATED_SCANREQUEST_ORG_APACHE_ARROW_FLATBUF_H_
