DECL|BYTE|macro|BYTE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|DWORD|macro|DWORD
DECL|DW_CFGH_DST_PER|macro|DW_CFGH_DST_PER
DECL|DW_CFGH_SRC_PER|macro|DW_CFGH_SRC_PER
DECL|DW_CFG_CLASS|macro|DW_CFG_CLASS
DECL|DW_CFG_LOW_DEF|macro|DW_CFG_LOW_DEF
DECL|DW_DMA_CFG_TRIES|macro|DW_DMA_CFG_TRIES
DECL|INT_MASK_ALL|macro|INT_MASK_ALL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WORD|macro|WORD
DECL|dmac0|variable|dmac0
DECL|dw_dma0_config|variable|dw_dma0_config
DECL|dw_dma0_data|variable|dw_dma0_data
DECL|dw_dma0_initialize|function|static int dw_dma0_initialize(struct device *dev)
DECL|dw_dma0_irq_config|function|static void dw_dma0_irq_config(void)
DECL|dw_dma_config|function|static int dw_dma_config(struct device *dev, u32_t channel, struct dma_config *cfg)
DECL|dw_dma_driver_api|variable|dw_dma_driver_api
DECL|dw_dma_isr|function|static void dw_dma_isr(void *arg)
DECL|dw_dma_setup|function|static void dw_dma_setup(struct device *dev)
DECL|dw_dma_transfer_start|function|static int dw_dma_transfer_start(struct device *dev, u32_t channel)
DECL|dw_dma_transfer_stop|function|static int dw_dma_transfer_stop(struct device *dev, u32_t channel)
DECL|dw_read|function|static ALWAYS_INLINE u32_t dw_read(u32_t dma_base, u32_t reg)
DECL|dw_write|function|static ALWAYS_INLINE void dw_write(u32_t dma_base, u32_t reg, u32_t value)
