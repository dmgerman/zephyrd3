DECL|LOG_OUTPUT_FLAG_COLORS|macro|LOG_OUTPUT_FLAG_COLORS
DECL|LOG_OUTPUT_FLAG_FORMAT_TIMESTAMP|macro|LOG_OUTPUT_FLAG_FORMAT_TIMESTAMP
DECL|LOG_OUTPUT_H|macro|LOG_OUTPUT_H
DECL|ctx|member|void *ctx;
DECL|data|member|u8_t *data;
DECL|func|member|log_output_func_t func;
DECL|length|member|size_t length;
DECL|log_output_ctx|struct|struct log_output_ctx {
DECL|log_output_func_t|typedef|typedef int (*log_output_func_t)(u8_t *data, size_t length, void *ctx);
DECL|offset|member|size_t offset;
