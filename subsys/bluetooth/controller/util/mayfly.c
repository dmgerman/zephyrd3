DECL|disable_ack|member|u8_t disable_ack;
DECL|disable_req|member|u8_t disable_req;
DECL|enable_ack|member|u8_t enable_ack;
DECL|enable_req|member|u8_t enable_req;
DECL|head|member|memq_link_t *head;
DECL|mayfly_enable|function|void mayfly_enable(u8_t caller_id, u8_t callee_id, u8_t enable)
DECL|mayfly_enqueue|function|u32_t mayfly_enqueue(u8_t caller_id, u8_t callee_id, u8_t chain,struct mayfly *m)
DECL|mayfly_init|function|void mayfly_init(void)
DECL|mayfly_run|function|void mayfly_run(u8_t callee_id)
DECL|mfl|variable|mfl
DECL|mft|variable|mft
DECL|tail|member|memq_link_t *tail;
