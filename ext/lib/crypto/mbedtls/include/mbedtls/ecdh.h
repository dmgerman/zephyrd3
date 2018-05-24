DECL|MBEDTLS_ECDH_H|macro|MBEDTLS_ECDH_H
DECL|MBEDTLS_ECDH_OURS|enumerator|MBEDTLS_ECDH_OURS, /**< Our key. */
DECL|MBEDTLS_ECDH_THEIRS|enumerator|MBEDTLS_ECDH_THEIRS, /**< The key of the peer. */
DECL|Qp|member|mbedtls_ecp_point Qp; /*!< The value of the public key of the peer. */
DECL|Q|member|mbedtls_ecp_point Q; /*!< The public key. */
DECL|Vf|member|mbedtls_ecp_point Vf; /*!< The unblinding value. */
DECL|Vi|member|mbedtls_ecp_point Vi; /*!< The blinding value. */
DECL|_d|member|mbedtls_mpi _d; /*!< The previous \p d. */
DECL|d|member|mbedtls_mpi d; /*!< The private key. */
DECL|grp|member|mbedtls_ecp_group grp; /*!< The elliptic curve used. */
DECL|mbedtls_ecdh_context|typedef|mbedtls_ecdh_context;
DECL|mbedtls_ecdh_side|typedef|} mbedtls_ecdh_side;
DECL|point_format|member|int point_format; /*!< The format of point export in TLS messages. */
DECL|z|member|mbedtls_mpi z; /*!< The shared secret. */
