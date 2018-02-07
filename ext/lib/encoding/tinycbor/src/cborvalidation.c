DECL|CBOR_PARSER_MAX_RECURSIONS|macro|CBOR_PARSER_MAX_RECURSIONS
DECL|KnownTagData|struct|struct KnownTagData { uint32_t tag; uint32_t types; };
DECL|_BSD_SOURCE|macro|_BSD_SOURCE
DECL|_DEFAULT_SOURCE|macro|_DEFAULT_SOURCE
DECL|__STDC_LIMIT_MACROS|macro|__STDC_LIMIT_MACROS
DECL|knownTagData|variable|knownTagData
DECL|tag|member|struct KnownTagData { uint32_t tag; uint32_t types; };
DECL|types|member|struct KnownTagData { uint32_t tag; uint32_t types; };
DECL|validate_container|function|static CborError validate_container(CborValue *it, int containerType, int flags, int recursionLeft)
DECL|validate_floating_point|function|static inline CborError validate_floating_point(CborValue *it, CborType type, int flags)
DECL|validate_number|function|static inline CborError validate_number(const CborValue *it, CborType type, int flags)
DECL|validate_simple_type|function|static inline CborError validate_simple_type(uint8_t simple_type, int flags)
DECL|validate_tag|function|static inline CborError validate_tag(CborValue *it, CborTag tag, int flags, int recursionLeft)
DECL|validate_utf8_string|function|static inline CborError validate_utf8_string(const void *ptr, size_t n)
DECL|validate_value|function|static CborError validate_value(CborValue *it, int flags, int recursionLeft)
