DECL|ConversionStatusFlags|enum|enum ConversionStatusFlags {
DECL|ConversionStatus|struct|typedef struct ConversionStatus {
DECL|ConversionStatus|typedef|} ConversionStatus;
DECL|FinalTypeMask|enumerator|FinalTypeMask = 0xff
DECL|NumberPrecisionWasLost|enumerator|NumberPrecisionWasLost = 0x400,
DECL|NumberWasInfinite|enumerator|NumberWasInfinite = 0x1000,
DECL|NumberWasNaN|enumerator|NumberWasNaN = 0x800,
DECL|NumberWasNegative|enumerator|NumberWasNegative = 0x2000, /* always used with NumberWasInifite or NumberWasTooBig */
DECL|TypeWasNotNative|enumerator|TypeWasNotNative = 0x100, /* anything but strings, boolean, null, arrays and maps */
DECL|TypeWasTagged|enumerator|TypeWasTagged = 0x200,
DECL|_BSD_SOURCE|macro|_BSD_SOURCE
DECL|_DEFAULT_SOURCE|macro|_DEFAULT_SOURCE
DECL|_GNU_SOURCE|macro|_GNU_SOURCE
DECL|_POSIX_C_SOURCE|macro|_POSIX_C_SOURCE
DECL|__STDC_LIMIT_MACROS|macro|__STDC_LIMIT_MACROS
DECL|add_value_metadata|function|static CborError add_value_metadata(FILE *out, CborType type, const ConversionStatus *status)
DECL|array_to_json|function|static CborError array_to_json(FILE *out, CborValue *it, int flags, ConversionStatus *status)
DECL|cbor_value_to_json_advance|function|CborError cbor_value_to_json_advance(FILE *out, CborValue *value, int flags)
DECL|dump_bytestring_base16|function|static CborError dump_bytestring_base16(char **result, CborValue *it)
DECL|dump_bytestring_base64url|function|static CborError dump_bytestring_base64url(char **result, CborValue *it)
DECL|dump_bytestring_base64|function|static CborError dump_bytestring_base64(char **result, CborValue *it)
DECL|find_tagged_type|function|static CborError find_tagged_type(CborValue *it, CborTag *tag, CborType *type)
DECL|flags|member|int flags;
DECL|generic_dump_base64|function|static CborError generic_dump_base64(char **result, CborValue *it, const char alphabet[65])
DECL|lastTag|member|CborTag lastTag;
DECL|map_to_json|function|static CborError map_to_json(FILE *out, CborValue *it, int flags, ConversionStatus *status)
DECL|originalNumber|member|uint64_t originalNumber;
DECL|stringify_map_key|function|static CborError stringify_map_key(char **key, CborValue *it, int flags, CborType type)
DECL|tagged_value_to_json|function|static CborError tagged_value_to_json(FILE *out, CborValue *it, int flags, ConversionStatus *status)
DECL|value_to_json|function|static CborError value_to_json(FILE *out, CborValue *it, int flags, CborType type, ConversionStatus *status)
