DECL|DMA_ADDR_ADJ_DECREMENT|enumerator|DMA_ADDR_ADJ_DECREMENT,
DECL|DMA_ADDR_ADJ_INCREMENT|enumerator|DMA_ADDR_ADJ_INCREMENT,
DECL|DMA_ADDR_ADJ_NO_CHANGE|enumerator|DMA_ADDR_ADJ_NO_CHANGE,
DECL|MEMORY_TO_MEMORY|enumerator|MEMORY_TO_MEMORY = 0x0,
DECL|MEMORY_TO_PERIPHERAL|enumerator|MEMORY_TO_PERIPHERAL,
DECL|PERIPHERAL_TO_MEMORY|enumerator|PERIPHERAL_TO_MEMORY
DECL|_DMA_H_|macro|_DMA_H_
DECL|_impl_dma_start|function|static inline int _impl_dma_start(struct device *dev, u32_t channel)
DECL|_impl_dma_stop|function|static inline int _impl_dma_stop(struct device *dev, u32_t channel)
DECL|block_count|member|u32_t block_count;
DECL|block_size|member|u32_t block_size;
DECL|channel_direction|member|u32_t channel_direction : 3;
DECL|channel_priority|member|u32_t channel_priority : 4;
DECL|complete_callback_en|member|u32_t complete_callback_en : 1;
DECL|config|member|dma_api_config config;
DECL|dest_addr_adj|member|u16_t dest_addr_adj : 2;
DECL|dest_address|member|u32_t dest_address;
DECL|dest_burst_length|member|u32_t dest_burst_length : 16;
DECL|dest_chaining_en|member|u32_t dest_chaining_en : 1;
DECL|dest_data_size|member|u32_t dest_data_size : 16;
DECL|dest_handshake|member|u32_t dest_handshake : 1;
DECL|dest_reload_en|member|u16_t dest_reload_en : 1;
DECL|dest_scatter_count|member|u16_t dest_scatter_count;
DECL|dest_scatter_en|member|u16_t dest_scatter_en : 1;
DECL|dest_scatter_interval|member|u32_t dest_scatter_interval;
DECL|dma_addr_adj|enum|enum dma_addr_adj {
DECL|dma_api_config|typedef|typedef int (*dma_api_config)(struct device *dev, u32_t channel,
DECL|dma_api_start|typedef|typedef int (*dma_api_start)(struct device *dev, u32_t channel);
DECL|dma_api_stop|typedef|typedef int (*dma_api_stop)(struct device *dev, u32_t channel);
DECL|dma_block_config|struct|struct dma_block_config {
DECL|dma_burst_index|function|static inline u32_t dma_burst_index(u32_t burst)
DECL|dma_callback|member|void (*dma_callback)(struct device *dev, u32_t channel,
DECL|dma_channel_direction|enum|enum dma_channel_direction {
DECL|dma_config|function|static inline int dma_config(struct device *dev, u32_t channel, struct dma_config *config)
DECL|dma_config|struct|struct dma_config {
DECL|dma_driver_api|struct|struct dma_driver_api {
DECL|dma_slot|member|u32_t dma_slot : 6;
DECL|dma_width_index|function|static inline u32_t dma_width_index(u32_t size)
DECL|error_callback_en|member|u32_t error_callback_en : 1;
DECL|fifo_mode_control|member|u16_t fifo_mode_control : 4;
DECL|flow_control_mode|member|u16_t flow_control_mode : 1;
DECL|head_block|member|struct dma_block_config *head_block;
DECL|next_block|member|struct dma_block_config *next_block;
DECL|reserved|member|u16_t reserved : 3;
DECL|reserved|member|u32_t reserved : 13;
DECL|source_addr_adj|member|u16_t source_addr_adj : 2;
DECL|source_address|member|u32_t source_address;
DECL|source_burst_length|member|u32_t source_burst_length : 16;
DECL|source_chaining_en|member|u32_t source_chaining_en : 1;
DECL|source_data_size|member|u32_t source_data_size : 16;
DECL|source_gather_count|member|u16_t source_gather_count;
DECL|source_gather_en|member|u16_t source_gather_en : 1;
DECL|source_gather_interval|member|u32_t source_gather_interval;
DECL|source_handshake|member|u32_t source_handshake : 1;
DECL|source_reload_en|member|u16_t source_reload_en : 1;
DECL|start|member|dma_api_start start;
DECL|stop|member|dma_api_stop stop;
