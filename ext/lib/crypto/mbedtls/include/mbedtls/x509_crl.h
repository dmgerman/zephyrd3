DECL|MBEDTLS_X509_CRL_H|macro|MBEDTLS_X509_CRL_H
DECL|crl_ext|member|mbedtls_x509_buf crl_ext;
DECL|entry_ext|member|mbedtls_x509_buf entry_ext;
DECL|entry|member|mbedtls_x509_crl_entry entry; /**< The CRL entries containing the certificate revocation times for this CA. */
DECL|issuer_raw|member|mbedtls_x509_buf issuer_raw; /**< The raw issuer data (DER). */
DECL|issuer|member|mbedtls_x509_name issuer; /**< The parsed issuer data (named information object). */
DECL|mbedtls_x509_crl_entry|struct|typedef struct mbedtls_x509_crl_entry
DECL|mbedtls_x509_crl_entry|typedef|mbedtls_x509_crl_entry;
DECL|mbedtls_x509_crl|struct|typedef struct mbedtls_x509_crl
DECL|mbedtls_x509_crl|typedef|mbedtls_x509_crl;
DECL|next_update|member|mbedtls_x509_time next_update;
DECL|next|member|struct mbedtls_x509_crl *next;
DECL|next|member|struct mbedtls_x509_crl_entry *next;
DECL|raw|member|mbedtls_x509_buf raw;
DECL|raw|member|mbedtls_x509_buf raw; /**< The raw certificate data (DER). */
DECL|revocation_date|member|mbedtls_x509_time revocation_date;
DECL|serial|member|mbedtls_x509_buf serial;
DECL|sig_md|member|mbedtls_md_type_t sig_md; /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
DECL|sig_oid2|member|mbedtls_x509_buf sig_oid2;
DECL|sig_oid|member|mbedtls_x509_buf sig_oid; /**< CRL signature type identifier */
DECL|sig_opts|member|void *sig_opts; /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
DECL|sig_pk|member|mbedtls_pk_type_t sig_pk; /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
DECL|sig|member|mbedtls_x509_buf sig;
DECL|tbs|member|mbedtls_x509_buf tbs; /**< The raw certificate body (DER). The part that is To Be Signed. */
DECL|this_update|member|mbedtls_x509_time this_update;
DECL|version|member|int version; /**< CRL version (1=v1, 2=v2) */
