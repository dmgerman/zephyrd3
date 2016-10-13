DECL|QM_MBOX_CH_0|enumerator|QM_MBOX_CH_0 = 0, /**< Channel 0. */
DECL|QM_MBOX_CH_1|enumerator|QM_MBOX_CH_1, /**< Channel 1. */
DECL|QM_MBOX_CH_2|enumerator|QM_MBOX_CH_2, /**< Channel 2. */
DECL|QM_MBOX_CH_3|enumerator|QM_MBOX_CH_3, /**< Channel 3. */
DECL|QM_MBOX_CH_4|enumerator|QM_MBOX_CH_4, /**< Channel 4. */
DECL|QM_MBOX_CH_5|enumerator|QM_MBOX_CH_5, /**< Channel 5. */
DECL|QM_MBOX_CH_6|enumerator|QM_MBOX_CH_6, /**< Channel 6. */
DECL|QM_MBOX_CH_7|enumerator|QM_MBOX_CH_7, /**< Channel 7. */
DECL|QM_MBOX_CH_IDLE|enumerator|QM_MBOX_CH_IDLE = 0,
DECL|QM_MBOX_CH_INT_ACK_DATA_PEND|enumerator|QM_MBOX_CH_INT_ACK_DATA_PEND,
DECL|QM_MBOX_CH_INT_NACK_DATA_PEND|enumerator|QM_MBOX_CH_INT_NACK_DATA_PEND,
DECL|QM_MBOX_CH_NUM|enumerator|QM_MBOX_CH_NUM /**< Mailbox number of channels. */
DECL|QM_MBOX_CH_POLLING_DATA_PEND|enumerator|QM_MBOX_CH_POLLING_DATA_PEND,
DECL|QM_MBOX_INTERRUPT_MODE|enumerator|QM_MBOX_INTERRUPT_MODE = 0,
DECL|QM_MBOX_PAYLOAD_0|enumerator|QM_MBOX_PAYLOAD_0 = 0, /**< Payload index value 0. */
DECL|QM_MBOX_PAYLOAD_1|enumerator|QM_MBOX_PAYLOAD_1, /**< Payload index value 1. */
DECL|QM_MBOX_PAYLOAD_2|enumerator|QM_MBOX_PAYLOAD_2, /**< Payload index value 2. */
DECL|QM_MBOX_PAYLOAD_3|enumerator|QM_MBOX_PAYLOAD_3, /**< Payload index value 3. */
DECL|QM_MBOX_PAYLOAD_NUM|enumerator|QM_MBOX_PAYLOAD_NUM, /**< Number of payloads. */
DECL|QM_MBOX_POLLING_MODE|enumerator|QM_MBOX_POLLING_MODE
DECL|QM_MBOX_TO_LMT|enumerator|QM_MBOX_TO_LMT = 0, /**< Lakemont core as destination */
DECL|QM_MBOX_TO_SS|enumerator|QM_MBOX_TO_SS, /**< Sensor Sub-System core as destination */
DECL|QM_MBOX_UNUSED|enumerator|QM_MBOX_UNUSED
DECL|__QM_MAILBOX_H__|macro|__QM_MAILBOX_H__
DECL|callback_data|member|void *callback_data;
DECL|callback|member|qm_mbox_callback_t callback;
DECL|ctrl|member|uint32_t ctrl;
DECL|data|member|uint32_t data[QM_MBOX_PAYLOAD_NUM];
DECL|dest|member|qm_mbox_destination_t dest;
DECL|mode|member|qm_mbox_mode_t mode;
DECL|qm_mbox_callback_t|typedef|typedef void (*qm_mbox_callback_t)(void *data);
DECL|qm_mbox_ch_status_t|typedef|} qm_mbox_ch_status_t;
DECL|qm_mbox_ch_t|typedef|} qm_mbox_ch_t;
DECL|qm_mbox_config_t|typedef|} qm_mbox_config_t;
DECL|qm_mbox_destination_t|typedef|} qm_mbox_destination_t;
DECL|qm_mbox_mode_t|typedef|} qm_mbox_mode_t;
DECL|qm_mbox_msg_t|typedef|} qm_mbox_msg_t;
DECL|qm_mbox_payload_t|typedef|} qm_mbox_payload_t;
