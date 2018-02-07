DECL|A|member|mbedtls_mpi A; /*!< 1. A in the equation, or 2. (A + 2) / 4 */
DECL|B|member|mbedtls_mpi B; /*!< 1. B in the equation, or 2. unused */
DECL|G|member|mbedtls_ecp_point G; /*!< generator of the (sub)group used */
DECL|MBEDTLS_ECP_DP_BP256R1|enumerator|MBEDTLS_ECP_DP_BP256R1, /*!< 256-bits Brainpool curve */
DECL|MBEDTLS_ECP_DP_BP384R1|enumerator|MBEDTLS_ECP_DP_BP384R1, /*!< 384-bits Brainpool curve */
DECL|MBEDTLS_ECP_DP_BP512R1|enumerator|MBEDTLS_ECP_DP_BP512R1, /*!< 512-bits Brainpool curve */
DECL|MBEDTLS_ECP_DP_CURVE25519|enumerator|MBEDTLS_ECP_DP_CURVE25519, /*!< Curve25519 */
DECL|MBEDTLS_ECP_DP_MAX|macro|MBEDTLS_ECP_DP_MAX
DECL|MBEDTLS_ECP_DP_NONE|enumerator|MBEDTLS_ECP_DP_NONE = 0,
DECL|MBEDTLS_ECP_DP_SECP192K1|enumerator|MBEDTLS_ECP_DP_SECP192K1, /*!< 192-bits "Koblitz" curve */
DECL|MBEDTLS_ECP_DP_SECP192R1|enumerator|MBEDTLS_ECP_DP_SECP192R1, /*!< 192-bits NIST curve */
DECL|MBEDTLS_ECP_DP_SECP224K1|enumerator|MBEDTLS_ECP_DP_SECP224K1, /*!< 224-bits "Koblitz" curve */
DECL|MBEDTLS_ECP_DP_SECP224R1|enumerator|MBEDTLS_ECP_DP_SECP224R1, /*!< 224-bits NIST curve */
DECL|MBEDTLS_ECP_DP_SECP256K1|enumerator|MBEDTLS_ECP_DP_SECP256K1, /*!< 256-bits "Koblitz" curve */
DECL|MBEDTLS_ECP_DP_SECP256R1|enumerator|MBEDTLS_ECP_DP_SECP256R1, /*!< 256-bits NIST curve */
DECL|MBEDTLS_ECP_DP_SECP384R1|enumerator|MBEDTLS_ECP_DP_SECP384R1, /*!< 384-bits NIST curve */
DECL|MBEDTLS_ECP_DP_SECP521R1|enumerator|MBEDTLS_ECP_DP_SECP521R1, /*!< 521-bits NIST curve */
DECL|MBEDTLS_ECP_FIXED_POINT_OPTIM|macro|MBEDTLS_ECP_FIXED_POINT_OPTIM
DECL|MBEDTLS_ECP_H|macro|MBEDTLS_ECP_H
DECL|MBEDTLS_ECP_MAX_BITS|macro|MBEDTLS_ECP_MAX_BITS
DECL|MBEDTLS_ECP_MAX_BYTES|macro|MBEDTLS_ECP_MAX_BYTES
DECL|MBEDTLS_ECP_MAX_PT_LEN|macro|MBEDTLS_ECP_MAX_PT_LEN
DECL|MBEDTLS_ECP_PF_COMPRESSED|macro|MBEDTLS_ECP_PF_COMPRESSED
DECL|MBEDTLS_ECP_PF_UNCOMPRESSED|macro|MBEDTLS_ECP_PF_UNCOMPRESSED
DECL|MBEDTLS_ECP_TLS_NAMED_CURVE|macro|MBEDTLS_ECP_TLS_NAMED_CURVE
DECL|MBEDTLS_ECP_WINDOW_SIZE|macro|MBEDTLS_ECP_WINDOW_SIZE
DECL|MBEDTLS_ERR_ECP_ALLOC_FAILED|macro|MBEDTLS_ERR_ECP_ALLOC_FAILED
DECL|MBEDTLS_ERR_ECP_BAD_INPUT_DATA|macro|MBEDTLS_ERR_ECP_BAD_INPUT_DATA
DECL|MBEDTLS_ERR_ECP_BUFFER_TOO_SMALL|macro|MBEDTLS_ERR_ECP_BUFFER_TOO_SMALL
DECL|MBEDTLS_ERR_ECP_FEATURE_UNAVAILABLE|macro|MBEDTLS_ERR_ECP_FEATURE_UNAVAILABLE
DECL|MBEDTLS_ERR_ECP_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_ECP_HW_ACCEL_FAILED
DECL|MBEDTLS_ERR_ECP_INVALID_KEY|macro|MBEDTLS_ERR_ECP_INVALID_KEY
DECL|MBEDTLS_ERR_ECP_RANDOM_FAILED|macro|MBEDTLS_ERR_ECP_RANDOM_FAILED
DECL|MBEDTLS_ERR_ECP_SIG_LEN_MISMATCH|macro|MBEDTLS_ERR_ECP_SIG_LEN_MISMATCH
DECL|MBEDTLS_ERR_ECP_VERIFY_FAILED|macro|MBEDTLS_ERR_ECP_VERIFY_FAILED
DECL|N|member|mbedtls_mpi N; /*!< 1. the order of G, or 2. unused */
DECL|P|member|mbedtls_mpi P; /*!< prime modulus of the base field */
DECL|Q|member|mbedtls_ecp_point Q; /*!< our public value */
DECL|T_size|member|size_t T_size; /*!< number for pre-computed points */
DECL|T|member|mbedtls_ecp_point *T; /*!< pre-computed points for ecp_mul_comb() */
DECL|X|member|mbedtls_mpi X; /*!< the point's X coordinate */
DECL|Y|member|mbedtls_mpi Y; /*!< the point's Y coordinate */
DECL|Z|member|mbedtls_mpi Z; /*!< the point's Z coordinate */
DECL|bit_size|member|uint16_t bit_size; /*!< Curve size in bits */
DECL|d|member|mbedtls_mpi d; /*!< our secret value */
DECL|grp_id|member|mbedtls_ecp_group_id grp_id; /*!< Internal identifier */
DECL|grp|member|mbedtls_ecp_group grp; /*!< Elliptic curve and base point */
DECL|h|member|unsigned int h; /*!< internal: 1 if the constants are static */
DECL|id|member|mbedtls_ecp_group_id id; /*!< internal group identifier */
DECL|mbedtls_ecp_curve_info|typedef|} mbedtls_ecp_curve_info;
DECL|mbedtls_ecp_group_id|typedef|} mbedtls_ecp_group_id;
DECL|mbedtls_ecp_group|typedef|mbedtls_ecp_group;
DECL|mbedtls_ecp_keypair|typedef|mbedtls_ecp_keypair;
DECL|mbedtls_ecp_point|typedef|mbedtls_ecp_point;
DECL|modp|member|int (*modp)(mbedtls_mpi *); /*!< function for fast reduction mod P */
DECL|name|member|const char *name; /*!< Human-friendly name */
DECL|nbits|member|size_t nbits; /*!< number of bits in 1. P, or 2. private keys */
DECL|pbits|member|size_t pbits; /*!< number of bits in P */
DECL|t_data|member|void *t_data; /*!< unused */
DECL|t_post|member|int (*t_post)(mbedtls_ecp_point *, void *); /*!< unused */
DECL|t_pre|member|int (*t_pre)(mbedtls_ecp_point *, void *); /*!< unused */
DECL|tls_id|member|uint16_t tls_id; /*!< TLS NamedCurve identifier */
