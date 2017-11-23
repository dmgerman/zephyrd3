DECL|PTHREAD_BARRIER_DEFINE|macro|PTHREAD_BARRIER_DEFINE
DECL|PTHREAD_COND_DEFINE|macro|PTHREAD_COND_DEFINE
DECL|PTHREAD_MUTEX_DEFINE|macro|PTHREAD_MUTEX_DEFINE
DECL|__PTHREAD_H__|macro|__PTHREAD_H__
DECL|_ts_to_ms|function|static inline s32_t _ts_to_ms(const struct timespec *to)
DECL|count|member|int count;
DECL|max|member|int max;
DECL|pthread_barrier_destroy|function|static inline int pthread_barrier_destroy(pthread_barrier_t *b)
DECL|pthread_barrier_init|function|static inline int pthread_barrier_init(pthread_barrier_t *b, const pthread_barrierattr_t *attr, unsigned int count)
DECL|pthread_barrier_t|typedef|} pthread_barrier_t;
DECL|pthread_barrierattr_destroy|function|static inline int pthread_barrierattr_destroy(pthread_barrierattr_t *b)
DECL|pthread_barrierattr_init|function|static inline int pthread_barrierattr_init(pthread_barrierattr_t *b)
DECL|pthread_barrierattr_t|typedef|} pthread_barrierattr_t;
DECL|pthread_barrierattr|struct|typedef struct pthread_barrierattr {
DECL|pthread_barrier|struct|typedef struct pthread_barrier {
DECL|pthread_cond_destroy|function|static inline int pthread_cond_destroy(pthread_cond_t *cv)
DECL|pthread_cond_init|function|static inline int pthread_cond_init(pthread_cond_t *cv, const pthread_condattr_t *att)
DECL|pthread_cond_t|typedef|} pthread_cond_t;
DECL|pthread_condattr_destroy|function|static inline int pthread_condattr_destroy(pthread_condattr_t *att)
DECL|pthread_condattr_init|function|static inline int pthread_condattr_init(pthread_condattr_t *att)
DECL|pthread_condattr_t|typedef|} pthread_condattr_t;
DECL|pthread_condattr|struct|typedef struct pthread_condattr {
DECL|pthread_cond|struct|typedef struct pthread_cond {
DECL|pthread_mutex_destroy|function|static inline int pthread_mutex_destroy(pthread_mutex_t *m)
DECL|pthread_mutex_init|function|static inline int pthread_mutex_init(pthread_mutex_t *m, const pthread_mutexattr_t *att)
DECL|pthread_mutex_lock|function|static inline int pthread_mutex_lock(pthread_mutex_t *m)
DECL|pthread_mutex_timedlock|function|static inline int pthread_mutex_timedlock(pthread_mutex_t *m, const struct timespec *to)
DECL|pthread_mutex_t|typedef|} pthread_mutex_t;
DECL|pthread_mutex_unlock|function|static inline int pthread_mutex_unlock(pthread_mutex_t *m)
DECL|pthread_mutexattr_destroy|function|static inline int pthread_mutexattr_destroy(pthread_mutexattr_t *m)
DECL|pthread_mutexattr_init|function|static inline int pthread_mutexattr_init(pthread_mutexattr_t *m)
DECL|pthread_mutexattr_t|typedef|} pthread_mutexattr_t;
DECL|pthread_mutexattr|struct|typedef struct pthread_mutexattr {
DECL|pthread_mutex|struct|typedef struct pthread_mutex {
DECL|sem|member|struct k_sem *sem;
DECL|timespec|struct|struct timespec {
DECL|tv_nsec|member|s32_t tv_nsec;
DECL|tv_sec|member|s32_t tv_sec;
DECL|unused|member|int unused;
DECL|unused|member|int unused;
DECL|unused|member|int unused;
DECL|wait_q|member|_wait_q_t wait_q;
DECL|wait_q|member|_wait_q_t wait_q;
