DECL|_sem_give_non_preemptible|function|void _sem_give_non_preemptible(struct nano_sem *sem /* semaphore on which to signal */ )
DECL|_sem_take|function|int _sem_take(struct nano_sem *sem /* semaphore on which to test */ )
DECL|nano_fiber_sem_take_wait_timeout|function|int nano_fiber_sem_take_wait_timeout(struct nano_sem *sem,int32_t timeout_in_ticks)
DECL|nano_fiber_sem_take_wait|function|void nano_fiber_sem_take_wait(struct nano_sem *sem /* semaphore on which to wait */ )
DECL|nano_sem_give|function|void nano_sem_give(struct nano_sem *sem)
DECL|nano_sem_init|function|void nano_sem_init(struct nano_sem *sem /* semaphore object to initialize */ )
DECL|nano_sem_take_wait|function|void nano_sem_take_wait(struct nano_sem *sem)
DECL|nano_task_sem_give|function|void nano_task_sem_give(struct nano_sem *sem /* semaphore on which to signal */ )
DECL|nano_task_sem_take_wait_timeout|function|int nano_task_sem_take_wait_timeout(struct nano_sem *sem,int32_t timeout_in_ticks)
DECL|nano_task_sem_take_wait|function|void nano_task_sem_take_wait(struct nano_sem *sem /* semaphore on which to wait */ )
DECL|set_sem_available|macro|set_sem_available
DECL|set_sem_available|macro|set_sem_available
