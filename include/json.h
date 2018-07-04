DECL|JSON_OBJ_DESCR_ARRAY_ARRAY|macro|JSON_OBJ_DESCR_ARRAY_ARRAY
DECL|JSON_OBJ_DESCR_ARRAY_NAMED|macro|JSON_OBJ_DESCR_ARRAY_NAMED
DECL|JSON_OBJ_DESCR_ARRAY|macro|JSON_OBJ_DESCR_ARRAY
DECL|JSON_OBJ_DESCR_OBJECT_NAMED|macro|JSON_OBJ_DESCR_OBJECT_NAMED
DECL|JSON_OBJ_DESCR_OBJECT|macro|JSON_OBJ_DESCR_OBJECT
DECL|JSON_OBJ_DESCR_OBJ_ARRAY_NAMED|macro|JSON_OBJ_DESCR_OBJ_ARRAY_NAMED
DECL|JSON_OBJ_DESCR_OBJ_ARRAY|macro|JSON_OBJ_DESCR_OBJ_ARRAY
DECL|JSON_OBJ_DESCR_PRIM_NAMED|macro|JSON_OBJ_DESCR_PRIM_NAMED
DECL|JSON_OBJ_DESCR_PRIM|macro|JSON_OBJ_DESCR_PRIM
DECL|JSON_TOK_COLON|enumerator|JSON_TOK_COLON = ':',
DECL|JSON_TOK_COMMA|enumerator|JSON_TOK_COMMA = ',',
DECL|JSON_TOK_EOF|enumerator|JSON_TOK_EOF = '\0',
DECL|JSON_TOK_ERROR|enumerator|JSON_TOK_ERROR = '!',
DECL|JSON_TOK_FALSE|enumerator|JSON_TOK_FALSE = 'f',
DECL|JSON_TOK_LIST_END|enumerator|JSON_TOK_LIST_END = ']',
DECL|JSON_TOK_LIST_START|enumerator|JSON_TOK_LIST_START = '[',
DECL|JSON_TOK_NONE|enumerator|JSON_TOK_NONE = '_',
DECL|JSON_TOK_NULL|enumerator|JSON_TOK_NULL = 'n',
DECL|JSON_TOK_NUMBER|enumerator|JSON_TOK_NUMBER = '0',
DECL|JSON_TOK_OBJECT_END|enumerator|JSON_TOK_OBJECT_END = '}',
DECL|JSON_TOK_OBJECT_START|enumerator|JSON_TOK_OBJECT_START = '{',
DECL|JSON_TOK_STRING|enumerator|JSON_TOK_STRING = '"',
DECL|JSON_TOK_TRUE|enumerator|JSON_TOK_TRUE = 't',
DECL|__JSON_H|macro|__JSON_H
DECL|alignment|member|u32_t alignment : 2;
DECL|array|member|} array;
DECL|element_descr|member|const struct json_obj_descr *element_descr;
DECL|field_name_len|member|u32_t field_name_len : 7;
DECL|field_name|member|const char *field_name;
DECL|json_append_bytes_t|typedef|typedef int (*json_append_bytes_t)(const char *bytes, size_t len,
DECL|json_obj_descr|struct|struct json_obj_descr {
DECL|json_tokens|enum|enum json_tokens {
DECL|n_elements|member|size_t n_elements;
DECL|object|member|} object;
DECL|offset|member|u32_t offset : 16;
DECL|sub_descr_len|member|size_t sub_descr_len;
DECL|sub_descr|member|const struct json_obj_descr *sub_descr;
DECL|type|member|u32_t type : 7;
