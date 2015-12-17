DECL|emitter|struct|struct emitter {
DECL|len|member|int len;
DECL|ptr|member|char *ptr;
DECL|snprintf|function|int snprintf(char *_Restrict s, size_t len, const char *_Restrict format, ...)
DECL|sprintf_out|function|static int sprintf_out(int c, struct emitter *p)
DECL|sprintf|function|int sprintf(char *_Restrict s, const char *_Restrict format, ...)
DECL|vsnprintf|function|int vsnprintf(char *_Restrict s, size_t len, const char *_Restrict format, va_list vargs)
DECL|vsprintf|function|int vsprintf(char *_Restrict s, const char *_Restrict format, va_list vargs)
