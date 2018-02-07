DECL|CBORJSON_H|macro|CBORJSON_H
DECL|CborConvertAddMetadata|enumerator|CborConvertAddMetadata = 1,
DECL|CborConvertByteStringsToBase64Url|enumerator|CborConvertByteStringsToBase64Url = 4,
DECL|CborConvertDefaultFlags|enumerator|CborConvertDefaultFlags = 0
DECL|CborConvertIgnoreTags|enumerator|CborConvertIgnoreTags = 0,
DECL|CborConvertObeyByteStringTags|enumerator|CborConvertObeyByteStringTags = 0,
DECL|CborConvertRequireMapStringKeys|enumerator|CborConvertRequireMapStringKeys = 0,
DECL|CborConvertStringifyMapKeys|enumerator|CborConvertStringifyMapKeys = 8,
DECL|CborConvertTagsToObjects|enumerator|CborConvertTagsToObjects = 2,
DECL|CborToJsonFlags|enum|enum CborToJsonFlags
DECL|cbor_value_to_json|function|CBOR_INLINE_API CborError cbor_value_to_json(FILE *out, const CborValue *value, int flags)
