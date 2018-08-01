DECL|LOG_OUTPUT_DEFINE|macro|LOG_OUTPUT_DEFINE
DECL|LOG_OUTPUT_FLAG_COLORS|macro|LOG_OUTPUT_FLAG_COLORS
DECL|LOG_OUTPUT_FLAG_FORMAT_TIMESTAMP|macro|LOG_OUTPUT_FLAG_FORMAT_TIMESTAMP
DECL|LOG_OUTPUT_H|macro|LOG_OUTPUT_H
DECL|buf|member|u8_t *buf;
DECL|control_block|member|struct log_output_control_block *control_block;
DECL|ctx|member|void *ctx;
DECL|func|member|log_output_func_t func;
DECL|log_output_control_block|struct|struct log_output_control_block {
DECL|log_output_ctx_set|function|static inline void log_output_ctx_set(const struct log_output *log_output, void *ctx)
DECL|log_output_func_t|typedef|typedef int (*log_output_func_t)(u8_t *buf, size_t size, void *ctx);
DECL|log_output|struct|struct log_output {
DECL|offset|member|size_t offset;
DECL|size|member|size_t size;
