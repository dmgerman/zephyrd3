DECL|SHELL_FPRINTF_DEFINE|macro|SHELL_FPRINTF_DEFINE
DECL|SHELL_FPRINTF_H__|macro|SHELL_FPRINTF_H__
DECL|autoflush|member|bool autoflush;
DECL|buffer_cnt|member|size_t buffer_cnt;
DECL|buffer_size|member|size_t buffer_size;
DECL|buffer|member|u8_t *buffer;
DECL|ctrl_blk|member|struct shell_fprintf_control_block *ctrl_blk;
DECL|fwrite|member|shell_fprintf_fwrite fwrite;
DECL|shell_fprintf_control_block|struct|struct shell_fprintf_control_block {
DECL|shell_fprintf_fwrite|typedef|typedef void (*shell_fprintf_fwrite)(const void *user_ctx,
DECL|shell_fprintf|struct|struct shell_fprintf {
DECL|user_ctx|member|const void *user_ctx;
