DECL|disable_ack|member|uint32_t disable_ack : 1;
DECL|disable_req|member|uint32_t disable_req : 1;
DECL|flags|member|uint32_t flags;
DECL|head|member|void *head;
DECL|mayfly_enable|function|void mayfly_enable(uint8_t caller_id, uint8_t callee_id, uint8_t enable)
DECL|mayfly_enqueue|function|uint32_t mayfly_enqueue(uint8_t caller_id, uint8_t callee_id, uint8_t chain,struct mayfly *m)
DECL|mayfly_init|function|void mayfly_init(void)
DECL|mayfly_run|function|void mayfly_run(uint8_t callee_id)
DECL|mfl|variable|mfl
DECL|mft|variable|mft
DECL|tail|member|void *tail;
