DECL|DP|member|mbedtls_mpi DP; /*!< <code>D % (P - 1)</code>. */
DECL|DQ|member|mbedtls_mpi DQ; /*!< <code>D % (Q - 1)</code>. */
DECL|D|member|mbedtls_mpi D; /*!< The private exponent. */
DECL|E|member|mbedtls_mpi E; /*!< The public exponent. */
DECL|MBEDTLS_ERR_RSA_BAD_INPUT_DATA|macro|MBEDTLS_ERR_RSA_BAD_INPUT_DATA
DECL|MBEDTLS_ERR_RSA_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_RSA_HW_ACCEL_FAILED
DECL|MBEDTLS_ERR_RSA_INVALID_PADDING|macro|MBEDTLS_ERR_RSA_INVALID_PADDING
DECL|MBEDTLS_ERR_RSA_KEY_CHECK_FAILED|macro|MBEDTLS_ERR_RSA_KEY_CHECK_FAILED
DECL|MBEDTLS_ERR_RSA_KEY_GEN_FAILED|macro|MBEDTLS_ERR_RSA_KEY_GEN_FAILED
DECL|MBEDTLS_ERR_RSA_OUTPUT_TOO_LARGE|macro|MBEDTLS_ERR_RSA_OUTPUT_TOO_LARGE
DECL|MBEDTLS_ERR_RSA_PRIVATE_FAILED|macro|MBEDTLS_ERR_RSA_PRIVATE_FAILED
DECL|MBEDTLS_ERR_RSA_PUBLIC_FAILED|macro|MBEDTLS_ERR_RSA_PUBLIC_FAILED
DECL|MBEDTLS_ERR_RSA_RNG_FAILED|macro|MBEDTLS_ERR_RSA_RNG_FAILED
DECL|MBEDTLS_ERR_RSA_UNSUPPORTED_OPERATION|macro|MBEDTLS_ERR_RSA_UNSUPPORTED_OPERATION
DECL|MBEDTLS_ERR_RSA_VERIFY_FAILED|macro|MBEDTLS_ERR_RSA_VERIFY_FAILED
DECL|MBEDTLS_RSA_CRYPT|macro|MBEDTLS_RSA_CRYPT
DECL|MBEDTLS_RSA_H|macro|MBEDTLS_RSA_H
DECL|MBEDTLS_RSA_PKCS_V15|macro|MBEDTLS_RSA_PKCS_V15
DECL|MBEDTLS_RSA_PKCS_V21|macro|MBEDTLS_RSA_PKCS_V21
DECL|MBEDTLS_RSA_PRIVATE|macro|MBEDTLS_RSA_PRIVATE
DECL|MBEDTLS_RSA_PUBLIC|macro|MBEDTLS_RSA_PUBLIC
DECL|MBEDTLS_RSA_SALT_LEN_ANY|macro|MBEDTLS_RSA_SALT_LEN_ANY
DECL|MBEDTLS_RSA_SIGN|macro|MBEDTLS_RSA_SIGN
DECL|N|member|mbedtls_mpi N; /*!< The public modulus. */
DECL|P|member|mbedtls_mpi P; /*!< The first prime factor. */
DECL|QP|member|mbedtls_mpi QP; /*!< <code>1 / (Q % P)</code>. */
DECL|Q|member|mbedtls_mpi Q; /*!< The second prime factor. */
DECL|RN|member|mbedtls_mpi RN; /*!< cached <code>R^2 mod N</code>. */
DECL|RP|member|mbedtls_mpi RP; /*!< cached <code>R^2 mod P</code>. */
DECL|RQ|member|mbedtls_mpi RQ; /*!< cached <code>R^2 mod Q</code>. */
DECL|Vf|member|mbedtls_mpi Vf; /*!< The cached un-blinding value. */
DECL|Vi|member|mbedtls_mpi Vi; /*!< The cached blinding value. */
DECL|hash_id|member|int hash_id; /*!< Hash identifier of mbedtls_md_type_t type,
DECL|len|member|size_t len; /*!< The size of \p N in Bytes. */
DECL|mbedtls_rsa_context|typedef|mbedtls_rsa_context;
DECL|mutex|member|mbedtls_threading_mutex_t mutex; /*!< Thread-safety mutex. */
DECL|padding|member|int padding; /*!< Selects padding mode:
DECL|ver|member|int ver; /*!< Always 0.*/
