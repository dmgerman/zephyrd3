DECL|QUARK_SE_IPI_ARC_LMT_DIR|macro|QUARK_SE_IPI_ARC_LMT_DIR
DECL|QUARK_SE_IPI_ARC_LMT_DIR|macro|QUARK_SE_IPI_ARC_LMT_DIR
DECL|QUARK_SE_IPI_BASE|macro|QUARK_SE_IPI_BASE
DECL|QUARK_SE_IPI_CHALL_STS|macro|QUARK_SE_IPI_CHALL_STS
DECL|QUARK_SE_IPI_CHANNELS|macro|QUARK_SE_IPI_CHANNELS
DECL|QUARK_SE_IPI_DATA_BYTES|macro|QUARK_SE_IPI_DATA_BYTES
DECL|QUARK_SE_IPI_DEFINE|macro|QUARK_SE_IPI_DEFINE
DECL|QUARK_SE_IPI_INBOUND|macro|QUARK_SE_IPI_INBOUND
DECL|QUARK_SE_IPI_INTERRUPT_PRI|macro|QUARK_SE_IPI_INTERRUPT_PRI
DECL|QUARK_SE_IPI_INTERRUPT|macro|QUARK_SE_IPI_INTERRUPT
DECL|QUARK_SE_IPI_INTERRUPT|macro|QUARK_SE_IPI_INTERRUPT
DECL|QUARK_SE_IPI_LMT_ARC_DIR|macro|QUARK_SE_IPI_LMT_ARC_DIR
DECL|QUARK_SE_IPI_LMT_ARC_DIR|macro|QUARK_SE_IPI_LMT_ARC_DIR
DECL|QUARK_SE_IPI_MASK_START_BIT|macro|QUARK_SE_IPI_MASK_START_BIT
DECL|QUARK_SE_IPI_MASK_START_BIT|macro|QUARK_SE_IPI_MASK_START_BIT
DECL|QUARK_SE_IPI_MASK|macro|QUARK_SE_IPI_MASK
DECL|QUARK_SE_IPI_MAX_ID_VAL|macro|QUARK_SE_IPI_MAX_ID_VAL
DECL|QUARK_SE_IPI_OUTBOUND|macro|QUARK_SE_IPI_OUTBOUND
DECL|QUARK_SE_IPI|macro|QUARK_SE_IPI
DECL|__INCquark_se_mailboxh|macro|__INCquark_se_mailboxh
DECL|callback_ctx|member|void *callback_ctx;
DECL|callback|member|ipi_callback_t callback;
DECL|channel|member|int channel;
DECL|controller_init|member|int (*controller_init)(void);
DECL|ctrl|member|struct quark_se_ipi_ch_ctrl ctrl;
DECL|ctrl|member|uint32_t ctrl : 31;
DECL|data|member|uint8_t data[QUARK_SE_IPI_DATA_BYTES]; /* contiguous 32-bit registers */
DECL|direction|member|int direction;
DECL|ipi|member|volatile struct quark_se_ipi *ipi;
DECL|irq|member|uint32_t irq : 1;
DECL|irq|member|uint32_t irq : 1;
DECL|quark_se_ipi_ch_ctrl|struct|struct __packed quark_se_ipi_ch_ctrl {
DECL|quark_se_ipi_ch_sts|struct|struct __packed quark_se_ipi_ch_sts {
DECL|quark_se_ipi_config_info|struct|struct quark_se_ipi_config_info {
DECL|quark_se_ipi_controller_config_info|struct|struct quark_se_ipi_controller_config_info {
DECL|quark_se_ipi_driver_data|struct|struct quark_se_ipi_driver_data {
DECL|quark_se_ipi|struct|struct __packed quark_se_ipi {
DECL|reserved|member|uint32_t reserved : 30;
DECL|sts|member|struct quark_se_ipi_ch_sts sts;
DECL|sts|member|uint32_t sts : 1;
