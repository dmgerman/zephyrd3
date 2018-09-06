DECL|BC|macro|BC
DECL|BEFORE_COLON|macro|BEFORE_COLON
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_snprintf|macro|mbedtls_snprintf
DECL|mbedtls_x509_crl_free|function|void mbedtls_x509_crl_free( mbedtls_x509_crl *crl )
DECL|mbedtls_x509_crl_info|function|int mbedtls_x509_crl_info( char *buf, size_t size, const char *prefix, const mbedtls_x509_crl *crl )
DECL|mbedtls_x509_crl_init|function|void mbedtls_x509_crl_init( mbedtls_x509_crl *crl )
DECL|mbedtls_x509_crl_parse_der|function|int mbedtls_x509_crl_parse_der( mbedtls_x509_crl *chain, const unsigned char *buf, size_t buflen )
DECL|mbedtls_x509_crl_parse_file|function|int mbedtls_x509_crl_parse_file( mbedtls_x509_crl *chain, const char *path )
DECL|mbedtls_x509_crl_parse|function|int mbedtls_x509_crl_parse( mbedtls_x509_crl *chain, const unsigned char *buf, size_t buflen )
DECL|x509_crl_get_version|function|static int x509_crl_get_version( unsigned char **p, const unsigned char *end, int *ver )
DECL|x509_get_crl_entry_ext|function|static int x509_get_crl_entry_ext( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *ext )
DECL|x509_get_crl_ext|function|static int x509_get_crl_ext( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *ext )
DECL|x509_get_entries|function|static int x509_get_entries( unsigned char **p, const unsigned char *end, mbedtls_x509_crl_entry *entry )
