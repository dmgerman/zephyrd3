DECL|QM_MBOX_CH_0|enumerator|QM_MBOX_CH_0 = 0, /**< Channel 0. */
DECL|QM_MBOX_CH_1|enumerator|QM_MBOX_CH_1, /**< Channel 1. */
DECL|QM_MBOX_CH_2|enumerator|QM_MBOX_CH_2, /**< Channel 2. */
DECL|QM_MBOX_CH_3|enumerator|QM_MBOX_CH_3, /**< Channel 3. */
DECL|QM_MBOX_CH_4|enumerator|QM_MBOX_CH_4, /**< Channel 4. */
DECL|QM_MBOX_CH_5|enumerator|QM_MBOX_CH_5, /**< Channel 5. */
DECL|QM_MBOX_CH_6|enumerator|QM_MBOX_CH_6, /**< Channel 6. */
DECL|QM_MBOX_CH_7|enumerator|QM_MBOX_CH_7, /**< Channel 7. */
DECL|QM_MBOX_CH_DATA|enumerator|QM_MBOX_CH_DATA = BIT(0), /**< Message has not been consumed. */
DECL|QM_MBOX_CH_IDLE|enumerator|QM_MBOX_CH_IDLE = 0,
DECL|QM_MBOX_CH_INT|enumerator|QM_MBOX_CH_INT = BIT(1), /**< Channel interrupt pending. */
DECL|QM_MBOX_CH_NUM|enumerator|QM_MBOX_CH_NUM /**< Mailbox number of channels. */
DECL|QM_MBOX_CH_STATUS_MASK|enumerator|QM_MBOX_CH_STATUS_MASK = BIT(1) | BIT(0) /**< Status mask. */
DECL|QM_MBOX_PAYLOAD_0|enumerator|QM_MBOX_PAYLOAD_0 = 0, /**< Payload index value 0. */
DECL|QM_MBOX_PAYLOAD_1|enumerator|QM_MBOX_PAYLOAD_1, /**< Payload index value 1. */
DECL|QM_MBOX_PAYLOAD_2|enumerator|QM_MBOX_PAYLOAD_2, /**< Payload index value 2. */
DECL|QM_MBOX_PAYLOAD_3|enumerator|QM_MBOX_PAYLOAD_3, /**< Payload index value 3. */
DECL|QM_MBOX_PAYLOAD_NUM|enumerator|QM_MBOX_PAYLOAD_NUM, /**< Numbers of payloads. */
DECL|__QM_MAILBOX_H__|macro|__QM_MAILBOX_H__
DECL|ctrl|member|uint32_t ctrl; /**< Mailbox control element. */
DECL|data|member|uint32_t data[QM_MBOX_PAYLOAD_NUM]; /**< Mailbox data buffer. */
DECL|qm_mbox_callback_t|typedef|typedef void (*qm_mbox_callback_t)(void *data);
DECL|qm_mbox_ch_status_t|typedef|} qm_mbox_ch_status_t;
DECL|qm_mbox_ch_t|typedef|} qm_mbox_ch_t;
DECL|qm_mbox_msg_t|typedef|} qm_mbox_msg_t;
DECL|qm_mbox_payload_t|typedef|} qm_mbox_payload_t;
