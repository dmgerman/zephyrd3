DECL|_sem_desc|struct|struct _sem_desc {
DECL|_sem_give_non_preemptible|function|void _sem_give_non_preemptible(struct k_sem *sem)
DECL|_sem_thread|struct|struct _sem_thread {
DECL|_trace_list_k_sem|variable|_trace_list_k_sem
DECL|desc|member|struct _sem_desc desc;
DECL|do_sem_give|function|static int do_sem_give(struct k_sem *sem)
DECL|dummy|member|struct _thread_base dummy;
DECL|handle_poll_event|function|static inline int handle_poll_event(struct k_sem *sem)
DECL|handle_sem_group|function|static void handle_sem_group(struct k_sem *sem, struct _sem_thread *sem_thread)
DECL|handle_sem_group|macro|handle_sem_group
DECL|increment_count_up_to_limit|function|static inline void increment_count_up_to_limit(struct k_sem *sem)
DECL|init_sem_module|function|static int init_sem_module(struct device *dev)
DECL|k_sem_give|function|void k_sem_give(struct k_sem *sem)
DECL|k_sem_group_give|function|void k_sem_group_give(struct k_sem *sem_array[])
DECL|k_sem_group_reset|function|void k_sem_group_reset(struct k_sem *sem_array[])
DECL|k_sem_group_take|function|int k_sem_group_take(struct k_sem *sem_array[], struct k_sem **sem, int32_t timeout)
DECL|k_sem_init|function|void k_sem_init(struct k_sem *sem, unsigned int initial_count,unsigned int limit)
DECL|k_sem_take|function|int k_sem_take(struct k_sem *sem, int32_t timeout)
DECL|semg_node|member|sys_dnode_t semg_node; /* Node in list of semaphores */
DECL|sem|member|struct k_sem *sem; /* Semaphore on which to wait */
DECL|thread|member|struct k_thread *thread; /* Thread waiting for semaphores */
