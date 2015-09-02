DECL|__INCipih|macro|__INCipih
DECL|ipi_callback_t|typedef|typedef void (*ipi_callback_t)(void *context, uint32_t id, volatile void *data);
DECL|ipi_driver_api|struct|struct ipi_driver_api {
DECL|ipi_max_data_size_get_t|typedef|typedef int (*ipi_max_data_size_get_t)(struct device *ipidev);
DECL|ipi_max_data_size_get|function|static inline int ipi_max_data_size_get(struct device *ipidev)
DECL|ipi_max_id_val_get_t|typedef|typedef uint32_t (*ipi_max_id_val_get_t)(struct device *ipidev);
DECL|ipi_max_id_val_get|function|static inline uint32_t ipi_max_id_val_get(struct device *ipidev)
DECL|ipi_register_callback_t|typedef|typedef void (*ipi_register_callback_t)(struct device *port, ipi_callback_t cb,
DECL|ipi_register_callback|function|static inline void ipi_register_callback(struct device *ipidev, ipi_callback_t cb, void *context)
DECL|ipi_send_t|typedef|typedef int (*ipi_send_t)(struct device *ipidev, int wait, uint32_t id,
DECL|ipi_send|function|static inline int ipi_send(struct device *ipidev, int wait, uint32_t id, void *data, int size)
DECL|ipi_set_enabled_t|typedef|typedef int (*ipi_set_enabled_t)(struct device *ipidev, int enable);
DECL|ipi_set_enabled|function|static inline int ipi_set_enabled(struct device *ipidev, int enable)
DECL|max_data_size_get|member|ipi_max_data_size_get_t max_data_size_get;
DECL|max_id_val_get|member|ipi_max_id_val_get_t max_id_val_get;
DECL|register_callback|member|ipi_register_callback_t register_callback;
DECL|send|member|ipi_send_t send;
DECL|set_enabled|member|ipi_set_enabled_t set_enabled;
