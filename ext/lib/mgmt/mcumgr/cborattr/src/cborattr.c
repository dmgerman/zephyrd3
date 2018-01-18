DECL|CBORATTR_MAX_SIZE|macro|CBORATTR_MAX_SIZE
DECL|cbor_internal_read_object|function|cbor_internal_read_object(CborValue *root_value, const struct cbor_attr_t *attrs, const struct cbor_array_t *parent, int offset)
DECL|cbor_read_array|function|cbor_read_array(struct CborValue *value, const struct cbor_array_t *arr)
DECL|cbor_read_flat_attrs|function|cbor_read_flat_attrs(const uint8_t *data, int len, const struct cbor_attr_t *attrs)
DECL|cbor_read_object|function|cbor_read_object(struct CborValue *value, const struct cbor_attr_t *attrs)
DECL|cbor_target_address|function|cbor_target_address(const struct cbor_attr_t *cursor, const struct cbor_array_t *parent, int offset)
DECL|valid_attr_type|function|valid_attr_type(CborType ct, CborAttrType at)
