DECL|SIGEV_NONE|macro|SIGEV_NONE
DECL|SIGEV_SIGNAL|macro|SIGEV_SIGNAL
DECL|SIGEV_THREAD|macro|SIGEV_THREAD
DECL|ZEPHYR_INCLUDE_POSIX_SIGNAL_H_|macro|ZEPHYR_INCLUDE_POSIX_SIGNAL_H_
DECL|sigev_notify_attributes|member|pthread_attr_t *sigev_notify_attributes;
DECL|sigev_notify_function|member|void (*sigev_notify_function)(sigval val);
DECL|sigev_notify|member|int sigev_notify;
DECL|sigev_signo|member|int sigev_signo;
DECL|sigev_value|member|sigval sigev_value;
DECL|sigevent|struct|typedef struct sigevent {
DECL|sigevent|typedef|} sigevent;
DECL|sigval|typedef|} sigval;
DECL|sigval|union|typedef union sigval {
DECL|sival_int|member|int sival_int;
DECL|sival_ptr|member|void *sival_ptr;
