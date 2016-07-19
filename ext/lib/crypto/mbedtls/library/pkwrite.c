DECL|ECP_PRV_DER_MAX_BYTES|macro|ECP_PRV_DER_MAX_BYTES
DECL|ECP_PRV_DER_MAX_BYTES|macro|ECP_PRV_DER_MAX_BYTES
DECL|ECP_PUB_DER_MAX_BYTES|macro|ECP_PUB_DER_MAX_BYTES
DECL|ECP_PUB_DER_MAX_BYTES|macro|ECP_PUB_DER_MAX_BYTES
DECL|MPI_MAX_SIZE_2|macro|MPI_MAX_SIZE_2
DECL|PEM_BEGIN_PRIVATE_KEY_EC|macro|PEM_BEGIN_PRIVATE_KEY_EC
DECL|PEM_BEGIN_PRIVATE_KEY_RSA|macro|PEM_BEGIN_PRIVATE_KEY_RSA
DECL|PEM_BEGIN_PUBLIC_KEY|macro|PEM_BEGIN_PUBLIC_KEY
DECL|PEM_END_PRIVATE_KEY_EC|macro|PEM_END_PRIVATE_KEY_EC
DECL|PEM_END_PRIVATE_KEY_RSA|macro|PEM_END_PRIVATE_KEY_RSA
DECL|PEM_END_PUBLIC_KEY|macro|PEM_END_PUBLIC_KEY
DECL|PRV_DER_MAX_BYTES|macro|PRV_DER_MAX_BYTES
DECL|PUB_DER_MAX_BYTES|macro|PUB_DER_MAX_BYTES
DECL|RSA_PRV_DER_MAX_BYTES|macro|RSA_PRV_DER_MAX_BYTES
DECL|RSA_PRV_DER_MAX_BYTES|macro|RSA_PRV_DER_MAX_BYTES
DECL|RSA_PUB_DER_MAX_BYTES|macro|RSA_PUB_DER_MAX_BYTES
DECL|RSA_PUB_DER_MAX_BYTES|macro|RSA_PUB_DER_MAX_BYTES
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_pk_write_key_der|function|int mbedtls_pk_write_key_der( mbedtls_pk_context *key, unsigned char *buf, size_t size )
DECL|mbedtls_pk_write_key_pem|function|int mbedtls_pk_write_key_pem( mbedtls_pk_context *key, unsigned char *buf, size_t size )
DECL|mbedtls_pk_write_pubkey_der|function|int mbedtls_pk_write_pubkey_der( mbedtls_pk_context *key, unsigned char *buf, size_t size )
DECL|mbedtls_pk_write_pubkey_pem|function|int mbedtls_pk_write_pubkey_pem( mbedtls_pk_context *key, unsigned char *buf, size_t size )
DECL|mbedtls_pk_write_pubkey|function|int mbedtls_pk_write_pubkey( unsigned char **p, unsigned char *start, const mbedtls_pk_context *key )
DECL|pk_write_ec_param|function|static int pk_write_ec_param( unsigned char **p, unsigned char *start, mbedtls_ecp_keypair *ec )
DECL|pk_write_ec_pubkey|function|static int pk_write_ec_pubkey( unsigned char **p, unsigned char *start, mbedtls_ecp_keypair *ec )
DECL|pk_write_rsa_pubkey|function|static int pk_write_rsa_pubkey( unsigned char **p, unsigned char *start, mbedtls_rsa_context *rsa )
