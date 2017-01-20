DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|DMA_CHANNELS_NO|macro|DMA_CHANNELS_NO
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|XDMAC_INT_ERR|macro|XDMAC_INT_ERR
DECL|callback|member|dma_callback callback;
DECL|dma0_sam_config|variable|dma0_sam_config
DECL|dma0_sam_data|variable|dma0_sam_data
DECL|dma0_sam_irq_config|function|static void dma0_sam_irq_config(void)
DECL|dma_channels|member|struct sam_xdmac_channel_cfg dma_channels[DMA_CHANNELS_NO];
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u8_t irq_id;
DECL|periph_id|member|u8_t periph_id;
DECL|regs|member|Xdmac *regs;
DECL|sam_xdmac_channel_cfg|struct|struct sam_xdmac_channel_cfg {
DECL|sam_xdmac_channel_configure|function|int sam_xdmac_channel_configure(struct device *dev, u32_t channel,struct sam_xdmac_channel_config *param)
DECL|sam_xdmac_config|function|static int sam_xdmac_config(struct device *dev, u32_t channel, struct dma_config *cfg)
DECL|sam_xdmac_dev_cfg|struct|struct sam_xdmac_dev_cfg {
DECL|sam_xdmac_dev_data|struct|struct sam_xdmac_dev_data {
DECL|sam_xdmac_driver_api|variable|sam_xdmac_driver_api
DECL|sam_xdmac_initialize|function|static int sam_xdmac_initialize(struct device *dev)
DECL|sam_xdmac_isr|function|static void sam_xdmac_isr(void *arg)
DECL|sam_xdmac_transfer_configure|function|int sam_xdmac_transfer_configure(struct device *dev, u32_t channel, struct sam_xdmac_transfer_config *param)
DECL|sam_xdmac_transfer_start|function|int sam_xdmac_transfer_start(struct device *dev, u32_t channel)
DECL|sam_xdmac_transfer_stop|function|int sam_xdmac_transfer_stop(struct device *dev, u32_t channel)
