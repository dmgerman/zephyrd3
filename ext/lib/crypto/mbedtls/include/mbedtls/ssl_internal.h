DECL|MBEDTLS_SSL_BUFFER_LEN|macro|MBEDTLS_SSL_BUFFER_LEN
DECL|MBEDTLS_SSL_COMPRESSION_ADD|macro|MBEDTLS_SSL_COMPRESSION_ADD
DECL|MBEDTLS_SSL_COMPRESSION_ADD|macro|MBEDTLS_SSL_COMPRESSION_ADD
DECL|MBEDTLS_SSL_HEADER_LEN|macro|MBEDTLS_SSL_HEADER_LEN
DECL|MBEDTLS_SSL_INITIAL_HANDSHAKE|macro|MBEDTLS_SSL_INITIAL_HANDSHAKE
DECL|MBEDTLS_SSL_INTERNAL_H|macro|MBEDTLS_SSL_INTERNAL_H
DECL|MBEDTLS_SSL_MAC_ADD|macro|MBEDTLS_SSL_MAC_ADD
DECL|MBEDTLS_SSL_MAC_ADD|macro|MBEDTLS_SSL_MAC_ADD
DECL|MBEDTLS_SSL_MAC_ADD|macro|MBEDTLS_SSL_MAC_ADD
DECL|MBEDTLS_SSL_MAC_ADD|macro|MBEDTLS_SSL_MAC_ADD
DECL|MBEDTLS_SSL_MAX_MAJOR_VERSION|macro|MBEDTLS_SSL_MAX_MAJOR_VERSION
DECL|MBEDTLS_SSL_MAX_MINOR_VERSION|macro|MBEDTLS_SSL_MAX_MINOR_VERSION
DECL|MBEDTLS_SSL_MAX_MINOR_VERSION|macro|MBEDTLS_SSL_MAX_MINOR_VERSION
DECL|MBEDTLS_SSL_MAX_MINOR_VERSION|macro|MBEDTLS_SSL_MAX_MINOR_VERSION
DECL|MBEDTLS_SSL_MAX_MINOR_VERSION|macro|MBEDTLS_SSL_MAX_MINOR_VERSION
DECL|MBEDTLS_SSL_MIN_MAJOR_VERSION|macro|MBEDTLS_SSL_MIN_MAJOR_VERSION
DECL|MBEDTLS_SSL_MIN_MINOR_VERSION|macro|MBEDTLS_SSL_MIN_MINOR_VERSION
DECL|MBEDTLS_SSL_MIN_MINOR_VERSION|macro|MBEDTLS_SSL_MIN_MINOR_VERSION
DECL|MBEDTLS_SSL_MIN_MINOR_VERSION|macro|MBEDTLS_SSL_MIN_MINOR_VERSION
DECL|MBEDTLS_SSL_MIN_MINOR_VERSION|macro|MBEDTLS_SSL_MIN_MINOR_VERSION
DECL|MBEDTLS_SSL_MIN_VALID_MAJOR_VERSION|macro|MBEDTLS_SSL_MIN_VALID_MAJOR_VERSION
DECL|MBEDTLS_SSL_MIN_VALID_MINOR_VERSION|macro|MBEDTLS_SSL_MIN_VALID_MINOR_VERSION
DECL|MBEDTLS_SSL_PADDING_ADD|macro|MBEDTLS_SSL_PADDING_ADD
DECL|MBEDTLS_SSL_PADDING_ADD|macro|MBEDTLS_SSL_PADDING_ADD
DECL|MBEDTLS_SSL_PAYLOAD_LEN|macro|MBEDTLS_SSL_PAYLOAD_LEN
DECL|MBEDTLS_SSL_RENEGOTIATION_DONE|macro|MBEDTLS_SSL_RENEGOTIATION_DONE
DECL|MBEDTLS_SSL_RENEGOTIATION_IN_PROGRESS|macro|MBEDTLS_SSL_RENEGOTIATION_IN_PROGRESS
DECL|MBEDTLS_SSL_RENEGOTIATION_PENDING|macro|MBEDTLS_SSL_RENEGOTIATION_PENDING
DECL|MBEDTLS_SSL_RETRANS_FINISHED|macro|MBEDTLS_SSL_RETRANS_FINISHED
DECL|MBEDTLS_SSL_RETRANS_PREPARING|macro|MBEDTLS_SSL_RETRANS_PREPARING
DECL|MBEDTLS_SSL_RETRANS_SENDING|macro|MBEDTLS_SSL_RETRANS_SENDING
DECL|MBEDTLS_SSL_RETRANS_WAITING|macro|MBEDTLS_SSL_RETRANS_WAITING
DECL|MBEDTLS_TLS_EXT_ECJPAKE_KKPP_OK|macro|MBEDTLS_TLS_EXT_ECJPAKE_KKPP_OK
DECL|MBEDTLS_TLS_EXT_SUPPORTED_POINT_FORMATS_PRESENT|macro|MBEDTLS_TLS_EXT_SUPPORTED_POINT_FORMATS_PRESENT
DECL|alt_out_ctr|member|unsigned char alt_out_ctr[8]; /*!< Alternative record epoch/counter
DECL|alt_transform_out|member|mbedtls_ssl_transform *alt_transform_out; /*!< Alternative transform for
DECL|calc_finished|member|void (*calc_finished)(mbedtls_ssl_context *, unsigned char *, int);
DECL|calc_verify|member|void (*calc_verify)(mbedtls_ssl_context *, unsigned char *);
DECL|cert|member|mbedtls_x509_crt *cert; /*!< cert */
DECL|cipher_ctx_dec|member|mbedtls_cipher_context_t cipher_ctx_dec; /*!< decryption context */
DECL|cipher_ctx_enc|member|mbedtls_cipher_context_t cipher_ctx_enc; /*!< encryption context */
DECL|ciphersuite_info|member|const mbedtls_ssl_ciphersuite_t *ciphersuite_info;
DECL|cli_exts|member|int cli_exts; /*!< client extension presence*/
DECL|ctx_deflate|member|z_stream ctx_deflate; /*!< compression context */
DECL|ctx_inflate|member|z_stream ctx_inflate; /*!< decompression context */
DECL|cur_msg|member|mbedtls_ssl_flight_item *cur_msg; /*!< Current message in flight */
DECL|curves|member|const mbedtls_ecp_curve_info **curves; /*!< Supported elliptic curves */
DECL|dhm_ctx|member|mbedtls_dhm_context dhm_ctx; /*!< DHM key exchange */
DECL|ecdh_ctx|member|mbedtls_ecdh_context ecdh_ctx; /*!< ECDH key exchange */
DECL|ecdsa|member|mbedtls_md_type_t ecdsa;
DECL|ecjpake_cache_len|member|size_t ecjpake_cache_len; /*!< Length of cached data */
DECL|ecjpake_cache|member|unsigned char *ecjpake_cache; /*!< Cache for ClientHello ext */
DECL|ecjpake_ctx|member|mbedtls_ecjpake_context ecjpake_ctx; /*!< EC J-PAKE key exchange */
DECL|extended_ms|member|int extended_ms; /*!< use Extended Master Secret? */
DECL|fin_md5|member|mbedtls_md5_context fin_md5;
DECL|fin_sha1|member|mbedtls_sha1_context fin_sha1;
DECL|fin_sha256|member|mbedtls_sha256_context fin_sha256;
DECL|fin_sha512|member|mbedtls_sha512_context fin_sha512;
DECL|fixed_ivlen|member|size_t fixed_ivlen; /*!< Fixed part of IV (AEAD) */
DECL|flight|member|mbedtls_ssl_flight_item *flight; /*!< Current outgoing flight */
DECL|hash_algs|member|mbedtls_ssl_sig_hash_set_t hash_algs; /*!< Set of suitable sig-hash pairs */
DECL|hs_msg|member|unsigned char *hs_msg; /*!< Reassembled handshake message */
DECL|in_flight_start_seq|member|unsigned int in_flight_start_seq; /*!< Minimum message sequence in the
DECL|in_msg_seq|member|unsigned int in_msg_seq; /*!< Incoming handshake sequence number */
DECL|inline|macro|inline
DECL|iv_dec|member|unsigned char iv_dec[16]; /*!< IV (decryption) */
DECL|iv_enc|member|unsigned char iv_enc[16]; /*!< IV (encryption) */
DECL|ivlen|member|size_t ivlen; /*!< IV length */
DECL|key_cert|member|mbedtls_ssl_key_cert *key_cert; /*!< chosen key/cert pair (server) */
DECL|keylen|member|unsigned int keylen; /*!< symmetric key length (bytes) */
DECL|key|member|mbedtls_pk_context *key; /*!< private key */
DECL|len|member|size_t len; /*!< length of p */
DECL|mac_dec|member|unsigned char mac_dec[20]; /*!< SSL v3.0 secret (dec) */
DECL|mac_enc|member|unsigned char mac_enc[20]; /*!< SSL v3.0 secret (enc) */
DECL|maclen|member|size_t maclen; /*!< MAC length */
DECL|max_major_ver|member|int max_major_ver; /*!< max. major version client*/
DECL|max_minor_ver|member|int max_minor_ver; /*!< max. minor version client*/
DECL|mbedtls_ssl_flight_item|struct|struct mbedtls_ssl_flight_item
DECL|mbedtls_ssl_handshake_params|struct|struct mbedtls_ssl_handshake_params
DECL|mbedtls_ssl_hdr_len|function|static inline size_t mbedtls_ssl_hdr_len( const mbedtls_ssl_context *ssl )
DECL|mbedtls_ssl_hs_hdr_len|function|static inline size_t mbedtls_ssl_hs_hdr_len( const mbedtls_ssl_context *ssl )
DECL|mbedtls_ssl_key_cert|struct|struct mbedtls_ssl_key_cert
DECL|mbedtls_ssl_own_cert|function|static inline mbedtls_x509_crt *mbedtls_ssl_own_cert( mbedtls_ssl_context *ssl )
DECL|mbedtls_ssl_own_key|function|static inline mbedtls_pk_context *mbedtls_ssl_own_key( mbedtls_ssl_context *ssl )
DECL|mbedtls_ssl_safer_memcmp|function|static inline int mbedtls_ssl_safer_memcmp( const void *a, const void *b, size_t n )
DECL|mbedtls_ssl_sig_hash_set_init|function|static inline void mbedtls_ssl_sig_hash_set_init( mbedtls_ssl_sig_hash_set_t *set )
DECL|mbedtls_ssl_sig_hash_set_t|struct|struct mbedtls_ssl_sig_hash_set_t
DECL|mbedtls_ssl_transform|struct|struct mbedtls_ssl_transform
DECL|md_ctx_dec|member|mbedtls_md_context_t md_ctx_dec; /*!< MAC (decryption) */
DECL|md_ctx_enc|member|mbedtls_md_context_t md_ctx_enc; /*!< MAC (encryption) */
DECL|minlen|member|size_t minlen; /*!< min. ciphertext length */
DECL|new_session_ticket|member|int new_session_ticket; /*!< use NewSessionTicket? */
DECL|next|member|mbedtls_ssl_flight_item *next; /*!< next handshake message(s) */
DECL|next|member|mbedtls_ssl_key_cert *next; /*!< next key/cert pair */
DECL|out_msg_seq|member|unsigned int out_msg_seq; /*!< Outgoing handshake sequence number */
DECL|pmslen|member|size_t pmslen; /*!< premaster length */
DECL|premaster|member|unsigned char premaster[MBEDTLS_PREMASTER_SIZE];
DECL|psk_len|member|size_t psk_len; /*!< Length of PSK from callback */
DECL|psk|member|unsigned char *psk; /*!< PSK from the callback */
DECL|p|member|unsigned char *p; /*!< message, including handshake headers */
DECL|randbytes|member|unsigned char randbytes[64]; /*!< random bytes */
DECL|resume|member|int resume; /*!< session resume indicator*/
DECL|retransmit_state|member|unsigned char retransmit_state; /*!< Retransmission state */
DECL|retransmit_timeout|member|uint32_t retransmit_timeout; /*!< Current value of timeout */
DECL|rsa|member|mbedtls_md_type_t rsa;
DECL|sni_authmode|member|int sni_authmode; /*!< authmode from SNI callback */
DECL|sni_ca_chain|member|mbedtls_x509_crt *sni_ca_chain; /*!< trusted CAs from SNI callback */
DECL|sni_ca_crl|member|mbedtls_x509_crl *sni_ca_crl; /*!< trusted CAs CRLs from SNI */
DECL|sni_key_cert|member|mbedtls_ssl_key_cert *sni_key_cert; /*!< key/cert list from SNI */
DECL|tls_prf|member|int (*tls_prf)(const unsigned char *, size_t, const char *,
DECL|type|member|unsigned char type; /*!< type of the message: handshake or CCS */
DECL|update_checksum|member|void (*update_checksum)(mbedtls_ssl_context *, const unsigned char *, size_t);
DECL|verify_cookie_len|member|unsigned char verify_cookie_len; /*!< Cli: cookie length
DECL|verify_cookie|member|unsigned char *verify_cookie; /*!< Cli: HelloVerifyRequest cookie
