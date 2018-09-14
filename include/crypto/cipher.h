DECL|ZEPHYR_INCLUDE_CRYPTO_CIPHER_H_|macro|ZEPHYR_INCLUDE_CRYPTO_CIPHER_H_
DECL|begin_session|member|int (*begin_session)(struct device *dev, struct cipher_ctx *ctx,
DECL|cipher_begin_session|function|static inline int cipher_begin_session(struct device *dev, struct cipher_ctx *ctx, enum cipher_algo algo, enum cipher_mode mode, enum cipher_op optype)
DECL|cipher_block_op|function|static inline int cipher_block_op(struct cipher_ctx *ctx, struct cipher_pkt *pkt)
DECL|cipher_callback_set|function|static inline int cipher_callback_set(struct device *dev, crypto_completion_cb cb)
DECL|cipher_cbc_op|function|static inline int cipher_cbc_op(struct cipher_ctx *ctx,struct cipher_pkt *pkt, u8_t *iv)
DECL|cipher_ccm_op|function|static inline int cipher_ccm_op(struct cipher_ctx *ctx,struct cipher_aead_pkt *pkt, u8_t *nonce)
DECL|cipher_ctr_op|function|static inline int cipher_ctr_op(struct cipher_ctx *ctx,struct cipher_pkt *pkt, u8_t *iv)
DECL|cipher_free_session|function|static inline int cipher_free_session(struct device *dev, struct cipher_ctx *ctx)
DECL|cipher_query_hwcaps|function|static inline int cipher_query_hwcaps(struct device *dev)
DECL|crypto_async_callback_set|member|int (*crypto_async_callback_set)(struct device *dev,
DECL|crypto_driver_api|struct|struct crypto_driver_api {
DECL|free_session|member|int (*free_session)(struct device *dev, struct cipher_ctx *ctx);
DECL|query_hw_caps|member|int (*query_hw_caps)(struct device *dev);
