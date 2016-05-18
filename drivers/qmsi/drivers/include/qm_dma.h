DECL|QM_DMA_BURST_TRANS_LENGTH_128|enumerator|QM_DMA_BURST_TRANS_LENGTH_128 =
DECL|QM_DMA_BURST_TRANS_LENGTH_16|enumerator|QM_DMA_BURST_TRANS_LENGTH_16 = 0x3, /**< Burst length 16 data items. */
DECL|QM_DMA_BURST_TRANS_LENGTH_1|enumerator|QM_DMA_BURST_TRANS_LENGTH_1 = 0x0, /**< Burst length 1 data item. */
DECL|QM_DMA_BURST_TRANS_LENGTH_256|enumerator|QM_DMA_BURST_TRANS_LENGTH_256 = 0x7 /**< Burst length 256 data items. */
DECL|QM_DMA_BURST_TRANS_LENGTH_32|enumerator|QM_DMA_BURST_TRANS_LENGTH_32 = 0x4, /**< Burst length 32 data items. */
DECL|QM_DMA_BURST_TRANS_LENGTH_4|enumerator|QM_DMA_BURST_TRANS_LENGTH_4 = 0x1, /**< Burst length 4 data items. */
DECL|QM_DMA_BURST_TRANS_LENGTH_64|enumerator|QM_DMA_BURST_TRANS_LENGTH_64 = 0x5, /**< Burst length 64 data items. */
DECL|QM_DMA_BURST_TRANS_LENGTH_8|enumerator|QM_DMA_BURST_TRANS_LENGTH_8 = 0x2, /**< Burst length 8 data items. */
DECL|QM_DMA_HANDSHAKE_POLARITY_HIGH|enumerator|QM_DMA_HANDSHAKE_POLARITY_HIGH = 0x0, /**< Set HS polarity high. */
DECL|QM_DMA_HANDSHAKE_POLARITY_LOW|enumerator|QM_DMA_HANDSHAKE_POLARITY_LOW = 0x1 /**< Set HS polarity low. */
DECL|QM_DMA_MEMORY_TO_MEMORY|enumerator|QM_DMA_MEMORY_TO_MEMORY = 0x0, /**< Memory to memory transfer. */
DECL|QM_DMA_MEMORY_TO_PERIPHERAL|enumerator|QM_DMA_MEMORY_TO_PERIPHERAL =
DECL|QM_DMA_PERIPHERAL_TO_MEMORY|enumerator|QM_DMA_PERIPHERAL_TO_MEMORY = 0x2 /**< Peripheral to memory transfer. */
DECL|QM_DMA_TRANS_WIDTH_128|enumerator|QM_DMA_TRANS_WIDTH_128 = 0x4, /**< Transfer width of 128 bits. */
DECL|QM_DMA_TRANS_WIDTH_16|enumerator|QM_DMA_TRANS_WIDTH_16 = 0x1, /**< Transfer width of 16 bits. */
DECL|QM_DMA_TRANS_WIDTH_256|enumerator|QM_DMA_TRANS_WIDTH_256 = 0x5 /**< Transfer width of 256 bits. */
DECL|QM_DMA_TRANS_WIDTH_32|enumerator|QM_DMA_TRANS_WIDTH_32 = 0x2, /**< Transfer width of 32 bits. */
DECL|QM_DMA_TRANS_WIDTH_64|enumerator|QM_DMA_TRANS_WIDTH_64 = 0x3, /**< Transfer width of 64 bits. */
DECL|QM_DMA_TRANS_WIDTH_8|enumerator|QM_DMA_TRANS_WIDTH_8 = 0x0, /**< Transfer width of 8 bits. */
DECL|__QM_DMA_H_|macro|__QM_DMA_H_
DECL|block_size|member|uint32_t block_size; /**< DMA block size, Min = 1, Max = 4095. */
DECL|callback_context|member|void *callback_context;
DECL|channel_direction|member|qm_dma_channel_direction_t channel_direction;
DECL|client_callback|member|void (*client_callback)(void *callback_context, uint32_t len,
DECL|destination_address|member|uint32_t *destination_address; /**< DMA destination transfer address. */
DECL|destination_burst_length|member|qm_dma_burst_length_t destination_burst_length;
DECL|destination_transfer_width|member|qm_dma_transfer_width_t destination_transfer_width;
DECL|handshake_interface|member|qm_dma_handshake_interface_t handshake_interface;
DECL|handshake_polarity|member|qm_dma_handshake_polarity_t handshake_polarity;
DECL|qm_dma_burst_length_t|typedef|} qm_dma_burst_length_t;
DECL|qm_dma_channel_config_t|typedef|} qm_dma_channel_config_t;
DECL|qm_dma_channel_direction_t|typedef|} qm_dma_channel_direction_t;
DECL|qm_dma_handshake_polarity_t|typedef|} qm_dma_handshake_polarity_t;
DECL|qm_dma_transfer_t|typedef|} qm_dma_transfer_t;
DECL|qm_dma_transfer_width_t|typedef|} qm_dma_transfer_width_t;
DECL|source_address|member|uint32_t *source_address; /**< DMA source transfer address. */
DECL|source_burst_length|member|qm_dma_burst_length_t source_burst_length;
DECL|source_transfer_width|member|qm_dma_transfer_width_t source_transfer_width;
