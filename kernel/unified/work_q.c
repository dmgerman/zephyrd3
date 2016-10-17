DECL|k_delayed_work_cancel|function|int k_delayed_work_cancel(struct k_delayed_work *work)
DECL|k_delayed_work_init|function|void k_delayed_work_init(struct k_delayed_work *work, k_work_handler_t handler)
DECL|k_delayed_work_submit_to_queue|function|int k_delayed_work_submit_to_queue(struct k_work_q *work_q, struct k_delayed_work *work, int32_t delay)
DECL|k_sys_work_q_init|function|static int k_sys_work_q_init(struct device *dev)
DECL|k_sys_work_q|variable|k_sys_work_q
DECL|k_work_q_start|function|void k_work_q_start(struct k_work_q *work_q, const struct k_thread_config *config)
DECL|sys_work_q_config|variable|sys_work_q_config
DECL|sys_work_q_stack|variable|sys_work_q_stack
DECL|work_q_main|function|static void work_q_main(void *work_q_ptr, void *p2, void *p3)
DECL|work_timeout|function|static void work_timeout(struct _timeout *t)
