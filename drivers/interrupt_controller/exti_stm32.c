DECL|AS_EXTI|macro|AS_EXTI
DECL|EXTI_LINES|macro|EXTI_LINES
DECL|__exti_cb|struct|struct __exti_cb {
DECL|__stm32_exti_connect_irqs|function|static void __stm32_exti_connect_irqs(struct device *dev)
DECL|__stm32_exti_isr_0|function|static inline void __stm32_exti_isr_0(void *arg)
DECL|__stm32_exti_isr_15_10|function|static inline void __stm32_exti_isr_15_10(void *arg)
DECL|__stm32_exti_isr_1|function|static inline void __stm32_exti_isr_1(void *arg)
DECL|__stm32_exti_isr_2|function|static inline void __stm32_exti_isr_2(void *arg)
DECL|__stm32_exti_isr_3|function|static inline void __stm32_exti_isr_3(void *arg)
DECL|__stm32_exti_isr_4|function|static inline void __stm32_exti_isr_4(void *arg)
DECL|__stm32_exti_isr_9_5|function|static inline void __stm32_exti_isr_9_5(void *arg)
DECL|__stm32_exti_isr|function|static void __stm32_exti_isr(int min, int max, void *arg)
DECL|cb|member|stm32_exti_callback_t cb;
DECL|cb|member|struct __exti_cb cb[EXTI_LINES];
DECL|data|member|void *data;
DECL|emr|member|uint32_t emr;
DECL|exti_data|variable|exti_data
DECL|ftsr|member|uint32_t ftsr;
DECL|imr|member|uint32_t imr;
DECL|pr|member|uint32_t pr;
DECL|rtsr|member|uint32_t rtsr;
DECL|stm32_exti_clear_pending|function|static inline void stm32_exti_clear_pending(int line)
DECL|stm32_exti_data|struct|struct stm32_exti_data {
DECL|stm32_exti_disable|function|void stm32_exti_disable(int line)
DECL|stm32_exti_enable|function|void stm32_exti_enable(int line)
DECL|stm32_exti_init|function|static int stm32_exti_init(struct device *dev)
DECL|stm32_exti_is_pending|function|static inline int stm32_exti_is_pending(int line)
DECL|stm32_exti_set_callback|function|void stm32_exti_set_callback(int line, stm32_exti_callback_t cb, void *arg)
DECL|stm32_exti_trigger|function|void stm32_exti_trigger(int line, int trigger)
DECL|stm32_exti_unset_callback|function|void stm32_exti_unset_callback(int line)
DECL|stm32_exti|struct|struct stm32_exti {
DECL|swier|member|uint32_t swier;
