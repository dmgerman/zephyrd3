DECL|LOWEST_POSIX_THREAD_PRIORITY|macro|LOWEST_POSIX_THREAD_PRIORITY
DECL|PTHREAD_CANCELED|macro|PTHREAD_CANCELED
DECL|PTHREAD_INIT_FLAGS|macro|PTHREAD_INIT_FLAGS
DECL|init_pthread_attrs|variable|init_pthread_attrs
DECL|is_posix_prio_valid|function|static bool is_posix_prio_valid(u32_t priority, int policy)
DECL|posix_thread_pool|variable|posix_thread_pool
DECL|posix_to_zephyr_priority|function|static s32_t posix_to_zephyr_priority(u32_t priority, int policy)
DECL|pthread_attr_destroy|function|int pthread_attr_destroy(pthread_attr_t *attr)
DECL|pthread_attr_getdetachstate|function|int pthread_attr_getdetachstate(const pthread_attr_t *attr, int *detachstate)
DECL|pthread_attr_getschedparam|function|int pthread_attr_getschedparam(const pthread_attr_t *attr, struct sched_param *schedparam)
DECL|pthread_attr_getschedpolicy|function|int pthread_attr_getschedpolicy(const pthread_attr_t *attr, int *policy)
DECL|pthread_attr_getstacksize|function|int pthread_attr_getstacksize(const pthread_attr_t *attr, size_t *stacksize)
DECL|pthread_attr_getstack|function|int pthread_attr_getstack(const pthread_attr_t *attr, void **stackaddr, size_t *stacksize)
DECL|pthread_attr_init|function|int pthread_attr_init(pthread_attr_t *attr)
DECL|pthread_attr_setdetachstate|function|int pthread_attr_setdetachstate(pthread_attr_t *attr, int detachstate)
DECL|pthread_attr_setschedparam|function|int pthread_attr_setschedparam(pthread_attr_t *attr, const struct sched_param *schedparam)
DECL|pthread_attr_setschedpolicy|function|int pthread_attr_setschedpolicy(pthread_attr_t *attr, int policy)
DECL|pthread_attr_setstack|function|int pthread_attr_setstack(pthread_attr_t *attr, void *stackaddr, size_t stacksize)
DECL|pthread_cancel|function|int pthread_cancel(pthread_t pthread)
DECL|pthread_create|function|int pthread_create(pthread_t *newthread, const pthread_attr_t *attr, void *(*threadroutine)(void *), void *arg)
DECL|pthread_detach|function|int pthread_detach(pthread_t thread)
DECL|pthread_exit|function|void pthread_exit(void *retval)
DECL|pthread_getschedparam|function|int pthread_getschedparam(pthread_t pthread, int *policy, struct sched_param *param)
DECL|pthread_join|function|int pthread_join(pthread_t thread, void **status)
DECL|pthread_key_lock|variable|pthread_key_lock
DECL|pthread_num|variable|pthread_num
DECL|pthread_once|function|int pthread_once(pthread_once_t *once, void (*init_func)(void))
DECL|pthread_setcancelstate|function|int pthread_setcancelstate(int state, int *oldstate)
DECL|pthread_setschedparam|function|int pthread_setschedparam(pthread_t pthread, int policy, const struct sched_param *param)
DECL|zephyr_thread_wrapper|function|static void zephyr_thread_wrapper(void *arg1, void *arg2, void *arg3)
DECL|zephyr_to_posix_priority|function|static u32_t zephyr_to_posix_priority(s32_t z_prio, int *policy)
