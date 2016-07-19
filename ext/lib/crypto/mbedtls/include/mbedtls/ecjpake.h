DECL|MBEDTLS_ECJPAKE_CLIENT|enumerator|MBEDTLS_ECJPAKE_CLIENT = 0, /**< Client */
DECL|MBEDTLS_ECJPAKE_H|macro|MBEDTLS_ECJPAKE_H
DECL|MBEDTLS_ECJPAKE_SERVER|enumerator|MBEDTLS_ECJPAKE_SERVER, /**< Server */
DECL|Xm1|member|mbedtls_ecp_point Xm1; /**< My public key 1 C: X1, S: X3 */
DECL|Xm2|member|mbedtls_ecp_point Xm2; /**< My public key 2 C: X2, S: X4 */
DECL|Xp1|member|mbedtls_ecp_point Xp1; /**< Peer public key 1 C: X3, S: X1 */
DECL|Xp2|member|mbedtls_ecp_point Xp2; /**< Peer public key 2 C: X4, S: X2 */
DECL|Xp|member|mbedtls_ecp_point Xp; /**< Peer public key C: Xs, S: Xc */
DECL|grp|member|mbedtls_ecp_group grp; /**< Elliptic curve */
DECL|mbedtls_ecjpake_context|typedef|} mbedtls_ecjpake_context;
DECL|mbedtls_ecjpake_role|typedef|} mbedtls_ecjpake_role;
DECL|md_info|member|const mbedtls_md_info_t *md_info; /**< Hash to use */
DECL|point_format|member|int point_format; /**< Format for point export */
DECL|role|member|mbedtls_ecjpake_role role; /**< Are we client or server? */
DECL|s|member|mbedtls_mpi s; /**< Pre-shared secret (passphrase) */
DECL|xm1|member|mbedtls_mpi xm1; /**< My private key 1 C: x1, S: x3 */
DECL|xm2|member|mbedtls_mpi xm2; /**< My private key 2 C: x2, S: x4 */
