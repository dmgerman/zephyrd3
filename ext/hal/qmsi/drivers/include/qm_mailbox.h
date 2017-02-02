DECL|QM_MBOX_CH_DATA_PEND|enumerator|QM_MBOX_CH_DATA_PEND = QM_MBOX_CH_STS,
DECL|QM_MBOX_CH_IDLE|enumerator|QM_MBOX_CH_IDLE = 0,
DECL|QM_MBOX_CH_INT_AND_DATA_PEND|enumerator|QM_MBOX_CH_INT_AND_DATA_PEND =
DECL|QM_MBOX_INTERRUPT_MODE|enumerator|QM_MBOX_INTERRUPT_MODE = 0,
DECL|QM_MBOX_PAYLOAD_0|enumerator|QM_MBOX_PAYLOAD_0 = 0, /**< Payload index value 0. */
DECL|QM_MBOX_PAYLOAD_1|enumerator|QM_MBOX_PAYLOAD_1, /**< Payload index value 1. */
DECL|QM_MBOX_PAYLOAD_2|enumerator|QM_MBOX_PAYLOAD_2, /**< Payload index value 2. */
DECL|QM_MBOX_PAYLOAD_3|enumerator|QM_MBOX_PAYLOAD_3, /**< Payload index value 3. */
DECL|QM_MBOX_PAYLOAD_NUM|enumerator|QM_MBOX_PAYLOAD_NUM, /**< Number of payloads. */
DECL|QM_MBOX_POLLING_MODE|enumerator|QM_MBOX_POLLING_MODE
DECL|__QM_MAILBOX_H__|macro|__QM_MAILBOX_H__
DECL|callback_data|member|void *callback_data;
DECL|callback|member|qm_mbox_callback_t callback;
DECL|ctrl|member|uint32_t ctrl;
DECL|data|member|uint32_t data[QM_MBOX_PAYLOAD_NUM];
DECL|dest|member|qm_mbox_destination_t dest;
DECL|mode|member|qm_mbox_mode_t mode;
DECL|qm_mbox_callback_t|typedef|typedef void (*qm_mbox_callback_t)(void *data);
DECL|qm_mbox_ch_status_t|typedef|} qm_mbox_ch_status_t;
DECL|qm_mbox_config_t|typedef|} qm_mbox_config_t;
DECL|qm_mbox_mode_t|typedef|} qm_mbox_mode_t;
DECL|qm_mbox_msg_t|typedef|} qm_mbox_msg_t;
DECL|qm_mbox_payload_t|typedef|} qm_mbox_payload_t;
