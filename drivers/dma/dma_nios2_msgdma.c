DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_NAME|macro|DEV_NAME
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|desc|member|alt_msgdma_standard_descriptor desc;
DECL|direction|member|u32_t direction;
DECL|dma0_nios2_config|variable|dma0_nios2_config
DECL|dma_callback|member|void (*dma_callback)(struct device *dev, u32_t id,
DECL|msgdma_dev|member|alt_msgdma_dev *msgdma_dev;
DECL|nios2_msgdma0_initialize|function|static int nios2_msgdma0_initialize(struct device *dev)
DECL|nios2_msgdma_callback|function|static void nios2_msgdma_callback(void *context)
DECL|nios2_msgdma_config|function|static int nios2_msgdma_config(struct device *dev, u32_t channel, struct dma_config *cfg)
DECL|nios2_msgdma_dev_cfg|struct|struct nios2_msgdma_dev_cfg {
DECL|nios2_msgdma_driver_api|variable|nios2_msgdma_driver_api
DECL|nios2_msgdma_isr|function|static void nios2_msgdma_isr(void *arg)
DECL|nios2_msgdma_transfer_start|function|static int nios2_msgdma_transfer_start(struct device *dev, u32_t channel)
DECL|nios2_msgdma_transfer_stop|function|static int nios2_msgdma_transfer_stop(struct device *dev, u32_t channel)
DECL|sem_lock|member|struct k_sem sem_lock;
