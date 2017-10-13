DECL|__ENTROPY_H__|macro|__ENTROPY_H__
DECL|_impl_entropy_get_entropy|function|static inline int _impl_entropy_get_entropy(struct device *dev, u8_t *buffer, u16_t length)
DECL|entropy_driver_api|struct|struct entropy_driver_api {
DECL|entropy_get_entropy_t|typedef|typedef int (*entropy_get_entropy_t)(struct device *dev,
DECL|get_entropy|member|entropy_get_entropy_t get_entropy;
