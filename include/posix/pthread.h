DECL|PTHREAD_BARRIER_DEFINE|macro|PTHREAD_BARRIER_DEFINE
DECL|PTHREAD_COND_DEFINE|macro|PTHREAD_COND_DEFINE
DECL|PTHREAD_MUTEX_DEFINE|macro|PTHREAD_MUTEX_DEFINE
DECL|__PTHREAD_H__|macro|__PTHREAD_H__
DECL|_ts_to_ms|function|static inline s32_t _ts_to_ms(const struct timespec *to)
DECL|pthread_barrier_destroy|function|static inline int pthread_barrier_destroy(pthread_barrier_t *b)
DECL|pthread_barrier_init|function|static inline int pthread_barrier_init(pthread_barrier_t *b, const pthread_barrierattr_t *attr, unsigned int count)
DECL|pthread_barrierattr_destroy|function|static inline int pthread_barrierattr_destroy(pthread_barrierattr_t *b)
DECL|pthread_barrierattr_init|function|static inline int pthread_barrierattr_init(pthread_barrierattr_t *b)
DECL|pthread_cond_destroy|function|static inline int pthread_cond_destroy(pthread_cond_t *cv)
DECL|pthread_cond_init|function|static inline int pthread_cond_init(pthread_cond_t *cv, const pthread_condattr_t *att)
DECL|pthread_condattr_destroy|function|static inline int pthread_condattr_destroy(pthread_condattr_t *att)
DECL|pthread_condattr_init|function|static inline int pthread_condattr_init(pthread_condattr_t *att)
DECL|pthread_mutex_destroy|function|static inline int pthread_mutex_destroy(pthread_mutex_t *m)
DECL|pthread_mutex_init|function|static inline int pthread_mutex_init(pthread_mutex_t *m, const pthread_mutexattr_t *att)
DECL|pthread_mutex_lock|function|static inline int pthread_mutex_lock(pthread_mutex_t *m)
DECL|pthread_mutex_timedlock|function|static inline int pthread_mutex_timedlock(pthread_mutex_t *m, const struct timespec *to)
DECL|pthread_mutex_unlock|function|static inline int pthread_mutex_unlock(pthread_mutex_t *m)
DECL|pthread_mutexattr_destroy|function|static inline int pthread_mutexattr_destroy(pthread_mutexattr_t *m)
DECL|pthread_mutexattr_init|function|static inline int pthread_mutexattr_init(pthread_mutexattr_t *m)
DECL|timespec|struct|struct timespec {
DECL|tv_nsec|member|s32_t tv_nsec;
DECL|tv_sec|member|s32_t tv_sec;
