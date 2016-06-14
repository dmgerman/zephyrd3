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
DECL|block_size|member|uint32_t block_size;
DECL|callback_data|member|void *callback_data;
DECL|channel_config|member|dma_api_channel_config channel_config;
DECL|channel_direction|member|enum dma_channel_direction channel_direction;
DECL|destination_address|member|uint32_t *destination_address;
DECL|destination_burst_length|member|enum dma_burst_length destination_burst_length;
DECL|destination_transfer_width|member|enum dma_transfer_width destination_transfer_width;
DECL|dma_api_channel_config|typedef|typedef int (*dma_api_channel_config)(struct device *dev, uint32_t channel,
DECL|dma_api_transfer_config|typedef|typedef int (*dma_api_transfer_config)(struct device *dev, uint32_t channel,
DECL|dma_api_transfer_start|typedef|typedef int (*dma_api_transfer_start)(struct device *dev, uint32_t channel);
DECL|dma_api_transfer_stop|typedef|typedef int (*dma_api_transfer_stop)(struct device *dev, uint32_t channel);
DECL|dma_burst_length|enum|enum dma_burst_length {
DECL|dma_channel_config|function|static inline int dma_channel_config(struct device *dev, uint32_t channel, struct dma_channel_config *config)
DECL|dma_channel_config|struct|struct dma_channel_config {
DECL|dma_channel_direction|enum|enum dma_channel_direction {
DECL|dma_driver_api|struct|struct dma_driver_api {
DECL|dma_error|member|void (*dma_error)(struct device *dev, void *data);
DECL|dma_handshake_polarity|enum|enum dma_handshake_polarity {
DECL|dma_transfer_config|function|static inline int dma_transfer_config(struct device *dev, uint32_t channel, struct dma_transfer_config *config)
DECL|dma_transfer_config|struct|struct dma_transfer_config {
DECL|dma_transfer_start|function|static inline int dma_transfer_start(struct device *dev, uint32_t channel)
DECL|dma_transfer_stop|function|static inline int dma_transfer_stop(struct device *dev, uint32_t channel)
DECL|dma_transfer_width|enum|enum dma_transfer_width {
DECL|dma_transfer|member|void (*dma_transfer)(struct device *dev, void *data);
DECL|handshake_interface|member|uint32_t handshake_interface;
DECL|handshake_polarity|member|enum dma_handshake_polarity handshake_polarity;
DECL|source_address|member|uint32_t *source_address;
DECL|source_burst_length|member|enum dma_burst_length source_burst_length;
DECL|source_transfer_width|member|enum dma_transfer_width source_transfer_width;
DECL|transfer_config|member|dma_api_transfer_config transfer_config;
DECL|transfer_start|member|dma_api_transfer_start transfer_start;
DECL|transfer_stop|member|dma_api_transfer_stop transfer_stop;
