DECL|CAP_ASYNC_OPS|macro|CAP_ASYNC_OPS
DECL|CAP_AUTONONCE|macro|CAP_AUTONONCE
DECL|CAP_INPLACE_OPS|macro|CAP_INPLACE_OPS
DECL|CAP_KEY_LOADING_API|macro|CAP_KEY_LOADING_API
DECL|CAP_OPAQUE_KEY_HNDL|macro|CAP_OPAQUE_KEY_HNDL
DECL|CAP_RAW_KEY|macro|CAP_RAW_KEY
DECL|CAP_SEPARATE_IO_BUFS|macro|CAP_SEPARATE_IO_BUFS
DECL|CAP_SYNC_OPS|macro|CAP_SYNC_OPS
DECL|CRYPTO_CIPHER_ALGO_AES|enumerator|CRYPTO_CIPHER_ALGO_AES = 1,
DECL|CRYPTO_CIPHER_MODE_CBC|enumerator|CRYPTO_CIPHER_MODE_CBC = 2,
DECL|CRYPTO_CIPHER_MODE_CCM|enumerator|CRYPTO_CIPHER_MODE_CCM = 4,
DECL|CRYPTO_CIPHER_MODE_CTR|enumerator|CRYPTO_CIPHER_MODE_CTR = 3,
DECL|CRYPTO_CIPHER_MODE_ECB|enumerator|CRYPTO_CIPHER_MODE_ECB = 1,
DECL|CRYPTO_CIPHER_OP_DECRYPT|enumerator|CRYPTO_CIPHER_OP_DECRYPT = 0,
DECL|CRYPTO_CIPHER_OP_ENCRYPT|enumerator|CRYPTO_CIPHER_OP_ENCRYPT = 1,
DECL|ZEPHYR_INCLUDE_CRYPTO_CIPHER_STRUCTS_H_|macro|ZEPHYR_INCLUDE_CRYPTO_CIPHER_STRUCTS_H_
DECL|ad_len|member|u32_t ad_len;
DECL|ad|member|u8_t *ad;
DECL|app_sessn_state|member|void *app_sessn_state;
DECL|bit_stream|member|u8_t *bit_stream;
DECL|block_crypt_hndlr|member|block_op_t block_crypt_hndlr;
DECL|block_op_t|typedef|typedef int (*block_op_t)(struct cipher_ctx *ctx, struct cipher_pkt *pkt);
DECL|cbc_crypt_hndlr|member|cbc_op_t cbc_crypt_hndlr;
DECL|cbc_op_t|typedef|typedef int (*cbc_op_t)(struct cipher_ctx *ctx, struct cipher_pkt *pkt,
DECL|ccm_crypt_hndlr|member|ccm_op_t ccm_crypt_hndlr;
DECL|ccm_info|member|struct ccm_params ccm_info;
DECL|ccm_op_t|typedef|typedef int (*ccm_op_t)(struct cipher_ctx *ctx, struct cipher_aead_pkt *pkt,
DECL|ccm_params|struct|struct ccm_params {
DECL|cipher_aead_pkt|struct|struct cipher_aead_pkt {
DECL|cipher_algo|enum|enum cipher_algo {
DECL|cipher_ctx|struct|struct cipher_ctx {
DECL|cipher_mode|enum|enum cipher_mode {
DECL|cipher_mode|member|enum cipher_mode cipher_mode;
DECL|cipher_ops|struct|struct cipher_ops {
DECL|cipher_op|enum|enum cipher_op {
DECL|cipher_pkt|struct|struct cipher_pkt {
DECL|crypto_completion_cb|typedef|typedef void (*crypto_completion_cb)(struct cipher_pkt *completed, int status);
DECL|ctr_crypt_hndlr|member|ctr_op_t ctr_crypt_hndlr;
DECL|ctr_info|member|struct ctr_params ctr_info;
DECL|ctr_len|member|u32_t ctr_len;
DECL|ctr_op_t|typedef|typedef int (*ctr_op_t)(struct cipher_ctx *ctx, struct cipher_pkt *pkt,
DECL|ctr_params|struct|struct ctr_params {
DECL|ctx|member|struct cipher_ctx *ctx;
DECL|device|member|struct device *device;
DECL|drv_sessn_state|member|void *drv_sessn_state;
DECL|flags|member|u16_t flags;
DECL|handle|member|void *handle;
DECL|in_buf|member|u8_t *in_buf;
DECL|in_len|member|int in_len;
DECL|keylen|member|u16_t keylen;
DECL|key|member|} key;
DECL|mode_params|member|} mode_params;
DECL|nonce_len|member|u16_t nonce_len;
DECL|ops|member|struct cipher_ops ops;
DECL|out_buf_max|member|int out_buf_max;
DECL|out_buf|member|u8_t *out_buf;
DECL|out_len|member|int out_len;
DECL|pkt|member|struct cipher_pkt *pkt;
DECL|tag_len|member|u16_t tag_len;
DECL|tag|member|u8_t *tag;
