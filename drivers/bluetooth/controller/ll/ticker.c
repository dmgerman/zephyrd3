DECL|TICKER_DOUBLE_BUFFER_SIZE|macro|TICKER_DOUBLE_BUFFER_SIZE
DECL|TICKER_RTC_CC_OFFSET_MIN|macro|TICKER_RTC_CC_OFFSET_MIN
DECL|TICKER_USER_OP_TYPE_IDLE_GET|enumerator|TICKER_USER_OP_TYPE_IDLE_GET,
DECL|TICKER_USER_OP_TYPE_NONE|enumerator|TICKER_USER_OP_TYPE_NONE,
DECL|TICKER_USER_OP_TYPE_SLOT_GET|enumerator|TICKER_USER_OP_TYPE_SLOT_GET,
DECL|TICKER_USER_OP_TYPE_START|enumerator|TICKER_USER_OP_TYPE_START,
DECL|TICKER_USER_OP_TYPE_STOP|enumerator|TICKER_USER_OP_TYPE_STOP,
DECL|TICKER_USER_OP_TYPE_UPDATE|enumerator|TICKER_USER_OP_TYPE_UPDATE,
DECL|_instance|variable|_instance
DECL|context|member|void *context;
DECL|context|member|void *context;
DECL|count_node|member|uint8_t count_node;
DECL|count_user_op|member|uint8_t count_user_op;
DECL|count_user|member|uint8_t count_user;
DECL|first|member|uint8_t first;
DECL|force|member|uint8_t force;
DECL|force|member|uint8_t force;
DECL|fp_compare_set|member|ticker_fp_compare_set fp_compare_set;
DECL|fp_job_sched|member|ticker_fp_sched fp_job_sched;
DECL|fp_op_func|member|ticker_op_func fp_op_func;
DECL|fp_timeout_func|member|ticker_timeout_func fp_timeout_func;
DECL|fp_worker_sched|member|ticker_fp_sched fp_worker_sched;
DECL|id|member|uint8_t id;
DECL|is_sched_ack|member|uint8_t is_sched_ack;
DECL|is_sched_req|member|uint8_t is_sched_req;
DECL|job_guard|member|uint8_t job_guard;
DECL|last|member|uint8_t last;
DECL|lazy_current|member|uint16_t lazy_current;
DECL|lazy_periodic|member|uint16_t lazy_periodic;
DECL|lazy|member|uint16_t lazy;
DECL|lazy|member|uint16_t lazy;
DECL|middle|member|uint8_t middle;
DECL|next|member|uint8_t next;
DECL|node|member|struct ticker_node *node;
DECL|op_context|member|void *op_context;
DECL|op|member|enum ticker_user_op_type op;
DECL|params|member|} params;
DECL|prepare_ticks_to_expire|function|static void prepare_ticks_to_expire(struct ticker_node *ticker,uint32_t ticks_current, uint32_t ticks_at_start)
DECL|remainder_current|member|uint32_t remainder_current;
DECL|remainder_periodic|member|uint32_t remainder_periodic;
DECL|remainder_periodic|member|uint32_t remainder_periodic;
DECL|slot_get|member|struct ticker_user_op_slot_get slot_get;
DECL|start|member|struct ticker_user_op_start start;
DECL|status|member|uint32_t status;
DECL|ticker_by_next_slot_get|function|static void ticker_by_next_slot_get(struct ticker_instance *instance, uint8_t *ticker_id_head, uint32_t *ticks_current, uint32_t *ticks_to_expire)
DECL|ticker_by_slot_get|function|static uint8_t ticker_by_slot_get(struct ticker_node *node,uint8_t ticker_id_head, uint32_t ticks_slot)
DECL|ticker_dequeue|function|static uint32_t ticker_dequeue(struct ticker_instance *instance,uint8_t id)
DECL|ticker_enqueue|function|static uint8_t ticker_enqueue(struct ticker_instance *instance, uint8_t id)
DECL|ticker_fp_compare_set|typedef|typedef void (*ticker_fp_compare_set) (uint32_t cc);
DECL|ticker_fp_sched|typedef|typedef void (*ticker_fp_sched) (uint8_t chain);
DECL|ticker_id_head|member|uint8_t ticker_id_head;
DECL|ticker_id_slot_previous|member|uint8_t ticker_id_slot_previous;
DECL|ticker_id|member|uint8_t *ticker_id;
DECL|ticker_init|function|uint32_t ticker_init(uint8_t instance_index, uint8_t count_node, void *node, uint8_t count_user, void *user, uint8_t count_op, void *user_op)
DECL|ticker_instance0_job_sched|function|static void ticker_instance0_job_sched(uint8_t chain)
DECL|ticker_instance0_rtc_compare_set|function|static void ticker_instance0_rtc_compare_set(uint32_t value)
DECL|ticker_instance0_worker_sched|function|static void ticker_instance0_worker_sched(uint8_t chain)
DECL|ticker_instance1_job_sched|function|static void ticker_instance1_job_sched(uint8_t chain)
DECL|ticker_instance1_rtc_compare_set|function|static void ticker_instance1_rtc_compare_set(uint32_t value)
DECL|ticker_instance1_worker_sched|function|static void ticker_instance1_worker_sched(uint8_t chain)
DECL|ticker_instance|struct|struct ticker_instance {
DECL|ticker_job_compare_update|function|static inline void ticker_job_compare_update(struct ticker_instance *instance, uint8_t ticker_id_old_head)
DECL|ticker_job_idle_get|function|uint32_t ticker_job_idle_get(uint8_t instance_index, uint8_t user_id, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_job_list_inquire|function|static inline void ticker_job_list_inquire(struct ticker_instance *instance)
DECL|ticker_job_list_insert|function|static inline void ticker_job_list_insert(struct ticker_instance *instance, uint8_t insert_head)
DECL|ticker_job_list_manage|function|static inline uint8_t ticker_job_list_manage(struct ticker_instance *instance, uint32_t ticks_elapsed, uint8_t *insert_head)
DECL|ticker_job_node_update|function|static inline void ticker_job_node_update(struct ticker_node *ticker,struct ticker_user_op *user_op, uint32_t ticks_current, uint32_t ticks_elapsed, uint8_t *insert_head)
DECL|ticker_job_sched|function|void ticker_job_sched(uint8_t instance_index)
DECL|ticker_job_worker_bottom_half|function|static inline void ticker_job_worker_bottom_half(struct ticker_instance *instance, uint32_t ticks_previous, uint32_t ticks_elapsed, uint8_t *insert_head)
DECL|ticker_job|function|static inline void ticker_job(struct ticker_instance *instance)
DECL|ticker_next_slot_get|function|uint32_t ticker_next_slot_get(uint8_t instance_index, uint8_t user_id, uint8_t *_ticker_id, uint32_t *ticks_current, uint32_t *ticks_to_expire, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_node|struct|struct ticker_node {
DECL|ticker_remainder_decrement|function|static uint8_t ticker_remainder_decrement(struct ticker_node *ticker)
DECL|ticker_remainder_increment|function|static uint8_t ticker_remainder_increment(struct ticker_node *ticker)
DECL|ticker_start|function|uint32_t ticker_start(uint8_t instance_index, uint8_t user_id, uint8_t _ticker_id, uint32_t ticks_anchor, uint32_t ticks_first, uint32_t ticks_periodic, uint32_t remainder_periodic, uint16_t lazy, uint16_t ticks_slot,
DECL|ticker_stop|function|uint32_t ticker_stop(uint8_t instance_index, uint8_t user_id, uint8_t _ticker_id, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_ticks_diff_get|function|uint32_t ticker_ticks_diff_get(uint32_t ticks_now, uint32_t ticks_old)
DECL|ticker_ticks_now_get|function|uint32_t ticker_ticks_now_get(void)
DECL|ticker_trigger|function|void ticker_trigger(uint8_t instance_index)
DECL|ticker_update|function|uint32_t ticker_update(uint8_t instance_index, uint8_t user_id, uint8_t _ticker_id, uint16_t ticks_drift_plus, uint16_t ticks_drift_minus, uint16_t ticks_slot_plus, uint16_t ticks_slot_minus, uint16_t lazy, uint8_t force, ticker_op_func fp_op_func, void *op_context)
DECL|ticker_user_op_slot_get|struct|struct ticker_user_op_slot_get {
DECL|ticker_user_op_start|struct|struct ticker_user_op_start {
DECL|ticker_user_op_type|enum|enum ticker_user_op_type {
DECL|ticker_user_op_update|struct|struct ticker_user_op_update {
DECL|ticker_user_op|struct|struct ticker_user_op {
DECL|ticker_user|struct|struct ticker_user {
DECL|ticker_worker|function|static inline void ticker_worker(struct ticker_instance *instance)
DECL|ticks_at_start|member|uint32_t ticks_at_start;
DECL|ticks_current|member|uint32_t *ticks_current;
DECL|ticks_current|member|uint32_t ticks_current;
DECL|ticks_drift_minus|member|uint16_t ticks_drift_minus;
DECL|ticks_drift_plus|member|uint16_t ticks_drift_plus;
DECL|ticks_elapsed_first|member|uint8_t ticks_elapsed_first;
DECL|ticks_elapsed_last|member|uint8_t ticks_elapsed_last;
DECL|ticks_elapsed|member|uint32_t ticks_elapsed[TICKER_DOUBLE_BUFFER_SIZE];
DECL|ticks_first|member|uint32_t ticks_first;
DECL|ticks_periodic|member|uint32_t ticks_periodic;
DECL|ticks_periodic|member|uint32_t ticks_periodic;
DECL|ticks_slot_minus|member|uint16_t ticks_slot_minus;
DECL|ticks_slot_plus|member|uint16_t ticks_slot_plus;
DECL|ticks_slot_previous|member|uint16_t ticks_slot_previous;
DECL|ticks_slot|member|uint16_t ticks_slot;
DECL|ticks_slot|member|uint16_t ticks_slot;
DECL|ticks_to_expire_minus|member|uint16_t ticks_to_expire_minus;
DECL|ticks_to_expire|member|uint32_t *ticks_to_expire;
DECL|ticks_to_expire|member|uint32_t ticks_to_expire;
DECL|timeout_func|member|ticker_timeout_func timeout_func;
DECL|update|member|struct ticker_user_op_update update;
DECL|user_op|member|struct ticker_user_op *user_op;
DECL|user|member|struct ticker_user *user;
DECL|worker_trigger|member|uint8_t worker_trigger;
