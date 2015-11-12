DECL|__INCipmh|macro|__INCipmh
DECL|ipm_callback_t|typedef|typedef void (*ipm_callback_t)(void *context, uint32_t id, volatile void *data);
DECL|ipm_driver_api|struct|struct ipm_driver_api {
DECL|ipm_max_data_size_get_t|typedef|typedef int (*ipm_max_data_size_get_t)(struct device *ipmdev);
DECL|ipm_max_data_size_get|function|static inline int ipm_max_data_size_get(struct device *ipmdev)
DECL|ipm_max_id_val_get_t|typedef|typedef uint32_t (*ipm_max_id_val_get_t)(struct device *ipmdev);
DECL|ipm_max_id_val_get|function|static inline uint32_t ipm_max_id_val_get(struct device *ipmdev)
DECL|ipm_register_callback_t|typedef|typedef void (*ipm_register_callback_t)(struct device *port, ipm_callback_t cb,
DECL|ipm_register_callback|function|static inline void ipm_register_callback(struct device *ipmdev, ipm_callback_t cb, void *context)
DECL|ipm_send_t|typedef|typedef int (*ipm_send_t)(struct device *ipmdev, int wait, uint32_t id,
DECL|ipm_send|function|static inline int ipm_send(struct device *ipmdev, int wait, uint32_t id, void *data, int size)
DECL|ipm_set_enabled_t|typedef|typedef int (*ipm_set_enabled_t)(struct device *ipmdev, int enable);
DECL|ipm_set_enabled|function|static inline int ipm_set_enabled(struct device *ipmdev, int enable)
DECL|max_data_size_get|member|ipm_max_data_size_get_t max_data_size_get;
DECL|max_id_val_get|member|ipm_max_id_val_get_t max_id_val_get;
DECL|register_callback|member|ipm_register_callback_t register_callback;
DECL|send|member|ipm_send_t send;
DECL|set_enabled|member|ipm_set_enabled_t set_enabled;
