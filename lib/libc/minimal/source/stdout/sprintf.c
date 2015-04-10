DECL|emitter|struct|struct emitter {
DECL|len|member|int len;
DECL|ptr|member|char *ptr;
DECL|snprintf|function|int snprintf(char *restrict s, size_t len, const char *restrict format, ...)
DECL|sprintf_out|function|static int sprintf_out(int c, struct emitter *p)
DECL|sprintf|function|int sprintf(char *restrict s, const char *restrict format, ...)
DECL|vsnprintf|function|int vsnprintf(char *restrict s, size_t len, const char *restrict format, va_list vargs)
DECL|vsprintf|function|int vsprintf(char *restrict s, const char *restrict format, va_list vargs)
