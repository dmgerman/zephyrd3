DECL|CBORATTR_ATTR_UNNAMED|macro|CBORATTR_ATTR_UNNAMED
DECL|CBORATTR_H|macro|CBORATTR_H
DECL|CBORATTR_STRUCT_ARRAY|macro|CBORATTR_STRUCT_ARRAY
DECL|CBORATTR_STRUCT_OBJECT|macro|CBORATTR_STRUCT_OBJECT
DECL|CborAttrArrayType|enumerator|CborAttrArrayType,
DECL|CborAttrBooleanType|enumerator|CborAttrBooleanType,
DECL|CborAttrByteStringType|enumerator|CborAttrByteStringType,
DECL|CborAttrDoubleType|enumerator|CborAttrDoubleType,
DECL|CborAttrFloatType|enumerator|CborAttrFloatType,
DECL|CborAttrIntegerType|enumerator|CborAttrIntegerType = 1,
DECL|CborAttrNullType|enumerator|CborAttrNullType,
DECL|CborAttrObjectType|enumerator|CborAttrObjectType,
DECL|CborAttrStructObjectType|enumerator|CborAttrStructObjectType,
DECL|CborAttrTextStringType|enumerator|CborAttrTextStringType,
DECL|CborAttrType|enum|typedef enum CborAttrType {
DECL|CborAttrType|typedef|} CborAttrType;
DECL|CborAttrUnsignedIntegerType|enumerator|CborAttrUnsignedIntegerType,
DECL|addr|member|} addr;
DECL|array|member|struct cbor_array_t array;
DECL|arr|member|} arr;
DECL|attribute|member|char *attribute;
DECL|base|member|char *base;
DECL|booleans|member|} booleans;
DECL|boolean|member|bool *boolean;
DECL|boolean|member|bool boolean;
DECL|byte_string|struct|struct byte_string {
DECL|bytestring|member|} bytestring;
DECL|cbor_array_t|struct|struct cbor_array_t {
DECL|cbor_attr_t|struct|struct cbor_attr_t {
DECL|cbor_enum_t|struct|struct cbor_enum_t {
DECL|count|member|int *count;
DECL|data|member|uint8_t *data;
DECL|dflt|member|} dflt;
DECL|element_type|member|CborAttrType element_type;
DECL|fval|member|float *fval;
DECL|fval|member|float fval;
DECL|integers|member|} integers;
DECL|integer|member|long long int *integer;
DECL|integer|member|long long int integer;
DECL|len|member|size_t *len;
DECL|len|member|size_t len;
DECL|maxlen|member|int maxlen;
DECL|name|member|char *name;
DECL|nodefault|member|bool nodefault;
DECL|objects|member|} objects;
DECL|obj|member|struct cbor_attr_t *obj;
DECL|offset|member|size_t offset;
DECL|ptrs|member|char **ptrs;
DECL|reals|member|} reals;
DECL|real|member|double *real;
DECL|real|member|double real;
DECL|storelen|member|int storelen;
DECL|store|member|bool *store;
DECL|store|member|char *store;
DECL|store|member|double *store;
DECL|store|member|long long int *store;
DECL|store|member|long long unsigned int *store;
DECL|stride|member|size_t stride;
DECL|strings|member|} strings;
DECL|string|member|char *string;
DECL|subtype|member|const struct cbor_attr_t *subtype;
DECL|type|member|CborAttrType type;
DECL|uintegers|member|} uintegers;
DECL|uinteger|member|long long unsigned int *uinteger;
DECL|value|member|long long int value;
