DECL|CONFIG_SHELL_CMD_BUFF_SIZE|macro|CONFIG_SHELL_CMD_BUFF_SIZE
DECL|CONFIG_SHELL_PRINTF_BUFF_SIZE|macro|CONFIG_SHELL_PRINTF_BUFF_SIZE
DECL|SHELL_CMD_REGISTER|macro|SHELL_CMD_REGISTER
DECL|SHELL_CMD_ROOT_LVL|macro|SHELL_CMD_ROOT_LVL
DECL|SHELL_CMD|macro|SHELL_CMD
DECL|SHELL_CREATE_DYNAMIC_CMD|macro|SHELL_CREATE_DYNAMIC_CMD
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|macro|SHELL_CREATE_STATIC_SUBCMD_SET
DECL|SHELL_DEFINE|macro|SHELL_DEFINE
DECL|SHELL_ERROR|macro|SHELL_ERROR
DECL|SHELL_H__|macro|SHELL_H__
DECL|SHELL_INFO|macro|SHELL_INFO
DECL|SHELL_NORMAL|macro|SHELL_NORMAL
DECL|SHELL_OPTION|macro|SHELL_OPTION
DECL|SHELL_OPT|macro|SHELL_OPT
DECL|SHELL_RECEIVE_DEFAULT|enumerator|SHELL_RECEIVE_DEFAULT,
DECL|SHELL_RECEIVE_ESC_SEQ|enumerator|SHELL_RECEIVE_ESC_SEQ,
DECL|SHELL_RECEIVE_ESC|enumerator|SHELL_RECEIVE_ESC,
DECL|SHELL_RECEIVE_TILDE_EXP|enumerator|SHELL_RECEIVE_TILDE_EXP
DECL|SHELL_RX_BUFF_SIZE|macro|SHELL_RX_BUFF_SIZE
DECL|SHELL_SIGNALS|enumerator|SHELL_SIGNALS
DECL|SHELL_SIGNAL_KILL|enumerator|SHELL_SIGNAL_KILL,
DECL|SHELL_SIGNAL_LOG_MSG|enumerator|SHELL_SIGNAL_LOG_MSG,
DECL|SHELL_SIGNAL_RXRDY|enumerator|SHELL_SIGNAL_RXRDY,
DECL|SHELL_SIGNAL_TXDONE|enumerator|SHELL_SIGNAL_TXDONE,
DECL|SHELL_STATE_ACTIVE|enumerator|SHELL_STATE_ACTIVE,
DECL|SHELL_STATE_INITIALIZED|enumerator|SHELL_STATE_INITIALIZED,
DECL|SHELL_STATE_PANIC_MODE_ACTIVE|enumerator|SHELL_STATE_PANIC_MODE_ACTIVE, /*!< Panic activated.*/
DECL|SHELL_STATE_PANIC_MODE_INACTIVE|enumerator|SHELL_STATE_PANIC_MODE_INACTIVE /*!< Panic requested, not supported.*/
DECL|SHELL_STATE_UNINITIALIZED|enumerator|SHELL_STATE_UNINITIALIZED,
DECL|SHELL_STATS_DEFINE|macro|SHELL_STATS_DEFINE
DECL|SHELL_STATS_DEFINE|macro|SHELL_STATS_DEFINE
DECL|SHELL_STATS_PTR|macro|SHELL_STATS_PTR
DECL|SHELL_STATS_PTR|macro|SHELL_STATS_PTR
DECL|SHELL_SUBCMD_SET_END|macro|SHELL_SUBCMD_SET_END
DECL|SHELL_TRANSPORT_EVT_RX_RDY|enumerator|SHELL_TRANSPORT_EVT_RX_RDY,
DECL|SHELL_TRANSPORT_EVT_TX_RDY|enumerator|SHELL_TRANSPORT_EVT_TX_RDY
DECL|SHELL_WARNING|macro|SHELL_WARNING
DECL|active_cmd|member|struct shell_static_entry active_cmd;
DECL|api|member|const struct shell_transport_api *api;
DECL|cmd_buff_len|member|u16_t cmd_buff_len;/*!< Command length.*/
DECL|cmd_buff_pos|member|u16_t cmd_buff_pos; /*!< Command buffer cursor position.*/
DECL|cmd_buff|member|char cmd_buff[CONFIG_SHELL_CMD_BUFF_SIZE];
DECL|cmd_tmp_buff_len|member|u16_t cmd_tmp_buff_len; /*!< Command length in tmp buffer.*/
DECL|ctx|member|struct shell_ctx *ctx; /*!< Internal context.*/
DECL|ctx|member|void *ctx;
DECL|dynamic_get|member|shell_dynamic_get dynamic_get;
DECL|echo|member|u32_t echo :1; /*!< Controls shell echo.*/
DECL|enable|member|int (*enable)(const struct shell_transport *transport, bool blocking);
DECL|entry|member|const struct shell_static_entry *entry;
DECL|events|member|struct k_poll_event events[SHELL_SIGNALS];
DECL|flags|member|struct shell_flags flags;
DECL|fprintf_ctx|member|const struct shell_fprintf *fprintf_ctx;
DECL|handler|member|shell_cmd_handler handler; /*!< Command handler. */
DECL|help|member|const char *help; /*!< Command help string. */
DECL|history|member|struct shell_history *history;
DECL|iface|member|const struct shell_transport *iface; /*!< Transport interface.*/
DECL|init|member|int (*init)(const struct shell_transport *transport,
DECL|insert_mode|member|u32_t insert_mode :1; /*!< Controls insert mode for text introduction.*/
DECL|internal|member|volatile union shell_internal internal; /*!< Internal shell data.*/
DECL|is_dynamic|member|bool is_dynamic;
DECL|log_backend|member|const struct shell_log_backend *log_backend;
DECL|log_lost_cnt|member|u32_t log_lost_cnt; /*!< Lost log counter.*/
DECL|mode_delete|member|u32_t mode_delete :1; /*!< Operation mode of backspace key */
DECL|optname_help|member|const char *optname_help; /*!< Option help string.*/
DECL|optname_short|member|const char *optname_short; /*!< Option short name.*/
DECL|optname|member|const char *optname; /*!< Option long name.*/
DECL|printf_buff|member|char printf_buff[CONFIG_SHELL_PRINTF_BUFF_SIZE];
DECL|processing|member|u32_t processing :1; /*!< Shell is executing process function.*/
DECL|prompt|member|char *const prompt; /*!< shell prompt. */
DECL|read|member|int (*read)(const struct shell_transport *transport,
DECL|receive_state|member|enum shell_receive_state receive_state;/*!< Escape sequence indicator.*/
DECL|shell_cmd_entry|struct|struct shell_cmd_entry {
DECL|shell_cmd_handler|typedef|typedef int (*shell_cmd_handler)(const struct shell *shell,
DECL|shell_ctx|struct|struct shell_ctx {
DECL|shell_dynamic_get|typedef|typedef void (*shell_dynamic_get)(size_t idx,
DECL|shell_flags|struct|struct shell_flags {
DECL|shell_getopt_option|struct|struct shell_getopt_option {
DECL|shell_help_requested|function|static inline bool shell_help_requested(const struct shell *shell)
DECL|shell_internal|union|union shell_internal {
DECL|shell_receive_state|enum|enum shell_receive_state {
DECL|shell_signal|enum|enum shell_signal {
DECL|shell_state|enum|enum shell_state {
DECL|shell_static_entry|struct|struct shell_static_entry {
DECL|shell_stats|struct|struct shell_stats {
DECL|shell_transport_api|struct|struct shell_transport_api {
DECL|shell_transport_evt|enum|enum shell_transport_evt {
DECL|shell_transport_handler_t|typedef|typedef void (*shell_transport_handler_t)(enum shell_transport_evt evt,
DECL|shell_transport|struct|struct shell_transport {
DECL|shell|struct|struct shell {
DECL|show_help|member|u32_t show_help :1; /*!< Shows help if -h or --help option present.*/
DECL|signals|member|struct k_poll_signal signals[SHELL_SIGNALS];
DECL|stack|member|k_thread_stack_t *stack;
DECL|state|member|enum shell_state state; /*!< Internal module state.*/
DECL|stats|member|struct shell_stats *stats;
DECL|subcmd|member|const struct shell_cmd_entry *subcmd; /*!< Pointer to subcommand. */
DECL|syntax|member|const char *syntax; /*!< Command syntax strings. */
DECL|temp_buff|member|char temp_buff[CONFIG_SHELL_CMD_BUFF_SIZE];
DECL|thread|member|struct k_thread *thread;
DECL|tx_rdy|member|u32_t tx_rdy :1;
DECL|uninit|member|int (*uninit)(const struct shell_transport *transport);
DECL|union_cmd_entry|union|union union_cmd_entry {
DECL|use_colors|member|u32_t use_colors :1; /*!< Controls colored syntax.*/
DECL|u|member|} u;
DECL|value|member|u32_t value;
DECL|vt100_ctx|member|struct shell_vt100_ctx vt100_ctx;
DECL|write|member|int (*write)(const struct shell_transport *transport,
