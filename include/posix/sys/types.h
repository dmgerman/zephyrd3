DECL|__POSIX_TYPES_H__|macro|__POSIX_TYPES_H__
DECL|clockid_t|typedef|typedef u32_t clockid_t;
DECL|count|member|int count;
DECL|delayedstart|member|u32_t delayedstart;
DECL|detachstate|member|s32_t detachstate;
DECL|flags|member|u32_t flags;
DECL|initialized|member|u32_t initialized;
DECL|lock_count|member|u16_t lock_count;
DECL|max|member|int max;
DECL|owner|member|pthread_t owner;
DECL|priority|member|int priority;
DECL|pthread_attr_t|struct|typedef struct pthread_attr_t {
DECL|pthread_attr_t|typedef|} pthread_attr_t;
DECL|pthread_barrier_t|typedef|} pthread_barrier_t;
DECL|pthread_barrierattr_t|typedef|} pthread_barrierattr_t;
DECL|pthread_barrierattr|struct|typedef struct pthread_barrierattr {
DECL|pthread_barrier|struct|typedef struct pthread_barrier {
DECL|pthread_cond_t|typedef|} pthread_cond_t;
DECL|pthread_condattr_t|typedef|} pthread_condattr_t;
DECL|pthread_condattr|struct|typedef struct pthread_condattr {
DECL|pthread_cond|struct|typedef struct pthread_cond {
DECL|pthread_mutex_t|typedef|} pthread_mutex_t;
DECL|pthread_mutexattr_t|typedef|} pthread_mutexattr_t;
DECL|pthread_mutexattr|struct|typedef struct pthread_mutexattr {
DECL|pthread_mutex|struct|typedef struct pthread_mutex {
DECL|pthread_rwlock_obj|struct|typedef struct pthread_rwlock_obj {
DECL|pthread_rwlock_t|typedef|} pthread_rwlock_t;
DECL|pthread_rwlockattr_t|typedef|typedef u32_t pthread_rwlockattr_t;
DECL|pthread_t|typedef|typedef void *pthread_t;
DECL|rd_sem|member|struct k_sem rd_sem;
DECL|reader_active|member|struct k_sem reader_active;/* blocks WR till reader has acquired lock */
DECL|schedpolicy|member|u32_t schedpolicy;
DECL|sem_t|typedef|typedef struct k_sem sem_t;
DECL|stacksize|member|size_t stacksize;
DECL|stack|member|void *stack;
DECL|status|member|s32_t status;
DECL|timer_t|typedef|typedef unsigned long timer_t;
DECL|type|member|int type;
DECL|type|member|int type;
DECL|useconds_t|typedef|typedef unsigned long useconds_t;
DECL|wait_q|member|_wait_q_t wait_q;
DECL|wait_q|member|_wait_q_t wait_q;
DECL|wait_q|member|_wait_q_t wait_q;
DECL|wr_owner|member|k_tid_t wr_owner;
DECL|wr_sem|member|struct k_sem wr_sem;
