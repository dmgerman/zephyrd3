DECL|MSG_SIZE|macro|MSG_SIZE
DECL|NUM_OF_MSGS|macro|NUM_OF_MSGS
DECL|cont_free|function|static void cont_free(struct log_msg_cont *cont)
DECL|log_msg_arg_get|function|u32_t log_msg_arg_get(struct log_msg *msg, u32_t arg_idx)
DECL|log_msg_create_n|function|struct log_msg *log_msg_create_n(const char *str, u32_t *args, u32_t nargs)
DECL|log_msg_get|function|void log_msg_get(struct log_msg *msg)
DECL|log_msg_hexdump_create|function|struct log_msg *log_msg_hexdump_create(const char *str, const u8_t *data, u32_t length)
DECL|log_msg_hexdump_data_get|function|void log_msg_hexdump_data_get(struct log_msg *msg, u8_t *data, size_t *length, size_t offset)
DECL|log_msg_hexdump_data_op|function|static void log_msg_hexdump_data_op(struct log_msg *msg, u8_t *data, size_t *length, size_t offset, bool put_op)
DECL|log_msg_hexdump_data_put|function|void log_msg_hexdump_data_put(struct log_msg *msg, u8_t *data, size_t *length, size_t offset)
DECL|log_msg_nargs_get|function|u32_t log_msg_nargs_get(struct log_msg *msg)
DECL|log_msg_no_space_handle|function|union log_msg_chunk *log_msg_no_space_handle(void)
DECL|log_msg_pool_init|function|void log_msg_pool_init(void)
DECL|log_msg_pool|variable|log_msg_pool
DECL|log_msg_put|function|void log_msg_put(struct log_msg *msg)
DECL|log_msg_str_get|function|const char *log_msg_str_get(struct log_msg *msg)
DECL|msg_free|function|static void msg_free(struct log_msg *msg)
