DECL|BYT_CHAN_OFFSET|macro|BYT_CHAN_OFFSET
DECL|CHAN_DISABLE|macro|CHAN_DISABLE
DECL|CHAN_ENABLE|macro|CHAN_ENABLE
DECL|DW_CFG_HIGH|macro|DW_CFG_HIGH
DECL|DW_CFG_LOW|macro|DW_CFG_LOW
DECL|DW_CH_SIZE|macro|DW_CH_SIZE
DECL|DW_CLEAR_BLOCK|macro|DW_CLEAR_BLOCK
DECL|DW_CLEAR_DST_TRAN|macro|DW_CLEAR_DST_TRAN
DECL|DW_CLEAR_ERR|macro|DW_CLEAR_ERR
DECL|DW_CLEAR_SRC_TRAN|macro|DW_CLEAR_SRC_TRAN
DECL|DW_CLEAR_TFR|macro|DW_CLEAR_TFR
DECL|DW_CTLL_DST_FIX|macro|DW_CTLL_DST_FIX
DECL|DW_CTLL_DST_INC|macro|DW_CTLL_DST_INC
DECL|DW_CTLL_DST_MSIZE|macro|DW_CTLL_DST_MSIZE
DECL|DW_CTLL_DST_WIDTH|macro|DW_CTLL_DST_WIDTH
DECL|DW_CTLL_FC_M2M|macro|DW_CTLL_FC_M2M
DECL|DW_CTLL_FC_M2P|macro|DW_CTLL_FC_M2P
DECL|DW_CTLL_FC_P2M|macro|DW_CTLL_FC_P2M
DECL|DW_CTLL_FC_P2P|macro|DW_CTLL_FC_P2P
DECL|DW_CTLL_FC|macro|DW_CTLL_FC
DECL|DW_CTLL_INT_EN|macro|DW_CTLL_INT_EN
DECL|DW_CTLL_LLP_D_EN|macro|DW_CTLL_LLP_D_EN
DECL|DW_CTLL_LLP_S_EN|macro|DW_CTLL_LLP_S_EN
DECL|DW_CTLL_SRC_FIX|macro|DW_CTLL_SRC_FIX
DECL|DW_CTLL_SRC_INC|macro|DW_CTLL_SRC_INC
DECL|DW_CTLL_SRC_MSIZE|macro|DW_CTLL_SRC_MSIZE
DECL|DW_CTLL_SRC_WIDTH|macro|DW_CTLL_SRC_WIDTH
DECL|DW_CTRL_HIGH|macro|DW_CTRL_HIGH
DECL|DW_CTRL_LOW|macro|DW_CTRL_LOW
DECL|DW_DAR|macro|DW_DAR
DECL|DW_DMA_CFG|macro|DW_DMA_CFG
DECL|DW_DMA_CHAN_EN|macro|DW_DMA_CHAN_EN
DECL|DW_INTR_STATUS|macro|DW_INTR_STATUS
DECL|DW_LLP|macro|DW_LLP
DECL|DW_MASK_BLOCK|macro|DW_MASK_BLOCK
DECL|DW_MASK_DST_TRAN|macro|DW_MASK_DST_TRAN
DECL|DW_MASK_ERR|macro|DW_MASK_ERR
DECL|DW_MASK_SRC_TRAN|macro|DW_MASK_SRC_TRAN
DECL|DW_MASK_TFR|macro|DW_MASK_TFR
DECL|DW_MAX_CHAN|macro|DW_MAX_CHAN
DECL|DW_RAW_BLOCK|macro|DW_RAW_BLOCK
DECL|DW_RAW_DST_TRAN|macro|DW_RAW_DST_TRAN
DECL|DW_RAW_ERR|macro|DW_RAW_ERR
DECL|DW_RAW_SRC_TRAN|macro|DW_RAW_SRC_TRAN
DECL|DW_RAW_TFR|macro|DW_RAW_TFR
DECL|DW_SAR|macro|DW_SAR
DECL|DW_STATUS_BLOCK|macro|DW_STATUS_BLOCK
DECL|DW_STATUS_DST_TRAN|macro|DW_STATUS_DST_TRAN
DECL|DW_STATUS_ERR|macro|DW_STATUS_ERR
DECL|DW_STATUS_SRC_TRAN|macro|DW_STATUS_SRC_TRAN
DECL|DW_STATUS_TFR|macro|DW_STATUS_TFR
DECL|INT_MASK_ALL|macro|INT_MASK_ALL
DECL|INT_MASK|macro|INT_MASK
DECL|INT_UNMASK_ALL|macro|INT_UNMASK_ALL
DECL|INT_UNMASK|macro|INT_UNMASK
DECL|ZEPHYR_DRIVERS_DMA_DMA_CAVS_H_|macro|ZEPHYR_DRIVERS_DMA_DMA_CAVS_H_
DECL|__packed|variable|__packed
DECL|base|member|u32_t base;
DECL|cfg_hi|member|u32_t cfg_hi;
DECL|cfg_lo|member|u32_t cfg_lo;
DECL|chan_arbit_data|struct|struct chan_arbit_data {
DECL|channel_data|member|struct dw_drv_plat_data *channel_data;
DECL|chan|member|struct chan_arbit_data chan[DW_MAX_CHAN];
DECL|chan|member|struct dma_chan_data chan[DW_MAX_CHAN];
DECL|class|member|u16_t class;
DECL|ctrl_hi|member|u32_t ctrl_hi;
DECL|ctrl_lo|member|u32_t ctrl_lo;
DECL|dar|member|u32_t dar;
DECL|direction|member|u32_t direction;
DECL|dma_blkcallback|member|void (*dma_blkcallback)(struct device *dev, u32_t channel,
DECL|dma_chan_data|struct|struct dma_chan_data {
DECL|dma_tfrcallback|member|void (*dma_tfrcallback)(struct device *dev, u32_t channel,
DECL|dstat|member|u32_t dstat;
DECL|dw_dma_dev_cfg|struct|struct dw_dma_dev_cfg {
DECL|dw_dma_dev_data|struct|struct dw_dma_dev_data {
DECL|dw_drv_plat_data|struct|struct dw_drv_plat_data {
DECL|dw_lli2|struct|struct dw_lli2 {
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u32_t irq_id;
DECL|lli|member|struct dw_lli2 *lli;
DECL|llp|member|u32_t llp;
DECL|sar|member|u32_t sar;
DECL|sstat|member|u32_t sstat;
DECL|weight|member|u16_t weight;
