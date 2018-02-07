DECL|CBOR_API|macro|CBOR_API
DECL|CBOR_H|macro|CBOR_H
DECL|CBOR_INLINE_API|macro|CBOR_INLINE_API
DECL|CBOR_INLINE_API|macro|CBOR_INLINE_API
DECL|CBOR_INLINE|macro|CBOR_INLINE
DECL|CBOR_INLINE|macro|CBOR_INLINE
DECL|CBOR_INLINE|macro|CBOR_INLINE
DECL|CBOR_INLINE|macro|CBOR_INLINE
DECL|CBOR_INLINE|macro|CBOR_INLINE
DECL|CBOR_PRIVATE_API|macro|CBOR_PRIVATE_API
DECL|CborArrayType|enumerator|CborArrayType = 0x80,
DECL|CborBase64Tag|enumerator|CborBase64Tag = 34,
DECL|CborBase64Tag|macro|CborBase64Tag
DECL|CborBase64urlTag|enumerator|CborBase64urlTag = 33,
DECL|CborBase64urlTag|macro|CborBase64urlTag
DECL|CborBigfloatTag|enumerator|CborBigfloatTag = 5,
DECL|CborBigfloatTag|macro|CborBigfloatTag
DECL|CborBooleanType|enumerator|CborBooleanType = 0xf5,
DECL|CborByteStringType|enumerator|CborByteStringType = 0x40,
DECL|CborCOSE_Encrypt0Tag|enumerator|CborCOSE_Encrypt0Tag = 16,
DECL|CborCOSE_Encrypt0Tag|macro|CborCOSE_Encrypt0Tag
DECL|CborCOSE_EncryptTag|enumerator|CborCOSE_EncryptTag = 96,
DECL|CborCOSE_EncryptTag|macro|CborCOSE_EncryptTag
DECL|CborCOSE_Mac0Tag|enumerator|CborCOSE_Mac0Tag = 17,
DECL|CborCOSE_Mac0Tag|macro|CborCOSE_Mac0Tag
DECL|CborCOSE_MacTag|enumerator|CborCOSE_MacTag = 97,
DECL|CborCOSE_MacTag|macro|CborCOSE_MacTag
DECL|CborCOSE_Sign1Tag|enumerator|CborCOSE_Sign1Tag = 18,
DECL|CborCOSE_Sign1Tag|macro|CborCOSE_Sign1Tag
DECL|CborCOSE_SignTag|enumerator|CborCOSE_SignTag = 98,
DECL|CborCOSE_SignTag|macro|CborCOSE_SignTag
DECL|CborDateTimeStringTag|enumerator|CborDateTimeStringTag = 0,
DECL|CborDateTimeStringTag|macro|CborDateTimeStringTag
DECL|CborDecimalTag|enumerator|CborDecimalTag = 4,
DECL|CborDecimalTag|macro|CborDecimalTag
DECL|CborDoubleType|enumerator|CborDoubleType = 0xfb,
DECL|CborEncodedCborTag|enumerator|CborEncodedCborTag = 24,
DECL|CborEncodedCborTag|macro|CborEncodedCborTag
DECL|CborEncoder|struct|struct CborEncoder
DECL|CborEncoder|typedef|typedef struct CborEncoder CborEncoder;
DECL|CborErrorAdvancePastEOF|enumerator|CborErrorAdvancePastEOF,
DECL|CborErrorDataTooLarge|enumerator|CborErrorDataTooLarge = 1024,
DECL|CborErrorDuplicateObjectKeys|enumerator|CborErrorDuplicateObjectKeys,
DECL|CborErrorExcludedType|enumerator|CborErrorExcludedType,
DECL|CborErrorExcludedValue|enumerator|CborErrorExcludedValue,
DECL|CborErrorGarbageAtEnd|enumerator|CborErrorGarbageAtEnd = 256,
DECL|CborErrorIO|enumerator|CborErrorIO,
DECL|CborErrorIllegalNumber|enumerator|CborErrorIllegalNumber,
DECL|CborErrorIllegalSimpleType|enumerator|CborErrorIllegalSimpleType, /* types of value less than 32 encoded in two bytes */
DECL|CborErrorIllegalType|enumerator|CborErrorIllegalType, /* type not allowed here */
DECL|CborErrorImproperValue|enumerator|CborErrorImproperValue,
DECL|CborErrorInappropriateTagForType|enumerator|CborErrorInappropriateTagForType,
DECL|CborErrorInternalError|enumerator|CborErrorInternalError = (int) (~0U / 2) /* INT_MAX on two's complement machines */
DECL|CborErrorInvalidUtf8TextString|enumerator|CborErrorInvalidUtf8TextString,
DECL|CborErrorJsonNotImplemented|enumerator|CborErrorJsonNotImplemented,
DECL|CborErrorJsonObjectKeyIsAggregate|enumerator|CborErrorJsonObjectKeyIsAggregate = 1280,
DECL|CborErrorJsonObjectKeyNotString|enumerator|CborErrorJsonObjectKeyNotString,
DECL|CborErrorMapKeyNotString|enumerator|CborErrorMapKeyNotString,
DECL|CborErrorMapKeysNotUnique|enumerator|CborErrorMapKeysNotUnique,
DECL|CborErrorMapNotSorted|enumerator|CborErrorMapNotSorted,
DECL|CborErrorNestingTooDeep|enumerator|CborErrorNestingTooDeep,
DECL|CborErrorOutOfMemory|enumerator|CborErrorOutOfMemory = (int) (~0U / 2 + 1),
DECL|CborErrorOverlongEncoding|enumerator|CborErrorOverlongEncoding,
DECL|CborErrorTooFewItems|enumerator|CborErrorTooFewItems,
DECL|CborErrorTooManyItems|enumerator|CborErrorTooManyItems = 768,
DECL|CborErrorUnexpectedBreak|enumerator|CborErrorUnexpectedBreak,
DECL|CborErrorUnexpectedEOF|enumerator|CborErrorUnexpectedEOF,
DECL|CborErrorUnknownLength|enumerator|CborErrorUnknownLength, /* request for length in array, map, or string with indeterminate length */
DECL|CborErrorUnknownSimpleType|enumerator|CborErrorUnknownSimpleType = 512,
DECL|CborErrorUnknownTag|enumerator|CborErrorUnknownTag,
DECL|CborErrorUnknownType|enumerator|CborErrorUnknownType, /* can only heppen in major type 7 */
DECL|CborErrorUnsupportedType|enumerator|CborErrorUnsupportedType,
DECL|CborError|enum|typedef enum CborError {
DECL|CborError|typedef|} CborError;
DECL|CborExpectedBase16Tag|enumerator|CborExpectedBase16Tag = 23,
DECL|CborExpectedBase16Tag|macro|CborExpectedBase16Tag
DECL|CborExpectedBase64Tag|enumerator|CborExpectedBase64Tag = 22,
DECL|CborExpectedBase64Tag|macro|CborExpectedBase64Tag
DECL|CborExpectedBase64urlTag|enumerator|CborExpectedBase64urlTag = 21,
DECL|CborExpectedBase64urlTag|macro|CborExpectedBase64urlTag
DECL|CborFloatType|enumerator|CborFloatType = 0xfa,
DECL|CborHalfFloatType|enumerator|CborHalfFloatType = 0xf9,
DECL|CborIndefiniteLength|variable|CborIndefiniteLength
DECL|CborIntegerType|enumerator|CborIntegerType = 0x00,
DECL|CborInvalidType|enumerator|CborInvalidType = 0xff /* equivalent to the break byte, so it will never be used */
DECL|CborIteratorFlag_ContainerIsMap|enumerator|CborIteratorFlag_ContainerIsMap = 0x20
DECL|CborIteratorFlag_IntegerValueTooLarge|enumerator|CborIteratorFlag_IntegerValueTooLarge = 0x01,
DECL|CborIteratorFlag_IteratingStringChunks|enumerator|CborIteratorFlag_IteratingStringChunks = 0x02,
DECL|CborIteratorFlag_NegativeInteger|enumerator|CborIteratorFlag_NegativeInteger = 0x02,
DECL|CborIteratorFlag_UnknownLength|enumerator|CborIteratorFlag_UnknownLength = 0x04,
DECL|CborKnownTags|enum|typedef enum CborKnownTags {
DECL|CborKnownTags|typedef|} CborKnownTags;
DECL|CborMapType|enumerator|CborMapType = 0xa0,
DECL|CborMimeMessageTag|enumerator|CborMimeMessageTag = 36,
DECL|CborMimeMessageTag|macro|CborMimeMessageTag
DECL|CborNegativeBignumTag|enumerator|CborNegativeBignumTag = 3,
DECL|CborNegativeBignumTag|macro|CborNegativeBignumTag
DECL|CborNoError|enumerator|CborNoError = 0,
DECL|CborNullType|enumerator|CborNullType = 0xf6,
DECL|CborParserIteratorFlags|enum|enum CborParserIteratorFlags
DECL|CborParser|struct|struct CborParser
DECL|CborParser|typedef|typedef struct CborParser CborParser;
DECL|CborPositiveBignumTag|enumerator|CborPositiveBignumTag = 2,
DECL|CborPositiveBignumTag|macro|CborPositiveBignumTag
DECL|CborPrettyDefaultFlags|enumerator|CborPrettyDefaultFlags = CborPrettyIndicateIndetermineLength
DECL|CborPrettyFlags|enum|enum CborPrettyFlags {
DECL|CborPrettyIndicateIndetermineLength|enumerator|CborPrettyIndicateIndetermineLength = 0x02,
DECL|CborPrettyIndicateOverlongNumbers|enumerator|CborPrettyIndicateOverlongNumbers = 0x04,
DECL|CborPrettyMergeStringFragments|enumerator|CborPrettyMergeStringFragments = 0,
DECL|CborPrettyNumericEncodingIndicators|enumerator|CborPrettyNumericEncodingIndicators = 0x01,
DECL|CborPrettyShowStringFragments|enumerator|CborPrettyShowStringFragments = 0x100,
DECL|CborPrettyTextualEncodingIndicators|enumerator|CborPrettyTextualEncodingIndicators = 0,
DECL|CborRegularExpressionTag|enumerator|CborRegularExpressionTag = 35,
DECL|CborRegularExpressionTag|macro|CborRegularExpressionTag
DECL|CborSignatureTag|enumerator|CborSignatureTag = 55799
DECL|CborSignatureTag|macro|CborSignatureTag
DECL|CborSimpleType|enumerator|CborSimpleType = 0xe0,
DECL|CborStreamFunction|typedef|typedef CborError (*CborStreamFunction)(void *token, const char *fmt, ...)
DECL|CborTagType|enumerator|CborTagType = 0xc0,
DECL|CborTag|typedef|typedef uint64_t CborTag;
DECL|CborTextStringType|enumerator|CborTextStringType = 0x60,
DECL|CborType|enum|typedef enum CborType {
DECL|CborType|typedef|} CborType;
DECL|CborUndefinedType|enumerator|CborUndefinedType = 0xf7,
DECL|CborUnixTime_tTag|enumerator|CborUnixTime_tTag = 1,
DECL|CborUnixTime_tTag|macro|CborUnixTime_tTag
DECL|CborUnknownError|enumerator|CborUnknownError,
DECL|CborUrlTag|enumerator|CborUrlTag = 32,
DECL|CborUrlTag|macro|CborUrlTag
DECL|CborValidateBasic|enumerator|CborValidateBasic = 0
DECL|CborValidateCanonicalFormat|enumerator|CborValidateCanonicalFormat = 0x0fff,
DECL|CborValidateCompleteData|enumerator|CborValidateCompleteData = (int)0x80000000,
DECL|CborValidateFiniteFloatingPoint|enumerator|CborValidateFiniteFloatingPoint = 0x800000,
DECL|CborValidateMapIsSorted|enumerator|CborValidateMapIsSorted = 0x0200 | CborValidateNoIndeterminateLength,
DECL|CborValidateMapKeysAreString|enumerator|CborValidateMapKeysAreString = 0x100000,
DECL|CborValidateMapKeysAreUnique|enumerator|CborValidateMapKeysAreUnique = 0x1000 | CborValidateMapIsSorted,
DECL|CborValidateNoIndeterminateLength|enumerator|CborValidateNoIndeterminateLength = 0x0100,
DECL|CborValidateNoTags|enumerator|CborValidateNoTags = 0x400000,
DECL|CborValidateNoUndefined|enumerator|CborValidateNoUndefined = 0x200000,
DECL|CborValidateNoUnknownSimpleTypesSA|enumerator|CborValidateNoUnknownSimpleTypesSA = 0x4000000,
DECL|CborValidateNoUnknownSimpleTypes|enumerator|CborValidateNoUnknownSimpleTypes = 0x8000000 | CborValidateNoUnknownSimpleTypesSA,
DECL|CborValidateNoUnknownTagsSA|enumerator|CborValidateNoUnknownTagsSA = 0x10000000,
DECL|CborValidateNoUnknownTagsSR|enumerator|CborValidateNoUnknownTagsSR = 0x20000000 | CborValidateNoUnknownTagsSA,
DECL|CborValidateNoUnknownTags|enumerator|CborValidateNoUnknownTags = 0x40000000 | CborValidateNoUnknownTagsSR,
DECL|CborValidateShortestFloatingPoint|enumerator|CborValidateShortestFloatingPoint = 0x0002,
DECL|CborValidateShortestIntegrals|enumerator|CborValidateShortestIntegrals = 0x0001,
DECL|CborValidateShortestNumbers|enumerator|CborValidateShortestNumbers = CborValidateShortestIntegrals | CborValidateShortestFloatingPoint,
DECL|CborValidateStrictMode|enumerator|CborValidateStrictMode = 0xfff00,
DECL|CborValidateStrictest|enumerator|CborValidateStrictest = (int)~0U,
DECL|CborValidateTagUse|enumerator|CborValidateTagUse = 0x2000,
DECL|CborValidateUtf8|enumerator|CborValidateUtf8 = 0x4000,
DECL|CborValidationFlags|enum|enum CborValidationFlags {
DECL|CborValue|struct|struct CborValue
DECL|CborValue|typedef|typedef struct CborValue CborValue;
DECL|SIZE_MAX|macro|SIZE_MAX
DECL|TINYCBOR_VERSION|macro|TINYCBOR_VERSION
DECL|_cbor_encoder_get_buffer_pointer|function|CBOR_INLINE_API uint8_t *_cbor_encoder_get_buffer_pointer(const CborEncoder *encoder)
DECL|_cbor_value_extract_int64_helper|function|CBOR_INLINE_API uint64_t _cbor_value_extract_int64_helper(const CborValue *value)
DECL|bytes_needed|member|ptrdiff_t bytes_needed;
DECL|cbor_encode_boolean|function|CBOR_INLINE_API CborError cbor_encode_boolean(CborEncoder *encoder, bool value)
DECL|cbor_encode_double|function|CBOR_INLINE_API CborError cbor_encode_double(CborEncoder *encoder, double value)
DECL|cbor_encode_float|function|CBOR_INLINE_API CborError cbor_encode_float(CborEncoder *encoder, float value)
DECL|cbor_encode_half_float|function|CBOR_INLINE_API CborError cbor_encode_half_float(CborEncoder *encoder, const void *value)
DECL|cbor_encode_null|function|CBOR_INLINE_API CborError cbor_encode_null(CborEncoder *encoder)
DECL|cbor_encode_text_stringz|function|CBOR_INLINE_API CborError cbor_encode_text_stringz(CborEncoder *encoder, const char *string)
DECL|cbor_encode_undefined|function|CBOR_INLINE_API CborError cbor_encode_undefined(CborEncoder *encoder)
DECL|cbor_encoder_get_buffer_size|function|CBOR_INLINE_API size_t cbor_encoder_get_buffer_size(const CborEncoder *encoder, const uint8_t *buffer)
DECL|cbor_encoder_get_extra_bytes_needed|function|CBOR_INLINE_API size_t cbor_encoder_get_extra_bytes_needed(const CborEncoder *encoder)
DECL|cbor_value_at_end|function|CBOR_INLINE_API bool cbor_value_at_end(const CborValue *it)
DECL|cbor_value_copy_byte_string|function|CBOR_INLINE_API CborError cbor_value_copy_byte_string(const CborValue *value, uint8_t *buffer, size_t *buflen, CborValue *next)
DECL|cbor_value_copy_text_string|function|CBOR_INLINE_API CborError cbor_value_copy_text_string(const CborValue *value, char *buffer, size_t *buflen, CborValue *next)
DECL|cbor_value_dup_byte_string|function|CBOR_INLINE_API CborError cbor_value_dup_byte_string(const CborValue *value, uint8_t **buffer, size_t *buflen, CborValue *next)
DECL|cbor_value_dup_text_string|function|CBOR_INLINE_API CborError cbor_value_dup_text_string(const CborValue *value, char **buffer, size_t *buflen, CborValue *next)
DECL|cbor_value_get_array_length|function|CBOR_INLINE_API CborError cbor_value_get_array_length(const CborValue *value, size_t *length)
DECL|cbor_value_get_boolean|function|CBOR_INLINE_API CborError cbor_value_get_boolean(const CborValue *value, bool *result)
DECL|cbor_value_get_byte_string_chunk|function|CBOR_INLINE_API CborError cbor_value_get_byte_string_chunk(const CborValue *value, const uint8_t **bufferptr, size_t *len, CborValue *next)
DECL|cbor_value_get_double|function|CBOR_INLINE_API CborError cbor_value_get_double(const CborValue *value, double *result)
DECL|cbor_value_get_float|function|CBOR_INLINE_API CborError cbor_value_get_float(const CborValue *value, float *result)
DECL|cbor_value_get_int64|function|CBOR_INLINE_API CborError cbor_value_get_int64(const CborValue *value, int64_t *result)
DECL|cbor_value_get_int|function|CBOR_INLINE_API CborError cbor_value_get_int(const CborValue *value, int *result)
DECL|cbor_value_get_map_length|function|CBOR_INLINE_API CborError cbor_value_get_map_length(const CborValue *value, size_t *length)
DECL|cbor_value_get_next_byte|function|CBOR_INLINE_API const uint8_t *cbor_value_get_next_byte(const CborValue *it)
DECL|cbor_value_get_raw_integer|function|CBOR_INLINE_API CborError cbor_value_get_raw_integer(const CborValue *value, uint64_t *result)
DECL|cbor_value_get_simple_type|function|CBOR_INLINE_API CborError cbor_value_get_simple_type(const CborValue *value, uint8_t *result)
DECL|cbor_value_get_string_length|function|CBOR_INLINE_API CborError cbor_value_get_string_length(const CborValue *value, size_t *length)
DECL|cbor_value_get_tag|function|CBOR_INLINE_API CborError cbor_value_get_tag(const CborValue *value, CborTag *result)
DECL|cbor_value_get_text_string_chunk|function|CBOR_INLINE_API CborError cbor_value_get_text_string_chunk(const CborValue *value, const char **bufferptr, size_t *len, CborValue *next)
DECL|cbor_value_get_type|function|CBOR_INLINE_API CborType cbor_value_get_type(const CborValue *value)
DECL|cbor_value_get_uint64|function|CBOR_INLINE_API CborError cbor_value_get_uint64(const CborValue *value, uint64_t *result)
DECL|cbor_value_is_array|function|CBOR_INLINE_API bool cbor_value_is_array(const CborValue *value)
DECL|cbor_value_is_boolean|function|CBOR_INLINE_API bool cbor_value_is_boolean(const CborValue *value)
DECL|cbor_value_is_byte_string|function|CBOR_INLINE_API bool cbor_value_is_byte_string(const CborValue *value)
DECL|cbor_value_is_container|function|CBOR_INLINE_API bool cbor_value_is_container(const CborValue *it)
DECL|cbor_value_is_double|function|CBOR_INLINE_API bool cbor_value_is_double(const CborValue *value)
DECL|cbor_value_is_float|function|CBOR_INLINE_API bool cbor_value_is_float(const CborValue *value)
DECL|cbor_value_is_half_float|function|CBOR_INLINE_API bool cbor_value_is_half_float(const CborValue *value)
DECL|cbor_value_is_integer|function|CBOR_INLINE_API bool cbor_value_is_integer(const CborValue *value)
DECL|cbor_value_is_length_known|function|CBOR_INLINE_API bool cbor_value_is_length_known(const CborValue *value)
DECL|cbor_value_is_map|function|CBOR_INLINE_API bool cbor_value_is_map(const CborValue *value)
DECL|cbor_value_is_negative_integer|function|CBOR_INLINE_API bool cbor_value_is_negative_integer(const CborValue *value)
DECL|cbor_value_is_null|function|CBOR_INLINE_API bool cbor_value_is_null(const CborValue *value)
DECL|cbor_value_is_simple_type|function|CBOR_INLINE_API bool cbor_value_is_simple_type(const CborValue *value)
DECL|cbor_value_is_tag|function|CBOR_INLINE_API bool cbor_value_is_tag(const CborValue *value)
DECL|cbor_value_is_text_string|function|CBOR_INLINE_API bool cbor_value_is_text_string(const CborValue *value)
DECL|cbor_value_is_undefined|function|CBOR_INLINE_API bool cbor_value_is_undefined(const CborValue *value)
DECL|cbor_value_is_unsigned_integer|function|CBOR_INLINE_API bool cbor_value_is_unsigned_integer(const CborValue *value)
DECL|cbor_value_is_valid|function|CBOR_INLINE_API bool cbor_value_is_valid(const CborValue *value)
DECL|cbor_value_to_pretty|function|CBOR_INLINE_API CborError cbor_value_to_pretty(FILE *out, const CborValue *value)
DECL|data|member|} data;
DECL|end|member|const uint8_t *end;
DECL|end|member|const uint8_t *end;
DECL|extra|member|uint16_t extra;
DECL|flags|member|int flags;
DECL|flags|member|int flags;
DECL|flags|member|uint8_t flags;
DECL|parser|member|const CborParser *parser;
DECL|ptr|member|const uint8_t *ptr;
DECL|ptr|member|uint8_t *ptr;
DECL|remaining|member|size_t remaining;
DECL|remaining|member|uint32_t remaining;
DECL|type|member|uint8_t type;
