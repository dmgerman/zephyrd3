DECL|accept_run|function|static int accept_run(struct lexer *lexer, const char *run)
DECL|append_bytes_to_buf|function|static int append_bytes_to_buf(const char *bytes, size_t len, void *data)
DECL|appender|struct|struct appender {
DECL|arr_encode|function|static int arr_encode(const struct json_obj_descr *elem_descr, const void *field, const void *val, json_append_bytes_t append_bytes, void *data)
DECL|arr_next|function|static int arr_next(struct json_obj *json, struct token *value)
DECL|arr_parse|function|static int arr_parse(struct json_obj *obj, const struct json_obj_descr *elem_descr, size_t max_elements, void *field, void *val)
DECL|backup|function|static void backup(struct lexer *lexer)
DECL|bool_encode|function|static int bool_encode(const bool *value, json_append_bytes_t append_bytes, void *data)
DECL|buffer|member|char *buffer;
DECL|decode_num|function|static int decode_num(const struct token *token, s32_t *num)
DECL|decode_value|function|static int decode_value(struct json_obj *obj,const struct json_obj_descr *descr, struct token *value, void *field, void *val)
DECL|element_token|function|static int element_token(enum json_tokens token)
DECL|emit|function|static void emit(struct lexer *lexer, enum json_tokens token)
DECL|encode|function|static int encode(const struct json_obj_descr *descr, const void *val, json_append_bytes_t append_bytes, void *data)
DECL|end|member|char *end;
DECL|end|member|char *end;
DECL|equivalent_types|function|static bool equivalent_types(enum json_tokens type1, enum json_tokens type2)
DECL|escape_as|function|static char escape_as(char chr)
DECL|get_elem_size|function|static ptrdiff_t get_elem_size(const struct json_obj_descr *descr)
DECL|ignore|function|static void ignore(struct lexer *lexer)
DECL|json_calc_encoded_len|function|ssize_t json_calc_encoded_len(const struct json_obj_descr *descr, size_t descr_len, const void *val)
DECL|json_calc_escaped_len|function|size_t json_calc_escaped_len(const char *str, size_t len)
DECL|json_escape_internal|function|static int json_escape_internal(const char *str,json_append_bytes_t append_bytes, void *data)
DECL|json_escape|function|ssize_t json_escape(char *str, size_t *len, size_t buf_size)
DECL|json_obj_encode_buf|function|int json_obj_encode_buf(const struct json_obj_descr *descr, size_t descr_len,const void *val, char *buffer, size_t buf_size)
DECL|json_obj_encode|function|int json_obj_encode(const struct json_obj_descr *descr, size_t descr_len, const void *val, json_append_bytes_t append_bytes, void *data)
DECL|json_obj_key_value|struct|struct json_obj_key_value {
DECL|json_obj_parse|function|int json_obj_parse(char *payload, size_t len, const struct json_obj_descr *descr, size_t descr_len, void *val)
DECL|json_obj|struct|struct json_obj {
DECL|key_len|member|size_t key_len;
DECL|key|member|const char *key;
DECL|lexer_boolean|function|static void *lexer_boolean(struct lexer *lexer)
DECL|lexer_consume|function|static bool lexer_consume(struct lexer *lexer, struct token *token, enum json_tokens empty_token)
DECL|lexer_init|function|static void lexer_init(struct lexer *lexer, char *data, size_t len)
DECL|lexer_json|function|static void *lexer_json(struct lexer *lexer)
DECL|lexer_next|function|static bool lexer_next(struct lexer *lexer, struct token *token)
DECL|lexer_null|function|static void *lexer_null(struct lexer *lexer)
DECL|lexer_number|function|static void *lexer_number(struct lexer *lexer)
DECL|lexer_string|function|static void *lexer_string(struct lexer *lexer)
DECL|lexer|member|struct lexer lexer;
DECL|lexer|struct|struct lexer {
DECL|measure_bytes|function|static int measure_bytes(const char *bytes, size_t len, void *data)
DECL|next|function|static int next(struct lexer *lexer)
DECL|num_encode|function|static int num_encode(const s32_t *num, json_append_bytes_t append_bytes, void *data)
DECL|obj_init|function|static int obj_init(struct json_obj *json, char *data, size_t len)
DECL|obj_next|function|static int obj_next(struct json_obj *json, struct json_obj_key_value *kv)
DECL|obj_parse|function|static int obj_parse(struct json_obj *obj, const struct json_obj_descr *descr, size_t descr_len, void *val)
DECL|peek|function|static int peek(struct lexer *lexer)
DECL|pos|member|char *pos;
DECL|size|member|size_t size;
DECL|start|member|char *start;
DECL|start|member|char *start;
DECL|state|member|void *(*state)(struct lexer *lexer);
DECL|str_encode|function|static int str_encode(const char **str, json_append_bytes_t append_bytes, void *data)
DECL|token|member|struct token token;
DECL|token|struct|struct token {
DECL|type|member|enum json_tokens type;
DECL|used|member|size_t used;
DECL|value|member|struct token value;
