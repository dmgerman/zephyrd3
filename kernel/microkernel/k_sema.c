DECL|K_inqsema|function|void K_inqsema(struct k_args *A)
DECL|K_resetm|function|void K_resetm(struct k_args *A)
DECL|K_resets|function|void K_resets(struct k_args *A)
DECL|K_signalm|function|void K_signalm(struct k_args *A)
DECL|K_signals|function|void K_signals(struct k_args *A)
DECL|K_waitmany|function|void K_waitmany(struct k_args *A)
DECL|K_waitmrdy|function|void K_waitmrdy(struct k_args *R)
DECL|K_waitmreq|function|void K_waitmreq(struct k_args *A)
DECL|K_waitmtmo|function|void K_waitmtmo(struct k_args *A)
DECL|K_waitsreq|function|void K_waitsreq(struct k_args *A)
DECL|K_waitsrpl|function|void K_waitsrpl(struct k_args *A)
DECL|_k_sem_group_wait_accept|function|void _k_sem_group_wait_accept(struct k_args *A)
DECL|_k_sem_group_wait_cancel|function|void _k_sem_group_wait_cancel(struct k_args *A)
DECL|_k_sem_group_wait|function|void _k_sem_group_wait(struct k_args *R)
DECL|_task_sem_group_take|function|ksem_t _task_sem_group_take(ksemg_t group, /* group of semaphores to test */ int32_t time /* maximum number of ticks to wait */ )
DECL|_task_sem_take|function|int _task_sem_take(ksem_t sema, /* semaphore to test */ int32_t time /* maximum number of ticks to wait */ )
DECL|isr_sem_give|function|void isr_sem_give(ksem_t sema, /* semaphore to signal */ struct cmd_pkt_set *pSet /* ptr to command packet set */ )
DECL|signal_semaphore|function|static void signal_semaphore(int n, struct sem_struct *S)
DECL|task_sem_count_get|function|int task_sem_count_get(ksem_t sema /* semaphore to query */ )
DECL|task_sem_give|function|void task_sem_give(ksem_t sema /* semaphore to signal */ )
DECL|task_sem_group_give|function|void task_sem_group_give(ksemg_t group /* group of semaphores to signal */)
DECL|task_sem_group_reset|function|void task_sem_group_reset(ksemg_t group /* group of semaphores to reset */ )
DECL|task_sem_reset|function|void task_sem_reset(ksem_t sema /* semaphore to reset */ )
