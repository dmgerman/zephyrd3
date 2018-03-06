DECL|PTHREAD_BARRIER_DEFINE|macro|PTHREAD_BARRIER_DEFINE
DECL|PTHREAD_CANCEL_DISABLE|macro|PTHREAD_CANCEL_DISABLE
DECL|PTHREAD_CANCEL_ENABLE|macro|PTHREAD_CANCEL_ENABLE
DECL|PTHREAD_COND_DEFINE|macro|PTHREAD_COND_DEFINE
DECL|PTHREAD_CREATE_DETACHED|macro|PTHREAD_CREATE_DETACHED
DECL|PTHREAD_CREATE_JOINABLE|macro|PTHREAD_CREATE_JOINABLE
DECL|PTHREAD_DETACHED|enumerator|PTHREAD_DETACHED,
DECL|PTHREAD_EXITED|enumerator|PTHREAD_EXITED,
DECL|PTHREAD_JOINABLE|enumerator|PTHREAD_JOINABLE = 0,
DECL|PTHREAD_MUTEX_DEFINE|macro|PTHREAD_MUTEX_DEFINE
DECL|PTHREAD_TERMINATED|enumerator|PTHREAD_TERMINATED
DECL|_PTHREAD_CANCEL_POS|macro|_PTHREAD_CANCEL_POS
DECL|__PTHREAD_H__|macro|__PTHREAD_H__
DECL|cancel_lock_sem|member|struct k_sem cancel_lock_sem;
DECL|cancel_lock|member|pthread_mutex_t cancel_lock;
DECL|cancel_pending|member|int cancel_pending;
DECL|cancel_state|member|int cancel_state;
DECL|posix_thread|struct|struct posix_thread {
DECL|pthread_barrier_destroy|function|static inline int pthread_barrier_destroy(pthread_barrier_t *b)
DECL|pthread_barrier_init|function|static inline int pthread_barrier_init(pthread_barrier_t *b, const pthread_barrierattr_t *attr, unsigned int count)
DECL|pthread_barrierattr_destroy|function|static inline int pthread_barrierattr_destroy(pthread_barrierattr_t *b)
DECL|pthread_barrierattr_init|function|static inline int pthread_barrierattr_init(pthread_barrierattr_t *b)
DECL|pthread_cond_destroy|function|static inline int pthread_cond_destroy(pthread_cond_t *cv)
DECL|pthread_cond_init|function|static inline int pthread_cond_init(pthread_cond_t *cv, const pthread_condattr_t *att)
DECL|pthread_condattr_destroy|function|static inline int pthread_condattr_destroy(pthread_condattr_t *att)
DECL|pthread_condattr_init|function|static inline int pthread_condattr_init(pthread_condattr_t *att)
DECL|pthread_equal|function|static inline int pthread_equal(pthread_t pt1, pthread_t pt2)
DECL|pthread_mutex_destroy|function|static inline int pthread_mutex_destroy(pthread_mutex_t *m)
DECL|pthread_mutex_init|function|static inline int pthread_mutex_init(pthread_mutex_t *m, const pthread_mutexattr_t *att)
DECL|pthread_mutex_lock|function|static inline int pthread_mutex_lock(pthread_mutex_t *m)
DECL|pthread_mutex_timedlock|function|static inline int pthread_mutex_timedlock(pthread_mutex_t *m, const struct timespec *to)
DECL|pthread_mutex_unlock|function|static inline int pthread_mutex_unlock(pthread_mutex_t *m)
DECL|pthread_mutexattr_destroy|function|static inline int pthread_mutexattr_destroy(pthread_mutexattr_t *m)
DECL|pthread_mutexattr_init|function|static inline int pthread_mutexattr_init(pthread_mutexattr_t *m)
DECL|pthread_rwlockattr_destroy|function|static inline int pthread_rwlockattr_destroy(pthread_rwlockattr_t *attr)
DECL|pthread_rwlockattr_init|function|static inline int pthread_rwlockattr_init(pthread_rwlockattr_t *attr)
DECL|pthread_self|function|static inline pthread_t pthread_self(void)
DECL|pthread_state|enum|enum pthread_state {
DECL|retval|member|void *retval;
DECL|state_cond|member|pthread_cond_t state_cond;
DECL|state_lock_sem|member|struct k_sem state_lock_sem;
DECL|state_lock|member|pthread_mutex_t state_lock;
DECL|state|member|enum pthread_state state;
DECL|thread|member|struct k_thread thread;
