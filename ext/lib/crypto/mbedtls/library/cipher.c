DECL|MBEDTLS_CIPHER_MODE_STREAM|macro|MBEDTLS_CIPHER_MODE_STREAM
DECL|add_one_and_zeros_padding|function|static void add_one_and_zeros_padding( unsigned char *output, size_t output_len, size_t data_len )
DECL|add_pkcs_padding|function|static void add_pkcs_padding( unsigned char *output, size_t output_len, size_t data_len )
DECL|add_zeros_and_len_padding|function|static void add_zeros_and_len_padding( unsigned char *output, size_t output_len, size_t data_len )
DECL|add_zeros_padding|function|static void add_zeros_padding( unsigned char *output, size_t output_len, size_t data_len )
DECL|get_no_padding|function|static int get_no_padding( unsigned char *input, size_t input_len, size_t *data_len )
DECL|get_one_and_zeros_padding|function|static int get_one_and_zeros_padding( unsigned char *input, size_t input_len, size_t *data_len )
DECL|get_pkcs_padding|function|static int get_pkcs_padding( unsigned char *input, size_t input_len, size_t *data_len )
DECL|get_zeros_and_len_padding|function|static int get_zeros_and_len_padding( unsigned char *input, size_t input_len, size_t *data_len )
DECL|get_zeros_padding|function|static int get_zeros_padding( unsigned char *input, size_t input_len, size_t *data_len )
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_cipher_auth_decrypt|function|int mbedtls_cipher_auth_decrypt( mbedtls_cipher_context_t *ctx, const unsigned char *iv, size_t iv_len, const unsigned char *ad, size_t ad_len, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen,
DECL|mbedtls_cipher_auth_encrypt|function|int mbedtls_cipher_auth_encrypt( mbedtls_cipher_context_t *ctx, const unsigned char *iv, size_t iv_len, const unsigned char *ad, size_t ad_len, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen,
DECL|mbedtls_cipher_check_tag|function|int mbedtls_cipher_check_tag( mbedtls_cipher_context_t *ctx, const unsigned char *tag, size_t tag_len )
DECL|mbedtls_cipher_crypt|function|int mbedtls_cipher_crypt( mbedtls_cipher_context_t *ctx, const unsigned char *iv, size_t iv_len, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen )
DECL|mbedtls_cipher_finish|function|int mbedtls_cipher_finish( mbedtls_cipher_context_t *ctx, unsigned char *output, size_t *olen )
DECL|mbedtls_cipher_free|function|void mbedtls_cipher_free( mbedtls_cipher_context_t *ctx )
DECL|mbedtls_cipher_info_from_string|function|const mbedtls_cipher_info_t *mbedtls_cipher_info_from_string( const char *cipher_name )
DECL|mbedtls_cipher_info_from_type|function|const mbedtls_cipher_info_t *mbedtls_cipher_info_from_type( const mbedtls_cipher_type_t cipher_type )
DECL|mbedtls_cipher_info_from_values|function|const mbedtls_cipher_info_t *mbedtls_cipher_info_from_values( const mbedtls_cipher_id_t cipher_id, int key_bitlen, const mbedtls_cipher_mode_t mode )
DECL|mbedtls_cipher_init|function|void mbedtls_cipher_init( mbedtls_cipher_context_t *ctx )
DECL|mbedtls_cipher_list|function|const int *mbedtls_cipher_list( void )
DECL|mbedtls_cipher_reset|function|int mbedtls_cipher_reset( mbedtls_cipher_context_t *ctx )
DECL|mbedtls_cipher_set_iv|function|int mbedtls_cipher_set_iv( mbedtls_cipher_context_t *ctx, const unsigned char *iv, size_t iv_len )
DECL|mbedtls_cipher_set_padding_mode|function|int mbedtls_cipher_set_padding_mode( mbedtls_cipher_context_t *ctx, mbedtls_cipher_padding_t mode )
DECL|mbedtls_cipher_setkey|function|int mbedtls_cipher_setkey( mbedtls_cipher_context_t *ctx, const unsigned char *key, int key_bitlen, const mbedtls_operation_t operation )
DECL|mbedtls_cipher_setup|function|int mbedtls_cipher_setup( mbedtls_cipher_context_t *ctx, const mbedtls_cipher_info_t *cipher_info )
DECL|mbedtls_cipher_update_ad|function|int mbedtls_cipher_update_ad( mbedtls_cipher_context_t *ctx, const unsigned char *ad, size_t ad_len )
DECL|mbedtls_cipher_update|function|int mbedtls_cipher_update( mbedtls_cipher_context_t *ctx, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen )
DECL|mbedtls_cipher_write_tag|function|int mbedtls_cipher_write_tag( mbedtls_cipher_context_t *ctx, unsigned char *tag, size_t tag_len )
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_zeroize|function|static void mbedtls_zeroize( void *v, size_t n ) {
DECL|supported_init|variable|supported_init
