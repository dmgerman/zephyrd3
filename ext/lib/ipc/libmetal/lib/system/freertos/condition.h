DECL|METAL_CONDITION_INIT|macro|METAL_CONDITION_INIT
DECL|__METAL_FREERTOS_CONDITION__H__|macro|__METAL_FREERTOS_CONDITION__H__
DECL|metal_condition_broadcast|function|static inline int metal_condition_broadcast(struct metal_condition *cv)
DECL|metal_condition_init|function|static inline void metal_condition_init(struct metal_condition *cv)
DECL|metal_condition_signal|function|static inline int metal_condition_signal(struct metal_condition *cv)
DECL|metal_condition|struct|struct metal_condition {
DECL|m|member|metal_mutex_t *m; /**< mutex.
DECL|v|member|atomic_int v; /**< condition variable value. */
