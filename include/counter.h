DECL|__COUNTER_H__|macro|__COUNTER_H__
DECL|counter_api_read|typedef|typedef uint32_t (*counter_api_read)(void);
DECL|counter_api_set_alarm|typedef|typedef int (*counter_api_set_alarm)(struct device *dev,
DECL|counter_api_start|typedef|typedef int (*counter_api_start)(struct device *dev);
DECL|counter_api_stop|typedef|typedef int (*counter_api_stop)(struct device *dev);
DECL|counter_callback_t|typedef|typedef void (*counter_callback_t)(struct device *dev, void *user_data);
DECL|counter_driver_api|struct|struct counter_driver_api {
DECL|counter_read|function|static inline uint32_t counter_read(struct device *dev)
DECL|counter_set_alarm|function|static inline int counter_set_alarm(struct device *dev, counter_callback_t callback, uint32_t count, void *user_data)
DECL|counter_start|function|static inline int counter_start(struct device *dev)
DECL|counter_stop|function|static inline int counter_stop(struct device *dev)
DECL|read|member|counter_api_read read;
DECL|set_alarm|member|counter_api_set_alarm set_alarm;
DECL|start|member|counter_api_start start;
DECL|stop|member|counter_api_stop stop;
