DECL|ENTROPY_BUSYWAIT|macro|ENTROPY_BUSYWAIT
DECL|ZEPHYR_INCLUDE_ENTROPY_H_|macro|ZEPHYR_INCLUDE_ENTROPY_H_
DECL|_impl_entropy_get_entropy|function|static inline int _impl_entropy_get_entropy(struct device *dev, u8_t *buffer, u16_t length)
DECL|entropy_driver_api|struct|struct entropy_driver_api {
DECL|entropy_get_entropy_isr_t|typedef|typedef int (*entropy_get_entropy_isr_t)(struct device *dev,
DECL|entropy_get_entropy_isr|function|static inline int entropy_get_entropy_isr(struct device *dev, u8_t *buffer, u16_t length, u32_t flags)
DECL|entropy_get_entropy_t|typedef|typedef int (*entropy_get_entropy_t)(struct device *dev,
DECL|get_entropy_isr|member|entropy_get_entropy_isr_t get_entropy_isr;
DECL|get_entropy|member|entropy_get_entropy_t get_entropy;
