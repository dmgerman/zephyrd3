DECL|MBEDTLS_ECDH_H|macro|MBEDTLS_ECDH_H
DECL|MBEDTLS_ECDH_OURS|enumerator|MBEDTLS_ECDH_OURS,
DECL|MBEDTLS_ECDH_THEIRS|enumerator|MBEDTLS_ECDH_THEIRS,
DECL|Qp|member|mbedtls_ecp_point Qp; /*!< peer's public value (public key) */
DECL|Q|member|mbedtls_ecp_point Q; /*!< our public value (public key) */
DECL|Vf|member|mbedtls_ecp_point Vf; /*!< un-blinding value (for later) */
DECL|Vi|member|mbedtls_ecp_point Vi; /*!< blinding value (for later) */
DECL|_d|member|mbedtls_mpi _d; /*!< previous d (for later) */
DECL|d|member|mbedtls_mpi d; /*!< our secret value (private key) */
DECL|grp|member|mbedtls_ecp_group grp; /*!< elliptic curve used */
DECL|mbedtls_ecdh_context|typedef|mbedtls_ecdh_context;
DECL|mbedtls_ecdh_side|typedef|} mbedtls_ecdh_side;
DECL|point_format|member|int point_format; /*!< format for point export in TLS messages */
DECL|z|member|mbedtls_mpi z; /*!< shared secret */
