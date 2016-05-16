DECL|NANO_WORK_STATE_IDLE|enumerator|NANO_WORK_STATE_IDLE, /* Work item idle state */
DECL|_misc_nano_work__h_|macro|_misc_nano_work__h_
DECL|_reserved|member|void *_reserved; /* Used by nano_fifo implementation. */
DECL|fifo|member|struct nano_fifo fifo;
DECL|flags|member|atomic_t flags[1];
DECL|handler|member|work_handler_t handler;
DECL|nano_delayed_work_submit|function|static inline int nano_delayed_work_submit(struct nano_delayed_work *work, int ticks)
DECL|nano_delayed_work|struct|struct nano_delayed_work {
DECL|nano_work_init|function|static inline void nano_work_init(struct nano_work *work, work_handler_t handler)
DECL|nano_work_submit_to_queue|function|static inline void nano_work_submit_to_queue(struct nano_workqueue *wq, struct nano_work *work)
DECL|nano_work_submit|function|static inline void nano_work_submit(struct nano_work *work)
DECL|nano_workqueue|struct|struct nano_workqueue {
DECL|nano_work|struct|struct nano_work {
DECL|timeout|member|struct _nano_timeout timeout;
DECL|work_handler_t|typedef|typedef void (*work_handler_t)(struct nano_work *);
DECL|work|member|struct nano_work work;
DECL|wq|member|struct nano_workqueue *wq;
