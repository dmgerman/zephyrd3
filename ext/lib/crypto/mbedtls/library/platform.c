DECL|MBEDTLS_PLATFORM_STD_CALLOC|macro|MBEDTLS_PLATFORM_STD_CALLOC
DECL|MBEDTLS_PLATFORM_STD_EXIT|macro|MBEDTLS_PLATFORM_STD_EXIT
DECL|MBEDTLS_PLATFORM_STD_FPRINTF|macro|MBEDTLS_PLATFORM_STD_FPRINTF
DECL|MBEDTLS_PLATFORM_STD_FREE|macro|MBEDTLS_PLATFORM_STD_FREE
DECL|MBEDTLS_PLATFORM_STD_NV_SEED_READ|macro|MBEDTLS_PLATFORM_STD_NV_SEED_READ
DECL|MBEDTLS_PLATFORM_STD_NV_SEED_WRITE|macro|MBEDTLS_PLATFORM_STD_NV_SEED_WRITE
DECL|MBEDTLS_PLATFORM_STD_PRINTF|macro|MBEDTLS_PLATFORM_STD_PRINTF
DECL|MBEDTLS_PLATFORM_STD_SNPRINTF|macro|MBEDTLS_PLATFORM_STD_SNPRINTF
DECL|MBEDTLS_PLATFORM_STD_TIME|macro|MBEDTLS_PLATFORM_STD_TIME
DECL|mbedtls_calloc_func|variable|mbedtls_calloc_func
DECL|mbedtls_calloc|function|void * mbedtls_calloc( size_t nmemb, size_t size )
DECL|mbedtls_exit|variable|mbedtls_exit
DECL|mbedtls_fprintf|variable|mbedtls_fprintf
DECL|mbedtls_free_func|variable|mbedtls_free_func
DECL|mbedtls_free|function|void mbedtls_free( void * ptr )
DECL|mbedtls_nv_seed_read|variable|mbedtls_nv_seed_read
DECL|mbedtls_nv_seed_write|variable|mbedtls_nv_seed_write
DECL|mbedtls_platform_set_calloc_free|function|int mbedtls_platform_set_calloc_free( void * (*calloc_func)( size_t, size_t ), void (*free_func)( void * ) )
DECL|mbedtls_platform_set_exit|function|int mbedtls_platform_set_exit( void (*exit_func)( int status ) )
DECL|mbedtls_platform_set_fprintf|function|int mbedtls_platform_set_fprintf( int (*fprintf_func)( FILE *, const char *, ... ) )
DECL|mbedtls_platform_set_nv_seed|function|int mbedtls_platform_set_nv_seed( int (*nv_seed_read_func)( unsigned char *buf, size_t buf_len ), int (*nv_seed_write_func)( unsigned char *buf, size_t buf_len ) )
DECL|mbedtls_platform_set_printf|function|int mbedtls_platform_set_printf( int (*printf_func)( const char *, ... ) )
DECL|mbedtls_platform_set_snprintf|function|int mbedtls_platform_set_snprintf( int (*snprintf_func)( char * s, size_t n, const char * format, ... ) )
DECL|mbedtls_platform_set_time|function|int mbedtls_platform_set_time( mbedtls_time_t (*time_func)( mbedtls_time_t* timer ) )
DECL|mbedtls_platform_setup|function|int mbedtls_platform_setup( mbedtls_platform_context *ctx )
DECL|mbedtls_platform_std_nv_seed_read|function|int mbedtls_platform_std_nv_seed_read( unsigned char *buf, size_t buf_len )
DECL|mbedtls_platform_std_nv_seed_write|function|int mbedtls_platform_std_nv_seed_write( unsigned char *buf, size_t buf_len )
DECL|mbedtls_platform_teardown|function|void mbedtls_platform_teardown( mbedtls_platform_context *ctx )
DECL|mbedtls_platform_win32_snprintf|function|int mbedtls_platform_win32_snprintf( char *s, size_t n, const char *fmt, ... )
DECL|mbedtls_printf|variable|mbedtls_printf
DECL|mbedtls_snprintf|variable|mbedtls_snprintf
DECL|mbedtls_time|variable|mbedtls_time
DECL|platform_calloc_uninit|function|static void *platform_calloc_uninit( size_t n, size_t size )
DECL|platform_exit_uninit|function|static void platform_exit_uninit( int status )
DECL|platform_fprintf_uninit|function|static int platform_fprintf_uninit( FILE *stream, const char *format, ... )
DECL|platform_free_uninit|function|static void platform_free_uninit( void *ptr )
DECL|platform_nv_seed_read_uninit|function|static int platform_nv_seed_read_uninit( unsigned char *buf, size_t buf_len )
DECL|platform_nv_seed_write_uninit|function|static int platform_nv_seed_write_uninit( unsigned char *buf, size_t buf_len )
DECL|platform_printf_uninit|function|static int platform_printf_uninit( const char *format, ... )
DECL|platform_snprintf_uninit|function|static int platform_snprintf_uninit( char * s, size_t n, const char * format, ... )
DECL|platform_time_uninit|function|static mbedtls_time_t platform_time_uninit( mbedtls_time_t* timer )
