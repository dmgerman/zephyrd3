DECL|fifo_flush|function|static void fifo_flush(const struct shell_log_backend *backend)
DECL|log_backend_shell_api|variable|log_backend_shell_api
DECL|msg_from_fifo|function|static struct log_msg *msg_from_fifo(const struct shell_log_backend *backend)
DECL|msg_process|function|static void msg_process(const struct log_output *log_output,struct log_msg *msg)
DECL|msg_to_fifo|function|static void msg_to_fifo(const struct shell *shell,struct log_msg *msg)
DECL|panic|function|static void panic(const struct log_backend *const backend)
DECL|put|function|static void put(const struct log_backend *const backend, struct log_msg *msg)
DECL|shell_log_backend_disable|function|void shell_log_backend_disable(const struct shell_log_backend *backend)
DECL|shell_log_backend_enable|function|void shell_log_backend_enable(const struct shell_log_backend *backend, void *ctx, u32_t init_log_level)
DECL|shell_log_backend_output_func|function|int shell_log_backend_output_func(u8_t *data, size_t length, void *ctx)
DECL|shell_log_backend_process|function|bool shell_log_backend_process(const struct shell_log_backend *backend)
