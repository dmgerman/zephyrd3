DECL|_k_sem_group_ready|function|void _k_sem_group_ready(struct k_args *R)
DECL|_k_sem_group_reset|function|void _k_sem_group_reset(struct k_args *A)
DECL|_k_sem_group_signal|function|void _k_sem_group_signal(struct k_args *A)
DECL|_k_sem_group_wait_accept|function|void _k_sem_group_wait_accept(struct k_args *A)
DECL|_k_sem_group_wait_any|function|void _k_sem_group_wait_any(struct k_args *A)
DECL|_k_sem_group_wait_cancel|function|void _k_sem_group_wait_cancel(struct k_args *A)
DECL|_k_sem_group_wait_request|function|void _k_sem_group_wait_request(struct k_args *A)
DECL|_k_sem_group_wait_timeout|function|void _k_sem_group_wait_timeout(struct k_args *A)
DECL|_k_sem_group_wait|function|void _k_sem_group_wait(struct k_args *R)
DECL|_k_sem_inquiry|function|void _k_sem_inquiry(struct k_args *A)
DECL|_k_sem_reset|function|void _k_sem_reset(struct k_args *A)
DECL|_k_sem_signal|function|void _k_sem_signal(struct k_args *A)
DECL|_k_sem_wait_reply_timeout|function|void _k_sem_wait_reply_timeout(struct k_args *A)
DECL|_k_sem_wait_reply|function|void _k_sem_wait_reply(struct k_args *A)
DECL|_k_sem_wait_request|function|void _k_sem_wait_request(struct k_args *A)
DECL|_task_sem_group_take|function|ksem_t _task_sem_group_take(ksemg_t group, int32_t time)
DECL|_task_sem_take|function|int _task_sem_take(ksem_t sema, int32_t time)
DECL|isr_sem_give|function|void isr_sem_give(ksem_t sema, struct cmd_pkt_set *pSet)
DECL|signal_semaphore|function|static void signal_semaphore(int n, struct _k_sem_struct *S)
DECL|task_sem_count_get|function|int task_sem_count_get(ksem_t sema)
DECL|task_sem_give|function|void task_sem_give(ksem_t sema)
DECL|task_sem_group_give|function|void task_sem_group_give(ksemg_t group)
DECL|task_sem_group_reset|function|void task_sem_group_reset(ksemg_t group)
DECL|task_sem_reset|function|void task_sem_reset(ksem_t sema)
