DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_mbox_isr)
DECL|QM_MBOX_CTRL_OFFSET|macro|QM_MBOX_CTRL_OFFSET
DECL|QM_MBOX_DATA0_OFFSET|macro|QM_MBOX_DATA0_OFFSET
DECL|QM_MBOX_DATA1_OFFSET|macro|QM_MBOX_DATA1_OFFSET
DECL|QM_MBOX_DATA2_OFFSET|macro|QM_MBOX_DATA2_OFFSET
DECL|QM_MBOX_DATA3_OFFSET|macro|QM_MBOX_DATA3_OFFSET
DECL|QM_MBOX_SS_MASK_OFFSET|macro|QM_MBOX_SS_MASK_OFFSET
DECL|QM_MBOX_STATUS_OFFSET|macro|QM_MBOX_STATUS_OFFSET
DECL|cb_data|member|void *cb_data;
DECL|mailbox_devs|variable|mailbox_devs
DECL|mpr_cb|member|qm_mbox_callback_t mpr_cb;
DECL|qm_mailbox_info_t|struct|typedef struct qm_mailbox_info_t {
DECL|qm_mailbox_info_t|typedef|} qm_mailbox_info_t;
DECL|qm_mbox_ch_data_ack|function|int qm_mbox_ch_data_ack(const qm_mbox_ch_t mbox_ch)
DECL|qm_mbox_ch_get_status|function|int qm_mbox_ch_get_status(const qm_mbox_ch_t mbox_ch, qm_mbox_ch_status_t *const status)
DECL|qm_mbox_ch_read|function|int qm_mbox_ch_read(const qm_mbox_ch_t mbox_ch, qm_mbox_msg_t *const data)
DECL|qm_mbox_ch_set_config|function|int qm_mbox_ch_set_config(const qm_mbox_ch_t mbox_ch, qm_mbox_callback_t mpr_cb, void *cb_data, const bool irq_en)
DECL|qm_mbox_ch_write|function|int qm_mbox_ch_write(const qm_mbox_ch_t mbox_ch, const qm_mbox_msg_t *const data)
