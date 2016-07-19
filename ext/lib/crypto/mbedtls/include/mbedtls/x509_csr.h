DECL|MBEDTLS_X509_CSR_H|macro|MBEDTLS_X509_CSR_H
DECL|cri|member|mbedtls_x509_buf cri; /**< The raw CertificateRequestInfo body (DER). */
DECL|extensions|member|mbedtls_asn1_named_data *extensions;
DECL|key|member|mbedtls_pk_context *key;
DECL|mbedtls_x509_csr|struct|typedef struct mbedtls_x509_csr
DECL|mbedtls_x509_csr|typedef|mbedtls_x509_csr;
DECL|mbedtls_x509write_csr|struct|typedef struct mbedtls_x509write_csr
DECL|mbedtls_x509write_csr|typedef|mbedtls_x509write_csr;
DECL|md_alg|member|mbedtls_md_type_t md_alg;
DECL|pk|member|mbedtls_pk_context pk; /**< Container for the public key context. */
DECL|raw|member|mbedtls_x509_buf raw; /**< The raw CSR data (DER). */
DECL|sig_md|member|mbedtls_md_type_t sig_md; /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
DECL|sig_oid|member|mbedtls_x509_buf sig_oid;
DECL|sig_opts|member|void *sig_opts; /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
DECL|sig_pk|member|mbedtls_pk_type_t sig_pk; /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
DECL|sig|member|mbedtls_x509_buf sig;
DECL|subject_raw|member|mbedtls_x509_buf subject_raw; /**< The raw subject data (DER). */
DECL|subject|member|mbedtls_asn1_named_data *subject;
DECL|subject|member|mbedtls_x509_name subject; /**< The parsed subject data (named information object). */
DECL|version|member|int version; /**< CSR version (1=v1). */
