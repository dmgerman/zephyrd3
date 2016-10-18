DECL|CHANNEL_MASK_ALL|macro|CHANNEL_MASK_ALL
DECL|ONE_MICROSECOND|macro|ONE_MICROSECOND
DECL|QM_DMA_ADDRESS_DECREMENT|enumerator|QM_DMA_ADDRESS_DECREMENT = 0x1, /**< Decrement address. */
DECL|QM_DMA_ADDRESS_INCREMENT|enumerator|QM_DMA_ADDRESS_INCREMENT = 0x0, /**< Increment address. */
DECL|QM_DMA_ADDRESS_NO_CHANGE|enumerator|QM_DMA_ADDRESS_NO_CHANGE = 0x2 /**< Don't modify address. */
DECL|STANDARD_TIMEOUT_MICROSECOND|macro|STANDARD_TIMEOUT_MICROSECOND
DECL|UPDATE_REG_BITS|macro|UPDATE_REG_BITS
DECL|__DMA_H_|macro|__DMA_H_
DECL|callback_context|member|void *callback_context;
DECL|client_callback|member|void (*client_callback)(void *callback_context, uint32_t len,
DECL|dma_cfg_prv_t|struct|typedef struct dma_cfg_prv_t {
DECL|dma_cfg_prv_t|typedef|} dma_cfg_prv_t;
DECL|dma_channel_disable|function|static int dma_channel_disable(const qm_dma_t dma, const qm_dma_channel_id_t channel_id)
DECL|dma_channel_enable|function|static __inline__ void dma_channel_enable(const qm_dma_t dma, const qm_dma_channel_id_t channel_id)
DECL|dma_controller_disable|function|static __inline__ int dma_controller_disable(const qm_dma_t dma)
DECL|dma_controller_enable|function|static __inline__ void dma_controller_enable(const qm_dma_t dma)
DECL|dma_get_transfer_type|function|dma_get_transfer_type(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const dma_cfg_prv_t *prv_cfg)
DECL|dma_interrupt_disable|function|dma_interrupt_disable(const qm_dma_t dma, const qm_dma_channel_id_t channel_id)
DECL|dma_interrupt_enable|function|dma_interrupt_enable(const qm_dma_t dma, const qm_dma_channel_id_t channel_id)
DECL|dma_set_block_size|function|static __inline__ void dma_set_block_size(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const uint32_t block_size)
DECL|dma_set_destination_address|function|dma_set_destination_address(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const uint32_t destination_address)
DECL|dma_set_destination_burst_length|function|dma_set_destination_burst_length(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_burst_length_t burst_length)
DECL|dma_set_destination_increment|function|static __inline__ void dma_set_destination_increment( const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_address_increment_t address_increment)
DECL|dma_set_destination_transfer_width|function|dma_set_destination_transfer_width(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_transfer_width_t transfer_width)
DECL|dma_set_handshake_interface|function|static __inline__ void dma_set_handshake_interface( const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_handshake_interface_t handshake_interface)
DECL|dma_set_handshake_polarity|function|dma_set_handshake_polarity(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_handshake_polarity_t handshake_polarity)
DECL|dma_set_handshake_type|function|dma_set_handshake_type(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const uint8_t handshake_type)
DECL|dma_set_source_address|function|dma_set_source_address(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const uint32_t source_address)
DECL|dma_set_source_burst_length|function|dma_set_source_burst_length(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_burst_length_t burst_length)
DECL|dma_set_source_increment|function|dma_set_source_increment(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_address_increment_t address_increment)
DECL|dma_set_source_transfer_width|function|dma_set_source_transfer_width(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_transfer_width_t transfer_width)
DECL|dma_set_transfer_direction|function|dma_set_transfer_direction(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_channel_direction_t transfer_direction)
DECL|dma_set_transfer_type|function|dma_set_transfer_type(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const qm_dma_transfer_type_t transfer_type, const qm_dma_channel_direction_t channel_direction)
DECL|get_transfer_length|function|get_transfer_length(const qm_dma_t dma, const qm_dma_channel_id_t channel_id, const dma_cfg_prv_t *prv_cfg)
DECL|lli_tail|member|qm_dma_linked_list_item_t *lli_tail;
DECL|num_blocks_per_buffer|member|uint16_t num_blocks_per_buffer;
DECL|num_blocks_remaining|member|uint16_t num_blocks_remaining;
DECL|qm_dma_address_increment_t|typedef|} qm_dma_address_increment_t;
DECL|transfer_type_ll_circular|member|bool transfer_type_ll_circular;
