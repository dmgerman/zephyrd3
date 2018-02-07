DECL|_BSD_SOURCE|macro|_BSD_SOURCE
DECL|_DEFAULT_SOURCE|macro|_DEFAULT_SOURCE
DECL|__STDC_LIMIT_MACROS|macro|__STDC_LIMIT_MACROS
DECL|cbor_value_to_pretty_stream|function|CborError cbor_value_to_pretty_stream(CborStreamFunction streamFunction, void *token, CborValue *value, int flags)
DECL|container_to_pretty|function|static CborError container_to_pretty(CborStreamFunction stream, void *out, CborValue *it, CborType containerType, int flags, int recursionsLeft)
DECL|get_indicator|function|static const char *get_indicator(const CborValue *it, int flags)
DECL|hexDump|function|static CborError hexDump(CborStreamFunction stream, void *out, const void *ptr, size_t n)
DECL|printRecursionLimit|function|static void printRecursionLimit(CborStreamFunction stream, void *out)
DECL|resolve_indicator|function|static const char *resolve_indicator(const CborValue *it, int flags)
DECL|utf8EscapedDump|function|static CborError utf8EscapedDump(CborStreamFunction stream, void *out, const void *ptr, size_t n)
DECL|value_to_pretty|function|static CborError value_to_pretty(CborStreamFunction stream, void *out, CborValue *it, int flags, int recursionsLeft)
