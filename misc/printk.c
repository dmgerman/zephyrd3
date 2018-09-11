DECL|PAD_NONE|enumerator|PAD_NONE,
DECL|PAD_SPACE_AFTER|enumerator|PAD_SPACE_AFTER,
DECL|PAD_SPACE_BEFORE|enumerator|PAD_SPACE_BEFORE,
DECL|PAD_ZERO_BEFORE|enumerator|PAD_ZERO_BEFORE,
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_str_out, c, n)
DECL|__printk_get_hook|function|void *__printk_get_hook(void)
DECL|__printk_hook_install|function|void __printk_hook_install(int (*fn)(int))
DECL|_char_out|variable|_char_out
DECL|_impl_k_str_out|function|void _impl_k_str_out(char *c, size_t n)
DECL|_nop_char_out|function|static int _nop_char_out(int c)
DECL|_printk_dec_ulong|function|static void _printk_dec_ulong(out_func_t out, void *ctx, const unsigned long num, enum pad_type padding, int min_width)
DECL|_printk_hex_ulong|function|static void _printk_hex_ulong(out_func_t out, void *ctx, const unsigned long num, enum pad_type padding, int min_width)
DECL|_vprintk|function|void _vprintk(out_func_t out, void *ctx, const char *fmt, va_list ap)
DECL|buf_char_out|function|static int buf_char_out(int c, void *ctx_p)
DECL|buf_count|member|unsigned int buf_count;
DECL|buf_flush|function|static void buf_flush(struct buf_out_context *ctx)
DECL|buf_out_context|struct|struct buf_out_context {
DECL|buf|member|char buf[CONFIG_PRINTK_BUFFER_SIZE];
DECL|char_out|function|static int char_out(int c, void *ctx_p)
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|max|member|int max;
DECL|out_context|struct|struct out_context {
DECL|out_func_t|typedef|typedef int (*out_func_t)(int c, void *ctx);
DECL|pad_type|enum|enum pad_type {
DECL|printk|function|void printk(const char *fmt, ...)
DECL|snprintk|function|int snprintk(char *str, size_t size, const char *fmt, ...)
DECL|str_context|struct|struct str_context {
DECL|str_out|function|static int str_out(int c, struct str_context *ctx)
DECL|str|member|char *str;
DECL|vprintk|function|void vprintk(const char *fmt, va_list ap)
DECL|vprintk|function|void vprintk(const char *fmt, va_list ap)
DECL|vsnprintk|function|int vsnprintk(char *str, size_t size, const char *fmt, va_list ap)
