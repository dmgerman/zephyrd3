DECL|WORKQUEUE_THREAD_NAME|macro|WORKQUEUE_THREAD_NAME
DECL|k_delayed_work_cancel|function|int k_delayed_work_cancel(struct k_delayed_work *work)
DECL|k_delayed_work_init|function|void k_delayed_work_init(struct k_delayed_work *work, k_work_handler_t handler)
DECL|k_delayed_work_submit_to_queue|function|int k_delayed_work_submit_to_queue(struct k_work_q *work_q, struct k_delayed_work *work, s32_t delay)
DECL|k_work_q_start|function|void k_work_q_start(struct k_work_q *work_q, k_thread_stack_t *stack, size_t stack_size, int prio)
DECL|work_q_main|function|static void work_q_main(void *work_q_ptr, void *p2, void *p3)
DECL|work_timeout|function|static void work_timeout(struct _timeout *t)
