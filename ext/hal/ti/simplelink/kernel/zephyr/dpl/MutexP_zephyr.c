DECL|DPL_MAX_MUTEXES|macro|DPL_MAX_MUTEXES
DECL|MutexP_Params_init|function|void MutexP_Params_init(MutexP_Params *params)
DECL|MutexP_create|function|MutexP_Handle MutexP_create(MutexP_Params *params)
DECL|MutexP_delete|function|void MutexP_delete(MutexP_Handle handle)
DECL|MutexP_lock|function|uintptr_t MutexP_lock(MutexP_Handle handle)
DECL|MutexP_unlock|function|void MutexP_unlock(MutexP_Handle handle, uintptr_t key)
DECL|dpl_mutex_pool_alloc|function|static struct k_mutex *dpl_mutex_pool_alloc()
DECL|dpl_mutex_pool_free|function|static MutexP_Status dpl_mutex_pool_free(struct k_mutex *mutex)
