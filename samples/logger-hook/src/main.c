DECL|LOG_BUF_SIZE|macro|LOG_BUF_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|log_cbuf_put|function|void log_cbuf_put(const char *format, ...)
DECL|log_cbuffer|struct|struct log_cbuffer {
DECL|log_cbuffer|variable|log_cbuffer
DECL|logger_buffer|variable|logger_buffer
DECL|logger_put|function|int logger_put(struct log_cbuffer *logger, uint8_t *data, uint32_t data_size)
DECL|main|function|void main(void)
DECL|ring_buf_print|function|static inline void ring_buf_print(struct ring_buf *buf)
DECL|ring_buffer|member|struct ring_buf ring_buffer;
DECL|vlog_cbuf_put|function|void vlog_cbuf_put(const char *format, va_list args)
