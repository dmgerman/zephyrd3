DECL|AT_CMD_GET_VALUE|enumerator|AT_CMD_GET_VALUE,
DECL|AT_CMD_PROCESS_VALUE|enumerator|AT_CMD_PROCESS_VALUE,
DECL|AT_CMD_START|enumerator|AT_CMD_START,
DECL|AT_CMD_STATE_END_LF|enumerator|AT_CMD_STATE_END_LF,
DECL|AT_CMD_STATE_END|enumerator|AT_CMD_STATE_END
DECL|AT_CMD_TYPE_NORMAL|enumerator|AT_CMD_TYPE_NORMAL,
DECL|AT_CMD_TYPE_OTHER|enumerator|AT_CMD_TYPE_OTHER
DECL|AT_CMD_TYPE_UNSOLICITED|enumerator|AT_CMD_TYPE_UNSOLICITED,
DECL|AT_RESULT_CME_ERROR|enumerator|AT_RESULT_CME_ERROR
DECL|AT_RESULT_ERROR|enumerator|AT_RESULT_ERROR,
DECL|AT_RESULT_OK|enumerator|AT_RESULT_OK,
DECL|AT_STATE_END|enumerator|AT_STATE_END
DECL|AT_STATE_GET_CMD_STRING|enumerator|AT_STATE_GET_CMD_STRING,
DECL|AT_STATE_GET_RESULT_STRING|enumerator|AT_STATE_GET_RESULT_STRING,
DECL|AT_STATE_PROCESS_AG_NW_ERR|enumerator|AT_STATE_PROCESS_AG_NW_ERR,
DECL|AT_STATE_PROCESS_CMD|enumerator|AT_STATE_PROCESS_CMD,
DECL|AT_STATE_PROCESS_RESULT|enumerator|AT_STATE_PROCESS_RESULT,
DECL|AT_STATE_START_CR|enumerator|AT_STATE_START_CR,
DECL|AT_STATE_START_LF|enumerator|AT_STATE_START_LF,
DECL|AT_STATE_START|enumerator|AT_STATE_START,
DECL|AT_STATE_UNSOLICITED_CMD|enumerator|AT_STATE_UNSOLICITED_CMD,
DECL|CME_ERROR_AG_FAILURE|enumerator|CME_ERROR_AG_FAILURE = 0,
DECL|CME_ERROR_DIAL_STRING_TO_LONG|enumerator|CME_ERROR_DIAL_STRING_TO_LONG = 26,
DECL|CME_ERROR_INCORRECT_PASSWORD|enumerator|CME_ERROR_INCORRECT_PASSWORD = 16,
DECL|CME_ERROR_INVALID_CHARS_IN_DIAL_STRING|enumerator|CME_ERROR_INVALID_CHARS_IN_DIAL_STRING = 27,
DECL|CME_ERROR_INVALID_CHARS_IN_TEXT_STRING|enumerator|CME_ERROR_INVALID_CHARS_IN_TEXT_STRING = 25,
DECL|CME_ERROR_INVALID_INDEX|enumerator|CME_ERROR_INVALID_INDEX = 21,
DECL|CME_ERROR_MEMORY_FAILURE|enumerator|CME_ERROR_MEMORY_FAILURE = 23,
DECL|CME_ERROR_MEMORY_FULL|enumerator|CME_ERROR_MEMORY_FULL = 20,
DECL|CME_ERROR_NETWORK_NOT_ALLOWED|enumerator|CME_ERROR_NETWORK_NOT_ALLOWED = 32,
DECL|CME_ERROR_NETWORK_TIMEOUT|enumerator|CME_ERROR_NETWORK_TIMEOUT = 31,
DECL|CME_ERROR_NO_CONNECTION_TO_PHONE|enumerator|CME_ERROR_NO_CONNECTION_TO_PHONE = 1,
DECL|CME_ERROR_NO_NETWORK_SERVICE|enumerator|CME_ERROR_NO_NETWORK_SERVICE = 30,
DECL|CME_ERROR_OPERATION_NOT_ALLOWED|enumerator|CME_ERROR_OPERATION_NOT_ALLOWED = 3,
DECL|CME_ERROR_OPERATION_NOT_SUPPORTED|enumerator|CME_ERROR_OPERATION_NOT_SUPPORTED = 4,
DECL|CME_ERROR_PH_SIM_PIN_REQUIRED|enumerator|CME_ERROR_PH_SIM_PIN_REQUIRED = 5,
DECL|CME_ERROR_SIM_BUSY|enumerator|CME_ERROR_SIM_BUSY = 14,
DECL|CME_ERROR_SIM_FAILURE|enumerator|CME_ERROR_SIM_FAILURE = 13,
DECL|CME_ERROR_SIM_NOT_INSERTED|enumerator|CME_ERROR_SIM_NOT_INSERTED = 10,
DECL|CME_ERROR_SIM_PIN2_REQUIRED|enumerator|CME_ERROR_SIM_PIN2_REQUIRED = 17,
DECL|CME_ERROR_SIM_PIN_REQUIRED|enumerator|CME_ERROR_SIM_PIN_REQUIRED = 11,
DECL|CME_ERROR_SIM_PUK2_REQUIRED|enumerator|CME_ERROR_SIM_PUK2_REQUIRED = 18,
DECL|CME_ERROR_SIM_PUK_REQUIRED|enumerator|CME_ERROR_SIM_PUK_REQUIRED = 12,
DECL|CME_ERROR_TEXT_STRING_TOO_LONG|enumerator|CME_ERROR_TEXT_STRING_TOO_LONG = 24,
DECL|CME_ERROR_UNKNOWN|enumerator|CME_ERROR_UNKNOWN = 33,
DECL|at_client|struct|struct at_client {
DECL|at_cmd_state|enum|enum at_cmd_state {
DECL|at_cmd_type|enum|enum at_cmd_type {
DECL|at_cme|enum|enum at_cme {
DECL|at_finish_cb_t|typedef|typedef int (*at_finish_cb_t)(struct at_client *at, enum at_result result,
DECL|at_resp_cb_t|typedef|typedef int (*at_resp_cb_t)(struct at_client *at, struct net_buf *buf);
DECL|at_result|enum|enum at_result {
DECL|at_state|enum|enum at_state {
DECL|buf_max_len|member|u8_t buf_max_len;
DECL|buf|member|char *buf;
DECL|cmd_state|member|u8_t cmd_state;
DECL|finish|member|at_finish_cb_t finish;
DECL|handle_cmd_input_t|typedef|typedef int (*handle_cmd_input_t)(struct at_client *at, struct net_buf *buf,
DECL|handle_parse_input_t|typedef|typedef int (*handle_parse_input_t)(struct at_client *at, struct net_buf *buf);
DECL|parse_val_t|typedef|typedef int (*parse_val_t)(struct at_client *at);
DECL|pos|member|u8_t pos;
DECL|resp|member|at_resp_cb_t resp;
DECL|state|member|u8_t state;
DECL|unsolicited|member|at_resp_cb_t unsolicited;
