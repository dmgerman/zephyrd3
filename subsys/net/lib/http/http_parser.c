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
DECL|IS_URL_CHAR|macro|IS_URL_CHAR
DECL|IS_URL_CHAR|macro|IS_URL_CHAR
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
DECL|T|macro|T
DECL|T|macro|T
DECL|T|macro|T
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
DECL|http_host_state|enum|enum http_host_state {
DECL|http_message_needs_eof|function|int http_message_needs_eof(const struct http_parser *parser)
DECL|http_method_str|function|const char *http_method_str(enum http_method m)
DECL|http_parse_host_char|function|http_parse_host_char(enum http_host_state s, const char ch)
DECL|http_parse_host|function|int http_parse_host(const char *buf, struct http_parser_url *u, int found_at)
DECL|http_parser_execute|function|int http_parser_execute(struct http_parser *parser,const struct http_parser_settings *settings, const char *data, size_t len)
DECL|http_parser_init|function|void http_parser_init(struct http_parser *parser, enum http_parser_type t)
DECL|http_parser_parse_url|function|http_parser_parse_url(const char *buf, size_t buflen, int is_connect, struct http_parser_url *u)
DECL|http_parser_pause|function|void http_parser_pause(struct http_parser *parser, int paused)
DECL|http_parser_settings_init|function|void http_parser_settings_init(struct http_parser_settings *settings)
DECL|http_parser_url_init|function|http_parser_url_init(struct http_parser_url *u)
DECL|http_parser_version|function|unsigned long http_parser_version(void)
DECL|http_should_keep_alive|function|int http_should_keep_alive(const struct http_parser *parser)
DECL|http_strerror_tab|variable|http_strerror_tab
DECL|method_strings|variable|method_strings
DECL|name|member|const char *name;
DECL|normal_url_char|variable|normal_url_char
DECL|parse_url_char|function|static enum state parse_url_char(enum state s, const char ch)
DECL|parser_execute|function|int parser_execute(struct http_parser *parser, const struct http_parser_settings *settings, const char *data, size_t len, size_t *parsed)
DECL|parser_header_state|function|int parser_header_state(struct http_parser *parser, char ch, char c)
DECL|s_body_identity_eof|enumerator|s_body_identity_eof,
DECL|s_body_identity|enumerator|s_body_identity,
DECL|s_chunk_data_almost_done|enumerator|s_chunk_data_almost_done,
DECL|s_chunk_data_done|enumerator|s_chunk_data_done,
DECL|s_chunk_data|enumerator|s_chunk_data,
DECL|s_chunk_parameters|enumerator|s_chunk_parameters,
DECL|s_chunk_size_almost_done|enumerator|s_chunk_size_almost_done,
DECL|s_chunk_size_start|enumerator|s_chunk_size_start,
DECL|s_chunk_size|enumerator|s_chunk_size,
DECL|s_dead|enumerator|s_dead = 1, /* important that this is > 0 */
DECL|s_header_almost_done|enumerator|s_header_almost_done,
DECL|s_header_field_start|enumerator|s_header_field_start,
DECL|s_header_field|enumerator|s_header_field,
DECL|s_header_value_discard_lws|enumerator|s_header_value_discard_lws,
DECL|s_header_value_discard_ws_almost_done|enumerator|s_header_value_discard_ws_almost_done,
DECL|s_header_value_discard_ws|enumerator|s_header_value_discard_ws,
DECL|s_header_value_lws|enumerator|s_header_value_lws,
DECL|s_header_value_start|enumerator|s_header_value_start,
DECL|s_header_value|enumerator|s_header_value,
DECL|s_headers_almost_done|enumerator|s_headers_almost_done,
DECL|s_headers_done|enumerator|s_headers_done,
DECL|s_http_host_dead|enumerator|s_http_host_dead = 1,
DECL|s_http_host_port_start|enumerator|s_http_host_port_start,
DECL|s_http_host_port|enumerator|s_http_host_port
DECL|s_http_host_start|enumerator|s_http_host_start,
DECL|s_http_host_v6_end|enumerator|s_http_host_v6_end,
DECL|s_http_host_v6_start|enumerator|s_http_host_v6_start,
DECL|s_http_host_v6_zone_start|enumerator|s_http_host_v6_zone_start,
DECL|s_http_host_v6_zone|enumerator|s_http_host_v6_zone,
DECL|s_http_host_v6|enumerator|s_http_host_v6,
DECL|s_http_host|enumerator|s_http_host,
DECL|s_http_userinfo_start|enumerator|s_http_userinfo_start,
DECL|s_http_userinfo|enumerator|s_http_userinfo,
DECL|s_message_done|enumerator|s_message_done
DECL|s_req_first_http_major|enumerator|s_req_first_http_major,
DECL|s_req_first_http_minor|enumerator|s_req_first_http_minor,
DECL|s_req_fragment_start|enumerator|s_req_fragment_start,
DECL|s_req_fragment|enumerator|s_req_fragment,
DECL|s_req_http_HTTP|enumerator|s_req_http_HTTP,
DECL|s_req_http_HTT|enumerator|s_req_http_HTT,
DECL|s_req_http_HT|enumerator|s_req_http_HT,
DECL|s_req_http_H|enumerator|s_req_http_H,
DECL|s_req_http_major|enumerator|s_req_http_major,
DECL|s_req_http_minor|enumerator|s_req_http_minor,
DECL|s_req_http_start|enumerator|s_req_http_start,
DECL|s_req_line_almost_done|enumerator|s_req_line_almost_done,
DECL|s_req_method|enumerator|s_req_method,
DECL|s_req_path|enumerator|s_req_path,
DECL|s_req_query_string_start|enumerator|s_req_query_string_start,
DECL|s_req_query_string|enumerator|s_req_query_string,
DECL|s_req_schema_slash_slash|enumerator|s_req_schema_slash_slash,
DECL|s_req_schema_slash|enumerator|s_req_schema_slash,
DECL|s_req_schema|enumerator|s_req_schema,
DECL|s_req_server_start|enumerator|s_req_server_start,
DECL|s_req_server_with_at|enumerator|s_req_server_with_at,
DECL|s_req_server|enumerator|s_req_server,
DECL|s_req_spaces_before_url|enumerator|s_req_spaces_before_url,
DECL|s_res_HTTP|enumerator|s_res_HTTP,
DECL|s_res_HTT|enumerator|s_res_HTT,
DECL|s_res_HT|enumerator|s_res_HT,
DECL|s_res_H|enumerator|s_res_H,
DECL|s_res_first_http_major|enumerator|s_res_first_http_major,
DECL|s_res_first_http_minor|enumerator|s_res_first_http_minor,
DECL|s_res_first_status_code|enumerator|s_res_first_status_code,
DECL|s_res_http_major|enumerator|s_res_http_major,
DECL|s_res_http_minor|enumerator|s_res_http_minor,
DECL|s_res_line_almost_done|enumerator|s_res_line_almost_done,
DECL|s_res_or_resp_H|enumerator|s_res_or_resp_H,
DECL|s_res_status_code|enumerator|s_res_status_code,
DECL|s_res_status_start|enumerator|s_res_status_start,
DECL|s_res_status|enumerator|s_res_status,
DECL|s_start_req_or_res|enumerator|s_start_req_or_res,
DECL|s_start_req|enumerator|s_start_req,
DECL|s_start_res|enumerator|s_start_res,
DECL|start_state|macro|start_state
DECL|state|enum|enum state {
DECL|strict_check|function|int strict_check(struct http_parser *parser, int c)
DECL|strict_check|function|int strict_check(struct http_parser *parser, int c)
DECL|tokens|variable|tokens
DECL|unhex|variable|unhex
DECL|zero_content_length|function|int zero_content_length(struct http_parser *parser,const struct http_parser_settings *settings, enum state *current_state, size_t *parsed, const char *p, const char *data)
