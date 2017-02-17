DECL|BURST_TRANS_LENGTH_128|enumerator|BURST_TRANS_LENGTH_128,
DECL|BURST_TRANS_LENGTH_16|enumerator|BURST_TRANS_LENGTH_16,
DECL|BURST_TRANS_LENGTH_1|enumerator|BURST_TRANS_LENGTH_1 = 0x0,
DECL|BURST_TRANS_LENGTH_256|enumerator|BURST_TRANS_LENGTH_256
DECL|BURST_TRANS_LENGTH_32|enumerator|BURST_TRANS_LENGTH_32,
DECL|BURST_TRANS_LENGTH_4|enumerator|BURST_TRANS_LENGTH_4,
DECL|BURST_TRANS_LENGTH_64|enumerator|BURST_TRANS_LENGTH_64,
DECL|BURST_TRANS_LENGTH_8|enumerator|BURST_TRANS_LENGTH_8,
DECL|HANDSHAKE_POLARITY_HIGH|enumerator|HANDSHAKE_POLARITY_HIGH = 0x0,
DECL|HANDSHAKE_POLARITY_LOW|enumerator|HANDSHAKE_POLARITY_LOW
DECL|MEMORY_TO_MEMORY|enumerator|MEMORY_TO_MEMORY = 0x0,
DECL|MEMORY_TO_PERIPHERAL|enumerator|MEMORY_TO_PERIPHERAL,
DECL|PERIPHERAL_TO_MEMORY|enumerator|PERIPHERAL_TO_MEMORY
DECL|TRANS_WIDTH_128|enumerator|TRANS_WIDTH_128,
DECL|TRANS_WIDTH_16|enumerator|TRANS_WIDTH_16,
DECL|TRANS_WIDTH_256|enumerator|TRANS_WIDTH_256
DECL|TRANS_WIDTH_32|enumerator|TRANS_WIDTH_32,
DECL|TRANS_WIDTH_64|enumerator|TRANS_WIDTH_64,
DECL|TRANS_WIDTH_8|enumerator|TRANS_WIDTH_8 = 0x0,
DECL|_DMA_H_|macro|_DMA_H_
DECL|block_count|member|uint32_t block_count;
DECL|block_size|member|uint32_t block_size;
DECL|block_size|member|uint32_t block_size;
DECL|callback_data|member|void *callback_data;
DECL|channel_config|member|dma_api_channel_config channel_config;
DECL|channel_direction|member|enum dma_channel_direction channel_direction;
DECL|channel_direction|member|uint32_t channel_direction : 3;
DECL|channel_priority|member|uint32_t channel_priority : 4;
DECL|complete_callback_en|member|uint32_t complete_callback_en : 1;
DECL|config|member|dma_api_config config;
DECL|dest_addr_adj|member|uint16_t dest_addr_adj : 2;
DECL|dest_address|member|uint32_t dest_address;
DECL|dest_burst_length|member|uint32_t dest_burst_length : 16;
DECL|dest_chaining_en|member|uint32_t dest_chaining_en : 1;
DECL|dest_data_size|member|uint32_t dest_data_size : 16;
DECL|dest_handshake|member|uint32_t dest_handshake : 1;
DECL|dest_reload_en|member|uint16_t dest_reload_en : 1;
DECL|dest_scatter_count|member|uint16_t dest_scatter_count;
DECL|dest_scatter_en|member|uint16_t dest_scatter_en : 1;
DECL|dest_scatter_interval|member|uint32_t dest_scatter_interval;
DECL|destination_address|member|uint32_t *destination_address;
DECL|destination_burst_length|member|enum dma_burst_length destination_burst_length;
DECL|destination_transfer_width|member|enum dma_transfer_width destination_transfer_width;
DECL|dma_api_channel_config|typedef|typedef int (*dma_api_channel_config)(struct device *dev, uint32_t channel,
DECL|dma_api_config|typedef|typedef int (*dma_api_config)(struct device *dev, uint32_t channel,
DECL|dma_api_start|typedef|typedef int (*dma_api_start)(struct device *dev, uint32_t channel);
DECL|dma_api_stop|typedef|typedef int (*dma_api_stop)(struct device *dev, uint32_t channel);
DECL|dma_api_transfer_config|typedef|typedef int (*dma_api_transfer_config)(struct device *dev, uint32_t channel,
DECL|dma_api_transfer_start|typedef|typedef int (*dma_api_transfer_start)(struct device *dev, uint32_t channel);
DECL|dma_api_transfer_stop|typedef|typedef int (*dma_api_transfer_stop)(struct device *dev, uint32_t channel);
DECL|dma_block_config|struct|struct dma_block_config {
DECL|dma_burst_index|function|static inline enum dma_burst_length dma_burst_index(uint32_t burst)
DECL|dma_burst_length|enum|enum dma_burst_length {
DECL|dma_callback|member|void (*dma_callback)(struct device *dev, uint32_t channel,
DECL|dma_channel_config|function|static inline int __deprecated dma_channel_config(struct device *dev,uint32_t channel, struct dma_channel_config *config)
DECL|dma_channel_config|struct|struct dma_channel_config {
DECL|dma_channel_direction|enum|enum dma_channel_direction {
DECL|dma_config|function|static inline int dma_config(struct device *dev, uint32_t channel, struct dma_config *config)
DECL|dma_config|struct|struct dma_config {
DECL|dma_driver_api|struct|struct dma_driver_api {
DECL|dma_error|member|void (*dma_error)(struct device *dev, void *data);
DECL|dma_handshake_polarity|enum|enum dma_handshake_polarity {
DECL|dma_slot|member|uint32_t dma_slot : 6;
DECL|dma_start|function|static inline int dma_start(struct device *dev, uint32_t channel)
DECL|dma_stop|function|static inline int dma_stop(struct device *dev, uint32_t channel)
DECL|dma_transfer_config|function|static inline int __deprecated dma_transfer_config(struct device *dev,uint32_t channel, struct dma_transfer_config *config)
DECL|dma_transfer_config|struct|struct dma_transfer_config {
DECL|dma_transfer_start|function|static inline int __deprecated dma_transfer_start(struct device *dev, uint32_t channel)
DECL|dma_transfer_stop|function|static inline int __deprecated dma_transfer_stop(struct device *dev, uint32_t channel)
DECL|dma_transfer_width|enum|enum dma_transfer_width {
DECL|dma_transfer|member|void (*dma_transfer)(struct device *dev, void *data);
DECL|dma_width_index|function|static inline enum dma_burst_length dma_width_index(uint32_t size)
DECL|error_callback_en|member|uint32_t error_callback_en : 1;
DECL|fifo_mode_control|member|uint16_t fifo_mode_control : 4;
DECL|flow_control_mode|member|uint16_t flow_control_mode : 1;
DECL|handshake_interface|member|uint32_t handshake_interface;
DECL|handshake_polarity|member|enum dma_handshake_polarity handshake_polarity;
DECL|head_block|member|struct dma_block_config *head_block;
DECL|next_block|member|struct dma_block_config *next_block;
DECL|reserved|member|uint16_t reserved : 3;
DECL|reserved|member|uint32_t reserved : 13;
DECL|source_addr_adj|member|uint16_t source_addr_adj : 2;
DECL|source_address|member|uint32_t *source_address;
DECL|source_address|member|uint32_t source_address;
DECL|source_burst_length|member|enum dma_burst_length source_burst_length;
DECL|source_burst_length|member|uint32_t source_burst_length : 16;
DECL|source_chaining_en|member|uint32_t source_chaining_en : 1;
DECL|source_data_size|member|uint32_t source_data_size : 16;
DECL|source_gather_count|member|uint16_t source_gather_count;
DECL|source_gather_en|member|uint16_t source_gather_en : 1;
DECL|source_gather_interval|member|uint32_t source_gather_interval;
DECL|source_handshake|member|uint32_t source_handshake : 1;
DECL|source_reload_en|member|uint16_t source_reload_en : 1;
DECL|source_transfer_width|member|enum dma_transfer_width source_transfer_width;
DECL|start|member|dma_api_start start;
DECL|stop|member|dma_api_stop stop;
DECL|transfer_config|member|dma_api_transfer_config transfer_config;
DECL|transfer_start|member|dma_api_transfer_start transfer_start;
DECL|transfer_stop|member|dma_api_transfer_stop transfer_stop;
