DECL|__printk_hook_install|function|void __printk_hook_install(int (*fn)(int))
DECL|_char_out|variable|_char_out
DECL|_nop_char_out|function|static int _nop_char_out(int c)
DECL|_printk_dec_ulong|function|static void _printk_dec_ulong(out_func_t out, void *ctx, const unsigned long num, int pad_zero, int min_width)
DECL|_printk_hex_ulong|function|static void _printk_hex_ulong(out_func_t out, void *ctx, const unsigned long num, int pad_zero, int min_width)
DECL|_vprintk|function|static inline void _vprintk(out_func_t out, void *ctx, const char *fmt, va_list ap)
DECL|char_out|function|static int char_out(int c, struct out_context *ctx)
DECL|count|member|int count;
DECL|count|member|int count;
DECL|max|member|int max;
DECL|out_context|struct|struct out_context {
DECL|out_func_t|typedef|typedef int (*out_func_t)(int c, void *ctx);
DECL|printk|function|int printk(const char *fmt, ...)
DECL|snprintk|function|int snprintk(char *str, size_t size, const char *fmt, ...)
DECL|str_context|struct|struct str_context {
DECL|str_out|function|static int str_out(int c, struct str_context *ctx)
DECL|str|member|char *str;
DECL|vsnprintk|function|int vsnprintk(char *str, size_t size, const char *fmt, va_list ap)
