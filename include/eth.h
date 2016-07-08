DECL|__INCLUDE_ETH_H__|macro|__INCLUDE_ETH_H__
DECL|eth_driver_api|struct|struct eth_driver_api {
DECL|eth_register_callback|function|static inline void eth_register_callback(struct device *dev,void (*cb)(uint8_t *buffer, uint16_t len))
DECL|eth_send|function|static inline int eth_send(struct device *dev, uint8_t *buffer, uint16_t len)
DECL|register_callback|member|void (*register_callback)(struct device *dev,
DECL|send|member|int (*send)(struct device *dev, uint8_t *buffer, uint16_t len);
