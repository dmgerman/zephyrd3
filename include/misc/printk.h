DECL|ZEPHYR_INCLUDE_MISC_PRINTK_H_|macro|ZEPHYR_INCLUDE_MISC_PRINTK_H_
DECL|printk|function|static inline __printf_like(1, 2) void printk(const char *fmt, ...)
DECL|snprintk|function|static inline __printf_like(3, 4) int snprintk(char *str, size_t size, const char *fmt, ...)
DECL|vprintk|function|static inline __printf_like(1, 0) void vprintk(const char *fmt, va_list ap)
DECL|vsnprintk|function|static inline __printf_like(3, 0) int vsnprintk(char *str, size_t size,const char *fmt, va_list ap)
