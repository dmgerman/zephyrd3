DECL|K_lockreq|function|void K_lockreq(struct k_args *A /* pointer to mutex lock request arguments */ )
DECL|K_unlock|function|void K_unlock(struct k_args *A /* pointer to mutex unlock request arguments */ )
DECL|_k_mutex_lock_reply|function|void _k_mutex_lock_reply(struct k_args *A /* pointer to mutex lock reply request arguments */ )
DECL|_task_mutex_lock|function|int _task_mutex_lock(kmutex_t mutex, /* mutex to lock */ int32_t time /* max # of ticks to wait for mutex */ )
DECL|_task_mutex_unlock|function|void _task_mutex_unlock(kmutex_t mutex /* mutex to unlock */ )
