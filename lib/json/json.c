DECL|arr_next|function|static int arr_next(struct json_obj *json, struct token *value)
DECL|arr_parse|function|static int arr_parse(struct json_obj *obj, const struct json_obj_descr *elem_descr, size_t max_elements, void *field, void *val)
DECL|backup|function|static void backup(struct lexer *lexer)
DECL|decode_num|function|static int decode_num(const struct token *token, int32_t *num)
DECL|decode_value|function|static int decode_value(struct json_obj *obj,const struct json_obj_descr *descr, struct token *value, void *field, void *val)
DECL|element_token|function|static int element_token(enum json_tokens token)
DECL|emit|function|static void emit(struct lexer *lexer, enum json_tokens token)
DECL|end|member|char *end;
DECL|end|member|char *end;
DECL|equivalent_types|function|static bool equivalent_types(enum json_tokens type1, enum json_tokens type2)
DECL|escapable|variable|escapable
DECL|get_elem_size|function|static ptrdiff_t get_elem_size(const struct json_obj_descr *descr)
DECL|ignore|function|static void ignore(struct lexer *lexer)
DECL|json_calc_escaped_len|function|size_t json_calc_escaped_len(const char *str, size_t len)
DECL|json_escape_internal|function|static int json_escape_internal(char *str, size_t *len, size_t buf_size)
DECL|json_escape|function|ssize_t json_escape(char *str, size_t *len, size_t buf_size)
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
DECL|next|function|static char next(struct lexer *lexer)
DECL|obj_init|function|static int obj_init(struct json_obj *json, char *data, size_t len)
DECL|obj_next|function|static int obj_next(struct json_obj *json, struct json_obj_key_value *kv)
DECL|obj_parse|function|static int obj_parse(struct json_obj *obj, const struct json_obj_descr *descr, size_t descr_len, void *val)
DECL|peek|function|static char peek(struct lexer *lexer)
DECL|pos|member|char *pos;
DECL|start|member|char *start;
DECL|start|member|char *start;
DECL|state|member|void *(*state)(struct lexer *lexer);
DECL|token|member|struct token token;
DECL|token|struct|struct token {
DECL|type|member|enum json_tokens type;
DECL|value|member|struct token value;
