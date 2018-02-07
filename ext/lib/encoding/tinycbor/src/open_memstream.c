DECL|Buffer|struct|struct Buffer
DECL|LenType|typedef|typedef int LenType;
DECL|LenType|typedef|typedef size_t LenType;
DECL|RetType|typedef|typedef int RetType;
DECL|RetType|typedef|typedef ssize_t RetType;
DECL|_BSD_SOURCE|macro|_BSD_SOURCE
DECL|_DEFAULT_SOURCE|macro|_DEFAULT_SOURCE
DECL|_GNU_SOURCE|macro|_GNU_SOURCE
DECL|alloc|member|size_t alloc;
DECL|close_buffer|function|static int close_buffer(void *cookie)
DECL|len|member|size_t *len;
DECL|open_memstream|function|FILE *open_memstream(char **bufptr, size_t *lenptr)
DECL|ptr|member|char **ptr;
DECL|write_to_buffer|function|static RetType write_to_buffer(void *cookie, const char *data, LenType len)
