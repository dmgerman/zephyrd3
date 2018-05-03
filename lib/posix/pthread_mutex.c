DECL|MUTEX_MAX_REC_LOCK|macro|MUTEX_MAX_REC_LOCK
DECL|acquire_mutex|function|static int acquire_mutex(pthread_mutex_t *m, int timeout)
DECL|def_attr|variable|def_attr
DECL|pthread_mutex_destroy|function|int pthread_mutex_destroy(pthread_mutex_t *m)
DECL|pthread_mutex_init|function|int pthread_mutex_init(pthread_mutex_t *m, const pthread_mutexattr_t *attr)
DECL|pthread_mutex_lock|function|int pthread_mutex_lock(pthread_mutex_t *m)
DECL|pthread_mutex_timedlock|function|int pthread_mutex_timedlock(pthread_mutex_t *m, const struct timespec *to)
DECL|pthread_mutex_trylock|function|int pthread_mutex_trylock(pthread_mutex_t *m)
DECL|pthread_mutex_unlock|function|int pthread_mutex_unlock(pthread_mutex_t *m)
DECL|pthread_mutexattr_getprotocol|function|int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *attr, int *protocol)
DECL|pthread_mutexattr_gettype|function|int pthread_mutexattr_gettype(const pthread_mutexattr_t *attr, int *type)
DECL|pthread_mutexattr_settype|function|int pthread_mutexattr_settype(pthread_mutexattr_t *attr, int type)
