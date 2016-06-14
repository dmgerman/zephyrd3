DECL|callback_data|member|void *callback_data[QM_DMA_CHANNEL_NUM];
DECL|channel|member|qm_dma_channel_id_t channel[QM_DMA_CHANNEL_NUM];
DECL|dev|member|struct device *dev;
DECL|dma_callback|function|static void dma_callback(void *callback_context, uint32_t len, int error_code)
DECL|dma_context|variable|dma_context
DECL|dma_funcs|variable|dma_funcs
DECL|dma_qmsi_channel_config|function|static int dma_qmsi_channel_config(struct device *dev, uint32_t channel, struct dma_channel_config *config)
DECL|dma_qmsi_config_data|variable|dma_qmsi_config_data
DECL|dma_qmsi_config_info|struct|struct dma_qmsi_config_info {
DECL|dma_qmsi_config|function|static void dma_qmsi_config(struct device *dev)
DECL|dma_qmsi_context|struct|struct dma_qmsi_context {
DECL|dma_qmsi_dev_data|variable|dma_qmsi_dev_data
DECL|dma_qmsi_driver_data|struct|struct dma_qmsi_driver_data {
DECL|dma_qmsi_init|function|int dma_qmsi_init(struct device *dev)
DECL|dma_qmsi_transfer_config|function|static int dma_qmsi_transfer_config(struct device *dev, uint32_t channel, struct dma_transfer_config *config)
DECL|dma_qmsi_transfer_start|function|static int dma_qmsi_transfer_start(struct device *dev, uint32_t channel)
DECL|dma_qmsi_transfer_stop|function|static int dma_qmsi_transfer_stop(struct device *dev, uint32_t channel)
DECL|error|member|void (*error[QM_DMA_CHANNEL_NUM])(struct device *dev, void *data);
DECL|index|member|uint32_t index;
DECL|instance|member|qm_dma_t instance; /* Controller instance. */
DECL|transfer|member|void (*transfer[QM_DMA_CHANNEL_NUM])(struct device *dev, void *data);
