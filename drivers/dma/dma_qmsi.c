DECL|CYCLE_NOP|macro|CYCLE_NOP
DECL|bst_index|function|static int bst_index(u32_t num_units, u32_t *index)
DECL|callback_data|member|void *callback_data[QM_DMA_CHANNEL_NUM];
DECL|device_power_state|member|u32_t device_power_state;
DECL|dev|member|struct device *dev;
DECL|dma_context|variable|dma_context
DECL|dma_drv_callback|function|static void dma_drv_callback(void *callback_context, u32_t len, int error_code)
DECL|dma_funcs|variable|dma_funcs
DECL|dma_qmsi_chan_config|function|static int dma_qmsi_chan_config(struct device *dev, u32_t channel,struct dma_config *config)
DECL|dma_qmsi_config_data|variable|dma_qmsi_config_data
DECL|dma_qmsi_config_info|struct|struct dma_qmsi_config_info {
DECL|dma_qmsi_config|function|static void dma_qmsi_config(struct device *dev)
DECL|dma_qmsi_context|struct|struct dma_qmsi_context {
DECL|dma_qmsi_dev_data|variable|dma_qmsi_dev_data
DECL|dma_qmsi_device_ctrl|function|static int dma_qmsi_device_ctrl(struct device *dev, u32_t ctrl_command,void *context)
DECL|dma_qmsi_driver_data|struct|struct dma_qmsi_driver_data {
DECL|dma_qmsi_get_power_state|function|static u32_t dma_qmsi_get_power_state(struct device *dev)
DECL|dma_qmsi_init|function|int dma_qmsi_init(struct device *dev)
DECL|dma_qmsi_set_power_state|function|static void dma_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|dma_qmsi_set_power_state|macro|dma_qmsi_set_power_state
DECL|dma_qmsi_start|function|static int dma_qmsi_start(struct device *dev, u32_t channel)
DECL|dma_qmsi_stop|function|static int dma_qmsi_stop(struct device *dev, u32_t channel)
DECL|dma_resume_device|function|static int dma_resume_device(struct device *dev)
DECL|dma_suspend_device|function|static int dma_suspend_device(struct device *dev)
DECL|dma_user_callback|member|void (*dma_user_callback[QM_DMA_CHANNEL_NUM])(struct device *dev,
DECL|error|member|void (*error[QM_DMA_CHANNEL_NUM])(struct device *dev, void *data);
DECL|index|member|u32_t index;
DECL|instance|member|qm_dma_t instance; /* Controller instance. */
DECL|saved_ctx|member|qm_dma_context_t saved_ctx;
DECL|transfer|member|void (*transfer[QM_DMA_CHANNEL_NUM])(struct device *dev, void *data);
DECL|width_index|function|static int width_index(u32_t num_bytes, u32_t *index)
