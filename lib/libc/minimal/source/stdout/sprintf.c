DECL|emitter|struct|struct emitter {
DECL|len|member|int len;
DECL|ptr|member|char *ptr;
DECL|snprintf|function|int snprintf(char *_MLIBC_RESTRICT s, size_t len, const char *_MLIBC_RESTRICT format, ...)
DECL|sprintf_out|function|static int sprintf_out(int c, struct emitter *p)
DECL|sprintf|function|int sprintf(char *_MLIBC_RESTRICT s, const char *_MLIBC_RESTRICT format, ...)
DECL|vsnprintf|function|int vsnprintf(char *_MLIBC_RESTRICT s, size_t len, const char *_MLIBC_RESTRICT format, va_list vargs)
DECL|vsprintf|function|int vsprintf(char *_MLIBC_RESTRICT s, const char *_MLIBC_RESTRICT format, va_list vargs)
