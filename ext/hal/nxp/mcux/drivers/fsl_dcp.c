DECL|BUILD_ASSURE|macro|BUILD_ASSURE
DECL|DCP_AES_DecryptCbcNonBlocking|function|status_t DCP_AES_DecryptCbcNonBlocking(DCP_Type *base, dcp_handle_t *handle, dcp_work_packet_t *dcpPacket, const uint8_t *ciphertext, uint8_t *plaintext,
DECL|DCP_AES_DecryptCbc|function|status_t DCP_AES_DecryptCbc(DCP_Type *base, dcp_handle_t *handle, const uint8_t *ciphertext, uint8_t *plaintext, size_t size,
DECL|DCP_AES_DecryptEcbNonBlocking|function|status_t DCP_AES_DecryptEcbNonBlocking(DCP_Type *base, dcp_handle_t *handle, dcp_work_packet_t *dcpPacket, const uint8_t *ciphertext, uint8_t *plaintext,
DECL|DCP_AES_DecryptEcb|function|status_t DCP_AES_DecryptEcb( DCP_Type *base, dcp_handle_t *handle, const uint8_t *ciphertext, uint8_t *plaintext, size_t size)
DECL|DCP_AES_EncryptCbcNonBlocking|function|status_t DCP_AES_EncryptCbcNonBlocking(DCP_Type *base, dcp_handle_t *handle, dcp_work_packet_t *dcpPacket, const uint8_t *plaintext, uint8_t *ciphertext,
DECL|DCP_AES_EncryptCbc|function|status_t DCP_AES_EncryptCbc(DCP_Type *base, dcp_handle_t *handle, const uint8_t *plaintext, uint8_t *ciphertext, size_t size,
DECL|DCP_AES_EncryptEcbNonBlocking|function|status_t DCP_AES_EncryptEcbNonBlocking(DCP_Type *base, dcp_handle_t *handle, dcp_work_packet_t *dcpPacket, const uint8_t *plaintext, uint8_t *ciphertext,
DECL|DCP_AES_EncryptEcb|function|status_t DCP_AES_EncryptEcb( DCP_Type *base, dcp_handle_t *handle, const uint8_t *plaintext, uint8_t *ciphertext, size_t size)
DECL|DCP_AES_SetKey|function|status_t DCP_AES_SetKey(DCP_Type *base, dcp_handle_t *handle, const uint8_t *key, size_t keySize)
DECL|DCP_Deinit|function|void DCP_Deinit(DCP_Type *base)
DECL|DCP_GetDefaultConfig|function|void DCP_GetDefaultConfig(dcp_config_t *config)
DECL|DCP_HASH_Finish|function|status_t DCP_HASH_Finish(DCP_Type *base, dcp_hash_ctx_t *ctx, uint8_t *output, size_t *outputSize)
DECL|DCP_HASH_Init|function|status_t DCP_HASH_Init(DCP_Type *base, dcp_handle_t *handle, dcp_hash_ctx_t *ctx, dcp_hash_algo_t algo)
DECL|DCP_HASH_Update|function|status_t DCP_HASH_Update(DCP_Type *base, dcp_hash_ctx_t *ctx, const uint8_t *input, size_t inputSize)
DECL|DCP_HASH|function|status_t DCP_HASH(DCP_Type *base, dcp_handle_t *handle, dcp_hash_algo_t algo, const uint8_t *input, size_t inputSize,
DECL|DCP_Init|function|void DCP_Init(DCP_Type *base, const dcp_config_t *config)
DECL|DCP_WaitForChannelComplete|function|status_t DCP_WaitForChannelComplete(DCP_Type *base, dcp_handle_t *handle)
DECL|_dcp_hash_algo_state|enum|typedef enum _dcp_hash_algo_state
DECL|_dcp_hash_block|union|typedef union _dcp_hash_block
DECL|_dcp_hash_ctx_internal|struct|typedef struct _dcp_hash_ctx_internal
DECL|_dcp_hash_digest_len|enum|enum _dcp_hash_digest_len
DECL|_dcp_sha_block|union|typedef union _dcp_sha_block
DECL|_dcp_work_packet_bit_definitions|enum|enum _dcp_work_packet_bit_definitions
DECL|algo|member|dcp_hash_algo_t algo; /*!< selected algorithm from the set of supported algorithms */
DECL|blksz|member|size_t blksz; /*!< number of valid bytes in memory buffer */
DECL|blk|member|dcp_hash_block_t blk; /*!< memory buffer. only full blocks are written to DCP during hash updates */
DECL|b|member|uint8_t b[64]; /*!< byte array */
DECL|b|member|uint8_t b[DCP_HASH_BLOCK_SIZE]; /*!< byte array */
DECL|ctrl0|member|uint32_t ctrl0; /*!< HASH_INIT and HASH_TERM flags */
DECL|dcp_aes_set_sram_based_key|function|static status_t dcp_aes_set_sram_based_key(DCP_Type *base, dcp_handle_t *handle, const uint8_t *key)
DECL|dcp_clear_channel_status|function|static void dcp_clear_channel_status(DCP_Type *base, uint32_t mask)
DECL|dcp_clear_status|function|static void dcp_clear_status(DCP_Type *base)
DECL|dcp_get_channel_status|function|static status_t dcp_get_channel_status(DCP_Type *base, dcp_channel_t channel)
DECL|dcp_hash_algo_state_t|typedef|} dcp_hash_algo_state_t;
DECL|dcp_hash_block_t|typedef|} dcp_hash_block_t;
DECL|dcp_hash_check_context|function|static status_t dcp_hash_check_context(dcp_hash_ctx_internal_t *ctxInternal, const uint8_t *message)
DECL|dcp_hash_check_input_alg|function|static status_t dcp_hash_check_input_alg(dcp_hash_algo_t algo)
DECL|dcp_hash_check_input_args|function|static status_t dcp_hash_check_input_args(DCP_Type *base, dcp_hash_ctx_t *ctx, dcp_hash_algo_t algo)
DECL|dcp_hash_ctx_internal_t|typedef|} dcp_hash_ctx_internal_t;
DECL|dcp_hash_engine_init|function|static status_t dcp_hash_engine_init(DCP_Type *base, dcp_hash_ctx_internal_t *ctxInternal)
DECL|dcp_hash_finalize|function|static status_t dcp_hash_finalize(DCP_Type *base, dcp_hash_ctx_internal_t *ctxInternal)
DECL|dcp_hash_process_message_data|function|static status_t dcp_hash_process_message_data(DCP_Type *base, dcp_hash_ctx_internal_t *ctxInternal, const uint8_t *message, size_t messageSize)
DECL|dcp_hash_restore_running_hash|function|static void dcp_hash_restore_running_hash(dcp_hash_ctx_internal_t *ctxInternal)
DECL|dcp_hash_save_running_hash|function|static void dcp_hash_save_running_hash(dcp_hash_ctx_internal_t *ctxInternal)
DECL|dcp_hash_update_non_blocking|function|static status_t dcp_hash_update_non_blocking( DCP_Type *base, dcp_hash_ctx_internal_t *ctxInternal, dcp_work_packet_t *dcpPacket, const uint8_t *msg, size_t size)
DECL|dcp_hash_update|function|static status_t dcp_hash_update(DCP_Type *base, dcp_hash_ctx_internal_t *ctxInternal, const uint8_t *msg, size_t size)
DECL|dcp_memcpy|macro|dcp_memcpy
DECL|dcp_reverse_and_copy|function|static void dcp_reverse_and_copy(uint8_t *src, uint8_t *dest, size_t src_len)
DECL|dcp_schedule_work|function|static status_t dcp_schedule_work(DCP_Type *base, dcp_handle_t *handle, dcp_work_packet_t *dcpPacket)
DECL|dcp_sha_block_t|typedef|} dcp_sha_block_t;
DECL|fullMessageSize|member|uint32_t fullMessageSize; /*!< track message size */
DECL|handle|member|dcp_handle_t *handle;
DECL|kDCP_CONTROL0_DECR_SEMAPHOR|enumerator|kDCP_CONTROL0_DECR_SEMAPHOR = 1u << 1, /* DECR_SEMAPHOR */
DECL|kDCP_CONTROL0_ENABLE_HASH|enumerator|kDCP_CONTROL0_ENABLE_HASH = 1u << 6, /* ENABLE_HASH */
DECL|kDCP_CONTROL0_HASH_INIT|enumerator|kDCP_CONTROL0_HASH_INIT = 1u << 12, /* HASH_INIT */
DECL|kDCP_CONTROL0_HASH_TERM|enumerator|kDCP_CONTROL0_HASH_TERM = 1u << 13, /* HASH_TERM */
DECL|kDCP_CONTROL1_HASH_SELECT_CRC32|enumerator|kDCP_CONTROL1_HASH_SELECT_CRC32 = 1u << 16,
DECL|kDCP_CONTROL1_HASH_SELECT_SHA1|enumerator|kDCP_CONTROL1_HASH_SELECT_SHA1 = 0u << 16,
DECL|kDCP_CONTROL1_HASH_SELECT_SHA256|enumerator|kDCP_CONTROL1_HASH_SELECT_SHA256 = 2u << 16,
DECL|kDCP_OutLenCrc32|enumerator|kDCP_OutLenCrc32 = 4u,
DECL|kDCP_OutLenSha1|enumerator|kDCP_OutLenSha1 = 20u,
DECL|kDCP_OutLenSha256|enumerator|kDCP_OutLenSha256 = 32u,
DECL|kDCP_StateHashInit|enumerator|kDCP_StateHashInit = 1u, /*!< Init state. */
DECL|kDCP_StateHashUpdate|enumerator|kDCP_StateHashUpdate, /*!< Update state. */
DECL|runningHash|member|uint32_t runningHash[9]; /*!< running hash. up to SHA-256 plus size, that is 36 bytes. */
DECL|s_dcpContextSwitchingBuffer|variable|s_dcpContextSwitchingBuffer
DECL|s_nullSha1|variable|s_nullSha1
DECL|s_nullSha256|variable|s_nullSha256
DECL|state|member|dcp_hash_algo_state_t state; /*!< finite machine state of the hash software process */
DECL|w|member|uint32_t w[64 / 4]; /*!< array of 32-bit words */
DECL|w|member|uint32_t w[DCP_HASH_BLOCK_SIZE / 4]; /*!< array of 32-bit words */
