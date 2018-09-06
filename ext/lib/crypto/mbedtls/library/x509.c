DECL|CHECK_RANGE|macro|CHECK_RANGE
DECL|CHECK|macro|CHECK
DECL|_POSIX_C_SOURCE|macro|_POSIX_C_SOURCE
DECL|_POSIX_C_SOURCE|macro|_POSIX_C_SOURCE
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|mbedtls_snprintf|macro|mbedtls_snprintf
DECL|mbedtls_x509_dn_gets|function|int mbedtls_x509_dn_gets( char *buf, size_t size, const mbedtls_x509_name *dn )
DECL|mbedtls_x509_get_alg_null|function|int mbedtls_x509_get_alg_null( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *alg )
DECL|mbedtls_x509_get_alg|function|int mbedtls_x509_get_alg( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *alg, mbedtls_x509_buf *params )
DECL|mbedtls_x509_get_ext|function|int mbedtls_x509_get_ext( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *ext, int tag )
DECL|mbedtls_x509_get_name|function|int mbedtls_x509_get_name( unsigned char **p, const unsigned char *end, mbedtls_x509_name *cur )
DECL|mbedtls_x509_get_rsassa_pss_params|function|int mbedtls_x509_get_rsassa_pss_params( const mbedtls_x509_buf *params, mbedtls_md_type_t *md_alg, mbedtls_md_type_t *mgf_md, int *salt_len )
DECL|mbedtls_x509_get_serial|function|int mbedtls_x509_get_serial( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *serial )
DECL|mbedtls_x509_get_sig_alg|function|int mbedtls_x509_get_sig_alg( const mbedtls_x509_buf *sig_oid, const mbedtls_x509_buf *sig_params, mbedtls_md_type_t *md_alg, mbedtls_pk_type_t *pk_alg, void **sig_opts )
DECL|mbedtls_x509_get_sig|function|int mbedtls_x509_get_sig( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *sig )
DECL|mbedtls_x509_get_time|function|int mbedtls_x509_get_time( unsigned char **p, const unsigned char *end, mbedtls_x509_time *tm )
DECL|mbedtls_x509_key_size_helper|function|int mbedtls_x509_key_size_helper( char *buf, size_t buf_size, const char *name )
DECL|mbedtls_x509_self_test|function|int mbedtls_x509_self_test( int verbose )
DECL|mbedtls_x509_serial_gets|function|int mbedtls_x509_serial_gets( char *buf, size_t size, const mbedtls_x509_buf *serial )
DECL|mbedtls_x509_sig_alg_gets|function|int mbedtls_x509_sig_alg_gets( char *buf, size_t size, const mbedtls_x509_buf *sig_oid, mbedtls_pk_type_t pk_alg, mbedtls_md_type_t md_alg, const void *sig_opts )
DECL|mbedtls_x509_time_is_future|function|int mbedtls_x509_time_is_future( const mbedtls_x509_time *from )
DECL|mbedtls_x509_time_is_future|function|int mbedtls_x509_time_is_future( const mbedtls_x509_time *from )
DECL|mbedtls_x509_time_is_past|function|int mbedtls_x509_time_is_past( const mbedtls_x509_time *to )
DECL|mbedtls_x509_time_is_past|function|int mbedtls_x509_time_is_past( const mbedtls_x509_time *to )
DECL|x509_check_time|function|static int x509_check_time( const mbedtls_x509_time *before, const mbedtls_x509_time *after )
DECL|x509_date_is_valid|function|static int x509_date_is_valid(const mbedtls_x509_time *t )
DECL|x509_get_attr_type_value|function|static int x509_get_attr_type_value( unsigned char **p, const unsigned char *end, mbedtls_x509_name *cur )
DECL|x509_get_current_time|function|static int x509_get_current_time( mbedtls_x509_time *now )
DECL|x509_get_hash_alg|function|static int x509_get_hash_alg( const mbedtls_x509_buf *alg, mbedtls_md_type_t *md_alg )
DECL|x509_parse_int|function|static int x509_parse_int( unsigned char **p, size_t n, int *res )
DECL|x509_parse_time|function|static int x509_parse_time( unsigned char **p, size_t len, size_t yearlen, mbedtls_x509_time *tm )
