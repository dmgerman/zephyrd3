DECL|CONCURRENT_READER_LIMIT|macro|CONCURRENT_READER_LIMIT
DECL|INITIALIZED|macro|INITIALIZED
DECL|NOT_INITIALIZED|macro|NOT_INITIALIZED
DECL|calculate_timeout|function|static s64_t calculate_timeout(const struct timespec *abstime)
DECL|pthread_rwlock_destroy|function|int pthread_rwlock_destroy(pthread_rwlock_t *rwlock)
DECL|pthread_rwlock_init|function|int pthread_rwlock_init(pthread_rwlock_t *rwlock,const pthread_rwlockattr_t *attr)
DECL|pthread_rwlock_rdlock|function|int pthread_rwlock_rdlock(pthread_rwlock_t *rwlock)
DECL|pthread_rwlock_timedrdlock|function|int pthread_rwlock_timedrdlock(pthread_rwlock_t *rwlock, const struct timespec *abstime)
DECL|pthread_rwlock_timedwrlock|function|int pthread_rwlock_timedwrlock(pthread_rwlock_t *rwlock, const struct timespec *abstime)
DECL|pthread_rwlock_tryrdlock|function|int pthread_rwlock_tryrdlock(pthread_rwlock_t *rwlock)
DECL|pthread_rwlock_trywrlock|function|int pthread_rwlock_trywrlock(pthread_rwlock_t *rwlock)
DECL|pthread_rwlock_unlock|function|int pthread_rwlock_unlock(pthread_rwlock_t *rwlock)
DECL|pthread_rwlock_wrlock|function|int pthread_rwlock_wrlock(pthread_rwlock_t *rwlock)
DECL|read_lock_acquire|function|static u32_t read_lock_acquire(pthread_rwlock_t *rwlock, s32_t timeout)
DECL|write_lock_acquire|function|static u32_t write_lock_acquire(pthread_rwlock_t *rwlock, s32_t timeout)
