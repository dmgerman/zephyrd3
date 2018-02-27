DECL|CLOCK_MONOTONIC|macro|CLOCK_MONOTONIC
DECL|CLOCK_REALTIME|macro|CLOCK_REALTIME
DECL|NSEC_PER_MSEC|macro|NSEC_PER_MSEC
DECL|TIMER_ABSTIME|macro|TIMER_ABSTIME
DECL|__POSIX_TIME_H__|macro|__POSIX_TIME_H__
DECL|_ts_to_ms|function|static inline s32_t _ts_to_ms(const struct timespec *to)
DECL|clock_settime|function|static inline int clock_settime(clockid_t clock_id, const struct timespec *ts)
DECL|it_interval|member|struct timespec it_interval; /* Timer interval */
DECL|it_value|member|struct timespec it_value; /* Timer expiration */
DECL|itimerspec|struct|struct itimerspec {
DECL|timespec|struct|struct timespec {
DECL|tv_nsec|member|signed int tv_nsec;
DECL|tv_sec|member|signed int tv_sec;