DECL|DCP_AES_BLOCK_SIZE|macro|DCP_AES_BLOCK_SIZE
DECL|DCP_HASH_BLOCK_SIZE|macro|DCP_HASH_BLOCK_SIZE
DECL|DCP_HASH_CAVP_COMPATIBLE|macro|DCP_HASH_CAVP_COMPATIBLE
DECL|DCP_HASH_CTX_SIZE|macro|DCP_HASH_CTX_SIZE
DECL|DCP_SHA_BLOCK_SIZE|macro|DCP_SHA_BLOCK_SIZE
DECL|FSL_DCP_DRIVER_VERSION|macro|FSL_DCP_DRIVER_VERSION
DECL|_FSL_DCP_H_|macro|_FSL_DCP_H_
DECL|_dcp_ch_enable_t|typedef|} _dcp_ch_enable_t;
DECL|_dcp_ch_enable|enum|typedef enum _dcp_ch_enable
DECL|_dcp_ch_int_enable_t|typedef|} _dcp_ch_int_enable_t;
DECL|_dcp_ch_int_enable|enum|typedef enum _dcp_ch_int_enable
DECL|_dcp_channel|enum|typedef enum _dcp_channel
DECL|_dcp_config|struct|typedef struct _dcp_config
DECL|_dcp_context|struct|typedef struct _dcp_context
DECL|_dcp_handle|struct|typedef struct _dcp_handle
DECL|_dcp_hash_algo_t|enum|typedef enum _dcp_hash_algo_t
DECL|_dcp_hash_ctx_t|struct|typedef struct _dcp_hash_ctx_t
DECL|_dcp_key_slot|enum|typedef enum _dcp_key_slot
DECL|_dcp_status|enum|enum _dcp_status
DECL|_dcp_swap|enum|typedef enum _dcp_swap
DECL|_dcp_work_packet|struct|typedef struct _dcp_work_packet
DECL|bufferSize|member|uint32_t bufferSize;
DECL|channel|member|dcp_channel_t channel; /*!< Specify DCP channel. */
DECL|control0|member|uint32_t control0;
DECL|control1|member|uint32_t control1;
DECL|dcp_channel_t|typedef|} dcp_channel_t;
DECL|dcp_config_t|typedef|} dcp_config_t;
DECL|dcp_context_t|typedef|} dcp_context_t;
DECL|dcp_handle_t|typedef|} dcp_handle_t;
DECL|dcp_hash_algo_t|typedef|} dcp_hash_algo_t;
DECL|dcp_hash_ctx_t|typedef|} dcp_hash_ctx_t;
DECL|dcp_key_slot_t|typedef|} dcp_key_slot_t;
DECL|dcp_swap_t|typedef|} dcp_swap_t;
DECL|dcp_work_packet_t|typedef|} dcp_work_packet_t;
DECL|destinationBufferAddress|member|uint32_t destinationBufferAddress;
DECL|enableChannelInterrupt|member|uint8_t enableChannelInterrupt; /*!< Per-channel interrupt enable. */
DECL|enableChannel|member|uint8_t enableChannel; /*!< DCP channel enable. */
DECL|enableContextCaching|member|bool enableContextCaching; /*!< Enable the caching of contexts between the operations. */
DECL|enableContextSwitching|member|bool enableContextSwitching; /*!< Enable automatic context switching for the channels. */
DECL|gatherResidualWrites|member|bool gatherResidualWrites; /*!< Enable the ragged writes to the unaligned buffers. */
DECL|iv|member|uint32_t iv[4];
DECL|kDCP_Channel0|enumerator|kDCP_Channel0 = (1u << 16), /*!< DCP channel 0. */
DECL|kDCP_Channel1|enumerator|kDCP_Channel1 = (1u << 17), /*!< DCP channel 1. */
DECL|kDCP_Channel2|enumerator|kDCP_Channel2 = (1u << 18), /*!< DCP channel 2. */
DECL|kDCP_Channel3|enumerator|kDCP_Channel3 = (1u << 19), /*!< DCP channel 3. */
DECL|kDCP_Crc32|enumerator|kDCP_Crc32, /*!< CRC_32 */
DECL|kDCP_InputByteSwap|enumerator|kDCP_InputByteSwap = 0x100000U,
DECL|kDCP_InputWordSwap|enumerator|kDCP_InputWordSwap = 0x200000U,
DECL|kDCP_KeyByteSwap|enumerator|kDCP_KeyByteSwap = 0x40000U,
DECL|kDCP_KeySlot0|enumerator|kDCP_KeySlot0 = 0U, /*!< DCP key slot 0. */
DECL|kDCP_KeySlot1|enumerator|kDCP_KeySlot1 = 1U, /*!< DCP key slot 1. */
DECL|kDCP_KeySlot2|enumerator|kDCP_KeySlot2 = 2U, /*!< DCP key slot 2.*/
DECL|kDCP_KeySlot3|enumerator|kDCP_KeySlot3 = 3U, /*!< DCP key slot 3. */
DECL|kDCP_KeyWordSwap|enumerator|kDCP_KeyWordSwap = 0x80000U,
DECL|kDCP_NoSwap|enumerator|kDCP_NoSwap = 0x0U,
DECL|kDCP_OtpKey|enumerator|kDCP_OtpKey = 4U, /*!< DCP OTP key. */
DECL|kDCP_OtpUniqueKey|enumerator|kDCP_OtpUniqueKey = 5U, /*!< DCP unique OTP key. */
DECL|kDCP_OutputByteSwap|enumerator|kDCP_OutputByteSwap = 0x400000U,
DECL|kDCP_OutputWordSwap|enumerator|kDCP_OutputWordSwap = 0x800000U,
DECL|kDCP_PayloadKey|enumerator|kDCP_PayloadKey = 6U, /*!< DCP payload key. */
DECL|kDCP_Sha1|enumerator|kDCP_Sha1, /*!< SHA_1 */
DECL|kDCP_Sha256|enumerator|kDCP_Sha256, /*!< SHA_256 */
DECL|kDCP_ch0Enable|enumerator|kDCP_ch0Enable = 1U, /*!< DCP channel 0 enable */
DECL|kDCP_ch0IntEnable|enumerator|kDCP_ch0IntEnable = 1U, /*!< DCP channel 0 interrupt enable */
DECL|kDCP_ch1Enable|enumerator|kDCP_ch1Enable = 2U, /*!< DCP channel 1 enable */
DECL|kDCP_ch1IntEnable|enumerator|kDCP_ch1IntEnable = 2U, /*!< DCP channel 1 interrupt enable */
DECL|kDCP_ch2Enable|enumerator|kDCP_ch2Enable = 4U, /*!< DCP channel 2 enable */
DECL|kDCP_ch2IntEnable|enumerator|kDCP_ch2IntEnable = 4U, /*!< DCP channel 2 interrupt enable */
DECL|kDCP_ch3Enable|enumerator|kDCP_ch3Enable = 8U, /*!< DCP channel 3 enable */
DECL|kDCP_ch3IntEnable|enumerator|kDCP_ch3IntEnable = 8U, /*!< DCP channel 3 interrupt enable */
DECL|kDCP_chDisable|enumerator|kDCP_chDisable = 0U, /*!< DCP channel disable */
DECL|kDCP_chEnableAll|enumerator|kDCP_chEnableAll = 15U, /*!< DCP channel enable all */
DECL|kDCP_chIntDisable|enumerator|kDCP_chIntDisable = 0U, /*!< DCP interrupts disable */
DECL|kStatus_DCP_Again|enumerator|kStatus_DCP_Again = MAKE_STATUS(kStatusGroup_DCP, 0), /*!< Non-blocking function shall be called again. */
DECL|keySlot|member|dcp_key_slot_t keySlot; /*!< For operations with key (such as AES encryption/decryption), specify DCP key slot. */
DECL|keyWord|member|uint32_t keyWord[4];
DECL|nextCmdAddress|member|uint32_t nextCmdAddress;
DECL|payloadPointer|member|uint32_t payloadPointer;
DECL|sourceBufferAddress|member|uint32_t sourceBufferAddress;
DECL|status|member|uint32_t status;
DECL|swapConfig|member|uint32_t swapConfig; /*!< For configuration of key, input, output byte/word swap options */
DECL|x|member|uint32_t x[208 / sizeof(uint32_t)];
DECL|x|member|uint32_t x[DCP_HASH_CTX_SIZE];
