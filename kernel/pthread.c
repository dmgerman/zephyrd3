DECL|cond_wait|function|static int cond_wait(pthread_cond_t *cv, pthread_mutex_t *mut, int timeout)
DECL|pthread_barrier_wait|function|int pthread_barrier_wait(pthread_barrier_t *b)
DECL|pthread_cond_broadcast|function|int pthread_cond_broadcast(pthread_cond_t *cv)
DECL|pthread_cond_signal|function|int pthread_cond_signal(pthread_cond_t *cv)
DECL|pthread_cond_timedwait|function|int pthread_cond_timedwait(pthread_cond_t *cv, pthread_mutex_t *mut, const struct timespec *to)
DECL|pthread_cond_wait|function|int pthread_cond_wait(pthread_cond_t *cv, pthread_mutex_t *mut)
DECL|pthread_mutex_trylock|function|int pthread_mutex_trylock(pthread_mutex_t *m)
DECL|ready_one_thread|function|static void ready_one_thread(_wait_q_t *wq)
DECL|swap_or_unlock|function|static void swap_or_unlock(int key)
