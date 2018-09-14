DECL|ZEPHYR_INCLUDE_IRQ_NEXTLEVEL_H_|macro|ZEPHYR_INCLUDE_IRQ_NEXTLEVEL_H_
DECL|intr_disable|member|irq_next_level_func_t intr_disable;
DECL|intr_enable|member|irq_next_level_func_t intr_enable;
DECL|intr_get_state|member|irq_next_level_get_state_t intr_get_state;
DECL|irq_disable_next_level|function|static inline void irq_disable_next_level(struct device *dev, u32_t irq)
DECL|irq_enable_next_level|function|static inline void irq_enable_next_level(struct device *dev, u32_t irq)
DECL|irq_is_enabled_next_level|function|static inline unsigned int irq_is_enabled_next_level(struct device *dev)
DECL|irq_next_level_api|struct|struct irq_next_level_api {
DECL|irq_next_level_func_t|typedef|typedef void (*irq_next_level_func_t)(struct device *dev, unsigned int irq);
DECL|irq_next_level_get_state_t|typedef|typedef unsigned int (*irq_next_level_get_state_t)(struct device *dev);
