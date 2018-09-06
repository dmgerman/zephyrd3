DECL|BC|macro|BC
DECL|BEFORE_COLON|macro|BEFORE_COLON
DECL|CERT_TYPE|macro|CERT_TYPE
DECL|KEY_USAGE|macro|KEY_USAGE
DECL|PRINT_ITEM|macro|PRINT_ITEM
DECL|X509_MAX_VERIFY_CHAIN_SIZE|macro|X509_MAX_VERIFY_CHAIN_SIZE
DECL|code|member|int code;
DECL|crt|member|mbedtls_x509_crt *crt;
DECL|flags|member|uint32_t flags;
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_snprintf|macro|mbedtls_snprintf
DECL|mbedtls_x509_crt_check_extended_key_usage|function|int mbedtls_x509_crt_check_extended_key_usage( const mbedtls_x509_crt *crt, const char *usage_oid, size_t usage_len )
DECL|mbedtls_x509_crt_check_key_usage|function|int mbedtls_x509_crt_check_key_usage( const mbedtls_x509_crt *crt, unsigned int usage )
DECL|mbedtls_x509_crt_free|function|void mbedtls_x509_crt_free( mbedtls_x509_crt *crt )
DECL|mbedtls_x509_crt_info|function|int mbedtls_x509_crt_info( char *buf, size_t size, const char *prefix, const mbedtls_x509_crt *crt )
DECL|mbedtls_x509_crt_init|function|void mbedtls_x509_crt_init( mbedtls_x509_crt *crt )
DECL|mbedtls_x509_crt_is_revoked|function|int mbedtls_x509_crt_is_revoked( const mbedtls_x509_crt *crt, const mbedtls_x509_crl *crl )
DECL|mbedtls_x509_crt_parse_der|function|int mbedtls_x509_crt_parse_der( mbedtls_x509_crt *chain, const unsigned char *buf, size_t buflen )
DECL|mbedtls_x509_crt_parse_file|function|int mbedtls_x509_crt_parse_file( mbedtls_x509_crt *chain, const char *path )
DECL|mbedtls_x509_crt_parse_path|function|int mbedtls_x509_crt_parse_path( mbedtls_x509_crt *chain, const char *path )
DECL|mbedtls_x509_crt_parse|function|int mbedtls_x509_crt_parse( mbedtls_x509_crt *chain, const unsigned char *buf, size_t buflen )
DECL|mbedtls_x509_crt_profile_default|variable|mbedtls_x509_crt_profile_default
DECL|mbedtls_x509_crt_profile_next|variable|mbedtls_x509_crt_profile_next
DECL|mbedtls_x509_crt_profile_suiteb|variable|mbedtls_x509_crt_profile_suiteb
DECL|mbedtls_x509_crt_verify_info|function|int mbedtls_x509_crt_verify_info( char *buf, size_t size, const char *prefix, uint32_t flags )
DECL|mbedtls_x509_crt_verify_with_profile|function|int mbedtls_x509_crt_verify_with_profile( mbedtls_x509_crt *crt, mbedtls_x509_crt *trust_ca, mbedtls_x509_crl *ca_crl, const mbedtls_x509_crt_profile *profile, const char *cn, uint32_t *flags,
DECL|mbedtls_x509_crt_verify|function|int mbedtls_x509_crt_verify( mbedtls_x509_crt *crt, mbedtls_x509_crt *trust_ca, mbedtls_x509_crl *ca_crl, const char *cn, uint32_t *flags, int (*f_vrfy)(void *, mbedtls_x509_crt *, int, uint32_t *),
DECL|string|member|const char *string;
DECL|x509_check_wildcard|function|static int x509_check_wildcard( const char *cn, const mbedtls_x509_buf *name )
DECL|x509_crt_check_cn|function|static int x509_crt_check_cn( const mbedtls_x509_buf *name, const char *cn, size_t cn_len )
DECL|x509_crt_check_ee_locally_trusted|function|static int x509_crt_check_ee_locally_trusted( mbedtls_x509_crt *crt, mbedtls_x509_crt *trust_ca )
DECL|x509_crt_check_parent|function|static int x509_crt_check_parent( const mbedtls_x509_crt *child, const mbedtls_x509_crt *parent, int top )
DECL|x509_crt_check_signature|function|static int x509_crt_check_signature( const mbedtls_x509_crt *child, mbedtls_x509_crt *parent )
DECL|x509_crt_find_parent_in|function|static mbedtls_x509_crt *x509_crt_find_parent_in( mbedtls_x509_crt *child, mbedtls_x509_crt *candidates, int top, size_t path_cnt, size_t self_cnt )
DECL|x509_crt_find_parent|function|static mbedtls_x509_crt *x509_crt_find_parent( mbedtls_x509_crt *child, mbedtls_x509_crt *trust_ca, int *parent_is_trusted, size_t path_cnt, size_t self_cnt )
DECL|x509_crt_merge_flags_with_cb|function|static int x509_crt_merge_flags_with_cb( uint32_t *flags, x509_crt_verify_chain_item ver_chain[X509_MAX_VERIFY_CHAIN_SIZE], size_t chain_len, int (*f_vrfy)(void *, mbedtls_x509_crt *, int, uint32_t *),
DECL|x509_crt_parse_der_core|function|static int x509_crt_parse_der_core( mbedtls_x509_crt *crt, const unsigned char *buf, size_t buflen )
DECL|x509_crt_verify_chain_item|typedef|} x509_crt_verify_chain_item;
DECL|x509_crt_verify_chain|function|static int x509_crt_verify_chain( mbedtls_x509_crt *crt, mbedtls_x509_crt *trust_ca, mbedtls_x509_crl *ca_crl, const mbedtls_x509_crt_profile *profile,
DECL|x509_crt_verify_name|function|static void x509_crt_verify_name( const mbedtls_x509_crt *crt, const char *cn, uint32_t *flags )
DECL|x509_crt_verify_strings|variable|x509_crt_verify_strings
DECL|x509_crt_verify_string|struct|struct x509_crt_verify_string {
DECL|x509_crt_verifycrl|function|static int x509_crt_verifycrl( mbedtls_x509_crt *crt, mbedtls_x509_crt *ca, mbedtls_x509_crl *crl_list, const mbedtls_x509_crt_profile *profile )
DECL|x509_get_basic_constraints|function|static int x509_get_basic_constraints( unsigned char **p, const unsigned char *end, int *ca_istrue, int *max_pathlen )
DECL|x509_get_crt_ext|function|static int x509_get_crt_ext( unsigned char **p, const unsigned char *end, mbedtls_x509_crt *crt )
DECL|x509_get_dates|function|static int x509_get_dates( unsigned char **p, const unsigned char *end, mbedtls_x509_time *from, mbedtls_x509_time *to )
DECL|x509_get_ext_key_usage|function|static int x509_get_ext_key_usage( unsigned char **p, const unsigned char *end, mbedtls_x509_sequence *ext_key_usage)
DECL|x509_get_key_usage|function|static int x509_get_key_usage( unsigned char **p, const unsigned char *end, unsigned int *key_usage)
DECL|x509_get_ns_cert_type|function|static int x509_get_ns_cert_type( unsigned char **p, const unsigned char *end, unsigned char *ns_cert_type)
DECL|x509_get_subject_alt_name|function|static int x509_get_subject_alt_name( unsigned char **p, const unsigned char *end, mbedtls_x509_sequence *subject_alt_name )
DECL|x509_get_uid|function|static int x509_get_uid( unsigned char **p, const unsigned char *end, mbedtls_x509_buf *uid, int n )
DECL|x509_get_version|function|static int x509_get_version( unsigned char **p, const unsigned char *end, int *ver )
DECL|x509_info_cert_type|function|static int x509_info_cert_type( char **buf, size_t *size, unsigned char ns_cert_type )
DECL|x509_info_ext_key_usage|function|static int x509_info_ext_key_usage( char **buf, size_t *size, const mbedtls_x509_sequence *extended_key_usage )
DECL|x509_info_key_usage|function|static int x509_info_key_usage( char **buf, size_t *size, unsigned int key_usage )
DECL|x509_info_subject_alt_name|function|static int x509_info_subject_alt_name( char **buf, size_t *size, const mbedtls_x509_sequence *subject_alt_name )
DECL|x509_memcasecmp|function|static int x509_memcasecmp( const void *s1, const void *s2, size_t len )
DECL|x509_name_cmp|function|static int x509_name_cmp( const mbedtls_x509_name *a, const mbedtls_x509_name *b )
DECL|x509_profile_check_key|function|static int x509_profile_check_key( const mbedtls_x509_crt_profile *profile, const mbedtls_pk_context *pk )
DECL|x509_profile_check_md_alg|function|static int x509_profile_check_md_alg( const mbedtls_x509_crt_profile *profile, mbedtls_md_type_t md_alg )
DECL|x509_profile_check_pk_alg|function|static int x509_profile_check_pk_alg( const mbedtls_x509_crt_profile *profile, mbedtls_pk_type_t pk_alg )
DECL|x509_string_cmp|function|static int x509_string_cmp( const mbedtls_x509_buf *a, const mbedtls_x509_buf *b )
