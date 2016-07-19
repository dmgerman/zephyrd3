DECL|MBEDTLS_X509_CRT_H|macro|MBEDTLS_X509_CRT_H
DECL|MBEDTLS_X509_CRT_VERSION_1|macro|MBEDTLS_X509_CRT_VERSION_1
DECL|MBEDTLS_X509_CRT_VERSION_2|macro|MBEDTLS_X509_CRT_VERSION_2
DECL|MBEDTLS_X509_CRT_VERSION_3|macro|MBEDTLS_X509_CRT_VERSION_3
DECL|MBEDTLS_X509_ID_FLAG|macro|MBEDTLS_X509_ID_FLAG
DECL|MBEDTLS_X509_RFC5280_MAX_SERIAL_LEN|macro|MBEDTLS_X509_RFC5280_MAX_SERIAL_LEN
DECL|MBEDTLS_X509_RFC5280_UTC_TIME_LEN|macro|MBEDTLS_X509_RFC5280_UTC_TIME_LEN
DECL|allowed_curves|member|uint32_t allowed_curves; /**< Elliptic curves for ECDSA */
DECL|allowed_mds|member|uint32_t allowed_mds; /**< MDs for signatures */
DECL|allowed_pks|member|uint32_t allowed_pks; /**< PK algs for signatures */
DECL|ca_istrue|member|int ca_istrue; /**< Optional Basic Constraint extension value: 1 if this certificate belongs to a CA, 0 otherwise. */
DECL|ext_key_usage|member|mbedtls_x509_sequence ext_key_usage; /**< Optional list of extended key usage OIDs. */
DECL|ext_types|member|int ext_types; /**< Bit string containing detected and parsed extensions */
DECL|extensions|member|mbedtls_asn1_named_data *extensions;
DECL|issuer_id|member|mbedtls_x509_buf issuer_id; /**< Optional X.509 v2/v3 issuer unique identifier. */
DECL|issuer_key|member|mbedtls_pk_context *issuer_key;
DECL|issuer_raw|member|mbedtls_x509_buf issuer_raw; /**< The raw issuer data (DER). Used for quick comparison. */
DECL|issuer|member|mbedtls_asn1_named_data *issuer;
DECL|issuer|member|mbedtls_x509_name issuer; /**< The parsed issuer data (named information object). */
DECL|key_usage|member|unsigned int key_usage; /**< Optional key usage extension value: See the values in x509.h */
DECL|max_pathlen|member|int max_pathlen; /**< Optional Basic Constraint extension value: The maximum path length to the root certificate. Path length is 1 higher than RFC 5280 'meaning', so 1+ */
DECL|mbedtls_x509_crt_profile|typedef|mbedtls_x509_crt_profile;
DECL|mbedtls_x509_crt|struct|typedef struct mbedtls_x509_crt
DECL|mbedtls_x509_crt|typedef|mbedtls_x509_crt;
DECL|mbedtls_x509write_cert|struct|typedef struct mbedtls_x509write_cert
DECL|mbedtls_x509write_cert|typedef|mbedtls_x509write_cert;
DECL|md_alg|member|mbedtls_md_type_t md_alg;
DECL|next|member|struct mbedtls_x509_crt *next; /**< Next certificate in the CA-chain. */
DECL|not_after|member|char not_after[MBEDTLS_X509_RFC5280_UTC_TIME_LEN + 1];
DECL|not_before|member|char not_before[MBEDTLS_X509_RFC5280_UTC_TIME_LEN + 1];
DECL|ns_cert_type|member|unsigned char ns_cert_type; /**< Optional Netscape certificate type extension value: See the values in x509.h */
DECL|pk|member|mbedtls_pk_context pk; /**< Container for the public key context. */
DECL|raw|member|mbedtls_x509_buf raw; /**< The raw certificate data (DER). */
DECL|rsa_min_bitlen|member|uint32_t rsa_min_bitlen; /**< Minimum size for RSA keys */
DECL|serial|member|mbedtls_mpi serial;
DECL|serial|member|mbedtls_x509_buf serial; /**< Unique id for certificate issued by a specific CA. */
DECL|sig_md|member|mbedtls_md_type_t sig_md; /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
DECL|sig_oid|member|mbedtls_x509_buf sig_oid; /**< Signature algorithm, e.g. sha1RSA */
DECL|sig_opts|member|void *sig_opts; /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
DECL|sig_pk|member|mbedtls_pk_type_t sig_pk; /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
DECL|sig|member|mbedtls_x509_buf sig; /**< Signature: hash of the tbs part signed with the private key. */
DECL|subject_alt_names|member|mbedtls_x509_sequence subject_alt_names; /**< Optional list of Subject Alternative Names (Only dNSName supported). */
DECL|subject_id|member|mbedtls_x509_buf subject_id; /**< Optional X.509 v2/v3 subject unique identifier. */
DECL|subject_key|member|mbedtls_pk_context *subject_key;
DECL|subject_raw|member|mbedtls_x509_buf subject_raw; /**< The raw subject data (DER). Used for quick comparison. */
DECL|subject|member|mbedtls_asn1_named_data *subject;
DECL|subject|member|mbedtls_x509_name subject; /**< The parsed subject data (named information object). */
DECL|tbs|member|mbedtls_x509_buf tbs; /**< The raw certificate body (DER). The part that is To Be Signed. */
DECL|v3_ext|member|mbedtls_x509_buf v3_ext; /**< Optional X.509 v3 extensions. */
DECL|valid_from|member|mbedtls_x509_time valid_from; /**< Start time of certificate validity. */
DECL|valid_to|member|mbedtls_x509_time valid_to; /**< End time of certificate validity. */
DECL|version|member|int version;
DECL|version|member|int version; /**< The X.509 version. (1=v1, 2=v2, 3=v3) */
