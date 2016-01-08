DECL|_SHIRQ_H_|macro|_SHIRQ_H_
DECL|client_count|member|uint32_t client_count;
DECL|client|member|struct shared_irq_client client[CONFIG_SHARED_IRQ_NUM_CLIENTS];
DECL|config|member|shared_irq_config_irq_t config;
DECL|disable|member|shared_irq_disable_t disable;
DECL|enabled|member|uint32_t enabled;
DECL|enable|member|shared_irq_enable_t enable;
DECL|irq_num|member|uint32_t irq_num;
DECL|isr_dev|member|struct device *isr_dev;
DECL|isr_func|member|isr_t isr_func;
DECL|isr_register|member|shared_irq_register_t isr_register;
DECL|isr_t|typedef|typedef int (*isr_t)(struct device *dev);
DECL|shared_irq_client|struct|struct shared_irq_client {
DECL|shared_irq_config_irq_t|typedef|typedef void (*shared_irq_config_irq_t)(void);
DECL|shared_irq_config|struct|struct shared_irq_config {
DECL|shared_irq_disable_t|typedef|typedef int (*shared_irq_disable_t)(struct device *dev, struct device *isr_dev);
DECL|shared_irq_disable|function|static inline int shared_irq_disable(struct device *dev, struct device *isr_dev)
DECL|shared_irq_driver_api|struct|struct shared_irq_driver_api {
DECL|shared_irq_enable_t|typedef|typedef int (*shared_irq_enable_t)(struct device *dev, struct device *isr_dev);
DECL|shared_irq_enable|function|static inline int shared_irq_enable(struct device *dev, struct device *isr_dev)
DECL|shared_irq_isr_register|function|static inline int shared_irq_isr_register(struct device *dev, isr_t isr_func, struct device *isr_dev)
DECL|shared_irq_register_t|typedef|typedef int (*shared_irq_register_t)(struct device *dev,
DECL|shared_irq_runtime|struct|struct shared_irq_runtime {
