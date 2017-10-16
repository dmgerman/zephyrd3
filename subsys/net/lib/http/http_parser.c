DECL|ARRAY_SIZE|macro|ARRAY_SIZE
DECL|BIT_AT|macro|BIT_AT
DECL|CHUNKED|macro|CHUNKED
DECL|CLOSE|macro|CLOSE
DECL|CONNECTION|macro|CONNECTION
DECL|CONTENT_LENGTH|macro|CONTENT_LENGTH
DECL|CR|macro|CR
DECL|CURRENT_STATE|macro|CURRENT_STATE
DECL|ELEM_AT|macro|ELEM_AT
DECL|IS_ALPHANUM|macro|IS_ALPHANUM
DECL|IS_ALPHA|macro|IS_ALPHA
DECL|IS_HEADER_CHAR|macro|IS_HEADER_CHAR
DECL|IS_HEX|macro|IS_HEX
DECL|IS_HOST_CHAR|macro|IS_HOST_CHAR
DECL|IS_HOST_CHAR|macro|IS_HOST_CHAR
DECL|IS_MARK|macro|IS_MARK
DECL|IS_NUM|macro|IS_NUM
DECL|IS_USERINFO_CHAR|macro|IS_USERINFO_CHAR
DECL|KEEP_ALIVE|macro|KEEP_ALIVE
DECL|LF|macro|LF
DECL|LIKELY|macro|LIKELY
DECL|LIKELY|macro|LIKELY
DECL|LOWER|macro|LOWER
DECL|MARK|macro|MARK
DECL|MIN|macro|MIN
DECL|NEW_MESSAGE|macro|NEW_MESSAGE
DECL|NEW_MESSAGE|macro|NEW_MESSAGE
DECL|PARSING_HEADER|macro|PARSING_HEADER
DECL|PROXY_CONNECTION|macro|PROXY_CONNECTION
DECL|SET_ERRNO|macro|SET_ERRNO
DECL|STRICT_TOKEN|macro|STRICT_TOKEN
DECL|TOKEN|macro|TOKEN
DECL|TOKEN|macro|TOKEN
DECL|TRANSFER_ENCODING|macro|TRANSFER_ENCODING
DECL|ULLONG_MAX|macro|ULLONG_MAX
DECL|UNLIKELY|macro|UNLIKELY
DECL|UNLIKELY|macro|UNLIKELY
DECL|UPDATE_STATE|macro|UPDATE_STATE
DECL|UPGRADE|macro|UPGRADE
DECL|cb_data|function|int cb_data(struct http_parser *parser, http_data_cb cb, int cb_error, enum state *current_state, size_t *parsed, size_t already_parsed, const char **mark, size_t len)
DECL|cb_notify|function|int cb_notify(struct http_parser *parser, enum state *current_state, http_cb cb, int cb_error, size_t *parsed, size_t already_parsed)
DECL|count_header_size|function|int count_header_size(struct http_parser *parser, int bytes)
DECL|description|member|const char *description;
DECL|h_CON|enumerator|h_CON,
DECL|h_CO|enumerator|h_CO,
DECL|h_C|enumerator|h_C,
DECL|h_connection_close|enumerator|h_connection_close,
DECL|h_connection_keep_alive|enumerator|h_connection_keep_alive,
DECL|h_connection_upgrade|enumerator|h_connection_upgrade
DECL|h_connection|enumerator|h_connection,
DECL|h_content_length|enumerator|h_content_length,
DECL|h_general|enumerator|h_general = 0,
DECL|h_matching_connection_close|enumerator|h_matching_connection_close,
DECL|h_matching_connection_keep_alive|enumerator|h_matching_connection_keep_alive,
DECL|h_matching_connection_token_start|enumerator|h_matching_connection_token_start,
DECL|h_matching_connection_token|enumerator|h_matching_connection_token,
DECL|h_matching_connection_upgrade|enumerator|h_matching_connection_upgrade,
DECL|h_matching_connection|enumerator|h_matching_connection,
DECL|h_matching_content_length|enumerator|h_matching_content_length,
DECL|h_matching_proxy_connection|enumerator|h_matching_proxy_connection,
DECL|h_matching_transfer_encoding_chunked|enumerator|h_matching_transfer_encoding_chunked,
DECL|h_matching_transfer_encoding|enumerator|h_matching_transfer_encoding,
DECL|h_matching_upgrade|enumerator|h_matching_upgrade,
DECL|h_transfer_encoding_chunked|enumerator|h_transfer_encoding_chunked,
DECL|h_transfer_encoding|enumerator|h_transfer_encoding,
DECL|h_upgrade|enumerator|h_upgrade,
DECL|header_states|enum|enum header_states {
DECL|header_states|function|int header_states(struct http_parser *parser, const char *data, size_t len, const char **ptr, enum state *p_state, enum header_states *header_state, char ch, char c)
DECL|http_body_is_final|function|int http_body_is_final(const struct http_parser *parser)
DECL|http_errno_description|function|const char *http_errno_description(enum http_errno err)
DECL|http_errno_name|function|const char *http_errno_name(enum http_errno err)
DECL|http_message_needs_eof|function|int http_message_needs_eof(const struct http_parser *parser)
DECL|http_method_str|function|const char *http_method_str(enum http_method m)
DECL|http_parser_execute|function|size_t http_parser_execute(struct http_parser *parser, const struct http_parser_settings *settings, const char *data, size_t len)
DECL|http_parser_init|function|void http_parser_init(struct http_parser *parser, enum http_parser_type t)
DECL|http_parser_pause|function|void http_parser_pause(struct http_parser *parser, int paused)
DECL|http_parser_settings_init|function|void http_parser_settings_init(struct http_parser_settings *settings)
DECL|http_parser_version|function|unsigned long http_parser_version(void)
DECL|http_should_keep_alive|function|int http_should_keep_alive(const struct http_parser *parser)
DECL|http_strerror_tab|variable|http_strerror_tab
DECL|method_strings|variable|method_strings
DECL|name|member|const char *name;
DECL|parser_execute|function|int parser_execute(struct http_parser *parser, const struct http_parser_settings *settings, const char *data, size_t len, size_t *parsed)
DECL|parser_header_state|function|int parser_header_state(struct http_parser *parser, char ch, char c)
DECL|start_state|macro|start_state
DECL|strict_check|function|int strict_check(struct http_parser *parser, int c)
DECL|strict_check|function|int strict_check(struct http_parser *parser, int c)
DECL|tokens|variable|tokens
DECL|unhex|variable|unhex
DECL|zero_content_length|function|int zero_content_length(struct http_parser *parser,const struct http_parser_settings *settings, enum state *current_state, size_t *parsed, const char *p, const char *data)
