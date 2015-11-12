DECL|QUARK_SE_IPM_ARC_LMT_DIR|macro|QUARK_SE_IPM_ARC_LMT_DIR
DECL|QUARK_SE_IPM_ARC_LMT_DIR|macro|QUARK_SE_IPM_ARC_LMT_DIR
DECL|QUARK_SE_IPM_BASE|macro|QUARK_SE_IPM_BASE
DECL|QUARK_SE_IPM_CHALL_STS|macro|QUARK_SE_IPM_CHALL_STS
DECL|QUARK_SE_IPM_CHANNELS|macro|QUARK_SE_IPM_CHANNELS
DECL|QUARK_SE_IPM_DATA_BYTES|macro|QUARK_SE_IPM_DATA_BYTES
DECL|QUARK_SE_IPM_DEFINE|macro|QUARK_SE_IPM_DEFINE
DECL|QUARK_SE_IPM_INBOUND|macro|QUARK_SE_IPM_INBOUND
DECL|QUARK_SE_IPM_INTERRUPT_PRI|macro|QUARK_SE_IPM_INTERRUPT_PRI
DECL|QUARK_SE_IPM_INTERRUPT|macro|QUARK_SE_IPM_INTERRUPT
DECL|QUARK_SE_IPM_INTERRUPT|macro|QUARK_SE_IPM_INTERRUPT
DECL|QUARK_SE_IPM_LMT_ARC_DIR|macro|QUARK_SE_IPM_LMT_ARC_DIR
DECL|QUARK_SE_IPM_LMT_ARC_DIR|macro|QUARK_SE_IPM_LMT_ARC_DIR
DECL|QUARK_SE_IPM_MASK_START_BIT|macro|QUARK_SE_IPM_MASK_START_BIT
DECL|QUARK_SE_IPM_MASK_START_BIT|macro|QUARK_SE_IPM_MASK_START_BIT
DECL|QUARK_SE_IPM_MASK|macro|QUARK_SE_IPM_MASK
DECL|QUARK_SE_IPM_MAX_ID_VAL|macro|QUARK_SE_IPM_MAX_ID_VAL
DECL|QUARK_SE_IPM_OUTBOUND|macro|QUARK_SE_IPM_OUTBOUND
DECL|QUARK_SE_IPM|macro|QUARK_SE_IPM
DECL|__INCquark_se_mailboxh|macro|__INCquark_se_mailboxh
DECL|callback_ctx|member|void *callback_ctx;
DECL|callback|member|ipm_callback_t callback;
DECL|channel|member|int channel;
DECL|controller_init|member|int (*controller_init)(void);
DECL|ctrl|member|struct quark_se_ipm_ch_ctrl ctrl;
DECL|ctrl|member|uint32_t ctrl : 31;
DECL|data|member|uint8_t data[QUARK_SE_IPM_DATA_BYTES]; /* contiguous 32-bit registers */
DECL|direction|member|int direction;
DECL|ipm|member|volatile struct quark_se_ipm *ipm;
DECL|irq|member|uint32_t irq : 1;
DECL|irq|member|uint32_t irq : 1;
DECL|quark_se_ipm_ch_ctrl|struct|struct __packed quark_se_ipm_ch_ctrl {
DECL|quark_se_ipm_ch_sts|struct|struct __packed quark_se_ipm_ch_sts {
DECL|quark_se_ipm_config_info|struct|struct quark_se_ipm_config_info {
DECL|quark_se_ipm_controller_config_info|struct|struct quark_se_ipm_controller_config_info {
DECL|quark_se_ipm_driver_data|struct|struct quark_se_ipm_driver_data {
DECL|quark_se_ipm|struct|struct __packed quark_se_ipm {
DECL|reserved|member|uint32_t reserved : 30;
DECL|sts|member|struct quark_se_ipm_ch_sts sts;
DECL|sts|member|uint32_t sts : 1;
