DECL|ZEPHYR_INCLUDE_COUNTER_H_|macro|ZEPHYR_INCLUDE_COUNTER_H_
DECL|_impl_counter_get_pending_int|function|static inline int _impl_counter_get_pending_int(struct device *dev)
DECL|_impl_counter_read|function|static inline u32_t _impl_counter_read(struct device *dev)
DECL|_impl_counter_start|function|static inline int _impl_counter_start(struct device *dev)
DECL|_impl_counter_stop|function|static inline int _impl_counter_stop(struct device *dev)
DECL|counter_api_get_pending_int|typedef|typedef u32_t (*counter_api_get_pending_int)(struct device *dev);
DECL|counter_api_read|typedef|typedef u32_t (*counter_api_read)(struct device *dev);
DECL|counter_api_set_alarm|typedef|typedef int (*counter_api_set_alarm)(struct device *dev,
DECL|counter_api_start|typedef|typedef int (*counter_api_start)(struct device *dev);
DECL|counter_api_stop|typedef|typedef int (*counter_api_stop)(struct device *dev);
DECL|counter_callback_t|typedef|typedef void (*counter_callback_t)(struct device *dev, void *user_data);
DECL|counter_driver_api|struct|struct counter_driver_api {
DECL|counter_set_alarm|function|static inline int counter_set_alarm(struct device *dev, counter_callback_t callback, u32_t count, void *user_data)
DECL|get_pending_int|member|counter_api_get_pending_int get_pending_int;
DECL|read|member|counter_api_read read;
DECL|set_alarm|member|counter_api_set_alarm set_alarm;
DECL|start|member|counter_api_start start;
DECL|stop|member|counter_api_stop stop;
