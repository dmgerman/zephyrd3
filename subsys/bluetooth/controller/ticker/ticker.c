DECL|CALL_ID_JOB|macro|CALL_ID_JOB
DECL|CALL_ID_TRIGGER|macro|CALL_ID_TRIGGER
DECL|CALL_ID_USER|macro|CALL_ID_USER
DECL|CALL_ID_WORKER|macro|CALL_ID_WORKER
DECL|COUNTER_CMP_OFFSET_MIN|macro|COUNTER_CMP_OFFSET_MIN
DECL|DOUBLE_BUFFER_SIZE|macro|DOUBLE_BUFFER_SIZE
DECL|TICKER_USER_OP_TYPE_IDLE_GET|enumerator|TICKER_USER_OP_TYPE_IDLE_GET,
DECL|TICKER_USER_OP_TYPE_NONE|enumerator|TICKER_USER_OP_TYPE_NONE,
DECL|TICKER_USER_OP_TYPE_SLOT_GET|enumerator|TICKER_USER_OP_TYPE_SLOT_GET,
DECL|TICKER_USER_OP_TYPE_START|enumerator|TICKER_USER_OP_TYPE_START,
DECL|TICKER_USER_OP_TYPE_STOP|enumerator|TICKER_USER_OP_TYPE_STOP,
DECL|TICKER_USER_OP_TYPE_UPDATE|enumerator|TICKER_USER_OP_TYPE_UPDATE,
DECL|_instance|variable|_instance
DECL|ack|member|u8_t ack;
DECL|context|member|void *context;
DECL|context|member|void *context;
DECL|count_node|member|u8_t count_node;
DECL|count_user_op|member|u8_t count_user_op;
DECL|count_user|member|u8_t count_user;
DECL|first|member|u8_t first;
DECL|force|member|u8_t force;
DECL|force|member|u8_t force;
DECL|fp_caller_id_get|member|u8_t (*fp_caller_id_get)(u8_t user_id);
DECL|fp_cmp_set|member|void (*fp_cmp_set)(u32_t value);
DECL|fp_op_func|member|ticker_op_func fp_op_func;
DECL|fp_sched|member|void (*fp_sched)(u8_t caller_id, u8_t callee_id, u8_t chain);
DECL|fp_timeout_func|member|ticker_timeout_func fp_timeout_func;
DECL|id|member|u8_t id;
DECL|job_guard|member|u8_t job_guard;
DECL|last|member|u8_t last;
DECL|lazy_current|member|u16_t lazy_current;
DECL|lazy_periodic|member|u16_t lazy_periodic;
DECL|lazy|member|u16_t lazy;
DECL|lazy|member|u16_t lazy;
DECL|middle|member|u8_t middle;
DECL|next|member|u8_t next;
DECL|node|member|struct ticker_node *node;
DECL|op_context|member|void *op_context;
DECL|op|member|enum ticker_user_op_type op;
DECL|params|member|} params;
DECL|prepare_ticks_to_expire|function|static void prepare_ticks_to_expire(struct ticker_node *ticker, u32_t ticks_current, u32_t ticks_at_start)
DECL|remainder_current|member|u32_t remainder_current;
DECL|remainder_periodic|member|u32_t remainder_periodic;
DECL|remainder_periodic|member|u32_t remainder_periodic;
DECL|req|member|u8_t req;
DECL|slot_get|member|struct ticker_user_op_slot_get slot_get;
DECL|start|member|struct ticker_user_op_start start;
DECL|status|member|u32_t status;
DECL|ticker_by_next_slot_get|function|static void ticker_by_next_slot_get(struct ticker_instance *instance, u8_t *ticker_id_head, u32_t *ticks_current, u32_t *ticks_to_expire)
DECL|ticker_by_slot_get|function|static u8_t ticker_by_slot_get(struct ticker_node *node, u8_t ticker_id_head, u32_t ticks_slot)
DECL|ticker_dequeue|function|static u32_t ticker_dequeue(struct ticker_instance *instance, u8_t id)
DECL|ticker_enqueue|function|static u8_t ticker_enqueue(struct ticker_instance *instance, u8_t id)
DECL|ticker_id_head|member|u8_t ticker_id_head;
DECL|ticker_id_slot_previous|member|u8_t ticker_id_slot_previous;
DECL|ticker_id|member|u8_t *ticker_id;
DECL|ticker_init|function|u32_t ticker_init(u8_t instance_index, u8_t count_node, void *node, u8_t count_user, void *user, u8_t count_op, void *user_op)
DECL|ticker_instance0_caller_id_get|function|static u8_t ticker_instance0_caller_id_get(u8_t user_id)
DECL|ticker_instance0_cmp_set|function|static void ticker_instance0_cmp_set(u32_t value)
DECL|ticker_instance0_sched|function|static void ticker_instance0_sched(u8_t caller_id, u8_t callee_id, u8_t chain)
DECL|ticker_instance1_caller_id_get|function|static u8_t ticker_instance1_caller_id_get(u8_t user_id)
DECL|ticker_instance1_cmp_set|function|static void ticker_instance1_cmp_set(u32_t value)
DECL|ticker_instance1_sched|function|static void ticker_instance1_sched(u8_t caller_id, u8_t callee_id, u8_t chain)
DECL|ticker_instance|struct|struct ticker_instance {
DECL|ticker_job_compare_update|function|static inline void ticker_job_compare_update(struct ticker_instance *instance, u8_t ticker_id_old_head)
DECL|ticker_job_idle_get|function|u32_t ticker_job_idle_get(u8_t instance_index, u8_t user_id, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_job_list_inquire|function|static inline void ticker_job_list_inquire(struct ticker_instance *instance)
DECL|ticker_job_list_insert|function|static inline void ticker_job_list_insert(struct ticker_instance *instance, u8_t insert_head)
DECL|ticker_job_list_manage|function|static inline u8_t ticker_job_list_manage(struct ticker_instance *instance, u32_t ticks_elapsed, u8_t *insert_head)
DECL|ticker_job_node_update|function|static inline void ticker_job_node_update(struct ticker_node *ticker, struct ticker_user_op *user_op, u32_t ticks_current, u32_t ticks_elapsed, u8_t *insert_head)
DECL|ticker_job_sched|function|void ticker_job_sched(u8_t instance_index, u8_t user_id)
DECL|ticker_job_worker_bottom_half|function|static inline void ticker_job_worker_bottom_half(struct ticker_instance *instance, u32_t ticks_previous, u32_t ticks_elapsed, u8_t *insert_head)
DECL|ticker_job|function|static inline void ticker_job(struct ticker_instance *instance)
DECL|ticker_next_slot_get|function|u32_t ticker_next_slot_get(u8_t instance_index, u8_t user_id, u8_t *_ticker_id, u32_t *ticks_current, u32_t *ticks_to_expire, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_node|struct|struct ticker_node {
DECL|ticker_remainder_decrement|function|static u8_t ticker_remainder_decrement(struct ticker_node *ticker)
DECL|ticker_remainder_increment|function|static u8_t ticker_remainder_increment(struct ticker_node *ticker)
DECL|ticker_start|function|u32_t ticker_start(u8_t instance_index, u8_t user_id, u8_t _ticker_id, u32_t ticks_anchor, u32_t ticks_first, u32_t ticks_periodic, u32_t remainder_periodic, u16_t lazy, u16_t ticks_slot, ticker_timeout_func ticker_timeout_func, void *context, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_stop|function|u32_t ticker_stop(u8_t instance_index, u8_t user_id, u8_t _ticker_id, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_ticks_diff_get|function|u32_t ticker_ticks_diff_get(u32_t ticks_now, u32_t ticks_old)
DECL|ticker_ticks_now_get|function|u32_t ticker_ticks_now_get(void)
DECL|ticker_trigger|function|void ticker_trigger(u8_t instance_index)
DECL|ticker_update|function|u32_t ticker_update(u8_t instance_index, u8_t user_id, u8_t _ticker_id, u16_t ticks_drift_plus, u16_t ticks_drift_minus, u16_t ticks_slot_plus, u16_t ticks_slot_minus, u16_t lazy, u8_t force, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_user_op_slot_get|struct|struct ticker_user_op_slot_get {
DECL|ticker_user_op_start|struct|struct ticker_user_op_start {
DECL|ticker_user_op_type|enum|enum ticker_user_op_type {
DECL|ticker_user_op_update|struct|struct ticker_user_op_update {
DECL|ticker_user_op|struct|struct ticker_user_op {
DECL|ticker_user|struct|struct ticker_user {
DECL|ticker_worker|function|static inline void ticker_worker(struct ticker_instance *instance)
DECL|ticks_at_start|member|u32_t ticks_at_start;
DECL|ticks_current|member|u32_t *ticks_current;
DECL|ticks_current|member|u32_t ticks_current;
DECL|ticks_drift_minus|member|u16_t ticks_drift_minus;
DECL|ticks_drift_plus|member|u16_t ticks_drift_plus;
DECL|ticks_elapsed_first|member|u8_t ticks_elapsed_first;
DECL|ticks_elapsed_last|member|u8_t ticks_elapsed_last;
DECL|ticks_elapsed|member|u32_t ticks_elapsed[DOUBLE_BUFFER_SIZE];
DECL|ticks_first|member|u32_t ticks_first;
DECL|ticks_periodic|member|u32_t ticks_periodic;
DECL|ticks_periodic|member|u32_t ticks_periodic;
DECL|ticks_slot_minus|member|u16_t ticks_slot_minus;
DECL|ticks_slot_plus|member|u16_t ticks_slot_plus;
DECL|ticks_slot_previous|member|u16_t ticks_slot_previous;
DECL|ticks_slot|member|u16_t ticks_slot;
DECL|ticks_slot|member|u16_t ticks_slot;
DECL|ticks_to_expire_minus|member|u16_t ticks_to_expire_minus;
DECL|ticks_to_expire|member|u32_t *ticks_to_expire;
DECL|ticks_to_expire|member|u32_t ticks_to_expire;
DECL|timeout_func|member|ticker_timeout_func timeout_func;
DECL|update|member|struct ticker_user_op_update update;
DECL|user_op|member|struct ticker_user_op *user_op;
DECL|user|member|struct ticker_user *user;
DECL|worker_trigger|member|u8_t worker_trigger;
