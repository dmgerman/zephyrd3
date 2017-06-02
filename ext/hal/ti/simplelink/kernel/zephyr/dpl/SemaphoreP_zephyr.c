DECL|DPL_MAX_SEMAPHORES|macro|DPL_MAX_SEMAPHORES
DECL|SemaphoreP_Params_init|function|void SemaphoreP_Params_init(SemaphoreP_Params *params)
DECL|SemaphoreP_create|function|SemaphoreP_Handle SemaphoreP_create(unsigned int count, SemaphoreP_Params *params)
DECL|SemaphoreP_delete|function|void SemaphoreP_delete(SemaphoreP_Handle handle)
DECL|SemaphoreP_pend|function|SemaphoreP_Status SemaphoreP_pend(SemaphoreP_Handle handle, uint32_t timeout)
DECL|SemaphoreP_post|function|void SemaphoreP_post(SemaphoreP_Handle handle)
DECL|dpl_convert_timeout|function|static int32_t dpl_convert_timeout(uint32_t timeout)
DECL|dpl_sem_pool_alloc|function|static struct k_sem *dpl_sem_pool_alloc()
DECL|dpl_sem_pool_free|function|static SemaphoreP_Status dpl_sem_pool_free(struct k_sem *sem)
