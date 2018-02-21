DECL|ACTIVE|macro|ACTIVE
DECL|NOT_ACTIVE|macro|NOT_ACTIVE
DECL|interval|member|struct timespec interval; /* Reload value */
DECL|reload|member|u32_t reload; /* Reload value in ms */
DECL|sigev_notify_function|member|void (*sigev_notify_function)(sigval val);
DECL|status|member|u32_t status;
DECL|timer_create|function|int timer_create(clockid_t clockid, struct sigevent *evp, timer_t *timerid)
DECL|timer_delete|function|int timer_delete(timer_t timerid)
DECL|timer_gettime|function|int timer_gettime(timer_t timerid, struct itimerspec *its)
DECL|timer_obj|struct|struct timer_obj {
DECL|timer_settime|function|int timer_settime(timer_t timerid, int flags, const struct itimerspec *value, struct itimerspec *ovalue)
DECL|val|member|sigval val;
DECL|zephyr_timer_wrapper|function|static void zephyr_timer_wrapper(struct k_timer *ztimer)
DECL|ztimer|member|struct k_timer ztimer;
