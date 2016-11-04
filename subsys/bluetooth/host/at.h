DECL|AT_RESULT_ERROR|enumerator|AT_RESULT_ERROR
DECL|AT_RESULT_OK|enumerator|AT_RESULT_OK,
DECL|AT_STATE_END|enumerator|AT_STATE_END
DECL|AT_STATE_GET_CMD_STRING|enumerator|AT_STATE_GET_CMD_STRING,
DECL|AT_STATE_GET_RESULT_STRING|enumerator|AT_STATE_GET_RESULT_STRING,
DECL|AT_STATE_PROCESS_CMD|enumerator|AT_STATE_PROCESS_CMD,
DECL|AT_STATE_PROCESS_RESULT|enumerator|AT_STATE_PROCESS_RESULT,
DECL|AT_STATE_START_CR|enumerator|AT_STATE_START_CR,
DECL|AT_STATE_START_LF|enumerator|AT_STATE_START_LF,
DECL|AT_STATE_START|enumerator|AT_STATE_START,
DECL|AT_STATE_UNSOLICITED_CMD|enumerator|AT_STATE_UNSOLICITED_CMD,
DECL|CMD_GET_VALUE|enumerator|CMD_GET_VALUE,
DECL|CMD_PROCESS_VALUE|enumerator|CMD_PROCESS_VALUE,
DECL|CMD_START|enumerator|CMD_START,
DECL|CMD_STATE_END_LF|enumerator|CMD_STATE_END_LF,
DECL|CMD_STATE_END|enumerator|CMD_STATE_END
DECL|at_client|struct|struct at_client {
DECL|at_cmd_state|enum|enum at_cmd_state {
DECL|at_finish_cb_t|typedef|typedef int (*at_finish_cb_t)(struct at_client *at, struct net_buf *buf,
DECL|at_resp_cb_t|typedef|typedef int (*at_resp_cb_t)(struct at_client *at, struct net_buf *buf);
DECL|at_result|enum|enum at_result {
DECL|at_state|enum|enum at_state {
DECL|buf_max_len|member|uint8_t buf_max_len;
DECL|buf_pos|member|uint8_t buf_pos;
DECL|buf|member|char *buf;
DECL|cmd_state|member|uint8_t cmd_state;
DECL|finish|member|at_finish_cb_t finish;
DECL|handle_cmd_input_t|typedef|typedef int (*handle_cmd_input_t)(struct at_client *at, struct net_buf *buf,
DECL|handle_parse_input_t|typedef|typedef int (*handle_parse_input_t)(struct at_client *at, struct net_buf *buf);
DECL|parse_val_t|typedef|typedef int (*parse_val_t)(struct at_client *at);
DECL|resp|member|at_resp_cb_t resp;
DECL|state|member|uint8_t state;
