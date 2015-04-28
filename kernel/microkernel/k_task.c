DECL|K_groupop|function|void K_groupop(struct k_args *A)
DECL|K_set_prio|function|void K_set_prio(struct k_args *A)
DECL|K_yield|function|void K_yield(struct k_args *A)
DECL|_k_task_op|function|void _k_task_op(struct k_args *A)
DECL|_task_group_ioctl|function|void _task_group_ioctl(ktask_group_t group, /* task group */ int opt /* operation */ )
DECL|_task_ioctl|function|void _task_ioctl(ktask_t task, /* task on which to operate */ int opt /* task operation */ )
DECL|abort_task|function|void abort_task(struct k_proc *X)
DECL|reset_state_bit|function|void reset_state_bit(struct k_proc *X, /* ptr to task */ uint32_t bits /* bitmask of TF_xxx bits to reset */ )
DECL|set_state_bit|function|void set_state_bit(struct k_proc *task_ptr, uint32_t bits /* bitmask of TF_xxx bits to set */ )
DECL|task_abort_handler_set|function|void task_abort_handler_set(void (*func)(void) /* abort handler */ )
DECL|task_entry_set|function|void task_entry_set(ktask_t task, /* task */ void (*func)(void) /* entry point */ )
DECL|task_priority_set|function|void task_priority_set(ktask_t task, /* task whose priority is to be set */ kpriority_t prio /* new priority */ )
DECL|task_yield|function|void task_yield(void)
