DECL|ADC_CONTEXT_INIT_LOCK|macro|ADC_CONTEXT_INIT_LOCK
DECL|ADC_CONTEXT_INIT_SYNC|macro|ADC_CONTEXT_INIT_SYNC
DECL|ADC_CONTEXT_INIT_TIMER|macro|ADC_CONTEXT_INIT_TIMER
DECL|ZEPHYR_DRIVERS_ADC_ADC_CONTEXT_H_|macro|ZEPHYR_DRIVERS_ADC_ADC_CONTEXT_H_
DECL|adc_context_complete|function|static inline void adc_context_complete(struct adc_context *ctx, int status)
DECL|adc_context_disable_timer|function|static inline void adc_context_disable_timer(struct adc_context *ctx)
DECL|adc_context_enable_timer|function|static inline void adc_context_enable_timer(struct adc_context *ctx)
DECL|adc_context_lock|function|static inline void adc_context_lock(struct adc_context *ctx, bool asynchronous, struct k_poll_signal *signal)
DECL|adc_context_on_sampling_done|function|static inline void adc_context_on_sampling_done(struct adc_context *ctx,struct device *dev)
DECL|adc_context_on_timer_expired|function|static void adc_context_on_timer_expired(struct k_timer *timer_id)
DECL|adc_context_release|function|static inline void adc_context_release(struct adc_context *ctx, int status)
DECL|adc_context_request_next_sampling|function|static inline void adc_context_request_next_sampling(struct adc_context *ctx)
DECL|adc_context_start_read|function|static inline void adc_context_start_read(struct adc_context *ctx, const struct adc_sequence *sequence)
DECL|adc_context_unlock_unconditionally|function|static inline void adc_context_unlock_unconditionally(struct adc_context *ctx)
DECL|adc_context_wait_for_completion|function|static inline int adc_context_wait_for_completion(struct adc_context *ctx)
DECL|adc_context|struct|struct adc_context {
DECL|asynchronous|member|bool asynchronous;
DECL|lock|member|struct k_sem lock;
DECL|sampling_index|member|u16_t sampling_index;
DECL|sampling_requested|member|atomic_t sampling_requested;
DECL|sequence|member|const struct adc_sequence *sequence;
DECL|signal|member|struct k_poll_signal *signal;
DECL|status|member|int status;
DECL|sync|member|struct k_sem sync;
DECL|timer|member|struct k_timer timer;
