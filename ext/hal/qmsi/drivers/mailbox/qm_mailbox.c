DECL|ACTIVE_CORE_DEST|macro|ACTIVE_CORE_DEST
DECL|ACTIVE_CORE_DEST|macro|ACTIVE_CORE_DEST
DECL|MBOX_DISABLE_INT_MASK|macro|MBOX_DISABLE_INT_MASK
DECL|MBOX_DISABLE_INT_MASK|macro|MBOX_DISABLE_INT_MASK
DECL|MBOX_ENABLE_INT_MASK|macro|MBOX_ENABLE_INT_MASK
DECL|MBOX_ENABLE_INT_MASK|macro|MBOX_ENABLE_INT_MASK
DECL|MBOX_INT_LOCK_HALT_MASK|macro|MBOX_INT_LOCK_HALT_MASK
DECL|MBOX_INT_LOCK_HALT_MASK|macro|MBOX_INT_LOCK_HALT_MASK
DECL|MBOX_INT_LOCK_MASK|macro|MBOX_INT_LOCK_MASK
DECL|MBOX_INT_LOCK_MASK|macro|MBOX_INT_LOCK_MASK
DECL|MBOX_INT_MASK|macro|MBOX_INT_MASK
DECL|MBOX_INT_MASK|macro|MBOX_INT_MASK
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_mailbox_0_isr)
DECL|callback_data|member|void *callback_data;
DECL|callback|member|qm_mbox_callback_t callback;
DECL|dest|member|qm_mbox_destination_t dest;
DECL|mailbox_devs|variable|mailbox_devs
DECL|mode|member|qm_mbox_mode_t mode;
DECL|qm_mailbox_info_t|typedef|} qm_mailbox_info_t;
DECL|qm_mbox_ch_get_status|function|int qm_mbox_ch_get_status(const qm_mbox_ch_t mbox_ch, qm_mbox_ch_status_t *const status)
DECL|qm_mbox_ch_read|function|int qm_mbox_ch_read(const qm_mbox_ch_t mbox_ch, qm_mbox_msg_t *const msg)
DECL|qm_mbox_ch_set_config|function|int qm_mbox_ch_set_config(const qm_mbox_ch_t mbox_ch, const qm_mbox_config_t *const config)
DECL|qm_mbox_ch_write|function|int qm_mbox_ch_write(const qm_mbox_ch_t mbox_ch, const qm_mbox_msg_t *const msg)
